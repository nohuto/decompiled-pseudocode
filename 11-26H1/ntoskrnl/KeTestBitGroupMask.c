/*
 * XREFs of KeTestBitGroupMask @ 0x1404440A0
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeTestBitGroupMask(const signed __int64 *a1, unsigned __int16 a2)
{
  return _bittest64(a1, a2);
}
