/*
 * XREFs of MiQuerySystemBase @ 0x140495028
 * Callers:
 *     MiInitializeSystemCache @ 0x14086A918 (MiInitializeSystemCache.c)
 *     MmMarkHiberPhase @ 0x140C01120 (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 2LL * a1;
  result = qword_140E37B70[v2];
  *a2 = qword_140E37B70[v2 + 1];
  return result;
}
