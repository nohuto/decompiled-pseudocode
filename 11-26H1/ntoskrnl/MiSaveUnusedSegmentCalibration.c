/*
 * XREFs of MiSaveUnusedSegmentCalibration @ 0x1404ACE64
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1404A9E70 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

ULONG __fastcall MiSaveUnusedSegmentCalibration(ULONG *a1, unsigned __int64 a2)
{
  LARGE_INTEGER v4; // rax
  unsigned __int64 QuadPart; // r8
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
  QuadPart = v4.QuadPart;
  if ( PerformanceFrequency.QuadPart != 10000000 )
  {
    v4.QuadPart = 10000000 * v4.QuadPart / PerformanceFrequency.QuadPart;
    QuadPart = (__int64)(10000000 * QuadPart) / PerformanceFrequency.QuadPart;
  }
  v6 = *a1;
  if ( QuadPart < a2 )
    QuadPart = a2;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( (_DWORD)v6 )
  {
    v4.QuadPart = (LONGLONG)(a1 + 28);
    do
    {
      v9 += *(_QWORD *)(v4.QuadPart - 8);
      v8 += *(_QWORD *)v4.QuadPart;
      v7 += *(_DWORD *)(v4.QuadPart - 28);
      v4.QuadPart += 1512LL;
      --v6;
    }
    while ( v6 );
    if ( v9 )
    {
      v10 = 32LL
          * (_InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E2C950.Header.WaitListHead.Blink, 1u) & 0x3F);
      *(_QWORD *)((char *)&MiState + v10 + 616) = QuadPart - a2;
      *(_QWORD *)((char *)&MiState + v10 + 624) = v9;
      *(_QWORD *)((char *)&MiState + v10 + 632) = v8;
      v4.LowPart = *a1;
      *(ULONG *)((char *)&MiState + v10 + 640) = *a1;
      if ( v7 )
      {
        v4.LowPart |= 0x80000000;
        *(ULONG *)((char *)&MiState + v10 + 640) = v4.LowPart;
      }
    }
  }
  return v4.LowPart;
}
