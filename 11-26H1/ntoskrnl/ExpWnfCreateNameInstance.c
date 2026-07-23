/*
 * XREFs of ExpWnfCreateNameInstance @ 0x1409CB5E8
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     NtCreateWnfStateName @ 0x1409CAAE0 (NtCreateWnfStateName.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObLogSecurityDescriptor @ 0x1408FCCF0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfFindStateName @ 0x1409CB990 (ExpWnfFindStateName.c)
 *     ExpWnfPopulateStateData @ 0x1409CB9C8 (ExpWnfPopulateStateData.c)
 *     ExpWnfGetPermanentDataStore @ 0x140B352CC (ExpWnfGetPermanentDataStore.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        struct _EX_RUNDOWN_REF **a5)
{
  __int64 v6; // r14
  ULONG_PTR v9; // rcx
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  __int64 *v12; // r15
  unsigned int v13; // esi
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rbp
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v20; // rbp
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  struct _KLOCK_ENTRIES *v24; // r9
  __int64 v25; // r14
  AutoBoost *v26; // rax
  void *v27; // rdx
  AutoBoost *v28; // rbp
  struct _EX_RUNDOWN_REF **v29; // r8
  struct _EX_RUNDOWN_REF *v30; // rax
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  void *Ptr; // rcx

  v6 = (a2 >> 4) & 3;
  if ( (_DWORD)v6 != 3 || (v9 = 257LL, PsInitialSystemProcess == (PEPROCESS)a4) )
    v9 = 256LL;
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(v9);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, 0xA8uLL);
  LODWORD(v11->Count) = 11012355;
  v11[6].Count = a1;
  v11[5].Count = a2;
  LODWORD(v11[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11[8].Count = (unsigned __int64)&v11[21];
    *(_OWORD *)&v11[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v12 = (__int64 *)&v11[9];
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16), &v11[9].Count, 1u) < 0 )
  {
    ExFreePoolWithTag(v11, 0x20666E57u);
    return 3221225626LL;
  }
  v11[16].Count = (unsigned __int64)&v11[15];
  v11[15].Count = (unsigned __int64)&v11[15];
  v11[14].Count = 0LL;
  v11[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 && (int)ExpWnfGetPermanentDataStore(a1, (unsigned int)v6, 1LL, &v11[13]) < 0 )
  {
    v13 = -1073741670;
    goto LABEL_35;
  }
  v13 = ExpWnfPopulateStateData(v11);
  if ( v13 )
  {
LABEL_35:
    ObDereferenceSecurityDescriptor(*v12, 1u, v14, v15);
    ExFreePoolWithTag(v11, 0x20666E57u);
    return v13;
  }
  v16 = (AutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 0LL, v15);
  v18 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v16, a1 + 48);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v17);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v20 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection_0(StateName + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(*v12, 1u, v32, v33);
    Ptr = v11[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v11, 0x20666E57u);
    *a5 = v20;
    return 0LL;
  }
  ExAcquireRundownProtection_0(v11 + 1);
  v21 = *(_QWORD **)(a1 + 56);
  v22 = 0;
  if ( !v21 )
    goto LABEL_19;
  while ( v11[5].Count < v21[3] )
  {
    v23 = (_QWORD *)*v21;
    if ( !*v21 )
      goto LABEL_19;
LABEL_32:
    v21 = v23;
  }
  v23 = (_QWORD *)v21[1];
  if ( v23 )
    goto LABEL_32;
  v22 = 1;
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v21, v22, &v11[2].Count);
  if ( (_DWORD)v6 == 3 )
  {
    v11[19].Count = a4;
    v25 = *(_QWORD *)(a4 + 1512);
    v26 = (AutoBoost *)KeAbPreAcquire(v25 + 56, 0LL, 0LL, v24);
    v28 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 56), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 56), v26, v25 + 56);
    if ( v28 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v28, v27);
      else
        *((_BYTE *)v28 + 10) = 1;
    }
    v29 = *(struct _EX_RUNDOWN_REF ***)(v25 + 72);
    v30 = v11 + 17;
    if ( *v29 != (struct _EX_RUNDOWN_REF *)(v25 + 64) )
      __fastfail(3u);
    v30->Count = v25 + 64;
    v11[18].Count = (unsigned __int64)v29;
    *v29 = v30;
    *(_QWORD *)(v25 + 72) = v30;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 56));
    KeAbPostRelease(v25 + 56);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v11;
  return 0LL;
}
