/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180083DA8
 * Callers:
 *     ?GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800835F8 (-GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800ADA68 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  __int64 v2; // rax
  int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned int v8; // edx
  __m128i v9; // xmm1
  struct CVisual *v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_SIZE_F v12; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( !*((_QWORD *)this + 3) )
  {
    v2 = *(_QWORD *)this;
    v13 = 0LL;
    v3 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, struct tagRECT *))(v2 + 8))(this, &v13);
    if ( v3 < 0 )
    {
      v4 = 577LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v6 = *(_QWORD *)this;
    v11 = 0LL;
    v3 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(v6 + 16))(this, &v11);
    if ( v3 < 0 )
    {
      v4 = 580LL;
      goto LABEL_4;
    }
    v7 = v11;
    if ( !(_DWORD)v11 || (v8 = HIDWORD(v11)) == 0 )
    {
      v7 = 0;
      v8 = 0;
      if ( v13.right - v13.left >= 0 )
        v7 = v13.right - v13.left;
      LODWORD(v11) = v7;
      if ( v13.bottom - v13.top >= 0 )
        v8 = v13.bottom - v13.top;
      HIDWORD(v11) = v8;
    }
    v9 = _mm_cvtsi32_si128(v8);
    v10 = (struct CVisual *)*((_QWORD *)this + 2);
    v12.width = (float)v7;
    LODWORD(v12.height) = _mm_cvtepi32_ps(v9).m128_u32[0];
    v3 = CVisualBrush::Reset((CDesktopThumbnailCVI *)((char *)this + 24), v10, &v13, &v12);
    if ( v3 < 0 )
    {
      v4 = 592LL;
      goto LABEL_4;
    }
    *(struct tagRECT *)((char *)this + 40) = v13;
  }
  return 0LL;
}
