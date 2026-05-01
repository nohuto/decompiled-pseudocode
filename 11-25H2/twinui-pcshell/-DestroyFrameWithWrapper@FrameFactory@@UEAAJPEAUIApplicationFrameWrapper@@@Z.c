/*
 * XREFs of ?DestroyFrameWithWrapper@FrameFactory@@UEAAJPEAUIApplicationFrameWrapper@@@Z @ 0x180067D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameFactory::DestroyFrameWithWrapper(FrameFactory *this, struct IApplicationFrameWrapper *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct IApplicationFrameWrapper *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)a2 + 88LL))(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v12 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v7 = v6(a2, &v12);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16D,
        (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3), v12);
      v5 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16E,
          (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
          (const char *)(unsigned int)v8);
      v9 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  return v5;
}
