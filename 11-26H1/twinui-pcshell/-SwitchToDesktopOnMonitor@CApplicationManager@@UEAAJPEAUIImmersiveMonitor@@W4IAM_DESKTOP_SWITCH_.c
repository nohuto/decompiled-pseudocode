/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1802973E0
 * Callers:
 *     ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18020AF40 (-SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z.c)
 *     ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x1802E6480 (-SwitchToShellWindow@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18005A828 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801FB070 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801FB0D8 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x18028CBFC (CDelayIAMOperations--AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID46973925@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802975E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID46973925@@@details@wil@@QEAAX_NW4Report.c)
 *     ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x1802DBC6C (--$CreateRefCountedObj@V-$CAutoHandle@PEAX@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@V-$CAutoHand.c)
 *     _lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::_lambda_b35b57b2dc0f3b0a2942726bab1c64fe_ @ 0x1802DCF60 (_lambda_b35b57b2dc0f3b0a2942726bab1c64fe_--_lambda_b35b57b2dc0f3b0a2942726bab1c64fe_.c)
 *     _lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::__lambda_b35b57b2dc0f3b0a2942726bab1c64fe_ @ 0x1802DD054 (_lambda_b35b57b2dc0f3b0a2942726bab1c64fe_--__lambda_b35b57b2dc0f3b0a2942726bab1c64fe_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 v4; // r12
  int Error; // edi
  CIAMGlobals *v7; // rcx
  HANDLE *v8; // rbx
  bool IsCalledOnIAMThread; // al
  unsigned int v10; // r15d
  char *v11; // rax
  __int64 v12; // rcx
  HANDLE Event; // rax
  int v14; // edi
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  HANDLE *v17; // [rsp+38h] [rbp-38h] BYREF
  char v18; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v19[40]; // [rsp+48h] [rbp-28h] BYREF
  int v20; // [rsp+C0h] [rbp+50h] BYREF
  bool v21; // [rsp+C8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  Error = 0;
  if ( (a3 & 0x20) == 0 )
    Error = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch((CApplicationManager *)(a1 - 152), a2);
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID46973925>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID46973925>::GetImpl'::`2'::impl,
    a2);
  if ( (v3 & 0x40) != 0 )
    v3 = 0;
  v20 = v3;
  if ( Error >= 0 )
  {
    v8 = 0LL;
    v17 = 0LL;
    IsCalledOnIAMThread = CIAMGlobals::IsCalledOnIAMThread(v7);
    v21 = IsCalledOnIAMThread;
    v10 = 3;
    if ( (v3 & 4) != 0 )
      goto LABEL_20;
    if ( IsCalledOnIAMThread )
    {
      Error = CApplicationManager::_ActivateIamSpecialWindow((CApplicationManager *)(a1 - 152));
      goto LABEL_20;
    }
    v11 = (char *)CreateRefCountedObj<CAutoHandle<void *>,>(&v16);
    v8 = 0LL;
    if ( &v18 != v11 )
    {
      v8 = *(HANDLE **)v11;
      *(_QWORD *)v11 = 0LL;
    }
    v17 = v8;
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( !v8 )
    {
      Error = -2147024882;
      goto LABEL_26;
    }
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    v8[1] = Event;
    if ( Event )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
      {
LABEL_26:
        if ( v8 )
          (*((void (__fastcall **)(HANDLE *))*v8 + 2))(v8);
        return (unsigned int)Error;
      }
    }
    v10 = 4;
LABEL_20:
    if ( Error >= 0 )
    {
      v16 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
      lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::_lambda_b35b57b2dc0f3b0a2942726bab1c64fe_(
        (unsigned int)v19,
        a1 - 152,
        (unsigned int)&v16,
        (unsigned int)&v21,
        (__int64)&v17,
        (__int64)&v20);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v14 = CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___(
              *(int **)(a1 + 648),
              (__int64)v19,
              v10);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v14 )
      {
        Error = 0;
        if ( v8 )
          WaitForSingleObjectEx(v8[1], 0x1388u, 0);
      }
      else
      {
        Error = -2147467259;
      }
      lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::__lambda_b35b57b2dc0f3b0a2942726bab1c64fe_(v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    }
    goto LABEL_26;
  }
  return (unsigned int)Error;
}
