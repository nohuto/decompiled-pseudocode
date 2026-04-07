/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824
 * Callers:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035AA0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B180 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18003BE10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007BBD0 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ @ 0x18007D2F0 (-ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  CBaseObject *v7; // rcx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rdi
  CWindowData *v15; // rcx

  if ( CWindowData::IsImmersiveWindow(this) )
  {
    v8 = *((_BYTE *)this + 740);
    if ( (v8 & 1) != 0 && a4 )
    {
      v9 = 0LL;
      for ( *((_BYTE *)this + 740) = v8 | 0x10; (unsigned int)v9 < *((_DWORD *)this + 158); *(_BYTE *)(v10 + 740) |= 0x10u )
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
    v14 = 0LL;
    for ( *((_QWORD *)this + 60) = 0LL; (unsigned int)v14 < *((_DWORD *)this + 158); v14 = (unsigned int)(v14 + 1) )
    {
      v15 = *(CWindowData **)(*((_QWORD *)this + 76) + 8 * v14);
      if ( (*((_DWORD *)v15 + 29) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v15, a2, 0, a4);
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this, v11, v12, v13);
  }
}
