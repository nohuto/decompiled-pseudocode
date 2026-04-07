/*
 * XREFs of ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AEB88
 * Callers:
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AEECC (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 * Callees:
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040100 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x1800582A8 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x1800582BC (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180058324 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18008DB74 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800AE69C (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800AF87C (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::CaptureExistingExtendedDisplays(
        CDisplayAnimatedVisual *this,
        unsigned __int64 a2,
        const struct CDWMDisplay *a3,
        __int64 a4)
{
  CDWMDisplaySet *v7; // r12
  unsigned int i; // edi
  CDWMDisplaySet *v9; // rcx
  const struct CDWMDisplay *v10; // rax
  const struct CDWMDisplay *v11; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // r14
  int v13; // eax
  unsigned int v14; // ebx
  CAnimatedTransitionVisual *v15; // rbx
  CAnimatedTransitionVisual **v16; // rdx
  CAnimatedTransitionVisual *v18; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-38h]
  struct tagRECT v20; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v19 = a2;
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(a4);
  v7 = (CDWMDisplaySet *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  for ( i = 0; ; ++i )
  {
    v9 = (CDWMDisplaySet *)*((_QWORD *)this + 30);
    if ( i >= *((_DWORD *)v9 + 16) )
      break;
    v10 = CDWMDisplaySet::DisplayNoRef(v9, i);
    v11 = v10;
    if ( !*((_BYTE *)v10 + 288) && (!a3 || !CDWMDisplay::IsSamePhysicalDisplay(v10, a3)) )
    {
      MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v7, v11);
      if ( MatchedPhysicalDisplayNoRef )
      {
        v21 = *(struct tagRECT *)((char *)v11 + 56);
        v18 = 0LL;
        v13 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, v19, &v21, &v18);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x359,
            (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
            (const char *)(unsigned int)v13);
          wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v18);
          return v14;
        }
        v20 = *(struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56);
        v15 = v18;
        CAnimatedTransitionVisual::SetBeginRect(v18, &v20);
        CAnimatedTransitionVisual::SetEndRect(v15, &v20);
        v16 = *(CAnimatedTransitionVisual ***)(a4 + 8);
        if ( v16 == *(CAnimatedTransitionVisual ***)(a4 + 16) )
        {
          std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
            (const char *)a4,
            (__int64)v16,
            (__int64 *)&v18);
        }
        else
        {
          v18 = 0LL;
          *v16 = v15;
          *(_QWORD *)(a4 + 8) += 8LL;
        }
        wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v18);
      }
    }
  }
  return 0LL;
}
