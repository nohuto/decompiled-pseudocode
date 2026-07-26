/*
 * XREFs of ?GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ @ 0x1400CBDC4
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x140065800 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x14008F1E0 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KStopwatch::GetElapsedTimeInMicroseconds(KStopwatch *this)
{
  __int64 v1; // r8
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 && (v2 = *((_QWORD *)this + 2), v2 >= *(_QWORD *)this) )
    return 1000000 * (v2 - *(_QWORD *)this) / v1;
  else
    return 0LL;
}
