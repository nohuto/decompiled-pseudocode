/*
 * XREFs of ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14012E038
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x14019FAAC (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 *     CddEngCombineRgn @ 0x1401FB8A0 (CddEngCombineRgn.c)
 *     CddEngGetRgnBox @ 0x1401FB9F0 (CddEngGetRgnBox.c)
 *     CddEngOffsetRgn @ 0x1401FBA50 (CddEngOffsetRgn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::iComplexity(RGNCOREOBJ *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  unsigned int v3; // eax

  v1 = 0;
  v2 = *(_QWORD *)this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 32LL))(*(_QWORD *)this);
  if ( *(_DWORD *)(v2 + 24) == 1 )
    return 1LL;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 176LL))(*(_QWORD *)this);
  else
    v3 = *(_DWORD *)(v2 + 16);
  LOBYTE(v1) = v3 > 0x38;
  return (unsigned int)(v1 + 2);
}
