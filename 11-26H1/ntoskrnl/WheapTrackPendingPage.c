/*
 * XREFs of WheapTrackPendingPage @ 0x140850828
 * Callers:
 *     WheapLogPageOfflineAttemptEvent @ 0x14084F764 (WheapLogPageOfflineAttemptEvent.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WheapPushPendingOfflineWrapper @ 0x1408507F8 (WheapPushPendingOfflineWrapper.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char __fastcall WheapTrackPendingPage(struct _SINGLE_LIST_ENTRY *a1)
{
  unsigned int v2; // edx
  _SINGLE_LIST_ENTRY *Pool2; // rax
  _DWORD Src[6]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v2 = *(_DWORD *)off_140E09538 << 12;
  if ( v2 > 0xA00000 )
    v2 = 10485760;
  if ( 16LL * *(int *)&CmpContextListLock.WaitBlockFill11[64] >= (unsigned __int64)v2 )
  {
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 32;
    Src[3] = 1;
    Src[5] = -2147483597;
    Src[4] = 1280201291;
    v6 = 2LL;
    LOBYTE(Pool2) = WheaLogInternalEvent(Src);
  }
  else
  {
    Pool2 = (_SINGLE_LIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&CmpContextListLock.WaitBlockFill11[64]);
      Pool2[1].Next = a1;
      LOBYTE(Pool2) = (unsigned __int8)WheapPushPendingOfflineWrapper(Pool2);
    }
  }
  return (char)Pool2;
}
