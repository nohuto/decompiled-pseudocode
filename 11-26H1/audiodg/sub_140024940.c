/*
 * XREFs of sub_140024940 @ 0x140024940
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400249A8 @ 0x1400249A8 (sub_1400249A8.c)
 */

__int64 __fastcall sub_140024940(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v5 = sub_1400249A8(a1 - 16, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
