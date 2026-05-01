/*
 * XREFs of ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052DB3C
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x18052E630 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x18052EDE0 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x18052EFD8 (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 *     ?AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z @ 0x18053479C (-AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppResizeView::InitAppResizeData(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r9d
  int v9; // eax
  const struct _GUID *v10; // rdx
  int Instance; // eax
  unsigned int v12; // edi
  __int64 v14; // rcx
  int updated; // eax
  unsigned int v16; // ebx
  _DWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_DWORD *)this + 27) - 1;
  v4 = v3;
  if ( v3 >= *(_DWORD *)a2 )
    v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)this + 25);
  if ( v5 <= v4 )
  {
    v5 = *(_DWORD *)a2;
    if ( v3 < *(_DWORD *)a2 )
      v5 = v3;
  }
  v6 = *((_DWORD *)a2 + 1);
  v7 = *((_DWORD *)this + 26);
  v8 = *((_DWORD *)this + 28) - 1;
  v9 = v8;
  if ( v8 >= v6 )
    v9 = v6;
  if ( v7 <= v9 )
  {
    v7 = v6;
    if ( v8 < v6 )
      v7 = *((_DWORD *)this + 28) - 1;
  }
  v17[1] = v7;
  v17[0] = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  Instance = AppResizeData_CreateInstance(*((struct IAppLayout **)this + 9), v10, (void **)this + 8);
  v12 = Instance;
  if ( Instance >= 0 )
  {
    v14 = *((_QWORD *)this + 8);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v19 = 0;
    (*(void (__fastcall **)(__int64, _DWORD *, __m128i *))(*(_QWORD *)v14 + 24LL))(v14, v17, &si128);
    updated = AppResizeView::UpdateDropFeedback(this, si128.m128i_u32[0], si128.m128i_u32[0], v17, 3);
    v16 = updated;
    if ( updated < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E1,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)updated);
    return v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DE,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)Instance);
    return v12;
  }
}
