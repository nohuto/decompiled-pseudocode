/*
 * XREFs of ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140C445F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 */

__int64 ViRlrsMmProbeAndLockProcessPages_Entry()
{
  __int64 result; // rax

  result = VfFaultsInjectResourceFailure(0);
  if ( (_DWORD)result == 1 )
    RtlRaiseStatus(-1073741663);
  return result;
}
