/*
 * XREFs of ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0
 * Callers:
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x14021CC70 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140122D20 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x14013CBB0 (-StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?AsInteractionTrackerMarshaler@CResourceMarshaler@DirectComposition@@UEAAPEAVCInteractionTrackerBaseMarshaler@2@XZ @ 0x140156480 (-AsInteractionTrackerMarshaler@CResourceMarshaler@DirectComposition@@UEAAPEAVCInteractionTracker.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CD60 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CE80 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CF90 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CFD0 (-NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D090 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D190 (-NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D1F0 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D240 (-NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D2A0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D3A0 (-NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D480 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSendParamVk@@YAHPEAUtagKE@@_KK@Z @ 0x14021D590 (-NlsSendParamVk@@YAHPEAUtagKE@@_KK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GenerateNlsVkAltKey(
        struct _VK_TO_FUNCTION_TABLE *a1,
        unsigned __int16 a2,
        struct tagKE *a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // edx

  result = 0LL;
  if ( !a1 )
    return 1LL;
  if ( a2 < 8u )
  {
    _mm_lfence();
    v6 = a2;
    v7 = *((unsigned __int8 *)a1 + 8 * a2 + 68);
    if ( (unsigned __int8)v7 < 0x10u )
      return ((__int64 (__fastcall *)(struct tagKE *, __int64, _QWORD))funcs_14021CC03[v7])(
               a3,
               a4,
               *((unsigned int *)a1 + 2 * v6 + 18));
  }
  return result;
}
