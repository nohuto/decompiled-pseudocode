/*
 * XREFs of CcComputeNextScanTime @ 0x1404CF8AC
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 * Callees:
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140385398 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 */

char __fastcall CcComputeNextScanTime(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  char result; // al
  __int64 v7; // rcx
  _QWORD *v8; // r11
  _DWORD *v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx

  *a4 = 0LL;
  result = CcIsWriteBehindThreadpoolAtLowPriority(a1);
  if ( result )
  {
    v9 = (_DWORD *)(a2 + 708);
    v10 = 0x9896800uLL / KeMaximumIncrement;
    if ( !CcEnablePerVolumeLazyWriter )
      v9 = (_DWORD *)(v7 + 780);
    v11 = *a3;
    if ( *a3 != 0x7FFFFFFFFFFFFFFFLL && (__int64)(v11 + 0x9896800uLL / KeMaximumIncrement) > MEMORY[0xFFFFF78000000320] )
    {
      v12 = v11 - MEMORY[0xFFFFF78000000320];
      *v9 = 0;
      *v8 = v10 + v12;
    }
    result = BYTE4(EmpParseLock.Spare35[0]);
    if ( *v9 >= HIDWORD(EmpParseLock.Spare35[0]) )
    {
      *v8 = 0x7FFFFFFFFFFFFFFFLL;
      *v9 = 0;
    }
  }
  return result;
}
