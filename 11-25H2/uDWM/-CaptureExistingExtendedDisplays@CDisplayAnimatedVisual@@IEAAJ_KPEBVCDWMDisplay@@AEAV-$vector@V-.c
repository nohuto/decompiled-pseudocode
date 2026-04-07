/*
 * XREFs of ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AF1B8
 * Callers:
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AF4D4 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 * Callees:
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800665D0 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x180068368 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18006837C (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800796D0 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18009A1F0 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800AFFC0 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 *     ?push_back@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800B0040 (-push_back@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::CaptureExistingExtendedDisplays(
        CDisplayAnimatedVisual *this,
        unsigned __int64 a2,
        struct CDWMDisplay *a3,
        __int64 a4)
{
  CDWMDisplaySet *v8; // r12
  unsigned int i; // ebx
  CDWMDisplaySet *v10; // rcx
  const struct CDWMDisplay *v11; // rax
  const struct CDWMDisplay *v12; // rdi
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rsi
  int v14; // eax
  unsigned int v15; // edi
  CAnimatedTransitionVisual *v17; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v18; // [rsp+28h] [rbp-60h] BYREF
  struct tagRECT v19; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(a4);
  v8 = (CDWMDisplaySet *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  for ( i = 0; ; ++i )
  {
    v10 = (CDWMDisplaySet *)*((_QWORD *)this + 34);
    if ( i >= *((_DWORD *)v10 + 16) )
      break;
    v11 = CDWMDisplaySet::DisplayNoRef(v10, i);
    v12 = v11;
    if ( !*((_BYTE *)v11 + 288) && (!a3 || !CDWMDisplay::IsSamePhysicalDisplay(v11, a3)) )
    {
      MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v8, v12);
      if ( MatchedPhysicalDisplayNoRef )
      {
        v19 = *(struct tagRECT *)((char *)v12 + 56);
        v17 = 0LL;
        v14 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, a2, &v19, &v17);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x381,
            (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
            (const char *)(unsigned int)v14);
          wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v17);
          return v15;
        }
        v18 = *(struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56);
        CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v17, &v18);
        CAnimatedTransitionVisual::SetEndRect(v17, &v18);
        std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::push_back(a4, &v17);
        wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v17);
      }
    }
  }
  return 0LL;
}
