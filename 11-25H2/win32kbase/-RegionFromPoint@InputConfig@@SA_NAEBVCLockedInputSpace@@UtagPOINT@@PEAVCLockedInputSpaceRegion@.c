/*
 * XREFs of ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@1@@Z @ 0x1400D01A8
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1401BA120 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall InputConfig::RegionFromPoint(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD **v6; // rsi
  int v7; // ebx
  unsigned __int64 v8; // r15
  _DWORD *v9; // rdi
  __int64 UserSessionState; // rax
  _QWORD *i; // r10
  _QWORD *v12; // rax
  _DWORD *v13; // r8
  int v14; // r9d
  PERESOURCE *v15; // rcx
  int v17; // ebp
  int v18; // r9d
  int v19; // ecx
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  int v23; // r9d
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  tagDomLock *v27; // [rsp+20h] [rbp-48h] BYREF
  int v28; // [rsp+7Ch] [rbp+14h]

  v28 = HIDWORD(a2);
  *a3 = 0LL;
  v6 = (_QWORD **)(*a1 + 1456LL);
  v7 = a2;
  v8 = -1LL;
  v9 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v27,
    (struct CEResourceLock *)(UserSessionState + 18640));
  for ( i = *v6; ; i = (_QWORD *)*i )
  {
    v12 = 0LL;
    if ( i != v6 )
      v12 = i + 2;
    if ( !v12 )
      break;
    v13 = 0LL;
    if ( i != v6 )
      v13 = i + 2;
    v14 = *v13;
    if ( v7 >= *v13 && v7 < v13[2] && v28 >= v13[1] && v28 < v13[3] )
    {
      v15 = (PERESOURCE *)v27;
      *a3 = v13;
      tagDomLock::UnLockExclusive(v15);
      return 1;
    }
    if ( a4 == 1 )
    {
      if ( v7 < v14 || v7 >= v13[2] )
      {
        v18 = v14 - v7;
        v19 = -v18;
        if ( v18 > 0 )
          v19 = v18;
        v20 = -(v7 - v13[2] + 1);
        if ( v7 - v13[2] + 1 > 0 )
          v20 = v7 - v13[2] + 1;
        if ( v19 >= v20 )
          v18 = v7 - v13[2] + 1;
        v17 = -v18;
        if ( v18 > 0 )
          v17 = v18;
      }
      else
      {
        v17 = 0;
      }
      v21 = v13[1];
      if ( v28 < v21 || v28 >= v13[3] )
      {
        v23 = v21 - v28;
        v24 = -v23;
        if ( v23 > 0 )
          v24 = v23;
        v25 = -(v28 - v13[3] + 1);
        if ( v28 - v13[3] + 1 > 0 )
          v25 = v28 - v13[3] + 1;
        if ( v24 >= v25 )
          v23 = v28 - v13[3] + 1;
        v22 = -v23;
        if ( v23 > 0 )
          v22 = v23;
      }
      else
      {
        v22 = 0;
      }
      v26 = v22 * (__int64)v22;
      if ( v26 + v17 * (__int64)v17 < v8 )
      {
        v9 = v13;
        v8 = v26 + v17 * (__int64)v17;
      }
    }
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v27);
  if ( v9 )
  {
    *a3 = v9;
    return 1;
  }
  return 0;
}
