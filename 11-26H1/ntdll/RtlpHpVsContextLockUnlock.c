/*
 * XREFs of RtlpHpVsContextLockUnlock @ 0x180097148
 * Callers:
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x180096BC0 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E9F0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x180097620 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RtlpHpVsContextLockUnlock(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int16 *v6; // rbx
  __int64 v7; // rsi
  volatile signed __int64 *v8; // rcx
  _BYTE v9[256]; // [rsp+20h] [rbp-118h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v9);
  if ( (_DWORD)result )
  {
    v6 = (unsigned __int16 *)v9;
    v7 = (unsigned int)result;
    do
    {
      result = (unsigned __int64)*v6 << 6;
      if ( a2 )
      {
        v8 = (volatile signed __int64 *)(result + a1 + 8);
        if ( a2 >= 2 )
          *v8 = 1LL;
        if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
          result = (unsigned __int64)RtlReleaseSRWLockExclusive(v8);
      }
      else if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        result = RtlAcquireSRWLockExclusive((volatile signed __int64 *)(result + a1 + 8), v5);
      }
      v6 += 2;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
