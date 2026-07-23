/*
 * XREFs of EtwpFindOrCreateGuidEntry @ 0x140910460
 * Callers:
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     EtwpAddGuidEntry @ 0x1408FC380 (EtwpAddGuidEntry.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     EtwpReferenceGuidEntry @ 0x1409115F0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpFindOrCreateGuidEntry(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        struct _KLOCK_ENTRIES *a4,
        _QWORD *a5)
{
  char v8; // r15
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v12; // rsi
  signed __int64 *v13; // r14
  void *v14; // rdx
  LegacyAutoBoost *v15; // rbx
  _QWORD *i; // rbx
  __int64 v17; // rax
  void *v18; // rbx
  ACCESS_MASK v19; // r9d
  unsigned int v20; // ebx
  __int64 result; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-58h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B0h] [rbp+8h] BYREF
  NTSTATUS AccessStatus; // [rsp+C0h] [rbp+18h] BYREF

  v8 = (char)a4;
  v9 = 0LL;
  v10 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 720;
  CurrentThread = KeGetCurrentThread();
  v12 = (_QWORD **)(v10 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v13 = (signed __int64 *)(v10 + 48);
  v15 = (LegacyAutoBoost *)KeAbPreAcquire(v10 + 48, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v13, 0, v15, (struct _KTHREAD *)v13);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v17 = *(_QWORD *)a2 - i[5];
    if ( *(_QWORD *)a2 == i[5] )
      v17 = *((_QWORD *)a2 + 1) - i[6];
    if ( !v17 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
    {
      v9 = i;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v13);
  KeAbPostRelease((unsigned __int64)v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 || (v9 = EtwpAddGuidEntry(a1, a2, a3)) != 0LL )
  {
    if ( v8 )
    {
      v18 = (void *)v9[9];
      AccessStatus = 0;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      GrantedAccess = 0;
      SeCaptureSubjectContext(&SubjectContext);
      v19 = 2048;
      if ( a3 == 2 )
        v19 = 4096;
      SeAccessCheck(
        v18,
        &SubjectContext,
        0,
        v19,
        0,
        0LL,
        (PGENERIC_MAPPING)&EtwpGenericMapping,
        1,
        &GrantedAccess,
        &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      v20 = AccessStatus;
      if ( AccessStatus < 0 )
      {
        EtwpUnreferenceGuidEntry((ULONG_PTR)v9);
        result = v20;
        *a5 = 0LL;
      }
      else
      {
        *a5 = v9;
        return v20;
      }
    }
    else
    {
      result = 0LL;
      *a5 = v9;
    }
  }
  else
  {
    *a5 = 0LL;
    return 3221225495LL;
  }
  return result;
}
