/*
 * XREFs of RtlpHpVsContextAllocate @ 0x180012CA4
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpVsSlotAllocate @ 0x180012E08 (RtlpHpVsSlotAllocate.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180013650 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpHpVsContextAllocateFinalize @ 0x180013700 (RtlpHpVsContextAllocateFinalize.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextHandleContention @ 0x1800977E0 (RtlpHpVsContextHandleContention.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(_BYTE *a1, unsigned int a2, int a3, unsigned int a4)
{
  struct _TEB *v4; // rax
  int v5; // r10d
  __int64 v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rax
  int v10; // esi
  _BYTE *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 Finalize; // rdi
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+80h] [rbp+8h]

  v4 = NtCurrentTeb();
  v5 = a3 + 2;
  LOWORD(v20) = 0;
  if ( a2 == a3 )
    v5 = a3;
  v7 = (unsigned __int8)(a1[2] & BYTE1(v4->HeapThreadData));
  v8 = ((unsigned int)(v5 + 15) >> 4) + (a1[4] & 1) + 1;
  v9 = v7 + 16LL * *(unsigned __int16 *)a1;
  HIWORD(v20) = ((unsigned int)(v5 + 15) >> 4) + (a1[4] & 1) + 1;
  v10 = 0;
  v18 = 0LL;
  v13 = &a1[64 * (unsigned __int64)*(unsigned __int16 *)&a1[4 * v9]];
  v19 = 0LL;
  if ( (a1[5] & 1) == 0 )
  {
    *((_QWORD *)&v18 + 1) = v13 + 8;
    if ( !(unsigned __int8)RtlTryAcquireSRWLockExclusive(v13 + 8) )
    {
      *((_QWORD *)&v18 + 1) = 0LL;
      v10 = 1;
      if ( (a1[5] & 1) == 0 )
      {
        *((_QWORD *)&v18 + 1) = v13 + 8;
        RtlAcquireSRWLockExclusive(v13 + 8);
      }
    }
  }
  v15 = RtlpHpVsSlotAllocate((_DWORD)a1, (_DWORD)v13, v8, v20, (__int64)&v18);
  if ( v15 )
  {
    if ( (a1[5] & 1) == 0 )
      RtlReleaseSRWLockExclusive(*((_QWORD *)&v18 + 1), v14);
    Finalize = RtlpHpVsContextAllocateFinalize(a1, v15, a2, a4);
  }
  else
  {
    Finalize = 0LL;
  }
  if ( v10 && (unsigned int)(unsigned __int8)a1[2] + 1 > 1 )
    RtlpHpVsContextHandleContention(a1, (unsigned int)v7);
  return Finalize;
}
