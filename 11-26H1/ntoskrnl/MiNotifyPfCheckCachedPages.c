/*
 * XREFs of MiNotifyPfCheckCachedPages @ 0x140A89BE0
 * Callers:
 *     <none>
 * Callees:
 *     PfSnLogPageFault @ 0x140376CA0 (PfSnLogPageFault.c)
 */

__int64 __fastcall MiNotifyPfCheckCachedPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 i; // rbx

  v4 = *(_QWORD *)(a1 + 160);
  v5 = a3;
  for ( i = *(_QWORD *)(a1 + 152) + (a2 << 12); v5; --v5 )
  {
    PfSnLogPageFault(v4, i, 4LL, a4);
    i += 4096LL;
  }
  return 0LL;
}
