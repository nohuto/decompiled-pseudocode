/*
 * XREFs of ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140096A80
 * Callers:
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140010CB0 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x140011960 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140094AD0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x140095278 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140095EA0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     GreEqualRgn @ 0x140095FC0 (GreEqualRgn.c)
 *     ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x14009617C (-bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140096290 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pscnTail(REGION_CORE *this)
{
  struct REGION_CORE *v1; // rdi
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v5; // rdi

  v1 = qword_1402A10B0;
  if ( !qword_1402A10B0 )
    return (struct SCAN *)(*(_QWORD *)this + *((_QWORD *)this + 2));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v1 + 8, 2LL);
  v3 = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)v1 + 264LL))(this);
  v4 = (char *)v1 + 8;
  v5 = v3;
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (struct SCAN *)v5;
}
