/*
 * XREFs of IsPDEVOBJ_bDisableHalftoneSupported @ 0x14015A764
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x140071620 (bDynamicProcessAllDriverRealizations.c)
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsPDEVOBJ_bDisableHalftoneSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1576LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
