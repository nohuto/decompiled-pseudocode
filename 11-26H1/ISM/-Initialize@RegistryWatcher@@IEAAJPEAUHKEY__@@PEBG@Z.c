/*
 * XREFs of ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x1800433D0
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008DEBC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x1800422A8 (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_846207132ca0d62201dd0675f9ebdb0a_::operator() @ 0x18010C0EC (_lambda_846207132ca0d62201dd0675f9ebdb0a_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RegistryWatcher::Initialize(HKEY *this, HKEY a2, const unsigned __int16 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // r14
  signed int LastError; // edi
  __int64 v9; // rdx
  HKEY v10; // rcx
  void *v11; // rcx
  LSTATUS v13; // eax
  HKEY EventW; // rax
  const char *v15; // r9
  int v16; // eax
  int phkResult; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  char v19; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = a2;
  v5 = *(_QWORD *)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v21, this);
  v18 = v5;
  v19 = 1;
  v7 = (_QWORD *)(v6 + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v6 + 16));
  LastError = CoreUICreate(v7);
  if ( LastError < 0 )
  {
    v9 = 65LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)(unsigned int)LastError,
      phkResult);
    v10 = *(HKEY *)(v5 + 24);
    if ( v10 )
    {
      RegCloseKey(v10);
      *(_QWORD *)(v5 + 24) = 0LL;
    }
    v11 = *(void **)(v5 + 32);
    if ( v11 )
    {
      CloseHandle(v11);
      *(_QWORD *)(v5 + 32) = 0LL;
    }
    return (unsigned int)LastError;
  }
  v13 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a3, 0, 0x20019u, this + 3);
  LastError = v13;
  if ( v13 > 0 )
    LastError = (unsigned __int16)v13 | 0x80070000;
  if ( LastError < 0 )
  {
    v9 = 73LL;
    goto LABEL_3;
  }
  EventW = (HKEY)CreateEventW(0LL, 0, 0, 0LL);
  this[4] = EventW;
  if ( !EventW )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x4C,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
                  v15);
LABEL_16:
    v19 = 0;
    lambda_846207132ca0d62201dd0675f9ebdb0a_::operator()(&v18);
    return (unsigned int)LastError;
  }
  v16 = RegistryWatcher::OnKeyChange((RegistryWatcher *)this);
  LastError = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)(unsigned int)v16,
      phkResult);
    goto LABEL_16;
  }
  LastError = (*(__int64 (__fastcall **)(_QWORD, HKEY, int (*)(void *, unsigned int, void *), HKEY *))(*(_QWORD *)*v7 + 272LL))(
                *v7,
                this[4],
                RegistryWatcher::OnChangeCallbackStatic,
                this);
  if ( LastError < 0 )
  {
    v9 = 82LL;
    goto LABEL_3;
  }
  return 0LL;
}
