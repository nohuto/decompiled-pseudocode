/*
 * XREFs of CcSetVacbIntoList @ 0x1404774B4
 * Callers:
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     CcSetVacbInFreeList @ 0x1402C49B0 (CcSetVacbInFreeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcSetVacbIntoList(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  result = *a2;
  v3 = (_QWORD *)(a1 + 16);
  if ( *(__int64 **)(*a2 + 8) != a2 )
    __fastfail(3u);
  *v3 = result;
  v3[1] = a2;
  *(_QWORD *)(result + 8) = v3;
  *a2 = (__int64)v3;
  return result;
}
