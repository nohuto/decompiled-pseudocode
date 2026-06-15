/*
 * XREFs of sub_140078384 @ 0x140078384
 * Callers:
 *     sub_1400762BC @ 0x1400762BC (sub_1400762BC.c)
 *     sub_140076AE4 @ 0x140076AE4 (sub_140076AE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140078384(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // edx
  __int64 result; // rax

  ***(_BYTE ***)a1 = 0;
  if ( a2 >= *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    v3 = a2 + 1;
    *a3 = v3;
    result = 0LL;
    ***(_BYTE ***)a1 = v3 < *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL);
  }
  return result;
}
