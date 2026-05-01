/*
 * XREFs of ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18018A018
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800A8B98 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d2fa7908b891c12cbb1669318d2d4613__&_ @ 0x18018A0C0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_d2fa7908b891c12cbb1669318d2d4613__-_.c)
 *     _lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_ @ 0x1802ED524 (_lambda_dafc2c99c39dbaf60a815ea558bf8360_--_lambda_dafc2c99c39dbaf60a815ea558bf8360_.c)
 *     ?SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z @ 0x18067AD98 (-SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(
        CFrameApplicationPresentation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // edi
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF
  CFrameApplicationPresentation *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_1808D8464 == -1 )
    SHRegGetDWORDWithDefault(
      (HKEY)this,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
      L"SuppressedSplashScreenTimeout",
      0x190u,
      &dword_1808D8464);
  v8 = this;
  if ( this )
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_(v7, &v8, this);
  v5 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d2fa7908b891c12cbb1669318d2d4613____(v3, v2, v4, v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
  if ( this )
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  return v5;
}
