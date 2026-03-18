/*
 * XREFs of KeClearBitGroupMask @ 0x14047042C
 * Callers:
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeClearBitGroupMask(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = a2 & 7;
  *(_BYTE *)(((unsigned __int64)a2 >> 3) + a1) &= ~(1 << result);
  return result;
}
