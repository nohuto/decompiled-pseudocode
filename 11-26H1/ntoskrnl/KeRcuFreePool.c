/*
 * XREFs of KeRcuFreePool @ 0x1405F0010
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuStartGracePeriod @ 0x1405242A4 (KiRcuStartGracePeriod.c)
 */

void __fastcall KeRcuFreePool(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[5] = 0LL;
  a1[3] = 14LL;
  a1[4] = a2;
  KiRcuStartGracePeriod(a1);
}
