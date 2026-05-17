/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x18007C34C
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18007C424 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18007C4EC (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18007C50C (RtlpStdLockRelease.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = 0LL;
  v8 = 0LL;
  RtlpStdLockAcquire();
  v4 = *(_QWORD *)(a1 + 152);
  v5 = *(_QWORD *)(a1 + 168) - 8LL;
  v9 = v4;
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
    if ( v5 >= v4 )
      goto LABEL_3;
    v7 = v4 - 4096;
    v8 = 4096LL;
    if ( v7 > *(_QWORD *)(a1 + 144) )
    {
      v9 = v7;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v9, 0LL, &v8, 4096, 4) >= 0 )
      {
        *(_QWORD *)(a1 + 152) = v9;
        goto LABEL_3;
      }
    }
  }
  RtlpStdLockRelease(a1);
  return v2;
}
