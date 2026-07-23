/*
 * XREFs of HeadlessDispatch @ 0x1406CF8A0
 * Callers:
 *     BgkDisplayStringEx @ 0x1405C7D74 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1405C8430 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1405C87B0 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1405C8810 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1405E9EC0 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1405EA964 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1405EAEEC (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x14082C2F8 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
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
