/*
 * XREFs of TpReleaseJobNotification @ 0x1800C6FA0
 * Callers:
 *     <none>
 * Callees:
 *     TppJobpValidateJob @ 0x1800C704C (TppJobpValidateJob.c)
 *     TppCleanupGroupMemberRelease @ 0x1800C7300 (TppCleanupGroupMemberRelease.c)
 *     TppJobpRundownJob @ 0x1800C7350 (TppJobpRundownJob.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpReleaseJobNotification(__int64 a1)
{
  __int64 result; // rax

  result = TppJobpValidateJob(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( (_DWORD)result )
    {
      TppJobpRundownJob(a1);
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return result;
}
