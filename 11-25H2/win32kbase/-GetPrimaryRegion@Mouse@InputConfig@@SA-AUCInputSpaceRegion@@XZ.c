/*
 * XREFs of ?GetPrimaryRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1400628C0
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140062454 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

_OWORD *__fastcall InputConfig::Mouse::GetPrimaryRegion(_OWORD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  tagDomLock *v23; // [rsp+28h] [rbp-10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v23,
    (struct CEResourceLock *)(UserSessionState + 18640));
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18632);
  v7 = *(_QWORD *)(v6 + 24);
  if ( !v7 )
    v7 = v6 + 32;
  v8 = 5LL;
  v9 = a1;
  v10 = (_OWORD *)(v7 + 736);
  do
  {
    v11 = v10[1];
    *v9 = *v10;
    v12 = v10[2];
    v9[1] = v11;
    v13 = v10[3];
    v9[2] = v12;
    v14 = v10[4];
    v9[3] = v13;
    v15 = v10[5];
    v9[4] = v14;
    v16 = v10[6];
    v9[5] = v15;
    v17 = v10[7];
    v10 += 8;
    v9[6] = v16;
    v9 += 8;
    *(v9 - 1) = v17;
    --v8;
  }
  while ( v8 );
  v18 = v10[1];
  *v9 = *v10;
  v19 = v10[2];
  v9[1] = v18;
  v20 = v10[3];
  v21 = *((_QWORD *)v10 + 8);
  v9[2] = v19;
  v9[3] = v20;
  *((_QWORD *)v9 + 8) = v21;
  tagDomLock::UnLockExclusive(v23);
  return a1;
}
