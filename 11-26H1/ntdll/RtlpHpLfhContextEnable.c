/*
 * XREFs of RtlpHpLfhContextEnable @ 0x1800EB094
 * Callers:
 *     LdrpInitializeProcessHeap @ 0x1800EAD58 (LdrpInitializeProcessHeap.c)
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpEnvTlsAlloc @ 0x180072460 (RtlpHpEnvTlsAlloc.c)
 */

__int64 __fastcall RtlpHpLfhContextEnable(__int64 a1, int *a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // [rsp+40h] [rbp+18h]

  if ( (RtlpHpLfhPerfFlags & 0x10000) != 0 )
    return 0LL;
  v5 = RtlpHpEnvTlsAlloc(a1, a1);
  result = 0LL;
  if ( !v5 )
    return 3221225626LL;
  *(_DWORD *)(a1 + 84) = v5;
  if ( (RtlpHpLfhPerfFlags & 0x10000) == 0 )
  {
    if ( (RtlpHpLfhPerfFlags & 4) != 0 && (qword_1801C5EE8 & 4) != 0 )
      *(_WORD *)(a1 + 80) |= 1u;
    v6 = *a2;
    LOWORD(v6) = *a2 - 15;
    *(_DWORD *)(a1 + 76) = v6;
  }
  return result;
}
