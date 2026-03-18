/*
 * XREFs of ?RecordUse@CWICBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x180128930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapRealization::RecordUse(CWICBitmapRealization *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v5 = *(_QWORD *)this;
  *(_QWORD *)v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(CWICBitmapRealization *, __int64, int *))(v5 + 104))(this, v4, v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\bitmaps/WICBitmapRealization.h",
      (const char *)(unsigned int)v6);
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10);
    return v7;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)v10 + 8LL) + 24LL))(
           *(_QWORD *)v10 + 8LL,
           v11);
    if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v8 + 8)) )
      *((_BYTE *)a2 + 7982) = 1;
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10);
    return 0LL;
  }
}
