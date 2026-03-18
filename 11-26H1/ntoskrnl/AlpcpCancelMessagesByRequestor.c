/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x140A69A60
 * Callers:
 *     AlpcpDisconnectPort @ 0x1408EAF48 (AlpcpDisconnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     PsTransferProcessQuotaToSharedQuota @ 0x1404FD39C (PsTransferProcessQuotaToSharedQuota.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C1ED8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     PspChargeProcessWakeCounter @ 0x1409BE2C0 (PspChargeProcessWakeCounter.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1409BEF10 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x140A5CAB0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpIsEntryInList @ 0x140B40424 (AlpcpIsEntryInList.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(
        __int64 a1,
        volatile signed __int32 *a2,
        ULONG_PTR *a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5)
{
  int v5; // r15d
  unsigned int v6; // r13d
  __int64 v9; // rsi
  void *v10; // rdx
  AutoBoost *v11; // rdi
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // r8
  unsigned __int64 *v15; // rcx
  ULONG_PTR v16; // rdi
  ULONG_PTR v17; // rbp
  __int64 BugCheckParameter4; // rax
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9
  struct _KLOCK_ENTRIES *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  struct _KLOCK_ENTRIES *v30; // r9
  AutoBoost *v31; // rax
  void *v32; // rdx
  __int64 v33; // r8
  AutoBoost *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  struct _KLOCK_ENTRIES *v38; // r9
  AutoBoost *v39; // rax
  AutoBoost *v40; // rax
  int v41; // esi
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  struct _KLOCK_ENTRIES *v47; // r9
  int v48; // eax
  int v49; // eax
  void *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  PVOID v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  signed int v56; // r8d
  int v57; // edx
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  signed int v60; // r8d
  int v61; // edx
  int v62; // r15d
  int v63; // r15d
  volatile signed __int64 *v64; // rdi

  v5 = (int)a4;
  v6 = 0;
  v9 = a1;
  if ( (_DWORD)a4 == 1 || (_DWORD)a4 == 2 )
  {
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 34), 0LL, 0LL, a4);
    if ( !_interlockedbittestandset64(a2 + 34, 0LL) )
      goto LABEL_11;
    v14 = (__int64)(a2 + 34);
    v15 = (unsigned __int64 *)(a2 + 34);
  }
  else if ( (_DWORD)a4 == 3 )
  {
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 44), 0LL, 0LL, a4);
    if ( !_interlockedbittestandset64(a2 + 44, 0LL) )
      goto LABEL_11;
    v14 = (__int64)(a2 + 44);
    v15 = (unsigned __int64 *)(a2 + 44);
  }
  else
  {
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 50), 0LL, 0LL, a4);
    if ( !_interlockedbittestandset64(a2 + 50, 0LL) )
      goto LABEL_11;
    v14 = (__int64)(a2 + 50);
    v15 = (unsigned __int64 *)(a2 + 50);
  }
  ExfAcquirePushLockExclusiveEx(v15, v11, v14);
