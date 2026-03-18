/*
 * XREFs of RtlCreateAtomTable @ 0x140B224F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x1404D3CC0 (RtlCreateAtomTableEx.c)
 */

__int64 __fastcall RtlCreateAtomTable(unsigned int a1, _QWORD *a2)
{
  return RtlCreateAtomTableEx(a1, 0, a2);
}
