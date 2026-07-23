/*
 * XREFs of RtlpHpVsContextLockUnlock @ 0x180071A28
 * Callers:
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800714A4 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E7A0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x1800E09A0 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall RtlpHpVsContextLockUnlock(__int64 a1, int a2)
{
  unsigned int SlotInfo; // eax
  unsigned __int16 *v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _RTL_SRWLOCK *v8; // rcx
  _BYTE v9[256]; // [rsp+20h] [rbp-118h] BYREF

  SlotInfo = RtlpHpVsContextGetSlotInfo(a1, v9);
  if ( SlotInfo )
  {
    v5 = (unsigned __int16 *)v9;
    v6 = SlotInfo;
    do
    {
      v7 = (unsigned __int64)*v5 << 6;
      if ( a2 )
      {
        v8 = (_RTL_SRWLOCK *)(v7 + a1 + 8);
        if ( a2 >= 2 )
          v8->Value = 1LL;
        if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
          RtlReleaseSRWLockExclusive(v8);
      }
      else if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v7 + a1 + 8));
      }
      v5 += 2;
      --v6;
    }
    while ( v6 );
  }
}
