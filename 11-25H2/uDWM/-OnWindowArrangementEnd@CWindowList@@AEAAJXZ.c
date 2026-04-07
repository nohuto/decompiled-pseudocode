/*
 * XREFs of ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800E68AC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180037A44 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ @ 0x18008A0E0 (-OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HideGlassSheetImmediatelyOnArrangementEnd@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E7CD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HideGlassSheetImmediatelyOnArrangementEnd.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800E7E60 (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E9940 (-AssertW@@YAXPEBG000K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnWindowArrangementEnd(CWindowList *this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  CWindowArrangementTransition *v5; // rcx
  int v6; // eax
  const struct std::nothrow_t *v7; // rdx
  void *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = (CWindowArrangementTransition *)*((_QWORD *)this + 66);
  if ( v5 )
    CWindowArrangementTransition::OnWindowArrangementEnd(v5, v3, v4);
  if ( !*((_QWORD *)this + 87) )
    goto LABEL_8;
  if ( !*((_QWORD *)this + 67) )
    AssertW(
      0LL,
      L"m_pAcrylicSheet != nullptr",
      L"CWindowList::OnWindowArrangementEnd",
      L"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      0x1E04u);
  *(_BYTE *)(*((_QWORD *)this + 87) + 677LL) |= 0x80u;
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HideGlassSheetImmediatelyOnArrangementEnd>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HideGlassSheetImmediatelyOnArrangementEnd>::GetImpl'::`2'::impl,
    v3);
  v6 = CWindowList::RunAcrylicSheetEndArrangementAnimation(this);
  v2 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1E0Bu, 0LL);
  }
  else
  {
LABEL_8:
    CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 0);
    v8 = (void *)*((_QWORD *)this + 66);
    if ( v8 )
    {
      CDisplayBlackCurtainAnimatedVisual::operator delete(v8, v7);
      *((_QWORD *)this + 66) = 0LL;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v2;
}
