/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF310
 * Callers:
 *     NtSetCursorInputSpace @ 0x1401BBB70 (NtSetCursorInputSpace.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140062770 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14006665C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF43C (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x1400CF650 (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 *     memset @ 0x140243000 (memset.c)
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
  struct tagRECT *UnionRegion; // rax
  struct tagRECT v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagRECT v18; // [rsp+20h] [rbp-2E8h] BYREF
  _OWORD v19[45]; // [rsp+30h] [rbp-2D8h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 32));
  CCursorClip::ApplyCursorDisplayChangeOptions(a1, a2);
  memset(v19, 0, 0xC8uLL);
  v4 = v19[1];
  *(_OWORD *)(a1 + 48) = v19[0];
  v5 = v19[2];
  *(_OWORD *)(a1 + 64) = v4;
  v6 = v19[3];
  *(_OWORD *)(a1 + 80) = v5;
  v7 = v19[4];
  *(_OWORD *)(a1 + 96) = v6;
  v8 = v19[5];
  *(_OWORD *)(a1 + 112) = v7;
  v9 = v19[6];
  *(_OWORD *)(a1 + 128) = v8;
  *(_OWORD *)(a1 + 144) = v9;
  *(_OWORD *)(a1 + 160) = v19[7];
  v10 = v19[9];
  *(_OWORD *)(a1 + 176) = v19[8];
  v11 = v19[10];
  *(_OWORD *)(a1 + 192) = v10;
  v12 = v19[11];
  v13 = *(_QWORD *)&v19[12];
  *(_OWORD *)(a1 + 208) = v11;
  *(_OWORD *)(a1 + 224) = v12;
  *(_QWORD *)(a1 + 240) = v13;
  UnionRegion = (struct tagRECT *)InputConfig::Mouse::GetUnionRegion(v19, a1 + 176);
  v15 = *UnionRegion;
  *(struct tagRECT *)a1 = *UnionRegion;
  v18 = v15;
  CCursorClip::UpdateClipRect((const struct tagRECT *)a1, &v18);
  *(_BYTE *)(a1 + 268) = ***(_DWORD ***)(W32GetUserSessionState(v17, v16) + 56968) > 1u;
  CCursorClip::DeadzoneJumping::RefreshRegions((CCursorClip::DeadzoneJumping *)(a1 + 272));
  CPushLock::ReleaseLock((CPushLock *)(a1 + 32));
}
