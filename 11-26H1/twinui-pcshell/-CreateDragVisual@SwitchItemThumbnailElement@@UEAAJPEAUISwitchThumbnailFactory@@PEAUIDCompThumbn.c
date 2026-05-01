/*
 * XREFs of ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x1804D3180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D3594 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D35EC (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SwitchItemThumbnailElement::CreateDragVisual(
        SwitchItemThumbnailElement *this,
        struct ISwitchThumbnailFactory *a2,
        struct IDCompThumbnail *a3,
        struct tagRECT *a4,
        struct IUnknown **a5)
{
  __int64 (__fastcall *v9)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, int *, _QWORD, GUID *, __int64 *); // rbx
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64, __int64); // rsi
  __int64 OuterBorderInfo; // rdi
  __int64 InnerBorderInfo; // rax
  __int64 v19; // [rsp+50h] [rbp-31h] BYREF
  int v20[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v21[12]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v22[12]; // [rsp+6Ch] [rbp-15h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0LL;
  v20[0] = a4->right - a4->left;
  v20[1] = a4->bottom - a4->top;
  v19 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, int *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 38) + 40LL))(*((_QWORD *)this + 38));
  v11 = v9(a2, a3, *v10, 0x40000000LL, v20, 0LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v19);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 362LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_10;
  }
  v14 = v19;
  v15 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 216LL);
  OuterBorderInfo = SwitchItemThumbnailElement::GetOuterBorderInfo((char *)this - 272, v21);
  InnerBorderInfo = SwitchItemThumbnailElement::GetInnerBorderInfo((char *)this - 272, v22);
  v15(v14, InnerBorderInfo, OuterBorderInfo);
  rc = *a4;
  InflateRect(
    &rc,
    (int)((double)(int)(*(_QWORD *)&a4->right - rc.left) * (1.0 - *((double *)this - 5)) * -0.5),
    (int)((double)(int)(HIDWORD(*(_QWORD *)&a4->right) - rc.top) * (1.0 - *((double *)this - 5)) * -0.5));
  v11 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
          v19,
          &rc,
          0LL,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 367LL;
    goto LABEL_9;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, __int64))(*(_QWORD *)v19 + 24LL))(v19, a4, 3LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 368LL;
    goto LABEL_9;
  }
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v19)(
          v19,
          &GUID_00000000_0000_0000_c000_000000000046,
          a5);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 370LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  return v12;
}
