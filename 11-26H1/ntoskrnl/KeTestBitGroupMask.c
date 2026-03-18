/*
 * XREFs of KeTestBitGroupMask @ 0x14044BF80
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeTestBitGroupMask(const signed __int64 *a1, unsigned __int16 a2)
{
  return _bittest64(a1, a2);
}
