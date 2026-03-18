/*
 * XREFs of ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140C3E5E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     VfFaultsInjectResourceFailure @ 0x140C347B4 (VfFaultsInjectResourceFailure.c)
 */

__int64 ViRlrsMmProbeAndLockProcessPages_Entry()
{
  __int64 result; // rax

  result = VfFaultsInjectResourceFailure(0);
  if ( (_DWORD)result == 1 )
    RtlRaiseStatus(-1073741663);
  return result;
}
