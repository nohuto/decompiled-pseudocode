/*
 * XREFs of TppJobpRundownJob @ 0x1800C9BD0
 * Callers:
 *     TpReleaseJobNotification @ 0x1800C9820 (TpReleaseJobNotification.c)
 *     TpWaitForJobNotification @ 0x1800C9890 (TpWaitForJobNotification.c)
 *     TppJobpStopCallbackGeneration @ 0x180159150 (TppJobpStopCallbackGeneration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseHandleStatus @ 0x1800C9DE8 (TppRaiseHandleStatus.c)
 *     NtQueryInformationJobObject @ 0x180161A10 (NtQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x180162470 (ZwSetInformationJobObject.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppJobpRundownJob(__int64 a1, __int64 a2)
{
  bool v2; // zf
  volatile signed __int64 *v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 272) == 0LL;
  v9 = 0LL;
  if ( !v2 )
  {
    v4 = (volatile signed __int64 *)(a1 + 288);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 288), a2);
    v5 = *(_QWORD *)(a1 + 272);
    if ( v5 )
    {
      v8 = 0LL;
      v6 = ZwSetInformationJobObject(v5, 7LL, &v8);
      if ( v6 < 0 || (v6 = NtQueryInformationJobObject(*(_QWORD *)(a1 + 272), 17LL, &v9), v6 < 0) )
      {
        TppRaiseHandleStatus((unsigned int)v6, *(_QWORD *)(a1 + 272), 0LL);
      }
      else
      {
        v9 = (-2LL * v9) | 1;
        v7 = v9 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), v9);
        *(_QWORD *)(a1 + 272) = 0LL;
        RtlReleaseSRWLockExclusive(v4);
        if ( v7 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          (**(void (***)(void))(a1 + 80))();
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v4);
    }
  }
}
