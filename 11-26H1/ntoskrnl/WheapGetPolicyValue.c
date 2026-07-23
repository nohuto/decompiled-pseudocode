/*
 * XREFs of WheapGetPolicyValue @ 0x14084FEC4
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x1406DCBD8 (WheapWmiExecutePolicyManagementMethod.c)
 *     WheapGetAllPolicyValues @ 0x14084FE80 (WheapGetAllPolicyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapGetPolicyValue(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( a1 >= 0x16 )
    return 3221225485LL;
  _mm_lfence();
  result = 0LL;
  *a2 = *(_DWORD *)*(&off_140E09398 + 4 * a1);
  return result;
}
