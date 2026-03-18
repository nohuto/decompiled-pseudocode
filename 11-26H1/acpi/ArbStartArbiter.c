/*
 * XREFs of ArbStartArbiter @ 0x1400BFF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList_0 @ 0x140055D1F (RtlFreeRangeList_0.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ArbStartArbiter(__int64 a1, __int64 a2)
{
  RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 40));
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a1 + 280))(
           a1,
           *(unsigned int *)(a2 + 16),
           a2 + 20,
           *(_QWORD *)(a1 + 40));
}
