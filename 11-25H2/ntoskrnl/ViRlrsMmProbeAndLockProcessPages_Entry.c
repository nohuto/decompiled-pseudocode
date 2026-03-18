/*
 * XREFs of ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140B8F7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 */

__int64 ViRlrsMmProbeAndLockProcessPages_Entry()
{
  __int64 result; // rax

  result = VfFaultsInjectResourceFailure(0);
  if ( (_DWORD)result == 1 )
    RtlRaiseStatus(-1073741663);
  return result;
}
