/*
 * XREFs of ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801C03EC
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800241E0 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C2128 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1F30 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 */

void __fastcall MPCSixDofProcessor::EndGesture(MPCSixDofProcessor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  MPCGestureHandlerManager *v8; // rbx
  __int64 *v9; // rax
  const char *v10; // r9
  _QWORD v11[2]; // [rsp+20h] [rbp-BE8h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-BD8h] BYREF
  int v13; // [rsp+48h] [rbp-BC0h]
  char v14; // [rsp+120h] [rbp-AE8h]
  char v15; // [rsp+2B8h] [rbp-950h]
  int v16; // [rsp+388h] [rbp-880h]
  int WorkspaceId; // [rsp+3B0h] [rbp-858h]

  memset_0(v12, 0, 0xBC0uLL);
  v13 = 3008;
  Instance = MPCGestureHandlerManager::GetInstance(v3, v2);
  v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         v11,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)Instance, v5);
  v16 = 2;
  v14 = 1;
  v15 = 1;
  v8 = MPCGestureHandlerManager::GetInstance(v7, v6);
  v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         v11,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DownLevelTo2D(v8, (struct LegacyInputInfo *)v12, v9, v10);
  *((_BYTE *)this + 3677) = 0;
  *(_QWORD *)((char *)this + 4284) = 0LL;
  *((_DWORD *)this + 917) = 0;
}
