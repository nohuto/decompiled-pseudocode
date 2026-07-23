/*
 * XREFs of TppCleanupGroupAddMember @ 0x180039110
 * Callers:
 *     TpAllocWork @ 0x180038DB0 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x180038F40 (TppInitializeTimer.c)
 *     TpAllocTimer @ 0x180039180 (TpAllocTimer.c)
 *     TpAllocWait @ 0x1800399E0 (TpAllocWait.c)
 *     TppAllocAlpcCompletion @ 0x180085234 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800856E0 (TpAllocIoCompletion.c)
 *     TpSimpleTryPost @ 0x1800D7DF0 (TpSimpleTryPost.c)
 *     TpAllocJobNotification @ 0x1800FAF50 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppCleanupGroupAddMember(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdi
  _RTL_SRWLOCK **Value; // rax
  _RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h]

  v4 = *(_RTL_SRWLOCK **)(a1 + 16);
  RtlAcquireSRWLockExclusive(v4 + 1);
  v2 = (_RTL_SRWLOCK *)(a1 + 40);
  Value = (_RTL_SRWLOCK **)v4[3].Value;
  if ( *Value != &v4[2] )
    __fastfail(3u);
  v2->Value = (unsigned __int64)&v4[2];
  v2[1].Value = (unsigned __int64)Value;
  *Value = v2;
  v4[3].Value = (unsigned __int64)v2;
  RtlReleaseSRWLockExclusive(v4 + 1);
}
