/*
 * XREFs of Control_GetCurrentActivityId @ 0x14003D4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Control_GetCurrentActivityId(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 360);
  *a2 = *(_OWORD *)(result + 32);
  return result;
}
