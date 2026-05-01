/*
 * XREFs of _lambda_36ac732e4dc79f438aaac687fe092223_::operator() @ 0x1802DDDB8
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_36ac732e4dc79f438aaac687fe092223___::operator() @ 0x1802DDF80 (CDelayIAMOperations--CDelayedOperation__lambda_36ac732e4dc79f438aaac687fe092223___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_ @ 0x1800902F4 (_lambda_6c2381c8148a5bf607d7998e82322cb8_--__lambda_6c2381c8148a5bf607d7998e82322cb8_.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0b9ea8be0013caa8067112faacac6b74___ @ 0x1802DC670 (Windows--Internal--ComTaskPool--QueueTask__lambda_0b9ea8be0013caa8067112faacac6b74___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_36ac732e4dc79f438aaac687fe092223_::operator()(_QWORD *a1)
{
  PSRWLOCK v2; // rbx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    *(RTL_SRWLOCK *)v6 = CApplicationManagerUtility::g_pIAMGlobals[14];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v6);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v7, &v9);
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_0b9ea8be0013caa8067112faacac6b74___(
           v5,
           v4,
           (unsigned int)v2[15].Ptr,
           v6);
    lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_((__int64 *)v6);
  }
  else
  {
    v3 = -2147023728;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x130A,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v3);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, (unsigned int)v3);
  }
}
