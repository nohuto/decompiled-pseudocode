/*
 * XREFs of _HMPheFromObject @ 0x1400488F0
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1400875C0 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     HMChangeOwnerThreadWorker @ 0x140094AC0 (HMChangeOwnerThreadWorker.c)
 *     CleanupInputDelegation @ 0x1400B8D00 (CleanupInputDelegation.c)
 *     HandleInputDestDestruction @ 0x1400D0AC8 (HandleInputDestDestruction.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x140191374 (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x1401A7D20 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401CEC50 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1401EA590 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall HMPheFromObject(_DWORD *a1, int a2, int a3)
{
  struct _ERESOURCE *v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edi
  __int64 UserSessionState; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d

  v4 = *(struct _ERESOURCE **)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 42360);
  if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION() != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION()
     || ExIsResourceAcquiredExclusiveLite(v4) != 1 && !ExIsResourceAcquiredSharedLite(v4)) )
  {
    __int2c();
  }
  v11 = (unsigned __int16)*a1;
  UserSessionState = W32GetUserSessionState(v9, v8, v10);
  return (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v14, v13, v15) + 19928) * v11)
       + *(_QWORD *)(UserSessionState + 19920);
}
