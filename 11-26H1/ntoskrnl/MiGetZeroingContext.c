/*
 * XREFs of MiGetZeroingContext @ 0x140457050
 * Callers:
 *     MiInitializeBackgroundZeroingContext @ 0x140456E64 (MiInitializeBackgroundZeroingContext.c)
 *     MiTryZeroMemory @ 0x140456F34 (MiTryZeroMemory.c)
 *     MiMapBackgroundPageToZero @ 0x1405217B4 (MiMapBackgroundPageToZero.c)
 *     MiMirrorDiscardTreePageContents @ 0x140527C90 (MiMirrorDiscardTreePageContents.c)
 *     MiFailInProgressZeroing @ 0x140713090 (MiFailInProgressZeroing.c)
 *     MiGetZeroExceptionInfo @ 0x14071323C (MiGetZeroExceptionInfo.c)
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
