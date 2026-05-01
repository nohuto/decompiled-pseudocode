/*
 * XREFs of ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x1800B0560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4c487b8ddfbb456201be9b3312a7435d___ @ 0x1800B0650 (Windows--Internal--ComTaskPool--QueueTask__lambda_4c487b8ddfbb456201be9b3312a7435d___.c)
 *     _lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_ @ 0x180291F10 (_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_--_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_.c)
 *     _lambda_e4f37fdae08429a84761ade0db4bdd38_::_lambda_e4f37fdae08429a84761ade0db4bdd38_ @ 0x1802DCED0 (_lambda_e4f37fdae08429a84761ade0db4bdd38_--_lambda_e4f37fdae08429a84761ade0db4bdd38_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::OnMinSizePreferencesUpdated(
        CFrameApplicationPresentation *this,
        CFrameApplicationPresentation *a2,
        __int64 a3,
        __int64 a4)
{
  HWND *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  int v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CFrameApplicationPresentation *v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = a2;
  v5 = (HWND *)*((_QWORD *)this + 14);
  if ( !a2 || a2 != (CFrameApplicationPresentation *)*v5 && *v5 )
    return 1LL;
  *(_OWORD *)v11 = *(_OWORD *)lambda_e4f37fdae08429a84761ade0db4bdd38_::_lambda_e4f37fdae08429a84761ade0db4bdd38_(
                                v12,
                                this,
                                &v15,
                                a4);
  if ( *((_DWORD *)this + 14) == 2 )
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v15 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v6 = ((__int64 (__fastcall *)(__int64 *, CFrameApplicationPresentation **, CFrameApplicationPresentation *, int *))lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_)(
           v13,
           &v15,
           this,
           v11);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_4c487b8ddfbb456201be9b3312a7435d___(
           v8,
           v7,
           *((unsigned int *)this + 12),
           v6,
           *(_QWORD *)v11,
           *(_QWORD *)&v11[2]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    if ( v9 >= 0 )
      ++*((_DWORD *)this + 52);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  return (unsigned int)v9;
}
