/*
 * XREFs of ?MeasureDurationinMS@LatencySampleStartData@@QEAAN_K@Z @ 0x180161DE0
 * Callers:
 *     ?SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z @ 0x180161F10 (-SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall LatencySampleStartData::MeasureDurationinMS(LatencySampleStartData *this, __int64 a2)
{
  __int64 v4; // rcx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  Frequency.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  v4 = 1000000 * (a2 - *((_QWORD *)this + 2));
  if ( v4 <= 0 || Frequency.QuadPart <= 0 )
    return 0.0;
  else
    return (double)(int)v4 / (double)(int)Frequency.LowPart / 1000.0;
}
