/*
 * XREFs of WheapTrackPendingPage @ 0x1407B9E64
 * Callers:
 *     WheapLogPageOfflineAttemptEvent @ 0x1407B8DC0 (WheapLogPageOfflineAttemptEvent.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     WheapPushPendingOfflineWrapper @ 0x1407B9E34 (WheapPushPendingOfflineWrapper.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

char __fastcall WheapTrackPendingPage(struct _SINGLE_LIST_ENTRY *a1)
{
  unsigned int v2; // edx
  _SINGLE_LIST_ENTRY *Pool2; // rax
  _DWORD Src[8]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_DWORD *)off_140E095F8 << 12;
  if ( v2 > 0xA00000 )
    v2 = 10485760;
  if ( 16LL * dword_140EF7520 >= (unsigned __int64)v2 )
  {
    Src[7] = 0;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 32;
    Src[3] = 1;
    Src[5] = -2147483597;
    Src[4] = 1280201291;
    Src[6] = 2;
    LOBYTE(Pool2) = WheaLogInternalEvent(Src);
  }
  else
  {
    Pool2 = (_SINGLE_LIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      _InterlockedIncrement(&dword_140EF7520);
      Pool2[1].Next = a1;
      LOBYTE(Pool2) = (unsigned __int8)WheapPushPendingOfflineWrapper(Pool2);
    }
  }
  return (char)Pool2;
}
