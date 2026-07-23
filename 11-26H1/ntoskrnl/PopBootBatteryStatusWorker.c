/*
 * XREFs of PopBootBatteryStatusWorker @ 0x140773870
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall PopBootBatteryStatusWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __m128i v4; // xmm1
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  int *v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-28h]
  int v9; // [rsp+78h] [rbp+18h] BYREF
  int v10; // [rsp+80h] [rbp+20h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, a2, a3, a4);
  v6 = xmmword_140F10840;
  PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
  v4 = (__m128i)v6;
  *((_QWORD *)&v6 + 1) = 4LL;
  *(_QWORD *)&v6 = &v9;
  v8 = 4LL;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
  v7 = &v10;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_BOOT_BATTERY_STATUS_CONTROL_EVENT, 2LL, &v6);
}
