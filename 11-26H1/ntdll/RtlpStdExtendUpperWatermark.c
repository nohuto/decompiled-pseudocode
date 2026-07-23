/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x18006AB6C
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18006AC44 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18006AD0C (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18006AD2C (RtlpStdLockRelease.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, void *a2)
{
  unsigned __int64 v2; // rsi
  char *v4; // rcx
  unsigned __int64 v5; // rdi
  char *v7; // rcx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v2 = 0LL;
  RegionSize = 0LL;
  RtlpStdLockAcquire();
  v4 = *(char **)(a1 + 152);
  v5 = *(_QWORD *)(a1 + 168) - 8LL;
  BaseAddress = v4;
  if ( *(_BYTE *)(a1 + 128) )
  {
    if ( v5 >= *(_QWORD *)(a1 + 160) )
    {
LABEL_3:
      ++*(_DWORD *)(a1 + 180);
      v2 = v5;
      *(_QWORD *)(a1 + 168) = v5;
    }
  }
  else
  {
    if ( v5 >= (unsigned __int64)v4 )
      goto LABEL_3;
    v7 = v4 - 4096;
    RegionSize = 4096LL;
    if ( (unsigned __int64)v7 > *(_QWORD *)(a1 + 144) )
    {
      BaseAddress = v7;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        *(_QWORD *)(a1 + 152) = BaseAddress;
        goto LABEL_3;
      }
    }
  }
  RtlpStdLockRelease(a1);
  return v2;
}
