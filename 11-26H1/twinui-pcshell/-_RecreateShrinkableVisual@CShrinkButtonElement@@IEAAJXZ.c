/*
 * XREFs of ?_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ @ 0x1804CF1E4
 * Callers:
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804CF440 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804B9638 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShrinkButtonElement::_RecreateShrinkableVisual(CShrinkButtonElement *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v9[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  int v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *(_QWORD *)v9 = 0LL;
  v2 = *((_QWORD *)this + 30);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v2 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v9);
  LODWORD(v10) = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  HIDWORD(v10) = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v4 = v3(v2, *((_QWORD *)this + 11), v10, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 31) + 192LL))(
           *((_QWORD *)this + 31),
           *(_QWORD *)v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = **(_QWORD **)v9;
      v10 = 0LL;
      v11 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      v12 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(v7 + 24))(*(_QWORD *)v9, &v10, 0LL, 0LL);
      v5 = v4;
      if ( v4 >= 0 )
      {
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 33, (__int64 *)v9);
        LODWORD(v10) = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
        HIDWORD(v10) = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
        *((_QWORD *)this + 32) = v10;
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
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v9);
  return v5;
}
