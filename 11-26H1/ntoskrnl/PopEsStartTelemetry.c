/*
 * XREFs of PopEsStartTelemetry @ 0x140B4F63C
 * Callers:
 *     PopEsExitSleep @ 0x140B4F60C (PopEsExitSleep.c)
 *     PopEsWorker @ 0x140B72400 (PopEsWorker.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

char __fastcall PopEsStartTelemetry(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // ecx
  char v7; // al
  char result; // al
  __m128i v9; // [rsp+20h] [rbp-38h]

  v4 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, v4, a3, a4);
  v9 = *(__m128i *)&stru_140F10070.Header.WaitListHead.Blink;
  PopReleaseRwLock(&stru_140F10070);
  v5 = 0;
  PopEsLastStateChangeTimeStamp = v4;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
  v7 = _mm_cvtsi128_si32(v9);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v9, 1)) )
    v5 = v6;
  PopEsAcOnline = v7;
  PopEsLastBatteryThreshold = dword_140F10710;
  result = byte_140F10715;
  PopEsLastUserAwaySetting = byte_140F10715;
  PopEsLastBatteryCharge = v5;
  return result;
}
