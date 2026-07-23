/*
 * XREFs of SleepstudyHelperBuildBlocker @ 0x140A90440
 * Callers:
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1407EA0D0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407EA1A0 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A90314 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140B77D80 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140B77E60 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140CD77C0 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403C27C0 (RtlInsertElementGenericTableAvl.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x1404A2608 (SshpTracingWriteBlockerStateRundown.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     SshpReferenceBlocker @ 0x1404AF8E4 (SshpReferenceBlocker.c)
 *     SSHSupportAllocateNonPaged @ 0x1404BB7D8 (SSHSupportAllocateNonPaged.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     SSHSupportQueryInterruptTime @ 0x1404E2358 (SSHSupportQueryInterruptTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A90850 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpCacheLookupBlocker @ 0x140A908EC (SshpCacheLookupBlocker.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperBuildBlocker(__int64 *a1, PKSPIN_LOCK *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 NonPaged; // rbx
  ULONG v5; // r15d
  char *v6; // rsi
  unsigned __int64 *v8; // r13
  __int64 v9; // r15
  unsigned __int64 *v10; // r12
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbx
  int v14; // edi
  unsigned int v15; // eax
  __int64 Pool2; // rax
  __int64 v17; // r15
  char **v18; // rax
  PKSPIN_LOCK v20; // rbx
  struct _KLOCK_ENTRIES *v21; // r9
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rdi
  char *v25; // rsi
  char **v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // r8
  int v29; // r9d
  int v30; // r10d
  BOOLEAN NewElement[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v32; // [rsp+34h] [rbp-CCh]
  PKSPIN_LOCK *v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD Buffer[3]; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+70h] [rbp-90h] BYREF
  int *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  int *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  int *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  int *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  PKSPIN_LOCK **v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  _DWORD *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  _DWORD v54[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]

  NonPaged = 0LL;
  v33 = a2;
  v5 = 0;
  SpinLock = 0LL;
  v6 = 0LL;
  if ( a1 && a2 )
  {
    v8 = (unsigned __int64 *)((char *)&SshpBlockerCollections + 48 * *((int *)a1 + 2));
    if ( *((_BYTE *)v8 + 24) && !SSHSupportIsPlatformAoAc() )
      return (unsigned int)-1073741637;
    v9 = *a1;
    v10 = (unsigned __int64 *)(*a1 + 16);
    v32 = *(_DWORD *)(*a1 + 24);
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, a4);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    v14 = SshpCacheLookupBlocker(v9, a1, &SpinLock);
    if ( v14 >= 0 )
    {
      v20 = SpinLock;
      SshpReferenceBlocker(SpinLock, 0);
      *v33 = v20;
      NonPaged = 0LL;
    }
    else
    {
      if ( _InterlockedIncrement64(&SshpGlobalBlockerCount) > (unsigned int)SleepstudyHelperBlockerGlobalLimit
        || (v15 = *(_DWORD *)(v9 + 40), v15 >= SleepstudyHelperBlockerLibraryLimit) )
      {
        _InterlockedDecrement64(&SshpGlobalBlockerCount);
        if ( SshpTelemetryHandleRegistered
          && *(_DWORD *)&SshpBlockerCollections.WaitBlockFill11[112] > 5u
          && tlgKeywordOn((__int64)&SshpBlockerCollections.WaitBlockFill11[112], 0x400000000000LL) )
        {
          v35 = v29;
          v41 = &v34;
          v34 = v30;
          v43 = &v35;
          v42 = 4LL;
          v44 = 4LL;
          v46 = 4LL;
          if ( v28 > 0xFFFFFFFFLL )
            LODWORD(v28) = -1;
          v48 = 4LL;
          v36 = v28;
          v45 = &v36;
          v37 = *(_DWORD *)(v9 + 40);
          v47 = &v37;
          LODWORD(v33) = *(_DWORD *)(v9 + 24);
          v49 = &v33;
          v51 = v54;
          v53 = a1[7];
          v54[0] = *((unsigned __int16 *)a1 + 24);
          v55 = Buffer;
          v50 = 4LL;
          v52 = 2LL;
          v54[1] = 0;
          Buffer[0] = 0x1000000LL;
          v56 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&SshpBlockerCollections.WaitBlockFill11[112],
            (unsigned __int8 *)byte_140051D3B,
            0LL,
            0LL,
            0xAu,
            &v40);
        }
        NonPaged = (__int64)SpinLock;
      }
      else
      {
        *(_DWORD *)(v9 + 40) = v15 + 1;
        NonPaged = SSHSupportAllocateNonPaged();
        Pool2 = ExAllocatePool2(0x100uLL);
        v6 = (char *)Pool2;
        if ( NonPaged && Pool2 )
        {
          *(_QWORD *)(NonPaged + 304) = Pool2;
          *(_QWORD *)(Pool2 + 112) = NonPaged;
          *(_QWORD *)NonPaged = 0LL;
          *(_DWORD *)(NonPaged + 16) = 1;
          *(_DWORD *)(NonPaged + 12) = 1;
          if ( *((_BYTE *)a1 + 88) )
            *(_DWORD *)(NonPaged + 8) |= 4u;
          *(_QWORD *)(NonPaged + 296) = a1[10];
          *(_QWORD *)(Pool2 + 8) = Pool2;
          *(_QWORD *)Pool2 = Pool2;
          *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
          *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
          *(_QWORD *)(Pool2 + 32) = v9;
          *(_DWORD *)(Pool2 + 40) = *((_DWORD *)a1 + 2);
          *(_QWORD *)(Pool2 + 96) = a1[8];
          *(_QWORD *)(Pool2 + 104) = a1[9];
          *(_OWORD *)(Pool2 + 48) = *((_OWORD *)a1 + 1);
          *(_OWORD *)(Pool2 + 64) = *((_OWORD *)a1 + 2);
          *(_OWORD *)(Pool2 + 80) = *((_OWORD *)a1 + 3);
          if ( !*(_DWORD *)(v9 + 44)
            || (Buffer[0] = 1LL,
                Buffer[1] = NonPaged,
                RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v9 + 48), Buffer, 0x10u, NewElement)) )
          {
            v17 = v9 + 152;
            v18 = *(char ***)(v17 + 8);
            if ( *v18 != (char *)v17 )
              goto LABEL_20;
            *(_QWORD *)v6 = v17;
            *((_QWORD *)v6 + 1) = v18;
            *v18 = v6;
            *(_QWORD *)(v17 + 8) = v6;
            SSHSupportReleasePushLockExclusive((struct _KTHREAD *)v10);
            v22 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v21);
            v24 = v22;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
              ExfAcquirePushLockExclusiveEx(v8, v22, (__int64)v8);
            if ( v24 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v24, v23);
              else
                *((_BYTE *)v24 + 10) = 1;
            }
            v25 = v6 + 16;
            v26 = (char **)v8[5];
            if ( *v26 != (char *)(v8 + 4) )
LABEL_20:
              __fastfail(3u);
            *(_QWORD *)v25 = v8 + 4;
            *((_QWORD *)v25 + 1) = v26;
            *v26 = v25;
            v8[5] = (unsigned __int64)v25;
            *(_DWORD *)(NonPaged + 8) ^= ((unsigned __int8)*(_DWORD *)(NonPaged + 8) ^ (unsigned __int8)(2 * *((_DWORD *)v8 + 7))) & 2;
            if ( (*((_DWORD *)v8 + 7) & 1) != 0 )
              *(_QWORD *)(NonPaged + 32) = SSHSupportQueryInterruptTime();
            if ( (*((_DWORD *)v8 + 7) & 2) != 0 )
              SshpReferenceBlocker((PKSPIN_LOCK)NonPaged, 1);
            SSHSupportReleasePushLockExclusive((struct _KTHREAD *)v8);
            SshpTracingWriteBlockerStateRundown(&SLEEPSTUDY_EVT_BLOCKER_CREATED, (PKSPIN_LOCK)NonPaged);
            v27 = (__int64 *)v33;
            a1[10] = 0LL;
            v14 = 0;
            a1[8] = 0LL;
            a1[9] = 0LL;
            *((_OWORD *)a1 + 3) = 0LL;
            *v27 = NonPaged;
LABEL_32:
            SleepstudyHelperDestroyBlockerBuilder(a1);
            return (unsigned int)v14;
          }
        }
      }
      v14 = -1073741670;
    }
    if ( v9 )
      SSHSupportReleasePushLockExclusive((struct _KTHREAD *)(v9 + 16));
    v5 = v32;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( NonPaged )
    CmpFreeTransientPoolWithTag((void *)NonPaged, v5);
  if ( v6 )
    CmpFreeTransientPoolWithTag(v6, v5);
  if ( v14 >= 0 )
    goto LABEL_32;
  return (unsigned int)v14;
}
