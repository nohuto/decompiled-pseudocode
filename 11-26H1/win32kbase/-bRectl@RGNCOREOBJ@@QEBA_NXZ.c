/*
 * XREFs of ?bRectl@RGNCOREOBJ@@QEBA_NXZ @ 0x14012DF58
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x14019FAAC (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall RGNCOREOBJ::bRectl(RGNCOREOBJ *this)
{
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 24LL))(*(_QWORD *)this) != 0;
  else
    return *(_DWORD *)(*(_QWORD *)this + 16LL) == 56;
}
