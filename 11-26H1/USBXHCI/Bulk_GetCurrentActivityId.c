/*
 * XREFs of Bulk_GetCurrentActivityId @ 0x14003D490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_GetCurrentActivityId(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 368);
  *a2 = *(_OWORD *)(*(_QWORD *)result + 32LL);
  return result;
}