LABEL_11:
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v16 = *a3;
  if ( (ULONG_PTR *)*a3 != a3 )
  {
    while ( 1 )
    {
      v17 = v16;
      if ( *(_QWORD *)(v16 + 24) != v9 && (*(_DWORD *)(v16 + 40) & 0x10000) == 0 )
      {
        v16 = *(_QWORD *)v16;
        goto LABEL_88;
      }
      _m_prefetchw((const void *)(v16 - 24));
      BugCheckParameter4 = *(_QWORD *)(v16 - 24);
      v19 = BugCheckParameter4 == 0;
      if ( BugCheckParameter4 <= 0 )
      {
LABEL_22:
        if ( !v19 )
          KeBugCheckEx(0x18u, 0LL, v16, 0x20uLL, BugCheckParameter4);
      }
      else
      {
        while ( 1 )
        {
          v10 = (void *)BugCheckParameter4;
          BugCheckParameter4 = _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)(v16 - 24),
                                 BugCheckParameter4 + 1,
                                 BugCheckParameter4);
          if ( (void *)BugCheckParameter4 == v10 )
            break;
          v19 = BugCheckParameter4 == 0;
          if ( BugCheckParameter4 <= 0 )
            goto LABEL_22;
        }
      }
      if ( AlpcpTryLockForCachedReferenceBlob(v16, (__int64)v10, v12, v13) )
      {
        if ( *(_QWORD *)(v16 + 24) == v9 )
        {
          v41 = 0;
          goto LABEL_58;
        }
        --*(_WORD *)(v16 - 30);
        AlpcpUnlockMessage(v16, v20, v21, v22);
        v16 = *(_QWORD *)v16;
        goto LABEL_88;
      }
      if ( v5 != 1 && v5 != 2 )
        break;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a2 + 17);
      KeAbPostRelease((unsigned __int64)(a2 + 34));
      v6 = 1;
      AlpcpLockForCachedReferenceBlob(v16, v35, v36, v37);
      v40 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 34), 0LL, 0LL, v38);
      v34 = v40;
      if ( _interlockedbittestandset64(a2 + 34, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2 + 17, v40, (__int64)(a2 + 34));
      if ( !v34 )
        goto LABEL_51;
      if ( (KiAbpGlobalState & 1) != 0 )
        goto LABEL_49;
      *((_BYTE *)v34 + 10) = 1;
LABEL_51:
      v9 = a1;
      if ( *(_QWORD *)(v16 + 24) == a1 && (unsigned int)AlpcpIsEntryInList(a3, v16) )
      {
        v17 = (ULONG_PTR)v32;
        v41 = 1;
LABEL_58:
        if ( !*(_QWORD *)(v16 + 64) )
        {
          v42 = *(_DWORD *)(v16 + 40);
          if ( (v42 & 0x80u) == 0 )
          {
            v43 = *(_QWORD *)(v16 + 32);
            v44 = v42 | 0x80;
            *(_BYTE *)(v16 + 244) = 0;
            *(_WORD *)(v16 + 244) |= 0xCu;
            *(_DWORD *)(v16 + 40) = v44;
            *(_DWORD *)(v16 + 240) = 2621440;
            if ( v43 )
            {
              if ( _InterlockedExchange64((volatile __int64 *)(v43 + 1464), 0LL) == v16 )
              {
                KeReleaseSemaphoreEx(*(_QWORD *)(v16 + 32) + 1304LL, 1LL, 1LL, (__int64)v22, 0, 0LL);
                *(_WORD *)(v16 - 30) -= 3;
                *(_QWORD *)(v16 + 32) = 0LL;
                goto LABEL_66;
              }
            }
            else if ( (v44 & 0x200) == 0 )
            {
              *(_QWORD *)(v16 + 88) = *(_QWORD *)(a5 + 8);
              *(_QWORD *)(v16 + 80) = a5;
              **(_QWORD **)(a5 + 8) = v16 + 80;
              *(_QWORD *)(a5 + 8) = v16 + 80;
              goto LABEL_66;
            }
            --*(_WORD *)(v16 - 30);
          }
        }
LABEL_66:
        AlpcpReleaseMessageAttributesOnCancel(v16);
        v48 = *(_DWORD *)(v16 + 40);
        *(_WORD *)(v16 + 244) &= ~0x2000u;
        v49 = v48 | 0x200;
        v50 = *(void **)(v16 + 24);
        *(_DWORD *)(v16 + 40) = v49;
        if ( v50 )
        {
          if ( (v49 & 0x1000) != 0 )
            ObfDereferenceObject(v50);
          *(_QWORD *)(v16 + 24) = 0LL;
        }
        v51 = *(_QWORD *)(v16 + 48);
        if ( v51 && (*(_DWORD *)(v16 + 40) & 0x400) == 0 && !*(_QWORD *)(v16 + 96) )
        {
          v52 = 792LL;
          if ( *(_QWORD *)(v16 + 224) )
            v52 = *(_QWORD *)(v16 + 232) + 792LL;
          *(_QWORD *)(v16 + 48) = PsTransferProcessQuotaToSharedQuota(v51, v52);
          ObfDereferenceObjectWithTag(v53, 0x63706C41u);
          *(_DWORD *)(v16 + 40) |= 0x400u;
        }
        v54 = *(_QWORD *)(v16 + 208);
        if ( v54 )
        {
          v55 = v54 & 0xFFFFFFFFFFFFFFF8uLL;
          v56 = 0;
          v57 = 2;
          if ( (*(_DWORD *)(v16 + 208) & 7) != 7 )
          {
            v56 = *(_DWORD *)(v16 + 208) & 7;
            v57 = 0;
          }
          PspChargeProcessWakeCounter(v55, v57, v56, *(unsigned int *)(v16 + 264), -1, 1, 0LL);
          *(_QWORD *)(v16 + 208) = 0LL;
        }
        v58 = *(_QWORD *)(v16 + 216);
        if ( v58 )
        {
          v59 = v58 & 0xFFFFFFFFFFFFFFF8uLL;
          v60 = 0;
          v61 = 2;
          if ( (*(_DWORD *)(v16 + 216) & 7) != 7 )
          {
            v60 = *(_DWORD *)(v16 + 216) & 7;
            v61 = 0;
          }
          PspChargeProcessWakeCounter(v59, v61, v60, *(unsigned int *)(v16 + 264), -1, 1, 0LL);
          *(_QWORD *)(v16 + 216) = 0LL;
        }
        if ( v41 )
          v16 = *a3;
        else
          v16 = *(_QWORD *)v16;
        AlpcpUnlockMessage(v17, v45, v46, v47);
        v9 = a1;
        goto LABEL_88;
      }
      --*(_WORD *)(v16 - 30);
      AlpcpUnlockMessage(v16, (__int64)v32, v33, v22);
      v16 = *a3;
LABEL_88:
      if ( (ULONG_PTR *)v16 == a3 )
        goto LABEL_89;
    }
    if ( v5 == 3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a2 + 22);
      KeAbPostRelease((unsigned __int64)(a2 + 44));
      AlpcpLockForCachedReferenceBlob(v16, v27, v28, v29);
      v6 = 1;
      v31 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 44), 0LL, 0LL, v30);
      v34 = v31;
      if ( _interlockedbittestandset64(a2 + 44, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2 + 22, v31, (__int64)(a2 + 44));
      if ( !v34 )
        goto LABEL_51;
      if ( (KiAbpGlobalState & 1) == 0 )
        goto LABEL_44;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a2 + 25);
      KeAbPostRelease((unsigned __int64)(a2 + 50));
      AlpcpLockForCachedReferenceBlob(v16, v23, v24, v25);
      v6 = 1;
      v39 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 50), 0LL, 0LL, v26);
      v34 = v39;
      if ( _interlockedbittestandset64(a2 + 50, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2 + 25, v39, (__int64)(a2 + 50));
      if ( !v34 )
        goto LABEL_51;
      if ( (KiAbpGlobalState & 1) == 0 )
      {
LABEL_44:
        *((_BYTE *)v34 + 10) = 1;
        goto LABEL_51;
      }
    }
LABEL_49:
    AutoBoost::KiAbpPostAcquire(v34, v32);
    goto LABEL_51;
  }
LABEL_89:
  v62 = v5 - 1;
  if ( v62 && (v63 = v62 - 1) != 0 )
  {
    if ( v63 == 1 )
      v64 = (volatile signed __int64 *)(a2 + 44);
    else
      v64 = (volatile signed __int64 *)(a2 + 50);
  }
  else
  {
    v64 = (volatile signed __int64 *)(a2 + 34);
  }
  if ( (_InterlockedExchangeAdd64(v64, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v64);
  KeAbPostRelease((unsigned __int64)v64);
  return v6;
}
