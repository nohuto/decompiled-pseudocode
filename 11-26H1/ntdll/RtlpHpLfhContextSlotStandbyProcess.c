/*
 * XREFs of RtlpHpLfhContextSlotStandbyProcess @ 0x1800944D0
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x180092EAC (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextCleanup @ 0x180093938 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x180016630 (RtlpHpLfhHeatMapQuery.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180094ED0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1800952B0 (RtlpHpLfhOwnerFreeListProcess.c)
 */

struct _TEB *__fastcall RtlpHpLfhContextSlotStandbyProcess(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char v3; // si
  struct _TEB *result; // rax
  volatile signed __int64 *v6; // rbp
  _QWORD *v7; // r14
  _QWORD *v8; // r12
  unsigned __int8 *v9; // r15
  int v10; // r9d
  __int64 v11; // r9
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  int v14; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = a2;
  v15[1] = v15;
  result = (struct _TEB *)v15;
  v15[0] = v15;
  if ( *(_QWORD *)(a1 + 160) )
  {
    v6 = (volatile signed __int64 *)(a1 + 128);
    while ( 1 )
    {
      RtlAcquireSRWLockExclusive(v6, a2);
      v7 = *(_QWORD **)(a1 + 160);
      if ( !v7 )
        break;
      *(_QWORD *)(a1 + 160) = *v7;
      RtlReleaseSRWLockExclusive(v6);
      v8 = v7 - 2;
      v9 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v7 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess(a1, v7 - 2, v15, 0LL);
      if ( (v3 & 1) != 0 )
      {
        v11 = 8LL;
      }
      else
      {
        v14 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v9, v10);
        v11 = 4LL;
        if ( v14 >= 1 )
          v11 = 8LL;
      }
      ((void (__fastcall *)(__int64, unsigned __int8 *, _QWORD *, __int64))RtlpHpLfhBucketAddSubsegment)(
        a1,
        v9,
        v15,
        v11);
      result = (struct _TEB *)(v7 + 3);
      if ( (struct _TEB *)result->NtTib.ExceptionList == result )
      {
        RtlAcquireSRWLockExclusive(v6, a2);
        *v8 = *(_QWORD *)(a1 + 152);
        *(_QWORD *)(a1 + 152) = v8;
        result = RtlReleaseSRWLockExclusive(v6);
      }
      else
      {
        *v7 = v2;
        v2 = v7;
      }
      if ( !*(_QWORD *)(a1 + 160) )
        goto LABEL_9;
    }
    result = RtlReleaseSRWLockExclusive(v6);
LABEL_9:
    if ( v2 )
    {
      RtlAcquireSRWLockExclusive(v6, a2);
      v12 = *(_QWORD **)(a1 + 160);
      do
      {
        v13 = (_QWORD *)*v2;
        *v2 = v12;
        v12 = v2;
        *(_QWORD *)(a1 + 160) = v2;
        v2 = v13;
      }
      while ( v13 );
      return RtlReleaseSRWLockExclusive(v6);
    }
  }
  return result;
}
