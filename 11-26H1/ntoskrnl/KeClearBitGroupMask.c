/*
 * XREFs of KeClearBitGroupMask @ 0x140469BAC
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
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
