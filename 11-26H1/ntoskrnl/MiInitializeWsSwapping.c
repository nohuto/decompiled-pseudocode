/*
 * XREFs of MiInitializeWsSwapping @ 0x14087A814
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  a1[160] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[157] = MiContractWsSwapPageFileWorker;
  a1[158] = a1;
  a1[155] = 0LL;
  return result;
}
