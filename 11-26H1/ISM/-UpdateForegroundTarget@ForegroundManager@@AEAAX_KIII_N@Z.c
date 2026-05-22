/*
 * XREFs of ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18004A3C4
 * Callers:
 *     ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x18004A31C (-HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x18006E694 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AC5C4 (-HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AD514 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180016EE0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z @ 0x18004A558 (-TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18004A690 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x18005EFAC (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ForegroundManager::UpdateForegroundTarget(
        ForegroundManager *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        bool a6)
{
  unsigned int v6; // edi
  unsigned int ViewIdFromWindowId; // r15d
  const struct ForegroundManager::TargetingInfo *InputDelegation; // rax
  unsigned int v11; // r14d
  int v12; // r14d
  struct InputSiteManager *InputSiteManager; // rax
  const char *v14; // r9
  __int64 v15; // rbx
  const char *v16; // r9
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v19[2]; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  v6 = a4;
  ViewIdFromWindowId = a3;
  if ( *((_QWORD *)this + 2) )
  {
    if ( !a4
      || a6
      || (InputDelegation = ForegroundManager::TryFindInputDelegation(this, a3, a4),
          *(_OWORD *)v19 = *(_OWORD *)InputDelegation,
          v20 = *((_QWORD *)InputDelegation + 2),
          v11 = v20,
          (v20 & 0xE) == 0)
      || (v20 & 1) != 0 )
    {
      v12 = a5;
    }
    else
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      a2 = v19[0];
      InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v18, 1u, v19[0]);
      v15 = v18;
      if ( !v18 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x183,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v14);
      InputSite::GetAttachedObject<IDelegateInformationProvider>(v18, &v22);
      if ( !v22 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x186,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v16);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v22 + 64LL))(
        v22,
        ViewIdFromWindowId,
        v6,
        v11);
      v6 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v19, 8));
      v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v19, 12));
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, a2);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, int))(**((_QWORD **)this + 2) + 24LL))(
      *((_QWORD *)this + 2),
      a2,
      ViewIdFromWindowId,
      v6,
      v12);
  }
}
