/*
 * XREFs of AlpcpCreateView @ 0x140993130
 * Callers:
 *     AlpcpCreateSectionView @ 0x1408F1878 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR *a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v9; // r13
  __int64 Pool2; // rax
  ULONG_PTR v11; // rsi
  bool v12; // zf
  unsigned __int64 v13; // r15
  char PreviousMode; // dl
  unsigned __int64 v15; // rax
  int v16; // ebx
  unsigned int v18; // eax
  __int64 v19; // rax
  volatile signed __int64 *v20; // r15
  struct _KLOCK_ENTRIES *v21; // r9
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rbx
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  char v30; // dl
  unsigned __int64 v31; // rax
  __int64 *v32; // rcx
  struct _KLOCK_ENTRIES *v33; // r9
  AutoBoost *v34; // rax
  void *v35; // rdx
  AutoBoost *v36; // r15
  unsigned __int64 v37; // [rsp+40h] [rbp-79h]
  char v38[8]; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-61h]
  __int64 v40; // [rsp+60h] [rbp-59h]
  unsigned __int64 v41; // [rsp+68h] [rbp-51h]
  int v42; // [rsp+78h] [rbp-41h]
  __int64 v43; // [rsp+7Ch] [rbp-3Dh]
  char v44; // [rsp+85h] [rbp-34h]
  int v45; // [rsp+8Ch] [rbp-2Dh]
  int v46; // [rsp+90h] [rbp-29h]
  ULONG_PTR v47; // [rsp+98h] [rbp-21h]
  unsigned __int64 *v48; // [rsp+A8h] [rbp-11h]
  _KPROCESS *Process; // [rsp+B0h] [rbp-9h]
  __int64 v50; // [rsp+120h] [rbp+67h] BYREF
  __int64 v51; // [rsp+128h] [rbp+6Fh] BYREF
  ULONG_PTR *v52; // [rsp+130h] [rbp+77h]
  __int64 v53; // [rsp+138h] [rbp+7Fh] BYREF

  v52 = a3;
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  v53 = 0LL;
  v51 = 0LL;
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v4, a2, (__int64)a3, a4);
  if ( (*(_DWORD *)(a2 + 416) & 0x20) != 0 )
  {
    v16 = -1073741769;
    goto LABEL_16;
  }
  v7 = *(_QWORD *)(a2 + 304);
  v8 = (unsigned __int64 *)(BugCheckParameter2 + 40);
  v9 = *(unsigned __int64 **)(a2 + 24);
  if ( v7 && v7 < *v8 )
  {
    v16 = -1073741756;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80) )
    {
      v16 = -1073741790;
      goto LABEL_16;
    }
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 40);
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    goto LABEL_58;
  *(_WORD *)(Pool2 + 16) = 1536;
  *(_DWORD *)(Pool2 + 18) = 0;
  *(_WORD *)(Pool2 + 22) = 0;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  v11 = Pool2 + 48;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_BYTE *)(Pool2 + 16) &= ~2u;
  *(_QWORD *)(Pool2 + 24) = 1LL;
  if ( Pool2 == -48 )
  {
LABEL_58:
    v16 = -1073741670;
    goto LABEL_16;
  }
  memset_0((void *)(Pool2 + 48), 0, 0x60uLL);
  v12 = (*(_DWORD *)(a2 + 256) & 0x100000) == 0;
  v13 = *v8;
  v51 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v4 + 48) & 2) != 0 )
    {
      v50 = *(_QWORD *)v4;
      MiSectionControlArea(v50);
      memset_0(v38, 0, 0x80uLL);
      Process = KeGetCurrentThread()->ApcState.Process;
      v48 = v9;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v42 = 0;
      v45 = 0;
      v44 = PreviousMode;
      v43 = 4LL;
      v41 = v13;
      v15 = v9[109] - 1;
      v40 = 0x10000LL;
      v46 = 2;
      if ( v15 >= 0x7FFFFFFEFFFFLL )
        v15 = 0x7FFFFFFEFFFFLL;
      v39 = v15;
      v47 = v11 + 56;
      v16 = MiMapViewOfSection(v50, (unsigned int)v38, (unsigned int)&v53, 0, (__int64)&v51, 2, 1);
      if ( v16 >= 0 )
      {
LABEL_12:
        v13 = v41;
LABEL_13:
        LODWORD(v50) = 0;
        goto LABEL_14;
      }
      if ( !v53 )
      {
        ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[48];
        goto LABEL_13;
      }
    }
    else
    {
      v50 = **(_QWORD **)(BugCheckParameter2 + 16);
      MiSectionControlArea(v50);
      memset_0(v38, 0, 0x80uLL);
      Process = KeGetCurrentThread()->ApcState.Process;
      v48 = v9;
      v30 = KeGetCurrentThread()->PreviousMode;
      v42 = 0;
      v45 = 0;
      v44 = v30;
      v43 = 4LL;
      v41 = v13;
      v31 = v9[109] - 1;
      v40 = 0x10000LL;
      if ( v31 >= 0x7FFFFFFEFFFFLL )
        v31 = 0x7FFFFFFEFFFFLL;
      v39 = v31;
      v16 = MiMapViewOfSection(v50, (unsigned int)v38, (unsigned int)&v53, 0, (__int64)&v51, 2, 1);
      if ( v16 >= 0 )
        goto LABEL_12;
      if ( !v53 )
      {
        ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[48];
        goto LABEL_13;
      }
    }
    ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[52];
    goto LABEL_13;
  }
  v27 = *(_QWORD *)v4;
  v28 = *(_QWORD *)v4;
  v50 = 0LL;
  v37 = MiSectionControlArea(v28);
  MiCheckPurgeAndUpMapCount(v37);
  if ( v13 )
  {
    v29 = (unsigned __int16)v51 + v13;
    if ( v29 < (unsigned __int16)v51 || (LODWORD(v51) = v51 & 0xFFFF0000, v13 = v29, v29 > *(_QWORD *)(v27 + 48) - v51) )
    {
      v16 = -1073741793;
      goto LABEL_44;
    }
  }
  else
  {
    LODWORD(v51) = v51 & 0xFFFF0000;
    v13 = *(_QWORD *)(v27 + 48) - v51;
  }
  v16 = MiInsertInSystemSpace(v13, v27, &v51, 0, (ULONG_PTR *)&v50);
  if ( v16 < 0 )
  {
LABEL_44:
    MiDereferenceControlArea(v37);
    goto LABEL_34;
  }
  v16 = 0;
  v53 = v50;
LABEL_34:
  LODWORD(v50) = 8;
LABEL_14:
  if ( v16 >= 0 )
  {
    AlpcpReferenceBlob(v11);
    *(_QWORD *)(v11 + 40) = v53;
    v18 = *(_DWORD *)(v11 + 72) & 0xFFFFFFF7;
    *(_QWORD *)(v11 + 48) = v13;
    *(_DWORD *)(v11 + 72) = v50 | v18 | 1;
    ObfReferenceObjectWithTag(v9, 0x63706C41u);
    *(_QWORD *)(v11 + 32) = v9;
    PsReferenceSiloContext((void *)a2);
    *(_QWORD *)(v11 + 24) = a2;
    AlpcpReferenceBlob(BugCheckParameter2);
    *(_QWORD *)(v11 + 16) = BugCheckParameter2;
    v19 = *(_QWORD *)(BugCheckParameter2 + 64);
    v20 = (volatile signed __int64 *)(a2 + 328);
    *(_QWORD *)v11 = BugCheckParameter2 + 56;
    *(_QWORD *)(v11 + 8) = v19;
    **(_QWORD **)(BugCheckParameter2 + 64) = v11;
    *(_QWORD *)(BugCheckParameter2 + 64) = v11;
    ++*(_DWORD *)(BugCheckParameter2 + 52);
    v22 = (AutoBoost *)KeAbPreAcquire(a2 + 328, 0LL, 0LL, v21);
    v24 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 328), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 328), v22, a2 + 328);
    if ( v24 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v24, v23);
      else
        *((_BYTE *)v24 + 10) = 1;
    }
    v25 = a2 + 336;
    v26 = *(_QWORD **)(v25 + 8);
    if ( *v26 != v25 )
      __fastfail(3u);
    v32 = (__int64 *)(v11 - 48);
    v32[1] = (__int64)v26;
    *v32 = v25;
    *v26 = v11 - 48;
    *(_QWORD *)(v25 + 8) = v11 - 48;
    if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v20);
    KeAbPostRelease((unsigned __int64)v20);
    v34 = (AutoBoost *)KeAbPreAcquire((__int64)(v9 + 176), 0LL, 0LL, v33);
    v36 = v34;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9 + 352, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9 + 176, v34, (__int64)(v9 + 176));
    if ( v36 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v36, v35);
      else
        *((_BYTE *)v36 + 10) = 1;
    }
    *(_QWORD *)(v11 + 88) = v9[178];
    *(_QWORD *)(v11 + 80) = v9 + 177;
    *(_QWORD *)v9[178] = v11 + 80;
    v9[178] = v11 + 80;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 176, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9 + 176);
    KeAbPostRelease((unsigned __int64)(v9 + 176));
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
      *(_QWORD *)(BugCheckParameter2 + 80) = v11;
    v16 = 0;
    *v52 = v11;
  }
  else
  {
    AlpcpDereferenceBlobEx(v11, 1);
  }
LABEL_16:
  AlpcpUnlockBlob(v4);
  return (unsigned int)v16;
}
