/*
 * XREFs of ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800AED08
 * Callers:
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AEECC (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x1800070F0 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800770D8 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180079DBC (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800AEF8C (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
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
  struct CDWMDisplay *v10; // rbx
  D2D_RECT_U v12; // [rsp+30h] [rbp-29h] BYREF
  struct CDWMDisplay *v13; // [rsp+40h] [rbp-19h] BYREF
  struct D2D_RECT_U v14; // [rsp+48h] [rbp-11h] BYREF
  struct CDWMDisplay *v15; // [rsp+58h] [rbp-1h] BYREF
  struct tagRECT v16; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v17; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(this[30], &v15);
  v7 = PrimaryDisplay;
  if ( PrimaryDisplay >= 0 )
  {
    v13 = 0LL;
    PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(
                       *((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
                       &v13);
    v7 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
      v9 = v15;
      v14 = *(struct D2D_RECT_U *)((char *)v15 + 40);
      v10 = v13;
      v12 = *(D2D_RECT_U *)((char *)v13 + 40);
      v17 = *CDisplayAnimatedVisual::ClipIntersection(
               &v16,
               &v12,
               &v14,
               (const struct tagRECT *)((char *)v15 + 56),
               (enum DXGI_MODE_ROTATION)*((_DWORD *)v15 + 62));
      v12 = *(D2D_RECT_U *)((char *)v10 + 40);
      v14 = *(struct D2D_RECT_U *)((char *)v9 + 40);
      v12 = (D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                           &v16,
                           &v14,
                           &v12,
                           (const struct tagRECT *)((char *)v10 + 56),
                           (enum DXGI_MODE_ROTATION)*((_DWORD *)v10 + 62));
      PrimaryDisplay = CDisplayAnimatedVisual::CaptureAndAddVisual(
                         (CDisplayAnimatedVisual *)this,
                         a2,
                         &v17,
                         (const struct tagRECT *)&v12,
                         a3);
      v7 = PrimaryDisplay;
      if ( PrimaryDisplay >= 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      v8 = 811LL;
    }
    else
    {
      v8 = 793LL;
    }
  }
  else
  {
    v8 = 790LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)PrimaryDisplay);
LABEL_9:
  wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v13);
  return v7;
}
