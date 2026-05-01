/*
 * XREFs of ?PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804CA580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2AE0 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewFrameElement::PointerMove(
        CMultitaskingViewFrameElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rcx
  int *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 71);
  if ( v4 )
  {
    v12 = *((_QWORD *)this + 71);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    (*(void (__fastcall **)(__int64, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v4 + 40LL))(v4, a2);
    v5 = &v12;
  }
  else
  {
    CMultitaskingViewElementBase::PointerMove(this, a2);
    v6 = (int *)((char *)this + 576);
    v7 = *((_QWORD *)this + 72);
    if ( !v7 )
      return;
    *(_QWORD *)v10 = 0LL;
    v8 = 0LL;
    if ( v10 != v6 )
    {
      *(_QWORD *)v10 = v7;
      *(_QWORD *)v6 = 0LL;
      v8 = v7;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v8 + 24LL))(
           v8,
           *((unsigned int *)this + 25),
           a2);
    if ( v9 >= 0 )
    {
      *(_QWORD *)v10 = 0LL;
      v12 = *((_QWORD *)this + 71);
      *((_QWORD *)this + 71) = v8;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16B,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v9);
    }
    v5 = (__int64 *)v10;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
}
