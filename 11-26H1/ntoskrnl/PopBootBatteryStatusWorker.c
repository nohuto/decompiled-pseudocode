/*
 * XREFs of PopBootBatteryStatusWorker @ 0x140770870
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall PopBootBatteryStatusWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __m128i v4; // xmm1
  __m128i v6; // [rsp+20h] [rbp-40h] BYREF
  int *v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-28h]
  int v9; // [rsp+78h] [rbp+18h] BYREF
  int v10; // [rsp+80h] [rbp+20h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, a2, a3, a4);
  v6 = *(__m128i *)&stru_140F10070.Header.WaitListHead.Blink;
  PopReleaseRwLock(&stru_140F10070);
  v4 = v6;
  v6.m128i_i64[1] = 4LL;
  v6.m128i_i64[0] = (__int64)&v9;
  v8 = 4LL;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
  v7 = &v10;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_BOOT_BATTERY_STATUS_CONTROL_EVENT, 2LL, &v6);
}
