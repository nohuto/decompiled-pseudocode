/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F210
 * Callers:
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x14008E334 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x140211EDC (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14008AE3C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F33C (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x14008F578 (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CCursorClip::OnDisplayStateChange(__int64 a1, unsigned int a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  int v14; // r8d
  struct tagRECT *UnionRegion; // rax
  struct tagRECT v16; // xmm0
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  struct tagRECT v20; // [rsp+20h] [rbp-2E8h] BYREF
  _OWORD v21[45]; // [rsp+30h] [rbp-2D8h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 32));
  CCursorClip::ApplyCursorDisplayChangeOptions(a1, a2);
  memset(v21, 0, 0xC8uLL);
  v4 = v21[1];
  *(_OWORD *)(a1 + 48) = v21[0];
  v5 = v21[2];
  *(_OWORD *)(a1 + 64) = v4;
  v6 = v21[3];
  *(_OWORD *)(a1 + 80) = v5;
  v7 = v21[4];
  *(_OWORD *)(a1 + 96) = v6;
  v8 = v21[5];
  *(_OWORD *)(a1 + 112) = v7;
  v9 = v21[6];
  *(_OWORD *)(a1 + 128) = v8;
  *(_OWORD *)(a1 + 144) = v9;
  *(_OWORD *)(a1 + 160) = v21[7];
  v10 = v21[9];
  *(_OWORD *)(a1 + 176) = v21[8];
  v11 = v21[10];
  *(_OWORD *)(a1 + 192) = v10;
  v12 = v21[11];
  v13 = *(_QWORD *)&v21[12];
  *(_OWORD *)(a1 + 208) = v11;
  *(_OWORD *)(a1 + 224) = v12;
  *(_QWORD *)(a1 + 240) = v13;
  UnionRegion = (struct tagRECT *)InputConfig::Mouse::GetUnionRegion(v21, (int)a1 + 176, v14);
  v16 = *UnionRegion;
  *(struct tagRECT *)a1 = *UnionRegion;
  v20 = v16;
  CCursorClip::UpdateClipRect((const struct tagRECT *)a1, &v20);
  *(_BYTE *)(a1 + 268) = ***(_DWORD ***)(W32GetUserSessionState(v18, v17, v19) + 56968) > 1u;
  CCursorClip::DeadzoneJumping::RefreshRegions((CCursorClip::DeadzoneJumping *)(a1 + 272));
  CPushLock::ReleaseLock((CPushLock *)(a1 + 32));
}
