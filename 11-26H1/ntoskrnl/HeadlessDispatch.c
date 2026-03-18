/*
 * XREFs of HeadlessDispatch @ 0x1406CB870
 * Callers:
 *     BgkDisplayStringEx @ 0x1405C5504 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1405C5BC0 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1405C5F40 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1405C5FA0 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1405E7550 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1405E7FF4 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1405E857C (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x1408260B8 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HdlspDispatch @ 0x140C4C320 (HdlspDispatch.c)
 */

__int64 __fastcall HeadlessDispatch(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( HeadlessGlobals && HeadlessGlobals[1] )
    return HdlspDispatch(a1);
  if ( (_DWORD)a1 == 1 || (_DWORD)a1 == 21 )
    return 3221225473LL;
  if ( (unsigned int)a1 > 0x10 )
    return 0LL;
  v6 = 79876;
  if ( !_bittest(&v6, a1) )
    return 0LL;
  if ( a4 && a5 )
  {
    memset_0(a4, 0, *a5);
    return 0LL;
  }
  return 3221225485LL;
}
