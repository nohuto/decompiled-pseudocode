/*
 * XREFs of ?UpdateGammaRampOnVidPnTarget@KernelDriver@@UEAAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402DA960
 * Callers:
 *     <none>
 * Callees:
 *     ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402DA9B4 (-DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

int __fastcall KernelDriver::UpdateGammaRampOnVidPnTarget(KernelDriver *this, const struct DXGK_GAMMA_RAMP *a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return DmmUpdateGammaRampOnVidPnTarget(*(void *const *)(v2 + 16), *((_DWORD *)this + 8), a2);
  WdLogSingleEntry1(2LL);
  result = -1073741632;
  WdLogGlobalForLineNumber = 159;
  return result;
}
