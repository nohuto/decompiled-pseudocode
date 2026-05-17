/*
 * XREFs of RtlFlsGetValue @ 0x1800C1990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsGetValue(int a1, _QWORD *a2)
{
  _QWORD *FlsData; // r8
  int v4; // edx
  __int64 v5; // r10
  _QWORD *v6; // rax
  __int64 result; // rax

  FlsData = NtCurrentTeb()->FlsData;
  if ( (unsigned int)(a1 - 1) > 0xFEE )
    return 3221225485LL;
  if ( !FlsData )
    return 3221225632LL;
  v4 = a1 + 16;
  _BitScanReverse((unsigned int *)&a1, a1 + 16);
  v5 = FlsData[(unsigned int)(a1 - 4) + 2];
  if ( v5 && (v6 = (_QWORD *)(v5 + 8 * ((v4 ^ (unsigned int)(1 << a1)) + 1LL))) != 0LL )
  {
    *a2 = *v6;
    return 0LL;
  }
  else
  {
    result = 0LL;
    *a2 = 0LL;
  }
  return result;
}
