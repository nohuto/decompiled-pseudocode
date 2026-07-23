/*
 * XREFs of KiLogControlProtectionUserModeReturnMismatch @ 0x1404B71D4
 * Callers:
 *     KiProcessControlProtection @ 0x1404F1210 (KiProcessControlProtection.c)
 * Callees:
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x140830A20 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     KiShouldLogUserModeReturnMismatch @ 0x140AC4E58 (KiShouldLogUserModeReturnMismatch.c)
 */

__int64 __fastcall KiLogControlProtectionUserModeReturnMismatch(unsigned int a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rsi
  __int64 result; // rax

  Process = KeGetCurrentThread()->Process;
  result = KiShouldLogUserModeReturnMismatch(Process, a1, *(_QWORD *)(a3 + 8));
  if ( (_BYTE)result )
    return EtwTimLogControlProtectionUserModeReturnMismatch(a1, Process, a3);
  return result;
}
