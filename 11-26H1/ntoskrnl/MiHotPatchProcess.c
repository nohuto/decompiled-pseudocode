/*
 * XREFs of MiHotPatchProcess @ 0x1408765A8
 * Callers:
 *     MiHotPatchAllProcesses @ 0x1408764F0 (MiHotPatchAllProcesses.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x14027E1C0 (MiUnlockVadShared.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiGetFirstVad @ 0x1404B1910 (MiGetFirstVad.c)
 *     MiImageVadHotPatchEligible @ 0x1408769B4 (MiImageVadHotPatchEligible.c)
 *     MiInjectThreadForHotPatch @ 0x140876A14 (MiInjectThreadForHotPatch.c)
 *     RtlIsPatchMachineApplicable @ 0x1408B178C (RtlIsPatchMachineApplicable.c)
 */

__int64 __fastcall MiHotPatchProcess(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int16 v6; // r15
  unsigned int v8; // ebx
  int v9; // r12d
  int v10; // edi
  __int64 i; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  void *v18; // rdi
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  int v23; // r15d
  ULONG_PTR v24; // rcx
  bool v25; // zf
  unsigned __int16 v27; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_WORD *)(a1 + 1772);
  v27 = v6;
  v8 = (unsigned int)a4;
  v9 = a3;
  v10 = 0;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, a3, a4);
  if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
  {
LABEL_18:
    v10 = -1073741558;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1040) + 1189LL) & 2) != 0 )
  {
    v10 = -1073741637;
  }
  else
  {
LABEL_4:
    for ( i = (__int64)MiGetFirstVad(a1); ; i = MiGetNextVad(v12) )
    {
      v12 = i;
      if ( !i )
        break;
      if ( (MiReadVadFlags(i) & 0x1C) == 8 )
      {
        MiLockVadShared((__int64)CurrentThread, v13, v14, v15);
        if ( !(unsigned int)MiVadDeleted(v12)
          && (unsigned int)MiImageVadHotPatchEligible()
          && (v16 = *(_QWORD *)(***(_QWORD ***)(v12 + 80) + 56LL), *(_DWORD *)(v16 + 60) == a2)
          && *(_DWORD *)(v16 + 72) == v9
          && (unsigned __int8)RtlIsPatchMachineApplicable(v6, v8) )
        {
          v18 = (void *)((*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), -1LL, -1LL);
          MiReferenceVad(v12);
          MiUnlockVadShared((__int64)CurrentThread, v12);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          v10 = MiInjectThreadForHotPatch(v18);
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v19, v20);
          MiLockVadShared((__int64)CurrentThread, v12, v21, v22);
          v23 = MiVadDeleted(v12);
          MiUnlockAndDereferenceVadShared(v24);
          if ( v10 < 0 )
            break;
          if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
            goto LABEL_18;
          v25 = v23 == 0;
          v6 = v27;
          if ( !v25 )
            goto LABEL_4;
        }
        else
        {
          MiUnlockVadShared((__int64)CurrentThread, v12);
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  return (unsigned int)v10;
}
