/*
 * XREFs of RtlXRestoreS @ 0x1403D7DE0
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1403D60D8 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x1405EF3C0 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x140A4D570 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x1403D883C (RtlXRestore.c)
 */

__int64 __fastcall RtlXRestoreS(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXRestore(_RCX, a2, a2);
  result = a2 & *(_QWORD *)(_RCX + 520);
  __asm { xrstors byte ptr [rcx] }
  return result;
}
