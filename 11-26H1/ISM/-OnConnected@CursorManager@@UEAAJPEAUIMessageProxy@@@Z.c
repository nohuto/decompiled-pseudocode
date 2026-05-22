/*
 * XREFs of ?OnConnected@CursorManager@@UEAAJPEAUIMessageProxy@@@Z @ 0x180162DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CursorManager::OnConnected(
        CursorManager *this,
        __int64 (__fastcall ***a2)(struct IMessageProxy *, GUID *, __int64 **))
{
  __int64 **v2; // rsi
  __int64 (__fastcall *v5)(struct IMessageProxy *, GUID *, __int64 **); // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, _OWORD *, __int64, __int64); // rax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-88h]
  _OWORD v16[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h]
  __int128 v18; // [rsp+60h] [rbp-48h] BYREF
  __int128 v19; // [rsp+70h] [rbp-38h]
  __int64 v20; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (__int64 **)((char *)this + 32);
  if ( !*((_QWORD *)this + 4) )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v5 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
    v6 = v5((struct IMessageProxy *)a2, &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a, v2);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x102,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v6,
        v15);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 3) + 136LL))(
           *((_QWORD *)this + 3),
           *((_QWORD *)this + 7),
           &v18);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x104,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v7,
        v15);
    v9 = *v2;
    v10 = *((unsigned int *)this + 18);
    v11 = **v2;
    LOBYTE(v8) = *((_DWORD *)this + 20) < 2;
    v16[0] = v18;
    v16[1] = v19;
    v12 = *(__int64 (__fastcall **)(__int64 *, _OWORD *, __int64, __int64))(v11 + 24);
    v17 = v20;
    v13 = v12(v9, v16, v10, v8);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x107,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v13,
        v15);
  }
  return 0LL;
}
