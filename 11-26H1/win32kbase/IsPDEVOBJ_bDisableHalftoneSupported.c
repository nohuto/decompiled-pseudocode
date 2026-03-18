/*
 * XREFs of IsPDEVOBJ_bDisableHalftoneSupported @ 0x14018CEE0
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x140030BE0 (bDynamicProcessAllDriverRealizations.c)
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x1401ED754 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsPDEVOBJ_bDisableHalftoneSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1536LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
