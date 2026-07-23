/*
 * XREFs of KeRcuFreePool @ 0x1405F2980
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuStartGracePeriod @ 0x140526914 (KiRcuStartGracePeriod.c)
 */

void __fastcall KeRcuFreePool(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = 14LL;
  *(_QWORD *)(a1 + 32) = a2;
  KiRcuStartGracePeriod((PVOID **)a1);
}
