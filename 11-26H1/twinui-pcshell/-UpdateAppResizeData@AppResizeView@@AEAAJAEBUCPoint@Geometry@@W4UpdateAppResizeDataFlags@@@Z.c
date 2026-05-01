/*
 * XREFs of ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x18052EDE0
 * Callers:
 *     ?OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18052E030 (-OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x18052E0C0 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18052E200 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 *     ?OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18052E290 (-OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052DB3C (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x18052EFD8 (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppResizeView::UpdateAppResizeData(__int64 a1, int *a2, char a3)
{
  int v3; // ebp
  int updated; // edi
  __int64 v8; // rdx
  int v10; // edi
  int inited; // eax
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // r8d
  int v17; // ecx
  int v18; // r9d
  int v19; // eax
  char v20; // si
  __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+48h] [rbp-40h]
  _DWORD v25[6]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = 2;
  if ( (a3 & 2) != 0 )
  {
    updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64));
    if ( updated < 0 )
    {
      v8 = 488LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  v10 = 1;
  if ( (a3 & 1) == 0 )
  {
    v13 = *(_DWORD *)(a1 + 100);
    v14 = *(_DWORD *)(a1 + 108) - 1;
    v15 = v14;
    if ( v14 >= *a2 )
      v15 = *a2;
    if ( v13 <= v15 )
    {
      v13 = *a2;
      if ( v14 < *a2 )
        v13 = *(_DWORD *)(a1 + 108) - 1;
    }
    v16 = a2[1];
    v17 = *(_DWORD *)(a1 + 104);
    v18 = *(_DWORD *)(a1 + 112) - 1;
    v19 = v18;
    if ( v18 >= v16 )
      v19 = a2[1];
    if ( v17 <= v19 )
    {
      v17 = a2[1];
      if ( v18 < v16 )
        v17 = *(_DWORD *)(a1 + 112) - 1;
    }
    v22 = __PAIR64__(v17, v13);
    if ( (a3 & 4) != 0 )
    {
      v20 = 1;
    }
    else
    {
      v20 = 0;
      if ( v13 == *(_DWORD *)(a1 + 140) && v17 == *(_DWORD *)(a1 + 144) )
        return 0LL;
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 64) + 32LL))(*(_QWORD *)(a1 + 64), v25);
    v21 = *(_QWORD *)(a1 + 64);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v24 = 0;
    (*(void (__fastcall **)(__int64, unsigned __int64 *, __m128i *))(*(_QWORD *)v21 + 24LL))(v21, &v22, &si128);
    if ( !v20 && si128.m128i_i32[0] == v25[0] && ((si128.m128i_i32[0] - 2) & 0xFFFFFFFD) != 0 )
      v10 = 0;
    if ( si128.m128i_i32[0] != v25[0] )
      v3 = 6;
    updated = AppResizeView::UpdateDropFeedback(a1, v25[0], si128.m128i_u32[0], &v22, v3 | (unsigned int)v10);
    if ( updated < 0 )
    {
      v8 = 524LL;
      goto LABEL_4;
    }
    *(_QWORD *)(a1 + 140) = v22;
    return 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 48LL))(*(_QWORD *)(a1 + 64));
  inited = AppResizeView::InitAppResizeData((AppResizeView *)a1, (const struct Geometry::CPoint *)a2);
  v12 = inited;
  if ( inited < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)inited);
    return v12;
  }
  return 0LL;
}
