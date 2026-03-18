/*
 * XREFs of TR_StopMapping @ 0x1400305BC
 * Callers:
 *     ESM_StoppingMappingOnCancelStart @ 0x140030540 (ESM_StoppingMappingOnCancelStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_StopMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 104LL))();
}
