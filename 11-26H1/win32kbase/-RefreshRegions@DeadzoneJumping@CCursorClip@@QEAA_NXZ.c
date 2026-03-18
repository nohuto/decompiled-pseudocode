/*
 * XREFs of ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x14008F578
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F210 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 * Callees:
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x14008F720 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 *     ?CreateRegionInfo@DeadzoneJumping@CCursorClip@@AEAAPEAURegionInfo@12@PEBUCInputSpaceRegion@@@Z @ 0x14008F770 (-CreateRegionInfo@DeadzoneJumping@CCursorClip@@AEAAPEAURegionInfo@12@PEBUCInputSpaceRegion@@@Z.c)
 *     ?CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z @ 0x14008F7C0 (-CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z.c)
 */

char __fastcall CCursorClip::DeadzoneJumping::RefreshRegions(CCursorClip::DeadzoneJumping *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 UserSessionState; // r15
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  char v9; // bl
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  _QWORD *v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rsi
  const struct CInputSpaceRegion *v17; // rdx
  struct CCursorClip::DeadzoneJumping::RegionInfo *RegionInfo; // rax
  CCursorClip::DeadzoneJumping *v20; // rcx
  struct CCursorClip::DeadzoneJumping::RegionInfo *v21; // rdi
  struct CCursorClip::DeadzoneJumping::RegionInfo *v22; // rsi
  struct CCursorClip::DeadzoneJumping::RegionPortal *v23; // [rsp+58h] [rbp+10h] BYREF

  CCursorClip::DeadzoneJumping::Cleanup(this);
  UserSessionState = W32GetUserSessionState(v3, v2, v4);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v9 = 0;
  v10 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 18680);
  v12 = *(_QWORD *)(v10 + 24);
  if ( !v12 )
    v12 = v10 + 32;
  v13 = 0LL;
  v14 = (_QWORD *)(v12 + 1456);
  v15 = W32GetUserSessionState(v12, v10, v11);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v15 + 18688));
  v16 = (_QWORD *)*v14;
  while ( 1 )
  {
    v17 = 0LL;
    if ( v16 != v14 )
      v17 = (const struct CInputSpaceRegion *)(v16 + 2);
    if ( !v17 )
      break;
    RegionInfo = CCursorClip::DeadzoneJumping::CreateRegionInfo((CCursorClip::DeadzoneJumping *)(v16 + 2), v17);
    if ( !RegionInfo )
    {
      CCursorClip::DeadzoneJumping::Cleanup(this);
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v15 + 18688));
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
      return 0;
    }
    if ( v13 )
      *v13 = RegionInfo;
    else
      *(_QWORD *)this = RegionInfo;
    v16 = (_QWORD *)*v16;
    v13 = RegionInfo;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v15 + 18688));
  v21 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
LABEL_10:
  v22 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
  if ( !v21 )
  {
    v9 = 1;
    goto LABEL_19;
  }
  while ( 1 )
  {
    if ( !v22 )
    {
      v21 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)v21;
      goto LABEL_10;
    }
    if ( v21 != v22 )
      break;
LABEL_16:
    v22 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)v22;
  }
  v23 = 0LL;
  if ( (int)CCursorClip::DeadzoneJumping::CreatePortal(v20, v21, v22, &v23) >= 0 )
  {
    v20 = v23;
    if ( v23 )
    {
      *(_QWORD *)v23 = *((_QWORD *)v21 + 3);
      *((_QWORD *)v21 + 3) = v20;
    }
    goto LABEL_16;
  }
  CCursorClip::DeadzoneJumping::Cleanup(this);
LABEL_19:
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  return v9;
}
