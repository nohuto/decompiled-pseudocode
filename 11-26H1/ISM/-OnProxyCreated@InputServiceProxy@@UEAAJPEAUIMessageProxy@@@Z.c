/*
 * XREFs of ?OnProxyCreated@InputServiceProxy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180057810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputServiceProxy::OnProxyCreated(
        InputServiceProxy *this,
        __int64 (__fastcall ***a2)(struct IMessageProxy *, GUID *, char *))
{
  __int64 (__fastcall *v4)(struct IMessageProxy *, GUID *, char *); // rdi
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  v5 = v4((struct IMessageProxy *)a2, &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc, (char *)this + 24);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x170,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v5,
      v8);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x172,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
