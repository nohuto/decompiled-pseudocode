/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x1409C8F44
 * Callers:
 *     MiCreatePebOrTeb @ 0x1409C8ED0 (MiCreatePebOrTeb.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MiReferenceVad @ 0x14027E890 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027F6FC (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403155B4 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140316ED0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x140480A68 (MiVadDeleted.c)
 *     RtlFindClearBitsAndSetEx @ 0x140499760 (RtlFindClearBitsAndSetEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x14095F0C4 (MiFreeToSubAllocatedRegion.c)
 *     MiCommitExistingVad @ 0x1409C7300 (MiCommitExistingVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 */

__int64 __fastcall MiAllocateFromSubAllocatedRegion(
        int a1,
        __int64 a2,
        unsigned __int64 *a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v7; // r12
  __int64 Process; // rbp
  __int64 v9; // rsi
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  _QWORD *v12; // r13
  _QWORD *i; // rsi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  volatile signed __int32 *v24; // rcx
  unsigned int VadFlags; // eax
  __int64 v26; // rsi
  __int64 v27; // rdx
  int v28; // ebx
  int NewSubAllocatedRegion; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  int v37[22]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v38; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v39; // [rsp+B2h] [rbp+Ah]
  __int64 v40; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v41; // [rsp+C0h] [rbp+18h]

  v41 = a3;
  v40 = a2;
  v39 = HIWORD(a1);
  v37[0] = 0;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v38 = 0;
  v7 = (unsigned __int64)(a2 + 4095) >> 12;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1040);
  --CurrentThread->SpecialApcDisable;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, (__int64)a3, a4);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v34, v33);
    return 3221225738LL;
  }
  else
  {
    v12 = (_QWORD *)(v9 + 1160);
    while ( 1 )
    {
      LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process, v10, v11);
      for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
      {
        ClearBitsAndSet = RtlFindClearBitsAndSetEx(i - 2, v7, (unsigned __int64)*((unsigned int *)i + 8) >> 2);
        v15 = ClearBitsAndSet;
        if ( ClearBitsAndSet != -1LL )
        {
          *((_DWORD *)i + 6) += v7;
          v16 = i[4] & 3 | (4 * (v7 + ClearBitsAndSet));
          v17 = *((_DWORD *)i + 6);
          *((_DWORD *)i + 8) = v16;
          if ( v17 >= *((_DWORD *)i + 7) )
          {
            v35 = *i;
            if ( *(_QWORD **)(*i + 8LL) != i || (v36 = (_QWORD *)i[1], (_QWORD *)*v36 != i) )
              __fastfail(3u);
            *v36 = v35;
            *(_QWORD *)(v35 + 8) = v36;
            *i = 0LL;
          }
          v4 = i[2];
          v5 = (v15 << 12)
             + ((*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12);
          break;
        }
      }
      UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
      if ( v4 )
        break;
      NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion(v18, v7);
      if ( NewSubAllocatedRegion < 0 )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        v23 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v23
          && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v32, v31);
        }
        return (unsigned int)NewSubAllocatedRegion;
      }
    }
    MiReferenceVad(v4);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    MiLockVad((__int64)CurrentThread, v4, v19, v20);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v22, v21);
    if ( (unsigned int)MiVadDeleted(v4) )
    {
      MiUnlockAndDereferenceVad(v24);
      return 3221225738LL;
    }
    VadFlags = MiReadVadFlags((__int64)v24);
    v26 = v40;
    v28 = MiCommitExistingVad(v4, v5, v40, (VadFlags >> 5) & 0x1F, 0LL, 0, 0, 0LL, (__int64)v37, &v38);
    if ( v28 < 0 )
    {
      MiFreeToSubAllocatedRegion(v4, v27, v5, v26);
    }
    else
    {
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v4);
      *v41 = v5;
    }
    return (unsigned int)v28;
  }
}
