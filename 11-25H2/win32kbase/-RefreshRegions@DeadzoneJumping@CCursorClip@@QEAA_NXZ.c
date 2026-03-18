/*
 * XREFs of ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x1400CF650
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF310 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z @ 0x1400CF7FC (-CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z.c)
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x1400CFA70 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall CCursorClip::DeadzoneJumping::RefreshRegions(CCursorClip::DeadzoneJumping *this)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r15
  _QWORD **v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rax
  CCursorClip::DeadzoneJumping *v18; // rcx
  struct CCursorClip::DeadzoneJumping::RegionInfo *v19; // rdi
  struct CCursorClip::DeadzoneJumping::RegionInfo *v20; // rsi
  tagDomLock *v22; // [rsp+28h] [rbp-40h] BYREF
  tagDomLock *v23; // [rsp+30h] [rbp-38h] BYREF
  struct CCursorClip::DeadzoneJumping::RegionPortal *v24; // [rsp+78h] [rbp+10h] BYREF

  CCursorClip::DeadzoneJumping::Cleanup(this);
  v2 = 0;
  UserSessionState = W32GetUserSessionState(v4, v3);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v22,
    (struct CEResourceLock *)(UserSessionState + 18640));
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18632);
  v10 = *(_QWORD *)(v9 + 24);
  if ( !v10 )
    v10 = v9 + 32;
  v11 = 0LL;
  v12 = (_QWORD **)(v10 + 1456);
  v13 = W32GetUserSessionState(v9, v8);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v23, (struct CEResourceLock *)(v13 + 18640));
  v15 = *v12;
  while ( 1 )
  {
    v16 = 0LL;
    if ( v15 != v12 )
      v16 = v15 + 2;
    if ( !v16 )
      break;
    v17 = Win32AllocPoolWithQuotaZInitImpl(v14, 0x28uLL, 0x447A636Au);
    v14 = v17;
    if ( !v17 )
    {
      CCursorClip::DeadzoneJumping::Cleanup(this);
      tagDomLock::UnLockExclusive((PERESOURCE *)v23);
      tagDomLock::UnLockExclusive((PERESOURCE *)v22);
      return 0;
    }
    *(_OWORD *)(v17 + 8) = *(_OWORD *)v16;
    *(_WORD *)(v17 + 32) = *((_WORD *)v16 + 10);
    *(_QWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 24) = 0LL;
    if ( v11 )
      *v11 = v17;
    else
      *(_QWORD *)this = v17;
    v15 = (_QWORD *)*v15;
    v11 = (_QWORD *)v17;
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v23);
  v19 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
LABEL_12:
  v20 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
  if ( !v19 )
  {
    v2 = 1;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( !v20 )
    {
      v19 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)v19;
      goto LABEL_12;
    }
    if ( v19 != v20 )
      break;
LABEL_18:
    v20 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)v20;
  }
  v24 = 0LL;
  if ( (int)CCursorClip::DeadzoneJumping::CreatePortal(v18, v19, v20, &v24) >= 0 )
  {
    v18 = v24;
    if ( v24 )
    {
      *(_QWORD *)v24 = *((_QWORD *)v19 + 3);
      *((_QWORD *)v19 + 3) = v18;
    }
    goto LABEL_18;
  }
  CCursorClip::DeadzoneJumping::Cleanup(this);
LABEL_21:
  tagDomLock::UnLockExclusive((PERESOURCE *)v22);
  return v2;
}
