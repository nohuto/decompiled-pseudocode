/*
 * XREFs of ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@1@@Z @ 0x140117B48
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1401E07D0 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

char __fastcall InputConfig::RegionFromPoint(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  int v4; // esi
  int v7; // ebx
  _QWORD **v8; // r15
  unsigned __int64 v9; // r12
  _DWORD *v10; // rdi
  __int64 UserSessionState; // rbp
  _QWORD *i; // r10
  _DWORD *v13; // r8
  _QWORD *v14; // rcx
  int v15; // r9d
  int v17; // r9d
  int v18; // ecx
  int v19; // eax
  int v20; // r9d
  int v21; // eax
  int v22; // r9d
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // [rsp+5Ch] [rbp+14h]

  v29 = HIDWORD(a2);
  v4 = 0;
  *a3 = 0LL;
  v7 = a2;
  v8 = (_QWORD **)(*a1 + 1456LL);
  v9 = -1LL;
  v10 = 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  for ( i = *v8; ; i = (_QWORD *)*i )
  {
    v13 = i + 2;
    v14 = 0LL;
    if ( i != v8 )
      v14 = i + 2;
    if ( !v14 )
      break;
    if ( i == v8 )
      v13 = 0LL;
    v15 = *v13;
    if ( v7 >= *v13 && v7 < v13[2] && v29 >= v13[1] && v29 < v13[3] )
    {
      *a3 = v13;
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
      return 1;
    }
    if ( a4 == 1 )
    {
      if ( v7 < v15 || v7 >= v13[2] )
      {
        v17 = v15 - v7;
        v18 = -(v7 - v13[2] + 1);
        if ( v7 - v13[2] + 1 > 0 )
          v18 = v7 - v13[2] + 1;
        v19 = -v17;
        if ( v17 > 0 )
          v19 = v17;
        if ( v19 >= v18 )
          v17 = v7 - v13[2] + 1;
        v4 = -v17;
        if ( v17 > 0 )
          v4 = v17;
      }
      v20 = v13[1];
      if ( v29 < v20 || v29 >= v13[3] )
      {
        v22 = v20 - v29;
        v23 = -(v29 - v13[3] + 1);
        if ( v29 - v13[3] + 1 > 0 )
          v23 = v29 - v13[3] + 1;
        v24 = -v22;
        if ( v22 > 0 )
          v24 = v22;
        if ( v24 >= v23 )
          v22 = v29 - v13[3] + 1;
        v21 = -v22;
        if ( v22 > 0 )
          v21 = v22;
      }
      else
      {
        v21 = 0;
      }
      v25 = v21;
      v26 = v4;
      v4 = 0;
      v27 = v26 * v26;
      v28 = v25 * v25;
      if ( v27 + v28 < v9 )
      {
        v10 = v13;
        v9 = v27 + v28;
      }
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  if ( v10 )
  {
    *a3 = v10;
    return 1;
  }
  return 0;
}
