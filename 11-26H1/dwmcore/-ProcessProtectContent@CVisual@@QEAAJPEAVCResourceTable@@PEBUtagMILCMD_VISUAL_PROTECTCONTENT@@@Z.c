/*
 * XREFs of ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x18021C03C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessProtectContent(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_PROTECTCONTENT *a3)
{
  char v3; // r9

  v3 = *((_BYTE *)a3 + 8);
  if ( ((*((unsigned __int8 *)this + 102) >> 6) & 1) != (v3 != 0) )
  {
    *((_BYTE *)this + 102) = *((_BYTE *)this + 102) & 0xBF | (v3 != 0 ? 0x40 : 0);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
