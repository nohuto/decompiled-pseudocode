/*
 * XREFs of ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217D54
 * Callers:
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x140217E00 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400F81B0 (-StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?AsVisualTargetMarshaler@CResourceMarshaler@DirectComposition@@UEAAPEAVCVisualTargetMarshaler@2@XZ @ 0x140115490 (-AsVisualTargetMarshaler@CResourceMarshaler@DirectComposition@@UEAAPEAVCVisualTargetMarshaler@2@.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1401506F0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140217EF0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218010 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218120 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218160 (-NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218220 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218320 (-NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218380 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1402183D0 (-NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218430 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218530 (-NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218610 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSendParamVk@@YAHPEAUtagKE@@_KK@Z @ 0x140218720 (-NlsSendParamVk@@YAHPEAUtagKE@@_KK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
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
      return ((__int64 (__fastcall *)(struct tagKE *, __int64, _QWORD))funcs_140217D97[v7])(
               a3,
               a4,
               *((unsigned int *)a1 + 2 * v6 + 18));
  }
  return result;
}
