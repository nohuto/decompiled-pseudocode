/*
 * XREFs of ?bContain@RGNCOREOBJ@@QEBA_NAEAV1@@Z @ 0x1401205A4
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x14019FAAC (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall RGNCOREOBJ::bContain(RGNCOREOBJ *this, struct RGNCOREOBJ *a2)
{
  char v2; // bl
  _DWORD *v3; // r8
  _DWORD *v4; // r9

  v2 = 0;
  v3 = *(_DWORD **)a2;
  v4 = *(_DWORD **)this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 16LL))(
             *(_QWORD *)this,
             *(_QWORD *)a2) != 0;
  if ( v4[7] <= v3[7] && v4[9] >= v3[9] && v4[8] <= v3[8] )
    return v4[10] >= v3[10];
  return v2;
}
