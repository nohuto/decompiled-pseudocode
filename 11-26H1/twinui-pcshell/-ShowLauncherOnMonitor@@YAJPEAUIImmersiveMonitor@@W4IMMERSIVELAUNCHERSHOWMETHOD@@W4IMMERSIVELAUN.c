/*
 * XREFs of ?ShowLauncherOnMonitor@@YAJPEAUIImmersiveMonitor@@W4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18051AFB4
 * Callers:
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x18051AF0C (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x180530568 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShowLauncherOnMonitor(IUnknown *a1, unsigned int a2, int a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v16; // [rsp+60h] [rbp+30h] BYREF
  int v17; // [rsp+68h] [rbp+38h] BYREF

  v16 = a3;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         a1,
         (const GUID *const)&SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         &ppvOut);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v16 = 0;
    v17 = 0;
    v5 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v17);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 87LL;
      goto LABEL_5;
    }
    if ( v17 )
    {
      v14 = 0LL;
      v8 = ppvOut;
      v9 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      v10 = v9(v8, &v14);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 91LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\tabletmode\\lib\\common.h",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        goto LABEL_22;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v14 + 96LL))(v14, v14, &v16);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 92LL;
        goto LABEL_9;
      }
      if ( !v16 )
      {
        v10 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
        v6 = v10;
        if ( v10 < 0 )
        {
          v11 = 96LL;
          goto LABEL_9;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    }
    if ( !v16 )
    {
      v5 = (*(__int64 (__fastcall **)(void *, IUnknown *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, a1);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 103LL;
        goto LABEL_5;
      }
      v5 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, a2, 4LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 104LL;
        goto LABEL_5;
      }
    }
    v6 = 0;
    goto LABEL_22;
  }
  v7 = 83LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\common.h",
    (const char *)(unsigned int)v5);
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v6;
}
