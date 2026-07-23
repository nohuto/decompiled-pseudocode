/*
 * XREFs of MiReferenceNonPagedMemoryProcessList @ 0x140883F14
 * Callers:
 *     MmScrubMemory @ 0x1408843D4 (MmScrubMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReferenceNonPagedMemoryProcessList(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  void *i; // rcx
  __int64 result; // rax
  void *v6; // r14
  _DWORD *v7; // rcx
  __int64 v8; // r12
  int CurrentProcessorColor; // eax
  char *PoolMm; // rax
  char *v11; // r15
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int64 v21; // r15
  int v22; // eax
  char *v23; // rax
  char *v24; // r14
  __int64 v25; // r8
  PVOID Object[2]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v27; // [rsp+30h] [rbp-49h]
  __int128 v28; // [rsp+40h] [rbp-39h]
  __int128 v29; // [rsp+50h] [rbp-29h]
  __int128 v30; // [rsp+60h] [rbp-19h]
  __int128 v31; // [rsp+70h] [rbp-9h]
  __int128 v32; // [rsp+80h] [rbp+7h]
  __int128 v33; // [rsp+90h] [rbp+17h]

  memset_0(Object, 0, 0x80uLL);
  v2 = 0LL;
  v3 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  for ( i = 0LL; ; i = v6 )
  {
    result = PsGetNextProcess(i);
    v6 = (void *)result;
    if ( !result )
      break;
    if ( MiGetProcessPartition(result) == *(_QWORD *)(a1 + 48) )
    {
      if ( v7[375] )
      {
        ObfReferenceObjectWithTag(v7, 0x72506D4Du);
        Object[v3++] = v6;
        if ( v3 == 16 )
        {
          v8 = *(_QWORD *)(a1 + 64) + 16LL;
          CurrentProcessorColor = MmGetCurrentProcessorColor();
          PoolMm = (char *)ExAllocatePoolMm(64LL, 8 * v8, 1667450189, CurrentProcessorColor | 0x80000000);
          v11 = PoolMm;
          if ( !PoolMm )
          {
            do
              result = ObfDereferenceObjectWithTag(Object[v2++], 0x72506D4Du);
            while ( v2 < 0x10 );
            return result;
          }
          v12 = *(_QWORD *)(a1 + 64);
          if ( v12 )
          {
            memmove(PoolMm, *(const void **)(a1 + 72), 8 * v12);
            ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
          }
          v13 = *(_QWORD *)(a1 + 64);
          v3 = 0LL;
          v14 = v27;
          *(_OWORD *)&v11[8 * v13] = *(_OWORD *)Object;
          v15 = v28;
          *(_OWORD *)&v11[8 * v13 + 16] = v14;
          v16 = v29;
          *(_OWORD *)&v11[8 * v13 + 32] = v15;
          v17 = v30;
          *(_OWORD *)&v11[8 * v13 + 48] = v16;
          v18 = v31;
          *(_OWORD *)&v11[8 * v13 + 64] = v17;
          v19 = v32;
          *(_OWORD *)&v11[8 * v13 + 80] = v18;
          v20 = v33;
          *(_OWORD *)&v11[8 * v13 + 96] = v19;
          *(_OWORD *)&v11[8 * v13 + 112] = v20;
          *(_QWORD *)(a1 + 64) = v8;
          *(_QWORD *)(a1 + 72) = v11;
        }
      }
    }
  }
  if ( v3 )
  {
    v21 = v3 + *(_QWORD *)(a1 + 64);
    v22 = MmGetCurrentProcessorColor();
    v23 = (char *)ExAllocatePoolMm(64LL, 8 * v21, 1667450189, v22 | 0x80000000);
    v24 = v23;
    if ( v23 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        memmove(v23, *(const void **)(a1 + 72), 8 * v25);
        ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
      }
      result = (__int64)memmove(&v24[8 * *(_QWORD *)(a1 + 64)], Object, 8 * v3);
      *(_QWORD *)(a1 + 64) = v21;
      *(_QWORD *)(a1 + 72) = v24;
    }
    else
    {
      do
        result = ObfDereferenceObjectWithTag(Object[v2++], 0x72506D4Du);
      while ( v2 < v3 );
    }
  }
  return result;
}
