/*
 * XREFs of ?RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z @ 0x180175C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::RecordUse(CRenderTargetBitmap *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // r8
  int v6; // eax
  unsigned int v7; // esi
  int v9; // ecx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v5 = *(_QWORD **)this;
  v13 = 0LL;
  v6 = ((__int64 (__fastcall *)(CRenderTargetBitmap *, __int64, __int64 *))v5[14])(this, v4, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\rendertargetbitmap.cpp",
      (const char *)(unsigned int)v6);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return v7;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), &v12);
    if ( ((v12 + 3) & 0xFFFFFFFD) != 0 )
    {
      v9 = *((_DWORD *)a2 + 14);
      if ( v12 == v9 || v9 == -3 )
        *((_BYTE *)a2 + 7981) = 1;
      else
        *((_BYTE *)a2 + 7984) = 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 160LL))(*((_QWORD *)this + 4)) )
    {
      if ( *((_BYTE *)g_pComposition + 6458) )
        *((_BYTE *)a2 + 7983) = 1;
      else
        *((_BYTE *)a2 + 7980) = 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 176LL))(*((_QWORD *)this + 4)) )
      *((_BYTE *)a2 + 7983) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 192LL))(*((_QWORD *)this + 4)) )
      *((_BYTE *)a2 + 7984) = 1;
    if ( *(float *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 120LL))(
                      *((_QWORD *)this + 4) + 16LL,
                      v10)
                  + 16) != 0.0 )
      *((_BYTE *)a2 + 7982) = 1;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return 0LL;
  }
}
