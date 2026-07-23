/*
 * XREFs of RtlpHpVsContextAllocate @ 0x18005E3D4
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSlotAllocate @ 0x18005E538 (RtlpHpVsSlotAllocate.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x18005ED80 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpHpVsContextAllocateFinalize @ 0x18005EE30 (RtlpHpVsContextAllocateFinalize.c)
 *     RtlpHpVsContextHandleContention @ 0x1800E0854 (RtlpHpVsContextHandleContention.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(_BYTE *a1, unsigned int a2, int a3, unsigned int a4)
{
  struct _TEB *v4; // rax
  int v5; // r10d
  __int64 v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rax
  int v10; // esi
  _RTL_SRWLOCK *v13; // r15
  __int64 v14; // rdi
  __int64 Finalize; // rdi
  PRTL_SRWLOCK SRWLock[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+80h] [rbp+8h]

  v4 = NtCurrentTeb();
  v5 = a3 + 2;
  LOWORD(v19) = 0;
  if ( a2 == a3 )
    v5 = a3;
  v7 = (unsigned __int8)(a1[2] & BYTE1(v4->HeapThreadData));
  v8 = ((unsigned int)(v5 + 15) >> 4) + (a1[4] & 1) + 1;
  v9 = v7 + 16LL * *(unsigned __int16 *)a1;
  HIWORD(v19) = ((unsigned int)(v5 + 15) >> 4) + (a1[4] & 1) + 1;
  v10 = 0;
  *(_OWORD *)SRWLock = 0LL;
  v13 = (_RTL_SRWLOCK *)&a1[64 * (unsigned __int64)*(unsigned __int16 *)&a1[4 * v9]];
  v18 = 0LL;
  if ( (a1[5] & 1) == 0 )
  {
    SRWLock[1] = v13 + 1;
    if ( !RtlTryAcquireSRWLockExclusive(v13 + 1) )
    {
      SRWLock[1] = 0LL;
      v10 = 1;
      if ( (a1[5] & 1) == 0 )
      {
        SRWLock[1] = v13 + 1;
        RtlAcquireSRWLockExclusive(v13 + 1);
      }
    }
  }
  v14 = RtlpHpVsSlotAllocate((_DWORD)a1, (_DWORD)v13, v8, v19, (__int64)SRWLock);
  if ( v14 )
  {
    if ( (a1[5] & 1) == 0 )
      RtlReleaseSRWLockExclusive(SRWLock[1]);
    Finalize = RtlpHpVsContextAllocateFinalize(a1, v14, a2, a4);
  }
  else
  {
    Finalize = 0LL;
  }
  if ( v10 && (unsigned int)(unsigned __int8)a1[2] + 1 > 1 )
    RtlpHpVsContextHandleContention(a1, (unsigned int)v7);
  return Finalize;
}
