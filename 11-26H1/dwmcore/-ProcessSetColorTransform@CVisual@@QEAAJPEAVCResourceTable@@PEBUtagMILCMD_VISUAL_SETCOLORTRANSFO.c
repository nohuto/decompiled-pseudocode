/*
 * XREFs of ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18020E974
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

__int64 __fastcall CVisual::ProcessSetColorTransform(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCOLORTRANSFORM *a3)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  struct CSparseStorage::AllocatedStorage **v10; // rcx
  _OWORD Buf1[6]; // [rsp+20h] [rbp-78h] BYREF
  int v13; // [rsp+80h] [rbp-18h]

  v4 = *(_OWORD *)((char *)a3 + 24);
  Buf1[0] = *(_OWORD *)((char *)a3 + 8);
  v5 = *(_OWORD *)((char *)a3 + 40);
  Buf1[1] = v4;
  v6 = *(_OWORD *)((char *)a3 + 56);
  Buf1[2] = v5;
  v7 = *(_OWORD *)((char *)a3 + 72);
  Buf1[3] = v6;
  v8 = *(_OWORD *)((char *)a3 + 88);
  Buf1[4] = v7;
  Buf1[5] = v8;
  v13 = *((_DWORD *)a3 + 26);
  v9 = memcmp_0(Buf1, &`CVisual::SetColorTransform'::`2'::sc_defaultValue, 0x64uLL);
  v10 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v9 )
    CSparseStorage::SetData(v10, 17, 0x64u, Buf1);
  else
    *((_DWORD *)*v10 + 1) &= ~0x8000u;
  CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
