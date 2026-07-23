/*
 * XREFs of EtwpFixBootSystemTime @ 0x140CE6BB0
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1404401A0 (RtlGetMultiTimePrecise.c)
 *     KeQueryBootTimeValues @ 0x1404C7020 (KeQueryBootTimeValues.c)
 */

__int64 EtwpFixBootSystemTime()
{
  int MultiTimePrecise; // edi
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER SystemTimePrecise; // r8
  unsigned __int64 v3; // rbx
  unsigned __int128 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-20h] BYREF
  LARGE_INTEGER v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  LARGE_INTEGER v9; // [rsp+68h] [rbp+28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF

  v9.QuadPart = 0LL;
  v7.QuadPart = 0LL;
  LODWORD(v8) = 0;
  v10 = 0LL;
  v6 = 0LL;
  KeQueryBootTimeValues(&stru_140F03830.NextProcessor, &v9, &v10);
  stru_140F03830.AffinityVersion = v9.QuadPart - v10;
  MultiTimePrecise = RtlGetMultiTimePrecise((LARGE_INTEGER *)&v6, 5, (int *)&v8);
  if ( MultiTimePrecise >= 0 && (v8 & 1) != 0 )
  {
    PerformanceCounter.QuadPart = v6;
  }
  else
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MultiTimePrecise < 0 )
      goto LABEL_7;
  }
  if ( (v8 & 4) != 0 )
  {
    SystemTimePrecise = v7;
    goto LABEL_8;
  }
LABEL_7:
  SystemTimePrecise = RtlGetSystemTimePrecise();
LABEL_8:
  v3 = PerformanceCounter.QuadPart - (unsigned __int64)stru_140F03830.UserAffinity;
  v8 = 0LL;
  if ( MEMORY[0xFFFFF78000000369] )
    v3 <<= MEMORY[0xFFFFF78000000369];
  v4 = v3 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
  *(_QWORD *)&stru_140F03830.NextProcessor = SystemTimePrecise.QuadPart - *((_QWORD *)&v4 + 1);
  return v4;
}
