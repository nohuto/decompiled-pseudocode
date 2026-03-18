/*
 * XREFs of ACPIEcLogError @ 0x140055894
 * Callers:
 *     ACPIEcServiceIoLoop @ 0x14001F500 (ACPIEcServiceIoLoop.c)
 *     ACPIEcWatchdogDpc @ 0x14004DD70 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     memset @ 0x140072740 (memset.c)
 */

void __fastcall ACPIEcLogError(__int64 a1, int a2)
{
  _WORD *ErrorLogEntry; // rax
  _WORD *v5; // rbx
  char *v6; // r8
  unsigned int v7; // edx
  unsigned __int8 v8; // r9
  __int64 v9; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(AcpiDriverObject, 0xF0u);
  v5 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset(ErrorLogEntry, 0, 0xF0uLL);
    v5[1] = 192;
    v6 = (char *)(v5 + 22);
    *((_DWORD *)v5 + 3) = a2;
    v7 = 76;
    *((_DWORD *)v5 + 10) = *(_DWORD *)(a1 + 520);
    v8 = *(_BYTE *)(a1 + 513);
    do
    {
      v9 = v8;
      v8 = (v8 - 1) & 0x1F;
      *(_OWORD *)v6 = *(_OWORD *)(a1 + 24 * v9 + 656);
      *((_QWORD *)v6 + 2) = *(_QWORD *)(a1 + 24 * v9 + 672);
      if ( v8 == *(_BYTE *)(a1 + 513) )
        break;
      v6 += 24;
      v7 += 24;
    }
    while ( v7 <= 0xF0 );
    IoWriteErrorLogEntry(v5);
  }
}
