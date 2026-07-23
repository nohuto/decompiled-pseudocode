/*
 * XREFs of MiCreateLargePageEvent @ 0x140B3EC6C
 * Callers:
 *     MiAllocateImageVad @ 0x14099E928 (MiAllocateImageVad.c)
 *     MiReserveUserMemoryPrepare @ 0x140A010AC (MiReserveUserMemoryPrepare.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 *     MiChargeProcessPhysicalPages @ 0x140B3ED98 (MiChargeProcessPhysicalPages.c)
 */

__int64 __fastcall MiCreateLargePageEvent(ULONG_PTR BugCheckParameter4, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // r10
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // r11
  __int64 result; // rax
  int v14; // r14d
  int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0LL;
  MiReadVadFlags(a2);
  CurrentThread = KeGetCurrentThread();
  v8 = *(unsigned int *)(v6 + 52);
  v9 = v8 | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32);
  if ( !v9 )
  {
    if ( !a3 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(
                        BugCheckParameter4,
                        v8 | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32)) )
    return 3221225773LL;
  if ( a3 )
  {
LABEL_14:
    ObfReferenceObjectWithTag(a3, 0x746C6644u);
    goto LABEL_15;
  }
  if ( (_DWORD)v11 || v12 != BugCheckParameter4 )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter4, v10, v11);
  }
  v15 = MiChargeFullProcessCommitment(BugCheckParameter4, v9);
  if ( v14 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter4);
  if ( v15 < 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter4 + 1392), -(__int64)v9);
    return (unsigned int)v15;
  }
LABEL_15:
  result = MiCreateVadEvent(BugCheckParameter4, a2, 0LL, 16, (__int64)MiDeleteVadLargePageEvent, &v17);
  if ( (int)result >= 0 )
  {
    v16 = v17;
    *(_QWORD *)(v17 + 48) = BugCheckParameter4;
    *(_QWORD *)(v16 + 40) = v9;
    *(_QWORD *)(v16 + 56) = a3;
  }
  return result;
}
