/*
 * XREFs of ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140066470
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1400653C0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1400658A8 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall InputConfig::Mouse::RegionFromPoint(__int64 a1, _QWORD *a2, int a3)
{
  int v5; // ebx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD **v12; // r15
  unsigned __int64 v13; // r12
  _DWORD *v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // r10
  char v17; // di
  _QWORD *v18; // rax
  _DWORD *v19; // r8
  int v20; // r9d
  tagDomLock *v21; // rcx
  int v23; // ebp
  int v24; // r9d
  int v25; // ecx
  int v26; // eax
  int v27; // r9d
  int v28; // eax
  int v29; // r9d
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rax
  tagDomLock *v33; // [rsp+28h] [rbp-50h] BYREF
  tagDomLock *v34; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+84h] [rbp+Ch]

  v35 = HIDWORD(a1);
  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v33,
    (struct CEResourceLock *)(UserSessionState + 18640));
  v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18632);
  v11 = *(_QWORD *)(v10 + 24);
  if ( !v11 )
    v11 = v10 + 32;
  *a2 = 0LL;
  v12 = (_QWORD **)(v11 + 1456);
  v13 = -1LL;
  v14 = 0LL;
  v15 = W32GetUserSessionState(v10, v9);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v34, (struct CEResourceLock *)(v15 + 18640));
  v16 = *v12;
  v17 = 1;
  while ( 1 )
  {
    v18 = 0LL;
    if ( v16 != v12 )
      v18 = v16 + 2;
    if ( !v18 )
      break;
    v19 = 0LL;
    if ( v16 != v12 )
      v19 = v16 + 2;
    v20 = *v19;
    if ( v5 >= *v19 && v5 < v19[2] && v35 >= v19[1] && v35 < v19[3] )
    {
      v21 = v34;
      *a2 = v19;
      tagDomLock::UnLockExclusive(v21);
      goto LABEL_16;
    }
    if ( a3 == 1 )
    {
      if ( v5 < v20 || v5 >= v19[2] )
      {
        v24 = v20 - v5;
        v25 = -v24;
        if ( v24 > 0 )
          v25 = v24;
        v26 = -(v5 - v19[2] + 1);
        if ( v5 - v19[2] + 1 > 0 )
          v26 = v5 - v19[2] + 1;
        if ( v25 >= v26 )
          v24 = v5 - v19[2] + 1;
        v23 = -v24;
        if ( v24 > 0 )
          v23 = v24;
      }
      else
      {
        v23 = 0;
      }
      v27 = v19[1];
      if ( v35 < v27 || v35 >= v19[3] )
      {
        v29 = v27 - v35;
        v30 = -v29;
        if ( v29 > 0 )
          v30 = v29;
        v31 = -(v35 - v19[3] + 1);
        if ( v35 - v19[3] + 1 > 0 )
          v31 = v35 - v19[3] + 1;
        if ( v30 >= v31 )
          v29 = v35 - v19[3] + 1;
        v28 = -v29;
        if ( v29 > 0 )
          v28 = v29;
      }
      else
      {
        v28 = 0;
      }
      v32 = v28 * (__int64)v28;
      if ( v32 + v23 * (__int64)v23 < v13 )
      {
        v14 = v19;
        v13 = v32 + v23 * (__int64)v23;
      }
    }
    v16 = (_QWORD *)*v16;
  }
  tagDomLock::UnLockExclusive(v34);
  if ( v14 )
    *a2 = v14;
  else
    v17 = 0;
LABEL_16:
  tagDomLock::UnLockExclusive(v33);
  return v17;
}
