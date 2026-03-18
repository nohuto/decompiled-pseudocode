/*
 * XREFs of ?bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z @ 0x140045860
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x14019FAAC (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400458FC (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall RGNCOREOBJ::bMerge(RGNCOREOBJ *this, struct RGNCOREOBJ *a2, struct RGNCOREOBJ *a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // esi

  if ( !WPP_MAIN_CB.Dpc.DeferredContext )
    return RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___((int)this, (int)a2, (int)a3, a4, this);
  v4 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = *(_QWORD *)this;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 144LL))(
         *(_QWORD *)this,
         *(_QWORD *)a2,
         *(_QWORD *)a3);
  if ( !(*(unsigned int (__fastcall **)(__int64))(v4 + 176))(v5) )
    GrepCaptureLiveMemoryDump(400LL, 64LL, v5, 0LL, 0LL, 0);
  return v6 != 0;
}
