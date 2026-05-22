/*
 * XREFs of ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800BB1EC
 * Callers:
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x1801626AC (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$As@UIInputDeviceInfoStore@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputDeviceInfoStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x180053654 (--$As@UIInputDeviceInfoStore@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z @ 0x1800BADF8 (-MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800BB7B8 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?GetTicks@PerfCounter@@YA_JXZ @ 0x1800BFE80 (-GetTicks@PerfCounter@@YA_JXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::OnKeyboardKeyPress(MPCHolographicInputManager *this, unsigned int a2)
{
  int v4; // eax
  char v5; // di
  int v6; // ebp
  int v7; // r14d
  PerfCounter *v8; // rcx
  ISMTracing *v9; // rcx
  int v10; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 3364) )
  {
    v13 = 0LL;
    v4 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<IInputDeviceInfoStore>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 410,
           &v13);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x606,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v4,
        v10);
    v5 = 1;
    v14 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, a2, &v14);
    if ( v6 >= 0 )
      v5 = *(_BYTE *)(v14 + 12);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 48LL))(**((_QWORD **)this + 450));
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress_(v9, v6, a2, v7, v5);
    }
    if ( !v5 )
    {
      MPCHandProcessor::m_lastKeyboardKeyPressTimeInTicks = PerfCounter::GetTicks(v8);
      if ( (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 48LL))(**((_QWORD **)this + 450)) == 512 )
      {
        v12 = *((_QWORD *)this + 418);
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v12);
        MPCHolographicInputManager::TrySetProviderAsPrimary(this);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
}
