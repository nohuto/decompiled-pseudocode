/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x140AE14B0
 * Callers:
 *     EtwpUpdateDisallowList @ 0x140AE1434 (EtwpUpdateDisallowList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x14091555C (EtwpNotifyDisallowedGuidChange.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  size_t v7; // r12
  unsigned int v8; // ebx
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  struct _KLOCK_ENTRIES *v13; // r9
  PVOID *v14; // rdi
  char *v15; // r12
  unsigned __int64 v16; // rdx
  _OWORD *v17; // rsi
  int v18; // eax
  PVOID **v19; // rax
  PVOID *v20; // rcx
  void *v21; // rax
  unsigned int i; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  PVOID *v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rsi
  _QWORD *v28; // rax
  AutoBoost *v29; // rax
  void *v30; // rdx
  AutoBoost *v31; // rsi
  void *v32; // r14
  PVOID *v33; // rax
  _QWORD *v34; // rsi
  void *v35; // rdi
  _DWORD *v36; // rcx
  void **v37; // rax
  PVOID *v38; // rax
  _QWORD *v39; // rsi
  _QWORD *v40; // r15
  PVOID **Pool2; // rax
  PVOID *v43; // rcx
  _QWORD *v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rax
  PVOID **v47; // r14
  PVOID *v48; // rax
  PVOID *v49; // rax
  PVOID **v50; // rcx
  PVOID **v51; // rdi
  PVOID *v52; // rax
  PVOID *v53; // rax
  PVOID *v54; // rax
  _QWORD *v55; // rdi
  _QWORD *v56; // rcx
  _QWORD *v57; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v60; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v61; // [rsp+48h] [rbp-8h]
  unsigned __int64 v63; // [rsp+A8h] [rbp+58h]

  v7 = a2;
  v8 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v61 = &v60;
  v11 = 16LL * a2;
  v60 = &v60;
  if ( !a2 )
  {
    v12 = 0LL;
LABEL_4:
    KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
    if ( *(_WORD *)(a1 + 1328) )
    {
      v14 = *(PVOID **)(a1 + 1336);
      v15 = (char *)&v14[2 * *(unsigned __int16 *)(a1 + 1328)];
    }
    else
    {
      v14 = 0LL;
      v15 = 0LL;
    }
    v16 = (v11 + v12) & -(__int64)(a2 != 0);
    v63 = v16;
    v17 = (_OWORD *)(v12 & -(__int64)(a2 != 0));
    while ( 1 )
    {
      if ( v14 >= (PVOID *)v15 )
        goto LABEL_30;
      if ( (unsigned __int64)v17 >= v16 )
      {
        while ( v14 < (PVOID *)v15 )
        {
          Pool2 = (PVOID **)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
            goto LABEL_24;
          Pool2[2] = v14;
          v43 = v61;
          if ( *v61 != &v60 )
            goto LABEL_16;
          Pool2[1] = v61;
          *Pool2 = &v60;
          v14 += 2;
          *v43 = Pool2;
          v61 = (PVOID *)Pool2;
        }
        v16 = v63;
LABEL_30:
        while ( (unsigned __int64)v17 < v16 )
        {
          v51 = (PVOID **)ExAllocatePool2(0x100uLL);
          if ( !v51 )
            goto LABEL_24;
          v52 = (PVOID *)ExAllocatePool2(0x100uLL);
          if ( !v52 )
          {
            v50 = v51;
            goto LABEL_72;
          }
          *(_OWORD *)v52 = *v17;
          v51[2] = v52;
          v53 = p_P;
          if ( *p_P != &P )
            goto LABEL_16;
          v16 = v63;
          *v51 = &P;
          ++v17;
          v51[1] = v53;
          *v53 = v51;
          p_P = (PVOID *)v51;
        }
        v29 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, v13);
        v31 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v29, a1 + 688);
        if ( v31 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v31, v30);
          else
            *((_BYTE *)v31 + 10) = 1;
        }
        v32 = *(void **)(a1 + 1336);
        *(_WORD *)(a1 + 1328) = a2;
        *(_QWORD *)(a1 + 1336) = v12;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
        KeAbPostRelease(a1 + 688);
        KeReleaseMutex((PRKMUTEX)(a1 + 632), 0);
        v33 = (PVOID *)P;
        v34 = P;
        while ( v33 != &P )
        {
          v35 = v34;
          v34 = (_QWORD *)*v34;
          EtwpNotifyDisallowedGuidChange(*((_DWORD **)v35 + 2), a7, 0);
          v36 = *(_DWORD **)v35;
          if ( *(void **)(*(_QWORD *)v35 + 8LL) != v35 )
            goto LABEL_16;
          v37 = (void **)*((_QWORD *)v35 + 1);
          if ( *v37 != v35 )
            goto LABEL_16;
          *v37 = v36;
          *((_QWORD *)v36 + 1) = v37;
          ExFreePoolWithTag(*((PVOID *)v35 + 2), 0);
          ExFreePoolWithTag(v35, 0);
          v33 = (PVOID *)P;
        }
        v38 = (PVOID *)v60;
        v39 = v60;
        while ( 1 )
        {
          v40 = v39;
          if ( v38 == &v60 )
            break;
          v44 = v39;
          v39 = (_QWORD *)*v39;
          EtwpNotifyDisallowedGuidChange((_DWORD *)v44[2], a7, 1u);
          v45 = *v40;
          if ( *(_QWORD **)(*v40 + 8LL) != v44 )
            goto LABEL_16;
          v46 = (_QWORD *)v44[1];
          if ( (_QWORD *)*v46 != v44 )
            goto LABEL_16;
          *v46 = v45;
          *(_QWORD *)(v45 + 8) = v46;
          ExFreePoolWithTag(v44, 0);
          v38 = (PVOID *)v60;
        }
        if ( v32 )
          ExFreePoolWithTag(v32, 0);
        return v8;
      }
      v18 = memcmp(v14, v17, 0x10uLL);
      if ( !v18 )
        break;
      if ( v18 >= 0 )
      {
        v47 = (PVOID **)ExAllocatePool2(0x100uLL);
        if ( !v47 )
          goto LABEL_24;
        v48 = (PVOID *)ExAllocatePool2(0x100uLL);
        if ( !v48 )
        {
          v50 = v47;
LABEL_72:
          ExFreePoolWithTag(v50, 0);
LABEL_24:
          v8 = -1073741670;
          KeReleaseMutex((PRKMUTEX)(a1 + 632), 0);
          goto LABEL_25;
        }
        *(_OWORD *)v48 = *v17;
        v47[2] = v48;
        v49 = p_P;
        if ( *p_P != &P )
          goto LABEL_16;
        v47[1] = p_P;
        *v47 = &P;
        *v49 = v47;
        p_P = (PVOID *)v47;
        goto LABEL_11;
      }
      v19 = (PVOID **)ExAllocatePool2(0x100uLL);
      if ( !v19 )
        goto LABEL_24;
      v19[2] = v14;
      v20 = v61;
      if ( *v61 != &v60 )
LABEL_16:
        __fastfail(3u);
      v19[1] = v61;
      *v19 = &v60;
      v14 += 2;
      *v20 = v19;
      v61 = (PVOID *)v19;
LABEL_12:
      v16 = v63;
    }
    v14 += 2;
