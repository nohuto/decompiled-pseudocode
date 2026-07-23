/*
 * XREFs of ViDeadlockCheckStackLimits @ 0x140C4B4E4
 * Callers:
 *     ViDeadlockCanProceed @ 0x140C4B470 (ViDeadlockCanProceed.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 */

ULONG ViDeadlockCheckStackLimits()
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // rcx
  ULONG result; // eax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v3 = (unsigned __int64)&v3;
  v5 = 0LL;
  if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v4, (__int64)&v5) )
  {
    v0 = v4;
    v1 = v5;
  }
  else
  {
    v0 = 0LL;
    v1 = 0LL;
  }
  result = v3;
  if ( v3 < v0 || (result = v3, v3 > v1) )
  {
    if ( VfVerifyMode > 2 )
    {
      result = ViStackSwitchAlreadyReported;
      if ( !ViStackSwitchAlreadyReported )
      {
        result = DbgPrintEx(0x5Du, 0, "DVRF: Driver switched stacks using an unsupported method!\n");
        ViStackSwitchAlreadyReported = 1;
      }
    }
  }
  return result;
}
