/*
 * XREFs of _lambda_6ee4989f9139f581a42397e10829ce1f_::operator() @ 0x180159A0C
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801598A0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_6ee4989f9139f581a42397e10829ce1f_::operator()(unsigned int *a1, __int64 a2)
{
  char v4; // bp
  void (__fastcall *v6)(__int64, struct IUnknown **); // rbx
  struct IUnknown *v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2);
  if ( (v4 & 1) != 0 )
  {
    if ( !*((_QWORD *)a1 + 1)
      || (v7 = 0LL,
          v6 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a2 + 464LL),
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7),
          v6(a2, &v7),
          LODWORD(v6) = SHIsSameObject(*((struct IUnknown **)a1 + 1), v7),
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7),
          (_DWORD)v6) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)a2 + 264LL))(
             a2,
             a1[1],
             *a1,
             0LL,
             0)
        && (v4 & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 2) + 64LL))(*((_QWORD *)a1 + 2), a2);
      }
    }
  }
  return 1;
}
