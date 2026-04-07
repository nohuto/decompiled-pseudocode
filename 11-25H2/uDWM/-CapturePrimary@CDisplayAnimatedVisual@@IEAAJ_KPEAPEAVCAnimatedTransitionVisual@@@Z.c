/*
 * XREFs of ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800AF318
 * Callers:
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AF4D4 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x180066578 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800666C0 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18008AEF8 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800AF590 (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayAnimatedVisual::CapturePrimary(
        CDWMDisplaySet **this,
        unsigned __int64 a2,
        struct CAnimatedTransitionVisual **a3)
{
  int PrimaryDisplay; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct CDWMDisplay *v9; // rdi
  enum DXGI_MODE_ROTATION v10; // ecx
  struct CDWMDisplay *v11; // rbx
  enum DXGI_MODE_ROTATION v12; // r8d
  struct CDWMDisplay *v14; // [rsp+30h] [rbp-29h] BYREF
  struct CDWMDisplay *v15; // [rsp+38h] [rbp-21h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-19h] BYREF
  D2D_RECT_U v17; // [rsp+50h] [rbp-9h] BYREF
  struct D2D_RECT_U v18; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v19; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(this[34], &v15);
  v7 = PrimaryDisplay;
  if ( PrimaryDisplay >= 0 )
  {
    v14 = 0LL;
    PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(
                       *((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
                       &v14);
    v7 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
      v9 = v15;
      v10 = *((_DWORD *)v15 + 62);
      v18 = *(struct D2D_RECT_U *)((char *)v15 + 40);
      v11 = v14;
      v17 = *(D2D_RECT_U *)((char *)v14 + 40);
      v19 = *CDisplayAnimatedVisual::ClipIntersection(&v16, &v17, &v18, (const struct tagRECT *)((char *)v15 + 56), v10);
      v12 = *((_DWORD *)v11 + 62);
      v17 = *(D2D_RECT_U *)((char *)v11 + 40);
      v18 = *(struct D2D_RECT_U *)((char *)v9 + 40);
      v17 = (D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                           &v16,
                           &v18,
                           &v17,
                           (const struct tagRECT *)((char *)v11 + 56),
                           v12);
      PrimaryDisplay = CDisplayAnimatedVisual::CaptureAndAddVisual(
                         (CDisplayAnimatedVisual *)this,
                         a2,
                         &v19,
                         (const struct tagRECT *)&v17,
                         a3);
      v7 = PrimaryDisplay;
      if ( PrimaryDisplay >= 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      v8 = 851LL;
    }
    else
    {
      v8 = 833LL;
    }
  }
  else
  {
    v8 = 830LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)PrimaryDisplay);
LABEL_9:
  wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v14);
  return v7;
}
