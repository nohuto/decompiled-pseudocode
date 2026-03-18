/*
 * XREFs of Crashdump_UsbDevice_ReConfigureOnControllerReset @ 0x1400550F4
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1400510C0 (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     Crashdump_UsbDevice_Configure @ 0x140054524 (Crashdump_UsbDevice_Configure.c)
 *     Crashdump_UsbDevice_SendEnableSlotCommand @ 0x1400557D0 (Crashdump_UsbDevice_SendEnableSlotCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ReConfigureOnControllerReset(__int64 a1, int a2)
{
  int v4; // edi
  __int64 *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // rax
  int v10; // r8d
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ReConfigureOnControllerReset: begin\n");
  v4 = Crashdump_UsbDevice_SendEnableSlotCommand(a1);
  if ( v4 >= 0 )
  {
    v5 = (__int64 *)(a1 + 120);
    v6 = 31LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 424LL) + 8LL * *(unsigned __int8 *)(a1 + 56)) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 40);
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        v8 = *(_DWORD *)(*(_QWORD *)a1 + 584LL);
        if ( v8 == 1 || v8 == 5 )
          PoSetHiberRange(0LL, 0x10000u, (PVOID)v7, 0xC8uLL, 0x43434858u);
        v9 = *(_QWORD *)(v7 + 8);
        v10 = *(_DWORD *)(v7 + 32);
        *(_QWORD *)(v7 + 168) = 1LL;
        *(_DWORD *)(v7 + 160) = 0;
        v11 = (*(_DWORD *)(*(_QWORD *)v9 + 104LL) & 4) == 0;
        v12 = (unsigned int)(v10 - 1) + 1LL;
        if ( v11 )
          v13 = 32 * v12;
        else
          v13 = v12 << 6;
        *(_QWORD *)(v7 + 40) = *(_QWORD *)(a1 + 64) + v13;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    v4 = Crashdump_UsbDevice_Configure(a1, a2);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ReConfigureOnControllerReset: end 0x%X\n", v4);
  return (unsigned int)v4;
}
