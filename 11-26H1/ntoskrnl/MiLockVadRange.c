/*
 * XREFs of MiLockVadRange @ 0x140960DAC
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     MmAssignProcessToJob @ 0x14096022C (MmAssignProcessToJob.c)
 *     MiLockUnlockVmPrepare @ 0x140960C00 (MiLockUnlockVmPrepare.c)
 *     MiCloneProcessAddressSpace @ 0x140961614 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReferenceVad @ 0x14027E890 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403155B4 (LOCK_ADDRESS_SPACE.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiGetNextVad @ 0x140326018 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140405820 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140480A68 (MiVadDeleted.c)
 *     MiGetFirstVad @ 0x1404B80E0 (MiGetFirstVad.c)
 *     MiWaitForVadDeletion @ 0x140531014 (MiWaitForVadDeletion.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x14070D104 (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiVadIsMetadataBitmap @ 0x1409611E0 (MiVadIsMetadataBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v5; // ebp
  int v6; // eax
  unsigned __int64 i; // rbx
  struct _LIST_ENTRY *FirstVad; // rax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // r15
  unsigned __int64 j; // rbx
  unsigned __int64 NextVad; // r14
  ULONG_PTR v18; // rcx
  __int64 k; // rbx
  unsigned __int64 *v20; // rbp
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // rsi
  AutoBoost *v24; // rax
  void *v25; // rdx
  AutoBoost *v26; // rbp
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v30; // [rsp+28h] [rbp-50h]
  _OWORD v31[4]; // [rsp+30h] [rbp-48h]
  int v34; // [rsp+98h] [rbp+20h]

  v34 = (int)a4;
  CurrentThread = KeGetCurrentThread();
  v5 = 1;
  v30 = CurrentThread;
  v31[0] = 0LL;
  v29 = 1;
  v6 = (int)a4;
  for ( i = a2; ; i = a2 )
  {
    if ( v6 )
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, a3, a4);
    else
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, a3, a4);
    if ( !v5 || (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
      break;
    if ( i == -1LL )
      FirstVad = (struct _LIST_ENTRY *)MiGetFirstVad(a1);
    else
      FirstVad = MiLocateAddress(i);
    v12 = 0LL;
    v13 = (unsigned __int64)FirstVad;
    v14 = 0LL;
    for ( j = (unsigned __int64)FirstVad; ; j = NextVad )
    {
      if ( !j )
      {
        if ( v5 )
        {
          for ( k = 0LL; (unsigned int)k < (unsigned int)v14; k = (unsigned int)(k + 1) )
          {
            if ( v12 )
            {
              v20 = (unsigned __int64 *)(*((_QWORD *)v31 + k) + 40LL);
              v21 = (AutoBoost *)KeAbPreAcquire((__int64)v20, 0LL, 0LL, v11);
              v23 = v21;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
                ExfAcquirePushLockExclusiveEx(v20, v21, (__int64)v20);
              if ( v23 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v23, v22);
                else
                  *((_BYTE *)v23 + 10) = 1;
              }
            }
            else
            {
              MiLockVad((__int64)CurrentThread, *((_QWORD *)v31 + k), v10, v11);
            }
            ++v12;
          }
        }
        return v12;
      }
      NextVad = MiGetNextVad(j);
      if ( a3 != -1LL )
      {
        if ( a3 <= (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12 )
        {
          NextVad = 0LL;
          goto LABEL_15;
        }
        if ( NextVad )
        {
          if ( (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) + 1 == (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) )
            goto LABEL_15;
          NextVad = 0LL;
        }
        v5 = 0;
        v29 = 0;
      }
LABEL_15:
      if ( !(unsigned int)MiVadIsMetadataBitmap(j) )
        break;
      *((_QWORD *)v31 + v14) = j;
      v14 = (unsigned int)(v14 + 1);
LABEL_21:
      ;
    }
    if ( v12 )
    {
      v24 = (AutoBoost *)KeAbPreAcquire(j + 40, 0LL, 0LL, v11);
      v26 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(j + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(j + 40), v24, j + 40);
      if ( v26 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v26, v25);
        else
          *((_BYTE *)v26 + 10) = 1;
      }
      CurrentThread = v30;
    }
    else
    {
      MiLockVad((__int64)CurrentThread, j, v10, v11);
    }
    v5 = v29;
    if ( !(unsigned int)MiVadDeleted(j) && v29 )
    {
      ++v12;
      goto LABEL_21;
    }
    MiReferenceVad(v18);
    if ( v13 != j )
    {
      do
      {
        v27 = MiGetNextVad(v13);
        if ( !(unsigned int)MiVadIsMetadataBitmap(v13) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 40));
          KeAbPostRelease(v13 + 40);
        }
        v13 = v27;
      }
      while ( v27 != j );
    }
    if ( v34 )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
    else
      UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
    if ( (unsigned int)MiVadDeleted(j) )
      MiWaitForVadDeletion(v28);
    MiUnlockAndDereferenceVad((volatile signed __int32 *)j);
    v6 = v34;
  }
  return 0LL;
}
