/*
 * XREFs of TppJobpRundownJob @ 0x1800C7350
 * Callers:
 *     TpReleaseJobNotification @ 0x1800C6FA0 (TpReleaseJobNotification.c)
 *     TpWaitForJobNotification @ 0x1800C7010 (TpWaitForJobNotification.c)
 *     TppJobpStopCallbackGeneration @ 0x180159020 (TppJobpStopCallbackGeneration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseHandleStatus @ 0x1800C7568 (TppRaiseHandleStatus.c)
 *     NtQueryInformationJobObject @ 0x180161910 (NtQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x180162370 (ZwSetInformationJobObject.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppJobpRundownJob(__int64 a1)
{
  bool v1; // zf
  _RTL_SRWLOCK *v3; // rsi
  void *v4; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // rbx
  __int128 JobObjectInformation; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 272) == 0LL;
  v8 = 0LL;
  if ( !v1 )
  {
    v3 = (_RTL_SRWLOCK *)(a1 + 288);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 288));
    v4 = *(void **)(a1 + 272);
    if ( v4 )
    {
      JobObjectInformation = 0LL;
      v5 = ZwSetInformationJobObject(v4, JobObjectAssociateCompletionPortInformation, &JobObjectInformation, 0x10u);
      if ( v5 < 0
        || (v5 = NtQueryInformationJobObject(*(HANDLE *)(a1 + 272), JobObjectCompletionCounter, &v8, 8u, 0LL), v5 < 0) )
      {
        TppRaiseHandleStatus((unsigned int)v5, *(_QWORD *)(a1 + 272), 0LL);
      }
      else
      {
        v8 = (-2LL * v8) | 1;
        v6 = v8 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), v8);
        *(_QWORD *)(a1 + 272) = 0LL;
        RtlReleaseSRWLockExclusive(v3);
        if ( v6 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          (**(void (***)(void))(a1 + 80))();
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v3);
    }
  }
}
