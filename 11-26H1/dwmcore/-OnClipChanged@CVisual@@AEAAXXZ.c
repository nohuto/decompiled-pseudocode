/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800264A4
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1800260F4 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x18008E040 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z @ 0x18018BD20 (-SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801D2AA4 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18014E22C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180190798 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 */

void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  __int64 v2; // r9
  __int64 v3; // rax
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _QWORD ***v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *i; // rax
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v10; // rdi
  CProjectedShadowCaster **j; // rbx

  *((_BYTE *)this + 458) = 1;
  v2 = *((_QWORD *)this + 28);
  if ( *(int *)v2 >= 0 )
    goto LABEL_6;
  v3 = *(unsigned int *)(v2 + 4);
  v4 = (_BYTE *)(v2 + 8);
  v5 = 0LL;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 1 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v4;
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        goto LABEL_9;
    }
    goto LABEL_4;
  }
LABEL_9:
  if ( (unsigned int)v5 < (unsigned int)v3 )
  {
LABEL_4:
    v6 = (_QWORD ***)(v2 + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v5);
    goto LABEL_5;
  }
  v6 = 0LL;
LABEL_5:
  v7 = *v6;
  if ( v7 )
  {
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
      *((_BYTE *)i - 214) = 1;
  }
LABEL_6:
  if ( (**((_DWORD **)this + 28) & 0x100000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v10 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( j = *(CProjectedShadowCaster ***)ProjectedShadowCasters; j != v10; ++j )
      CProjectedShadowCaster::InvalidateMaskContent(*j);
  }
}
