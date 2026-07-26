/*
 * XREFs of ndisDmaTelemetryBucketizeTimeInUs @ 0x1400CC014
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x140065800 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x14008F1E0 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x140163240 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

unsigned __int8 __fastcall ndisDmaTelemetryBucketizeTimeInUs(unsigned __int64 a1)
{
  unsigned __int8 i; // bl
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisShared::KLockThisShared((KLockThisShared *)&v4, &stru_14011E880);
  for ( i = 0; i < (unsigned __int8)byte_14011F1C8; ++i )
  {
    if ( qword_14011EFC8[i] > a1 )
      goto LABEL_6;
  }
  i = byte_14011F1C8;
LABEL_6:
  KLockHolder::~KLockHolder(&v4);
  return i;
}
