/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x140999F24
 * Callers:
 *     MiCreatePebOrTeb @ 0x140999EB0 (MiCreatePebOrTeb.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     RtlFindClearBitsAndSetEx @ 0x1404932B0 (RtlFindClearBitsAndSetEx.c)
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
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
  int v26; // ebx
  int NewSubAllocatedRegion; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  int v35[22]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v36; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v37; // [rsp+B2h] [rbp+Ah]
  __int64 v38; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v39; // [rsp+C0h] [rbp+18h]

  v39 = a3;
  v38 = a2;
  v37 = HIWORD(a1);
  v35[0] = 0;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v36 = 0;
  v7 = (unsigned __int64)(a2 + 4095) >> 12;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1040);
  --CurrentThread->SpecialApcDisable;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, (__int64)a3, a4);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v32, v31);
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
            v33 = *i;
            if ( *(_QWORD **)(*i + 8LL) != i || (v34 = (_QWORD *)i[1], (_QWORD *)*v34 != i) )
              __fastfail(3u);
            *v34 = v33;
            *(_QWORD *)(v33 + 8) = v34;
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
          && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v30, v29);
        }
        return (unsigned int)NewSubAllocatedRegion;
      }
    }
    MiReferenceVad(v4);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    MiLockVad((__int64)CurrentThread, v4, v19, v20);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v22, v21);
    if ( (unsigned int)MiVadDeleted(v4) )
    {
      MiUnlockAndDereferenceVad(v24);
      return 3221225738LL;
    }
    VadFlags = MiReadVadFlags((__int64)v24);
    v26 = MiCommitExistingVad(v4, v5, v38, (VadFlags >> 5) & 0x1F, 0LL, 0, 0, 0LL, (__int64)v35, &v36);
    if ( v26 < 0 )
    {
      MiFreeToSubAllocatedRegion(v4);
    }
    else
    {
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v4);
      *v39 = v5;
    }
    return (unsigned int)v26;
  }
}
