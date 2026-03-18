/*
 * XREFs of Crashdump_InitializeWithoutControllerReset @ 0x1400512DC
 * Callers:
 *     Crashdump_Initialize @ 0x140050BB0 (Crashdump_Initialize.c)
 * Callees:
 *     Crashdump_Register_PrepareForHibernate @ 0x140052228 (Crashdump_Register_PrepareForHibernate.c)
 *     Crashdump_EventRing_PrepareForHibernate @ 0x1400531A8 (Crashdump_EventRing_PrepareForHibernate.c)
 *     Crashdump_Command_PrepareForDump @ 0x140053318 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Command_TestCommandRingOperation @ 0x1400537AC (Crashdump_Command_TestCommandRingOperation.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x140054FF4 (Crashdump_UsbDevice_PrepareForHibernate.c)
 */

__int64 __fastcall Crashdump_InitializeWithoutControllerReset(char *Address)
{
  _QWORD *v1; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int i; // esi
  int v7; // eax
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (_QWORD *)*((_QWORD *)Address + 62);
  if ( (_QWORD *)*v1 != v1 )
  {
    do
    {
      PoSetHiberRange(0LL, 0x10000u, v1, 0x68uLL, 0x43434858u);
      PoSetHiberRange(0LL, 0x10000u, (PVOID)v1[2], *((unsigned int *)v1 + 10), 0x43434858u);
      v1 = (_QWORD *)*v1;
    }
    while ( *v1 != *((_QWORD *)Address + 62) );
  }
  PoSetHiberRange(0LL, 0x10000u, Address, 0x278uLL, 0x43434858u);
  PoSetHiberRange(
    0LL,
    0x10000u,
    *((PVOID *)Address + 71),
    (unsigned int)(376 * *((_DWORD *)Address + 134)),
    0x43434858u);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)Address, 0x90uLL, 0x43434858u);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 77), 0x500uLL, 0x43434858u);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 22), 0x68uLL, 0x43434858u);
  **(_DWORD **)(*(_QWORD *)Address + 32LL) &= ~0x400u;
  _InterlockedOr(v9, 0);
  KeStallExecutionProcessor(0x3E80u);
  Crashdump_Register_PrepareForHibernate(Address);
  Crashdump_EventRing_PrepareForHibernate(Address + 200, *(_QWORD *)(*((_QWORD *)Address + 77) + 128LL));
  v3 = Crashdump_Command_PrepareForDump(Address + 328);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = Crashdump_Command_TestCommandRingOperation(Address + 328);
    v4 = v5;
    if ( v5 >= 0 )
    {
      for ( i = 0; i < *((_DWORD *)Address + 134); ++i )
      {
        v7 = Crashdump_UsbDevice_PrepareForHibernate(*((_QWORD *)Address + 71) + 376LL * i);
        v4 = v7;
        if ( v7 < 0 )
        {
          DbgPrintEx(
            0x93u,
            1u,
            "XHCIDUMP: Crashdump_UsbDevice_PrepareForHibernate failed with error 0x%X\n",
            (unsigned int)v7);
          return v4;
        }
      }
    }
    else
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: Crashdump_Command_TestCommandRingOperation failed with error 0x%X\n",
        (unsigned int)v5);
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Command_PrepareForDump failed with error 0x%X\n", (unsigned int)v3);
  }
  return v4;
}
