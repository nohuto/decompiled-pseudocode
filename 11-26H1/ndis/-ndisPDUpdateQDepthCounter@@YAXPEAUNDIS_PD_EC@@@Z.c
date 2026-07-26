/*
 * XREFs of ?ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z @ 0x1400A7224
 * Callers:
 *     ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1400A69E0 (-NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z.c)
 * Callees:
 *     ?NdisPDPIQueryQueueDepth@@YAXPEBU_NDIS_PD_QUEUE@@PEA_K@Z @ 0x1400A68B0 (-NdisPDPIQueryQueueDepth@@YAXPEBU_NDIS_PD_QUEUE@@PEA_K@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisPDUpdateQDepthCounter(LARGE_INTEGER *a1)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  const struct _NDIS_PD_QUEUE **i; // rbx
  unsigned __int64 QuadPart; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  KLockThisExclusive v8; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( !PerformanceFrequency.QuadPart )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    qword_14011EE88 = PerformanceFrequency.QuadPart / 100;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( PerformanceCounter.QuadPart - a1[18].QuadPart >= (unsigned __int64)qword_14011EE88 )
  {
    KLockThisExclusive::KLockThisExclusive(&v8, qword_14011EE98);
    a1[18] = PerformanceCounter;
    for ( i = (const struct _NDIS_PD_QUEUE **)a1[15].QuadPart;
          i != (const struct _NDIS_PD_QUEUE **)&a1[15];
          i = (const struct _NDIS_PD_QUEUE **)*i )
    {
      if ( *((_DWORD *)i + 12) )
      {
        NdisPDPIQueryQueueDepth(*(i - 25), &v9);
        QuadPart = a1[19].QuadPart;
        v5 = *((unsigned int *)i + 13);
        if ( QuadPart >= 0x64 )
          v6 = (v9 + 99 * v5) / 0x64;
        else
          v6 = (v9 + v5 * QuadPart) / (QuadPart + 1);
        v7 = *((unsigned int *)i - 23);
        *((_DWORD *)i + 13) = v6;
        *((_DWORD *)i + 14) = 100 * v6 / v7;
      }
    }
    ++a1[19].QuadPart;
    KLockHolder::~KLockHolder(&v8);
  }
}
