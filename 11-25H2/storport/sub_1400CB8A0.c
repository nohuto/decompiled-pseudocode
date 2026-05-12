/*
 * XREFs of sub_1400CB8A0 @ 0x1400CB8A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 */

LONG __fastcall sub_1400CB8A0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 40) = sub_1400CB67C(
                           *(_QWORD *)a2,
                           *(_QWORD *)(a2 + 8),
                           *(_QWORD *)(a2 + 16),
                           *(_QWORD *)(a2 + 24),
                           (_BYTE *)(a2 + 48),
                           (PVOID *)(a2 + 32));
  return KeSetEvent((PRKEVENT)(a2 + 56), 0, 0);
}
