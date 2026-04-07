/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001AA10
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001AA10 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092940 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ @ 0x1800E33B8 (-ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800E3600 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4550 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4720 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001AA10 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001D380 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  CBaseObject *v7; // rcx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 i; // rdi
  CWindowData *v12; // rcx

  if ( CWindowData::IsImmersiveWindow(this) )
  {
    v8 = *((_BYTE *)this + 676);
    if ( (v8 & 1) != 0 && a4 )
    {
      v9 = 0LL;
      for ( *((_BYTE *)this + 676) = v8 | 0x10; (unsigned int)v9 < *((_DWORD *)this + 158); *(_BYTE *)(v10 + 676) |= 0x10u )
      {
        v10 = *(_QWORD *)(*((_QWORD *)this + 76) + 8 * v9);
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 60) = 0LL;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 158); i = (unsigned int)(i + 1) )
    {
      v12 = *(CWindowData **)(*((_QWORD *)this + 76) + 8 * i);
      if ( (*((_DWORD *)v12 + 29) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v12, a2, 0, a4);
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
