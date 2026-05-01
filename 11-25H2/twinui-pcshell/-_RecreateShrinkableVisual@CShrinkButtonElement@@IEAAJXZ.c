/*
 * XREFs of ?_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ @ 0x1804BD354
 * Callers:
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804BD5B0 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804A7C5C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShrinkButtonElement::_RecreateShrinkableVisual(CShrinkButtonElement *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, unsigned __int64, GUID *, int *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v12[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *(_QWORD *)v12 = 0LL;
  v2 = *((_QWORD *)this + 30);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, int *))(*(_QWORD *)v2 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  v13 = __PAIR64__(*((_DWORD *)this + 17) - *((_DWORD *)this + 15), *((_DWORD *)this + 16) - *((_DWORD *)this + 14));
  v4 = v3(v2, *((_QWORD *)this + 11), v13, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 31) + 192LL))(
           *((_QWORD *)this + 31),
           *(_QWORD *)v12);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = **(_QWORD **)v12;
      v8 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
      v9 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      v13 = 0LL;
      v14 = v9;
      v15 = v8;
      v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD, _QWORD))(v7 + 24))(
             *(_QWORD *)v12,
             &v13,
             0LL,
             0LL);
      v5 = v4;
      if ( v4 >= 0 )
      {
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 33, (__int64 *)v12);
        v10 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
        LODWORD(v13) = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
        HIDWORD(v13) = v10;
        *((_QWORD *)this + 32) = v13;
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 47LL;
    }
    else
    {
      v6 = 45LL;
    }
  }
  else
  {
    v6 = 43LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\shrinkbuttonelement.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  return v5;
}
