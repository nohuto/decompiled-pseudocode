/*
 * XREFs of MiFreeToSubAllocatedRegion @ 0x140A04984
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MmDeleteTeb @ 0x140A048C4 (MmDeleteTeb.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 */

void __fastcall MiFreeToSubAllocatedRegion(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // edx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned __int64 LockedVadEvent; // r15
  __int64 v11; // rdi
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  int v18; // r9d
  bool v19; // r11
  unsigned __int64 v20; // r10
  unsigned __int64 i; // rdx
  unsigned __int64 v22; // rax
  bool v23; // bl
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 Process; // [rsp+28h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LockedVadEvent = MiLocateLockedVadEvent(BugCheckParameter2, 0x40u);
  if ( !LockedVadEvent )
    goto LABEL_18;
  v11 = *(unsigned int *)(BugCheckParameter2 + 24);
  v12 = v7 - 63;
  v13 = *(unsigned __int8 *)(BugCheckParameter2 + 32);
  v14 = (unsigned __int64)(a4 + 4095) >> 12;
  LOCK_PAGE_TABLE_COMMITMENT(v8, (__int64)v9, v8, v9);
  RtlClearBitsEx(LockedVadEvent + 24, (a3 - ((v11 | ((unsigned __int64)v13 << 32)) << 12)) >> 12, v14);
  v15 = *(unsigned int *)(LockedVadEvent + 68);
  v16 = *(_DWORD *)(LockedVadEvent + 64) - v14;
  *(_DWORD *)(LockedVadEvent + 64) = v16;
  if ( v14 + v16 >= v15 && v16 < (unsigned int)v15 )
  {
    v27 = (_QWORD *)(LockedVadEvent + 40);
    v28 = 16LL * (*(_DWORD *)(LockedVadEvent + 72) & 3) + *(_QWORD *)(Process + 1040) + 1160LL;
    v29 = *(_QWORD *)v28;
    if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 )
      goto LABEL_22;
    *v27 = v29;
    *(_QWORD *)(LockedVadEvent + 48) = v28;
    *(_QWORD *)(v29 + 8) = v27;
    *(_QWORD *)v28 = v27;
  }
  v17 = 0;
  v18 = 0;
  v19 = *(_DWORD *)(LockedVadEvent + 64) == 0;
  v20 = a3 + a4 - 1;
  for ( i = *(_QWORD *)(BugCheckParameter2 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 8) == 2 )
    {
      v22 = PfpPartitionToParent(i + 24) & 0xFFFFFFFFFFFFF000uLL;
      if ( a3 <= *(_QWORD *)(i + 32) && v20 >= v22 && v17 <= v12 )
        v17 += v12;
    }
  }
  v23 = v19;
  if ( v18 != v12 )
    v23 = 0;
  if ( v17 != v12 )
    v12 = 0;
  if ( v23 )
  {
    v24 = (_QWORD *)(LockedVadEvent + 40);
    v25 = *(_QWORD *)(LockedVadEvent + 40);
    if ( *(_QWORD *)(v25 + 8) == LockedVadEvent + 40 )
    {
      v26 = *(_QWORD **)(LockedVadEvent + 48);
      if ( (_QWORD *)*v26 == v24 )
      {
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        *v24 = 0LL;
        *(_QWORD *)(LockedVadEvent + 48) = 0LL;
        goto LABEL_17;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
  if ( v12 )
    MiDecommitRegion(BugCheckParameter2, a3, v20);
LABEL_17:
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  if ( !v23 )
  {
LABEL_18:
    MiUnlockAndDereferenceVad((volatile signed __int32 *)BugCheckParameter2);
    return;
  }
  MiDeleteVad(BugCheckParameter2, 0LL, 0x40000000);
}
