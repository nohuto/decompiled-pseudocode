/*
 * XREFs of PDEVOBJ_bDisableHalftoneWrap @ 0x14014ED6C
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x140071620 (bDynamicProcessAllDriverRealizations.c)
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PDEVOBJ_bDisableHalftoneWrap(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1584LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
