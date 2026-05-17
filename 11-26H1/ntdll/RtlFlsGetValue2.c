/*
 * XREFs of RtlFlsGetValue2 @ 0x1800BE5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsGetValue2(int a1)
{
  _QWORD *FlsData; // rdx
  int v2; // r8d
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // rdx

  FlsData = NtCurrentTeb()->FlsData;
  if ( (unsigned int)(a1 - 1) > 0xFEE || !FlsData )
    return 0LL;
  v2 = a1 + 16;
  _BitScanReverse((unsigned int *)&a1, a1 + 16);
  result = 0LL;
  v4 = FlsData[(unsigned int)(a1 - 4) + 2];
  if ( v4 )
  {
    v5 = v4 + 8 * ((v2 ^ (unsigned int)(1 << a1)) + 1LL);
    if ( v5 )
      return *(_QWORD *)v5;
  }
  return result;
}
