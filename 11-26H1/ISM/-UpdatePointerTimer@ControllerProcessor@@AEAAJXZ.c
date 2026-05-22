/*
 * XREFs of ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x180180CD8
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180087280 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801803F4 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::UpdatePointerTimer(ControllerProcessor *this)
{
  char v2; // di
  __int32 v3; // xmm1_4
  bool v4; // r14
  bool v5; // bp
  bool v6; // si
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 1;
  if ( !*((_BYTE *)this + 212) )
  {
    COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v4 = COERCE_FLOAT(*((_DWORD *)this + 48) & v3) <= 0.23953247
      && COERCE_FLOAT(*((_DWORD *)this + 49) & v3) <= 0.23953247;
    v5 = COERCE_FLOAT(*((_DWORD *)this + 50) & v3) <= 0.26516724
      && COERCE_FLOAT(*((_DWORD *)this + 51) & v3) <= 0.26516724;
    v6 = COERCE_FLOAT(*((_DWORD *)this + 46) & v3) <= 0.1171875
      && COERCE_FLOAT(*((_DWORD *)this + 47) & v3) <= 0.1171875;
    if ( v5 && !*((_BYTE *)this + 420) && *((_DWORD *)this + 315) == 1 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v6 )
    {
      v7 = *((_DWORD *)this + 315);
      if ( v7 == 32 || v7 == 16 )
        ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    }
    if ( v4 && v5 && v6 )
      v2 = 0;
  }
  v8 = *((_QWORD *)this + 37);
  v14 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, &v14);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x830,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9,
      v12);
  if ( v2 )
  {
    if ( !*((_DWORD *)this + 70) && !v14 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 37) + 80LL))(
              *((_QWORD *)this + 37),
              0LL,
              *((_QWORD *)this + 975));
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x836,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v10,
          v12);
    }
  }
  return 0LL;
}
