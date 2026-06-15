/*
 * XREFs of sub_14006BC70 @ 0x14006BC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006BC70(__int64 a1)
{
  sub_1400B6010(*(_QWORD *)(a1 + 8));
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
