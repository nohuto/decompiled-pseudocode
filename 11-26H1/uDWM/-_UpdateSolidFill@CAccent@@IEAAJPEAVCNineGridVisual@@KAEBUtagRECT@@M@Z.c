/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z @ 0x180094D04
 * Callers:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@Z @ 0x180063914 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x180094F78 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z @ 0x18000834C (-UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z.c)
 *     ??$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180008DF0 (--$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPE.c)
 *     ?UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z @ 0x180009A58 (-UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x18005A98C (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccent::_UpdateSolidFill(
        CAccent *this,
        struct CNineGridVisual *a2,
        int a3,
        const struct tagRECT *a4,
        float a5)
{
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  int updated; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  float v15; // [rsp+30h] [rbp-38h]
  unsigned int v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]

  rc = *a4;
  if ( (*((_DWORD *)this + 47) & 0x800) != 0 )
  {
    LOBYTE(v7) = 0;
  }
  else
  {
    v15 = (float)(a5 * 255.0) + 6291456.25;
    v7 = (int)(LODWORD(v15) << 10) >> 11;
  }
  LOBYTE(v16) = v7;
  *(_WORD *)((char *)&v16 + 1) = a3;
  HIBYTE(v16) = BYTE2(a3);
  v17 = 0LL;
  v8 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v9 = *v8;
  v17 = 0LL;
  updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v9 + 64))(v8, v16, &v17);
  v11 = updated;
  if ( updated < 0 )
  {
    v12 = 766LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_24;
  }
  updated = CNineGridVisual::UpdateInnerBrush<Windows::UI::Composition::ICompositionColorBrush *>(a2, v17);
  v11 = updated;
  if ( updated < 0 )
  {
    v12 = 767LL;
    goto LABEL_8;
  }
  updated = CNineGridVisual::UpdateInsets(a2, 0.0, 0.0, 0.0, 0);
  v11 = updated;
  if ( updated < 0 )
  {
    v12 = 769LL;
    goto LABEL_8;
  }
  updated = CNineGridVisual::UpdateIsCenterHollow(a2, 0);
  v11 = updated;
  if ( updated < 0 )
  {
    v12 = 770LL;
    goto LABEL_8;
  }
  v13 = *((_DWORD *)this + 47);
  if ( (v13 & 4) != 0 )
  {
    if ( (v13 & 8) != 0 )
    {
      rc.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
      rc.right = rc.left + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
      rc.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
      rc.bottom = rc.top + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
      updated = CNineGridVisual::UpdateInsets(
                  a2,
                  (float)(int)(*(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 396) - rc.left),
                  (float)(int)(HIDWORD(*(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 396)) - rc.top),
                  (float)(int)(rc.right - *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 404)),
                  COERCE_INT((float)(int)(rc.bottom
                                        - HIDWORD(*(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 404)))));
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 786LL;
        goto LABEL_8;
      }
      updated = CNineGridVisual::UpdateIsCenterHollow(a2, 1);
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 787LL;
        goto LABEL_8;
      }
      OffsetRect(&rc, -*((_DWORD *)this + 120), -*((_DWORD *)this + 121));
    }
    else
    {
      rc = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
    }
  }
  CRectangleVisual::SetRect(a2, &rc);
  if ( (*((_BYTE *)this + 188) & 4) != 0 )
    CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
  v11 = 0;
LABEL_24:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v17);
  return v11;
}
