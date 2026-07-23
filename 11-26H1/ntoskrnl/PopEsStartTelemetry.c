/*
 * XREFs of PopEsStartTelemetry @ 0x140B51ECC
 * Callers:
 *     PopEsExitSleep @ 0x140B51E9C (PopEsExitSleep.c)
 *     PopEsWorker @ 0x140B773E0 (PopEsWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
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
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, v4, a3, a4);
  v9 = (__m128i)xmmword_140F10840;
  PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
  v5 = 0;
  PopEsLastStateChangeTimeStamp = v4;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
  v7 = _mm_cvtsi128_si32(v9);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v9, 1)) )
    v5 = v6;
  PopEsAcOnline = v7;
  PopEsLastBatteryThreshold = (int)PpmIdlePolicyLock.GlobalForegroundListEntry.Flink;
  result = BYTE5(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next);
  PopEsLastUserAwaySetting = BYTE5(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next);
  PopEsLastBatteryCharge = v5;
  return result;
}
