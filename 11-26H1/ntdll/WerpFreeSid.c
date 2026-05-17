/*
 * XREFs of WerpFreeSid @ 0x180122620
 * Callers:
 *     SendMessageToWERService @ 0x1800CDDCC (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CE0D8 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x1800CE750 (RtlLengthRequiredSid.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v2 = RtlLengthRequiredSid(1u);
  v5 = v2;
  if ( a1 && v2 )
    return ZwFreeVirtualMemory(-1LL, &v4, &v5, 0x8000LL);
  else
    return 3221225485LL;
}
