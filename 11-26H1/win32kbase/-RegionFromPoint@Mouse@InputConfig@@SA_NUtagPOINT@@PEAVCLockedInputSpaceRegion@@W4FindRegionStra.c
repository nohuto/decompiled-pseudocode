/*
 * XREFs of ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140086710
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1400857AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x140217920 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x140217B84 (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InputConfig::Mouse::RegionFromPoint(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // ebp
  int v5; // ebx
  __int64 UserSessionState; // r13
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD **v14; // r12
  _DWORD *v15; // rsi
  __int64 v16; // r14
  _QWORD *v17; // r10
  int v18; // eax
  char v19; // di
  _DWORD *v20; // r8
  _QWORD *v21; // rcx
  int v22; // r9d
  int v24; // ebp
  int v25; // r9d
  int v26; // ecx
  int v27; // eax
  int v28; // r9d
  int v29; // r9d
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  int v35; // [rsp+64h] [rbp+Ch]
  unsigned __int64 v36; // [rsp+68h] [rbp+10h]

  v35 = HIDWORD(a1);
  v3 = a3;
  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v12 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 18680);
  v13 = *(_QWORD *)(v12 + 24);
  if ( !v13 )
    v13 = v12 + 32;
  *a2 = 0LL;
  v14 = (_QWORD **)(v13 + 1456);
  v36 = -1LL;
  v15 = 0LL;
  v16 = W32GetUserSessionState(v13, v10, v11);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v16 + 18688));
  v17 = *v14;
  v18 = 0;
  v19 = 1;
  while ( 1 )
  {
    v20 = v17 + 2;
    v21 = 0LL;
    if ( v17 != v14 )
      v21 = v17 + 2;
    if ( !v21 )
      break;
    if ( v17 == v14 )
      v20 = 0LL;
    v22 = *v20;
    if ( v5 >= *v20 && v5 < v20[2] && v35 >= v20[1] && v35 < v20[3] )
    {
      *a2 = v20;
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v16 + 18688));
      goto LABEL_16;
    }
    if ( v3 == 1 )
    {
      if ( v5 < v22 || v5 >= v20[2] )
      {
        v25 = v22 - v5;
        v26 = -(v5 - v20[2] + 1);
        if ( v5 - v20[2] + 1 > 0 )
          v26 = v5 - v20[2] + 1;
        v27 = -v25;
        if ( v25 > 0 )
          v27 = v25;
        if ( v27 >= v26 )
          v25 = v5 - v20[2] + 1;
        v24 = -v25;
        if ( v25 > 0 )
          v24 = v25;
        v18 = 0;
      }
      else
      {
        v24 = 0;
      }
      v28 = v20[1];
      if ( v35 < v28 || v35 >= v20[3] )
      {
        v29 = v28 - v35;
        v30 = -(v35 - v20[3] + 1);
        if ( v35 - v20[3] + 1 > 0 )
          v30 = v35 - v20[3] + 1;
        v31 = -v29;
        if ( v29 > 0 )
          v31 = v29;
        if ( v31 >= v30 )
          v29 = v35 - v20[3] + 1;
        v18 = -v29;
        if ( v29 > 0 )
          v18 = v29;
      }
      v32 = v18;
      v33 = v24;
      v3 = a3;
      v34 = v33 * v33 + v32 * v32;
      v18 = 0;
      if ( v34 < v36 )
      {
        v15 = v20;
        v36 = v34;
      }
    }
    v17 = (_QWORD *)*v17;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v16 + 18688));
  if ( v15 )
    *a2 = v15;
  else
    v19 = 0;
LABEL_16:
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  return v19;
}
