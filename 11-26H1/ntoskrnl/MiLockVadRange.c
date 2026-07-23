/*
 * XREFs of MiLockVadRange @ 0x140A0666C
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MmAssignProcessToJob @ 0x140A05AEC (MmAssignProcessToJob.c)
 *     MiLockUnlockVmPrepare @ 0x140A064C0 (MiLockUnlockVmPrepare.c)
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiGetFirstVad @ 0x1404B1910 (MiGetFirstVad.c)
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x140711DB4 (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiVadIsMetadataBitmap @ 0x140A06A94 (MiVadIsMetadataBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v5; // r14d
  int v6; // eax
  unsigned __int64 i; // rbx
  __int64 v9; // rdi
  struct _LIST_ENTRY *FirstVad; // rax
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned __int64 NextVad; // rax
  unsigned __int64 v18; // r15
  ULONG_PTR v19; // rcx
  __int64 *v20; // r14
  unsigned __int64 *v21; // rsi
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rbx
  AutoBoost *v25; // rax
  void *v26; // rdx
  AutoBoost *v27; // r14
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  int v30; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v31; // [rsp+28h] [rbp-50h]
  _OWORD v32[4]; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+98h] [rbp+20h]

  v35 = (int)a4;
  CurrentThread = KeGetCurrentThread();
  v5 = 1;
  v31 = CurrentThread;
  v32[0] = 0LL;
  v30 = 1;
  v6 = (int)a4;
  for ( i = a2; ; i = a2 )
  {
    if ( v6 )
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, a3, a4);
    else
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, a3, a4);
    v9 = 0LL;
    if ( !v5 || (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
      break;
    if ( i == -1LL )
      FirstVad = (struct _LIST_ENTRY *)MiGetFirstVad(a1);
    else
      FirstVad = MiLocateAddress(i);
    v13 = (unsigned __int64)FirstVad;
    v14 = (unsigned __int64)FirstVad;
    v15 = 0LL;
    while ( 1 )
    {
      if ( !v14 )
      {
        if ( v5 && (_DWORD)v15 )
        {
          v20 = (__int64 *)v32;
          do
          {
            if ( v9 )
            {
              v21 = (unsigned __int64 *)(*v20 + 40);
              v22 = (AutoBoost *)KeAbPreAcquire((__int64)v21, 0LL, 0LL, v12);
              v24 = v22;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
                ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
              if ( v24 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v24, v23);
                else
                  *((_BYTE *)v24 + 10) = 1;
              }
            }
            else
            {
              MiLockVad((__int64)CurrentThread, *v20, v11, v12);
            }
            ++v9;
            ++v20;
            --v15;
          }
          while ( v15 );
        }
        return v9;
      }
      NextVad = MiGetNextVad(v14);
      v18 = NextVad;
      if ( a3 != -1LL )
      {
        if ( a3 <= (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12 )
        {
          v18 = 0LL;
          goto LABEL_15;
        }
        if ( NextVad )
        {
          if ( (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) + 1 == (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) )
            goto LABEL_15;
          v18 = 0LL;
        }
        v5 = 0;
        v30 = 0;
      }
LABEL_15:
      if ( !(unsigned int)MiVadIsMetadataBitmap(v14) )
        break;
      *((_QWORD *)v32 + v15) = v14;
      v15 = (unsigned int)(v15 + 1);
LABEL_21:
      v14 = v18;
    }
    if ( v9 )
    {
      v25 = (AutoBoost *)KeAbPreAcquire(v14 + 40, 0LL, 0LL, v12);
      v27 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 40), v25, v14 + 40);
      if ( v27 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v27, v26);
        else
          *((_BYTE *)v27 + 10) = 1;
      }
      CurrentThread = v31;
    }
    else
    {
      MiLockVad((__int64)CurrentThread, v14, v11, v12);
    }
    v5 = v30;
    if ( !(unsigned int)MiVadDeleted(v14) && v30 )
    {
      ++v9;
      goto LABEL_21;
    }
    MiReferenceVad(v19);
    if ( v13 != v14 )
    {
      do
      {
        v28 = MiGetNextVad(v13);
        if ( !(unsigned int)MiVadIsMetadataBitmap(v13) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 40));
          KeAbPostRelease(v13 + 40);
        }
        v13 = v28;
      }
      while ( v28 != v14 );
    }
    if ( v35 )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
    else
      UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
    if ( (unsigned int)MiVadDeleted(v14) )
      MiWaitForVadDeletion(v29);
    MiUnlockAndDereferenceVad((volatile signed __int32 *)v14);
    v6 = v35;
  }
  return v9;
}
