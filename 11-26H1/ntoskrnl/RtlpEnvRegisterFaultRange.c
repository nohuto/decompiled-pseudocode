/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x14063DA58
 * Callers:
 *     RtlCSparseBitmapStart @ 0x14063CD08 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x140704668 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
