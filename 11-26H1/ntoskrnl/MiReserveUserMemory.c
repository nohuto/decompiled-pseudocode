/*
 * XREFs of MiReserveUserMemory @ 0x140A00E9C
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiDecrementVadsBeingDeleted @ 0x14043B970 (MiDecrementVadsBeingDeleted.c)
 *     MiSetVadDeleted @ 0x140468E88 (MiSetVadDeleted.c)
 *     MiReturnVadDeleted @ 0x14049D1A0 (MiReturnVadDeleted.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiReserveUserMemoryPrepare @ 0x140A010AC (MiReserveUserMemoryPrepare.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveUserMemory(__int64 a1, __int64 a2, int a3, _QWORD *a4, _WORD *a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  int inserted; // edi
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // ebx
  ULONG_PTR v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  _KPROCESS *Process; // rbx
  struct _KTHREAD *v21; // rbx
  PVOID v22; // rbx
  int v23; // ebx
  volatile signed __int64 *v24; // rbx
  _QWORD v25[2]; // [rsp+20h] [rbp-50h] BYREF
  int v26; // [rsp+30h] [rbp-40h]
  unsigned int v27; // [rsp+34h] [rbp-3Ch]
  __int64 v28; // [rsp+38h] [rbp-38h]
  PVOID P; // [rsp+40h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-28h]
  __int64 v31; // [rsp+50h] [rbp-20h]
  __int16 v32; // [rsp+60h] [rbp-10h]

  memset_0(v25, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  v25[0] = a1;
  *a5 = 0;
  v25[1] = a2;
  v26 = a3;
  inserted = MiReserveUserMemoryPrepare(v25);
  if ( inserted < 0
    || (v13 = *(_QWORD *)(a1 + 88),
        v27 |= 2u,
        *a5 = v32,
        LOCK_ADDRESS_SPACE((__int64)CurrentThread, v13, v11, v12),
        inserted = MiReserveUserMemoryInsertVad(v25),
        *a4 = v31,
        inserted < 0) )
  {
    v21 = KeGetCurrentThread();
    if ( BugCheckParameter2 )
      MiUnlockVad((__int64)v21, BugCheckParameter2);
    if ( (v27 & 2) != 0 )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v21, *(_QWORD *)(v25[0] + 88LL));
    v22 = P;
    if ( P )
    {
      MiReleaseVadEventBlocks(P);
      ExFreePoolWithTag(v22, 0);
    }
    return (unsigned int)inserted;
  }
  else
  {
    v14 = v27;
    v15 = BugCheckParameter2;
    if ( (v27 & 0x20) == 0 )
    {
      if ( BugCheckParameter2 )
      {
        v24 = (volatile signed __int64 *)P;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v24 + 5);
        KeAbPostRelease((unsigned __int64)(v24 + 5));
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, *(_QWORD *)(a1 + 88));
      }
      else
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)P);
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, *(_QWORD *)(a1 + 88));
      }
      goto LABEL_6;
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, *(_QWORD *)(a1 + 88));
    v27 = v14 & 0xFFFFFFFD;
    v23 = MiReserveUserMemoryFinishVad(v25);
    if ( v23 >= 0 )
    {
LABEL_6:
      if ( v15 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        MiSetVadDeleted(v15, v16, v17, v18);
        MiDeleteVad(v15);
        MiReturnVadDeleted((__int64)Process);
        MiDecrementVadsBeingDeleted(v28);
      }
      return 0LL;
    }
    if ( BugCheckParameter2 )
      MiFinishPlaceholderVadReplacement(BugCheckParameter2);
    return (unsigned int)v23;
  }
}
