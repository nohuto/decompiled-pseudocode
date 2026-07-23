/*
 * XREFs of MiApplyBytestreamFixup @ 0x1404D8550
 * Callers:
 *     MiSwitchBaseAddress @ 0x140AC9EC0 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
