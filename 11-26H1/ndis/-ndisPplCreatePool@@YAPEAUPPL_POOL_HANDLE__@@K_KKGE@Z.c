/*
 * XREFs of ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x14005B4A0
 * Callers:
 *     NdisAllocateNetBufferPool @ 0x14005AEA0 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x14005B160 (NdisAllocateNetBufferListPool.c)
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 */

struct PPL_POOL_HANDLE__ *__fastcall ndisPplCreatePool(
        __int64 a1,
        SIZE_T a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  ULONG Tag; // r15d
  unsigned __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  struct PPL_POOL_HANDLE__ *result; // rax
  struct PPL_POOL_HANDLE__ *v12; // r14
  unsigned int v13; // esi
  char *v14; // rbx

  Tag = a3;
  v7 = ndisMaxNumberOfProcessors + 1;
  if ( ndisMaxNumberOfProcessors <= 1 )
    v7 = ndisMaxNumberOfProcessors;
  v8 = v7;
  v10 = v7;
  v9 = v7 << 8;
  if ( !is_mul_ok(0x100uLL, v10) || v9 + 128 < v9 )
    return 0LL;
  result = (struct PPL_POOL_HANDLE__ *)ExAllocatePool2(72LL, v9 + 128, a3);
  v12 = result;
  if ( result )
  {
    *((_OWORD *)result + 1) = 0LL;
    *((_QWORD *)result + 4) = 0LL;
    *(_QWORD *)result = 0LL;
    KeInitializeSpinLock((PKSPIN_LOCK)result + 1);
    v13 = 0;
    v14 = (char *)v12 + 128;
    if ( v8 )
    {
      if ( a5 )
      {
        do
        {
          if ( v14 )
          {
            *(_OWORD *)(v14 + 216) = 0LL;
            *(_OWORD *)(v14 + 232) = 0LL;
            *((_QWORD *)v14 + 31) = 0LL;
            memset(v14, 0, 0xD0uLL);
            KeInitializeSpinLock((PKSPIN_LOCK)v14 + 26);
            *(_DWORD *)(v14 + 217) = 0;
            *(_WORD *)(v14 + 221) = 0;
            v14[223] = 0;
            *((_OWORD *)v14 + 14) = 0LL;
            *((_OWORD *)v14 + 15) = 0LL;
          }
          if ( !v13 )
          {
            ExInitializeLookasideListEx(
              (PLOOKASIDE_LIST_EX)v14,
              (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
              (PFREE_FUNCTION_EX)ndisFreeNblToNPagedPool,
              NonPagedPoolNx,
              0,
              a2,
              Tag,
              0x400u);
            v14[216] = 1;
          }
          InitializeSListHead((PSLIST_HEADER)v14 + 8);
          *((_QWORD *)v14 + 24) = v14;
          ++v13;
          *((_QWORD *)v14 + 25) = v14 + 128;
          v14 += 256;
        }
        while ( v13 < v8 );
      }
      else
      {
        do
        {
          if ( v14 )
          {
            *(_OWORD *)(v14 + 216) = 0LL;
            *(_OWORD *)(v14 + 232) = 0LL;
            *((_QWORD *)v14 + 31) = 0LL;
            memset(v14, 0, 0xD0uLL);
            KeInitializeSpinLock((PKSPIN_LOCK)v14 + 26);
            *(_DWORD *)(v14 + 217) = 0;
            *(_WORD *)(v14 + 221) = 0;
            v14[223] = 0;
            *((_OWORD *)v14 + 14) = 0LL;
            *((_OWORD *)v14 + 15) = 0LL;
          }
          if ( !v13 )
          {
            ExInitializeLookasideListEx(
              (PLOOKASIDE_LIST_EX)v14,
              (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
              (PFREE_FUNCTION_EX)ndisFreeToNPagedPool,
              NonPagedPoolNx,
              0,
              a2,
              Tag,
              0x400u);
            v14[216] = 1;
          }
          InitializeSListHead((PSLIST_HEADER)v14 + 8);
          *((_QWORD *)v14 + 24) = v14;
          ++v13;
          *((_QWORD *)v14 + 25) = v14 + 128;
          v14 += 256;
        }
        while ( v13 < v8 );
      }
    }
    return v12;
  }
  return result;
}
