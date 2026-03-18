/*
 * XREFs of MiGetZeroingContext @ 0x14045D650
 * Callers:
 *     MiInitializeBackgroundZeroingContext @ 0x14045D464 (MiInitializeBackgroundZeroingContext.c)
 *     MiTryZeroMemory @ 0x14045D534 (MiTryZeroMemory.c)
 *     MiMapBackgroundPageToZero @ 0x14051F110 (MiMapBackgroundPageToZero.c)
 *     MiMirrorDiscardTreePageContents @ 0x140525620 (MiMirrorDiscardTreePageContents.c)
 *     MiFailInProgressZeroing @ 0x14070E390 (MiFailInProgressZeroing.c)
 *     MiGetZeroExceptionInfo @ 0x14070E53C (MiGetZeroExceptionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetZeroingContext(__int64 a1)
{
  __int64 v2; // rax

  if ( !*(_DWORD *)(a1 + 64) && !*(_BYTE *)(a1 + 70) )
  {
    v2 = a1;
    if ( !*(_BYTE *)(a1 + 68) )
      v2 = *(_QWORD *)(a1 + 328);
    if ( v2 )
      return v2;
  }
  return a1;
}
