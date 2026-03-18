/*
 * XREFs of _HMPheFromObject @ 0x14003F320
 * Callers:
 *     HandleInputDestDestruction @ 0x140039868 (HandleInputDestDestruction.c)
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     CleanupInputDelegation @ 0x14013AEC0 (CleanupInputDelegation.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014CA0C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x140166C10 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     HMChangeOwnerThreadWorker @ 0x1401A5428 (HMChangeOwnerThreadWorker.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401AC7C0 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1401C1A00 (UserDeleteBaseWindowHandle.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1401F7314 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall HMPheFromObject(int *a1, __int64 a2)
{
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 UserSessionState; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx

  v3 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42336);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v3) != 1 && !ExIsResourceAcquiredSharedLite(v3)) )
  {
    __int2c();
  }
  v8 = *a1;
  UserSessionState = W32GetUserSessionState(v7, v6);
  return *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19896) * (unsigned int)(unsigned __int16)v8
       + *(_QWORD *)(UserSessionState + 19888);
}
