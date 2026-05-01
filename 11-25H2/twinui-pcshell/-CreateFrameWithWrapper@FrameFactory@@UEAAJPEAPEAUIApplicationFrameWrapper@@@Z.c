/*
 * XREFs of ?CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180067BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrame@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x180067B14 (--$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FrameFactory::CreateFrameWithWrapper(FrameFactory *this, struct IApplicationFrameWrapper **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct IApplicationFrame **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct IApplicationFrame *v9; // rcx
  struct IApplicationFrame *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IApplicationFrame *v13; // [rsp+70h] [rbp+30h] BYREF
  struct IPrivilegedPresentationOperations *v14; // [rsp+80h] [rbp+40h] BYREF
  struct IApplicationFrame *v15; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v5 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v6 = v5(v4, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v6);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v7;
  }
  v14 = (struct IPrivilegedPresentationOperations *)*((_QWORD *)this + 2);
  v15 = v13;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<FrameWrapper,IApplicationFrameWrapper,IApplicationFrame *,IPrivilegedPresentationOperations *>(
         a2,
         &v15,
         &v14);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(_QWORD, struct IApplicationFrame *))(**((_QWORD **)this + 3) + 40LL))(
      *((_QWORD *)this + 3),
      v13);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v7;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  return 0LL;
}