LABEL_11:
    ++v17;
    goto LABEL_12;
  }
  v21 = (void *)ExAllocatePool2(0x100uLL);
  v12 = (unsigned __int64)v21;
  if ( v21 )
  {
    memmove(v21, a3, 16LL * (unsigned int)v7);
    qsort((void *)v12, v7, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v7 - 1 )
        goto LABEL_4;
      v23 = 16LL * i;
      v24 = *(_QWORD *)(v23 + v12) - *(_QWORD *)(v23 + v12 + 16);
      if ( !v24 )
        v24 = *(_QWORD *)(v23 + v12 + 8) - *(_QWORD *)(v23 + v12 + 24);
      if ( !v24 )
        break;
    }
    ExFreePoolWithTag((PVOID)v12, 0);
    v8 = -1073741811;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_25:
  v25 = (PVOID *)P;
  v26 = P;
  while ( v25 != &P )
  {
    v27 = v26;
    v26 = (_QWORD *)*v26;
    if ( (_QWORD *)v26[1] != v27 )
      goto LABEL_16;
    v28 = (_QWORD *)v27[1];
    if ( (_QWORD *)*v28 != v27 )
      goto LABEL_16;
    *v28 = v26;
    v26[1] = v28;
    ExFreePoolWithTag((PVOID)v27[2], 0);
    ExFreePoolWithTag(v27, 0);
    v25 = (PVOID *)P;
  }
  v54 = (PVOID *)v60;
  v55 = v60;
  while ( v54 != &v60 )
  {
    v56 = v55;
    v55 = (_QWORD *)*v55;
    if ( (_QWORD *)v55[1] != v56 )
      goto LABEL_16;
    v57 = (_QWORD *)v56[1];
    if ( (_QWORD *)*v57 != v56 )
      goto LABEL_16;
    *v57 = v55;
    v55[1] = v57;
    ExFreePoolWithTag(v56, 0);
    v54 = (PVOID *)v60;
  }
  return v8;
}
