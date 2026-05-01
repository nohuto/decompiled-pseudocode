/*
 * XREFs of ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x1800D5630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4c487b8ddfbb456201be9b3312a7435d___ @ 0x1800D55A8 (Windows--Internal--ComTaskPool--QueueTask__lambda_4c487b8ddfbb456201be9b3312a7435d___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::OnMinSizePreferencesUpdated(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  HWND *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (HWND *)*((_QWORD *)this + 14);
  if ( !a2 || a2 != *v4 && *v4 )
    return 1LL;
  if ( *((_DWORD *)this + 14) == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v9[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v9[1] = (__int64)this;
    v9[2] = (__int64)this;
    v9[3] = (__int64)a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_4c487b8ddfbb456201be9b3312a7435d___(
           v6,
           v5,
           *((_DWORD *)this + 12),
           (__int64)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
    if ( v7 >= 0 )
      ++*((_DWORD *)this + 52);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  return (unsigned int)v7;
}
