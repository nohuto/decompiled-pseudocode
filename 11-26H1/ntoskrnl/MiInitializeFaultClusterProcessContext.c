/*
 * XREFs of MiInitializeFaultClusterProcessContext @ 0x140B3358C
 * Callers:
 *     MiInitializeBootProcess @ 0x140CF8124 (MiInitializeBootProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiInitializeFaultClusterProcessContext(_QWORD *a1)
{
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  result = a1 + 1;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  return result;
}
