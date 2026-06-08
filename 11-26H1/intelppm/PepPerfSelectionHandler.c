/*
 * XREFs of PepPerfSelectionHandler @ 0x14000F1B0
 * Callers:
 *     <none>
 * Callees:
 *     PepPerformanceFromPercentage @ 0x14000F448 (PepPerformanceFromPercentage.c)
 */

unsigned __int64 __fastcall PepPerfSelectionHandler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // rdx
  unsigned __int64 result; // rax

  v5 = PepPerformanceFromPercentage(a1, *(unsigned int *)(a3 + 16), a3, a4);
  v7 = 0LL;
  if ( !*(_BYTE *)(a3 + 72) )
    v7 = v5;
  *(_QWORD *)a3 = v7;
  v8 = *(unsigned int *)(v6 + 64);
  if ( v5 < (unsigned int)v8 )
    v8 = v5;
  result = v8
         * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v6 + 40) + 20LL)
         / *(unsigned int *)(*(_QWORD *)(v6 + 40) + 8LL);
  *(_DWORD *)(a3 + 20) = result;
  return result;
}
