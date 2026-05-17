/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x1800FC45C
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x18007C79C (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18007C4EC (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18007C50C (RtlpStdLockRelease.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpStdExtendLowerWatermark(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  RtlpStdLockAcquire((volatile signed __int64 *)a1, a2);
  v5 = *(_QWORD *)(a1 + 160);
  v6 = *(_QWORD *)(a1 + 144);
  v10 = v6;
  v7 = v5 + a2;
  if ( *(_BYTE *)(a1 + 128) )
  {
    if ( v7 > *(_QWORD *)(a1 + 168) )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v7 <= v6 )
  {
LABEL_3:
    ++*(_DWORD *)(a1 + 192);
    v2 = v5;
    *(_QWORD *)(a1 + 160) = v7;
    goto LABEL_4;
  }
  v9 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v6 + v9 < *(_QWORD *)(a1 + 152) && (int)ZwAllocateVirtualMemory(-1LL, &v10, 0LL, &v9, 4096, 4) >= 0 )
  {
    *(_QWORD *)(a1 + 144) = v9 + v10;
    goto LABEL_3;
  }
LABEL_4:
  RtlpStdLockRelease((volatile signed __int64 *)a1);
  return v2;
}
