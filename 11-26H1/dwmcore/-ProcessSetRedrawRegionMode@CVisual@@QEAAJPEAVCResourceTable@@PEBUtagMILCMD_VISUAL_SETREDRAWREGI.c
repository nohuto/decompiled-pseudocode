/*
 * XREFs of ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x18021BD60
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRedrawRegionMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETREDRAWREGIONMODE *a3)
{
  unsigned __int8 v3; // dl
  char v5; // r10
  unsigned __int8 v6; // dl
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // dl
  __int64 v11; // rcx

  v3 = *((_BYTE *)this + 100);
  v5 = v3 >> 7;
  if ( *((_BYTE *)a3 + 8) )
  {
    v6 = v3 | 0x80;
    *((_BYTE *)this + 100) = v6;
    v7 = *((_BYTE *)this + 101);
    v8 = v7 | 1;
    v9 = v7 & 0xFE;
    if ( !*((_BYTE *)a3 + 9) )
      v8 = v9;
    *((_BYTE *)this + 101) = v8;
  }
  else
  {
    v6 = v3 & 0x7F;
    *((_BYTE *)this + 100) = v6;
  }
  v10 = v6 >> 7;
  if ( v5 != v10 )
  {
    v11 = *((_QWORD *)this + 3);
    if ( v10 )
      ++*(_DWORD *)(v11 + 6368);
    else
      --*(_DWORD *)(v11 + 6368);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
