/*
 * XREFs of ndisWorkItemHandler @ 0x1400660E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisWorkItemHandler(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 8))(a1, *(_QWORD *)a1);
}
