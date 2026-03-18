/*
 * XREFs of ?ProcessSetStrokeMiterLimit@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT@@@Z @ 0x1801D0B0C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeMiterLimit(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT *a3)
{
  return ((__int64 (__fastcall *)(CSpriteVectorShape *, void *, char *))off_1803DC338)(
           this,
           &CSpriteVectorShape::sc_StrokeMiterLimit,
           (char *)a3 + 8);
}
