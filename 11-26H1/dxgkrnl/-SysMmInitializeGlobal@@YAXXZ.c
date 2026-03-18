/*
 * XREFs of ?SysMmInitializeGlobal@@YAXXZ @ 0x140287F2C
 * Callers:
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     SmmQueryRegistry @ 0x14041D188 (SmmQueryRegistry.c)
 *     SmmInitEtw @ 0x14041D744 (SmmInitEtw.c)
 */

void SysMmInitializeGlobal(void)
{
  int IommuInterface; // edi

  SmmInitEtw();
  SmmQueryRegistry();
  if ( g_ForceNoDmaInterface )
  {
    IommuInterface = -1073741823;
    memset(&SmmGlobal, 0, 0xE8uLL);
  }
  else
  {
    IommuInterface = IoGetIommuInterfaceEx(3LL, 0LL, &SmmGlobal);
    if ( IommuInterface >= 0 )
      goto LABEL_5;
  }
  WdLogSingleEntry2(3LL, 3LL, IommuInterface);
  WdLogGlobalForLineNumber = 81;
  dword_1401695D8 = 0;
LABEL_5:
  if ( dword_1401695D8 )
  {
    if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))qword_1401695E0)(
                1LL,
                0LL,
                0LL,
                0LL,
                &qword_1401696B8) < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 129;
      dword_1401695D8 = 0;
    }
  }
}
