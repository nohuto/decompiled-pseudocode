/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x140B73710
 * Callers:
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     PsTransferProcessQuotaToSharedQuota @ 0x1404F68DC (PsTransferProcessQuotaToSharedQuota.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline @ 0x14060257C (Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C4F38 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(
        __int64 a1,
        volatile signed __int32 *a2,
        ULONG_PTR *a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5)
{
  int v5; // r13d
  unsigned int v6; // esi
  __int64 v9; // rbp
  void *v10; // rdx
  AutoBoost *v11; // rdi
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // r8
  unsigned __int64 *v14; // rcx
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // r12
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rdx
  AutoBoost *v20; // rax
  void *v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  signed __int64 BugCheckParameter4; // rax
  int v25; // esi
  volatile signed __int64 *v26; // rsi
  struct _KLOCK_ENTRIES *v27; // r9
  AutoBoost *v28; // rax
  void *v29; // rdx
  struct _KLOCK_ENTRIES *v30; // r9
  AutoBoost *v31; // rsi
  signed __int64 v32; // rax
  void *v33; // rdx
  AutoBoost *v34; // rsi
  __int64 v35; // r8
  unsigned __int64 *v36; // rcx
  ULONG_PTR *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  struct _KLOCK_ENTRIES *v40; // r9
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  struct _KLOCK_ENTRIES *v46; // r9
  int v47; // eax
  int v48; // eax
  void *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  PVOID v52; // rcx
  __int64 v53; // rcx
  void *v54; // rcx
  signed int v55; // r8d
  int v56; // edx
  __int64 v57; // rcx
  void *v58; // rcx
  signed int v59; // r8d
  int v60; // edx
  __int64 v61; // rdx
  __int64 v62; // r8
  struct _KLOCK_ENTRIES *v63; // r9
  struct _KLOCK_ENTRIES *v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  struct _KLOCK_ENTRIES *v67; // r9
  struct _KLOCK_ENTRIES *v68; // r9
  void *v69; // rdx
  AutoBoost *v70; // rdi
  __int64 v71; // r8
  unsigned __int64 *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  struct _KLOCK_ENTRIES *v75; // r9
  struct _KLOCK_ENTRIES *v76; // r9
  int v77; // r13d
  int v78; // r13d
  volatile signed __int64 *v79; // rdi
  int v82; // [rsp+98h] [rbp+20h]

  v5 = (int)a4;
  v6 = 0;
  v82 = 0;
  v9 = a1;
  if ( (_DWORD)a4 == 1 || (_DWORD)a4 == 2 )
  {
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 34), 0LL, 0LL, a4);
    if ( !_interlockedbittestandset64(a2 + 34, 0LL) )
      goto LABEL_11;
    v13 = (__int64)(a2 + 34);
    v14 = (unsigned __int64 *)(a2 + 34);
  }
  else if ( (_DWORD)a4 == 3 )
  {
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 44), 0LL, 0LL, a4);
    if ( !_interlockedbittestandset64(a2 + 44, 0LL) )
      goto LABEL_11;
    v13 = (__int64)(a2 + 44);
    v14 = (unsigned __int64 *)(a2 + 44);
  }
  else
  {
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 50), 0LL, 0LL, a4);
    if ( !_interlockedbittestandset64(a2 + 50, 0LL) )
      goto LABEL_11;
    v13 = (__int64)(a2 + 50);
    v14 = (unsigned __int64 *)(a2 + 50);
  }
  ExfAcquirePushLockExclusiveEx(v14, v11, v13);
LABEL_11:
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v15 = *a3;
  if ( (ULONG_PTR *)*a3 != a3 )
  {
    while ( 1 )
    {
      v16 = v15;
      if ( *(_QWORD *)(v15 + 24) == v9 || (*(_DWORD *)(v15 + 40) & 0x10000) != 0 )
      {
        _m_prefetchw((const void *)(v15 - 24));
        v17 = *(_QWORD *)(v15 - 24);
        v18 = v17 == 0;
        if ( v17 <= 0 )
        {
LABEL_22:
          if ( !v18 )
            KeBugCheckEx(0x18u, 0LL, v15, 0x20uLL, v17);
        }
        else
        {
          while ( 1 )
          {
            v19 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 - 24), v17 + 1, v17);
            if ( v17 == v19 )
              break;
            v18 = v17 == 0;
            if ( v17 <= 0 )
              goto LABEL_22;
          }
        }
        v20 = (AutoBoost *)KeAbPreAcquire(v15 - 16, 0LL, 1LL, v12);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 - 16), 0LL) )
        {
          if ( v20 )
            KeAbPostReleaseEx((struct _KTHREAD *)(v15 - 16), (unsigned __int64)v20, v22, (__int64)v23);
          if ( v5 == 1 || v5 == 2 )
          {
            v26 = (volatile signed __int64 *)(a2 + 34);
          }
          else if ( v5 == 3 )
          {
            v26 = (volatile signed __int64 *)(a2 + 44);
          }
          else
          {
            v26 = (volatile signed __int64 *)(a2 + 50);
          }
          if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v26);
          KeAbPostRelease((unsigned __int64)v26);
          v82 = 1;
          v28 = (AutoBoost *)KeAbPreAcquire(v15 - 16, 0LL, 0LL, v27);
          v31 = v28;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v15 - 16), v28, v15 - 16);
          if ( v31 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v31, v29);
            else
              *((_BYTE *)v31 + 10) = 1;
          }
          *(_BYTE *)(v15 - 32) |= 1u;
          v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 24), 0x10000uLL) + 0x10000;
          if ( v32 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v15, 0x26uLL, v32);
          if ( v5 == 1 || v5 == 2 )
          {
            v34 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 34), 0LL, 0LL, v30);
            if ( !_interlockedbittestandset64(a2 + 34, 0LL) )
              goto LABEL_59;
            v35 = (__int64)(a2 + 34);
            v36 = (unsigned __int64 *)(a2 + 34);
          }
          else
          {
            if ( v5 != 3 )
            {
              v34 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 50), 0LL, 0LL, v30);
              if ( _interlockedbittestandset64(a2 + 50, 0LL) )
              {
                v35 = (__int64)(a2 + 50);
                v36 = (unsigned __int64 *)(a2 + 50);
                goto LABEL_58;
              }
LABEL_59:
              if ( v34 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v34, v33);
                else
                  *((_BYTE *)v34 + 10) = 1;
              }
              v9 = a1;
              if ( *(_QWORD *)(v15 + 24) == a1 )
              {
                v37 = (ULONG_PTR *)*a3;
                if ( (ULONG_PTR *)*a3 != a3 )
                {
                  while ( v37 != (ULONG_PTR *)v15 )
                  {
                    v37 = (ULONG_PTR *)*v37;
                    if ( v37 == a3 )
                      goto LABEL_67;
                  }
                  v25 = 1;
LABEL_70:
                  if ( !*(_QWORD *)(v15 + 64) )
                  {
                    v41 = *(_DWORD *)(v15 + 40);
                    if ( (v41 & 0x80u) == 0 )
                    {
                      v42 = *(_QWORD *)(v15 + 32);
                      v43 = v41 | 0x80;
                      *(_BYTE *)(v15 + 244) = 0;
                      *(_WORD *)(v15 + 244) |= 0xCu;
                      *(_DWORD *)(v15 + 40) = v43;
                      *(_DWORD *)(v15 + 240) = 2621440;
                      if ( v42 )
                      {
                        if ( _InterlockedExchange64((volatile __int64 *)(v42 + 1464), 0LL) == v15 )
                        {
                          KeReleaseSemaphoreEx(*(_QWORD *)(v15 + 32) + 1304LL, 1LL, 1LL, (__int64)v23, 0, 0LL);
                          *(_WORD *)(v15 - 30) -= 3;
                          *(_QWORD *)(v15 + 32) = 0LL;
                          goto LABEL_78;
                        }
                      }
                      else if ( (v43 & 0x200) == 0 )
                      {
                        *(_QWORD *)(v15 + 88) = *(_QWORD *)(a5 + 8);
                        *(_QWORD *)(v15 + 80) = a5;
                        **(_QWORD **)(a5 + 8) = v15 + 80;
                        *(_QWORD *)(a5 + 8) = v15 + 80;
                        goto LABEL_78;
                      }
                      --*(_WORD *)(v15 - 30);
                    }
                  }
LABEL_78:
                  AlpcpReleaseMessageAttributesOnCancel(v15);
                  v47 = *(_DWORD *)(v15 + 40);
                  *(_WORD *)(v15 + 244) &= ~0x2000u;
                  v48 = v47 | 0x200;
                  v49 = *(void **)(v15 + 24);
                  *(_DWORD *)(v15 + 40) = v48;
                  if ( v49 )
                  {
                    if ( (v48 & 0x1000) != 0 )
                      ObfDereferenceObject(v49);
                    *(_QWORD *)(v15 + 24) = 0LL;
                  }
                  v50 = *(_QWORD *)(v15 + 48);
                  if ( v50 && (*(_DWORD *)(v15 + 40) & 0x400) == 0 && !*(_QWORD *)(v15 + 96) )
                  {
                    v51 = 792LL;
                    if ( *(_QWORD *)(v15 + 224) )
                      v51 = *(_QWORD *)(v15 + 232) + 792LL;
                    *(_QWORD *)(v15 + 48) = PsTransferProcessQuotaToSharedQuota(v50, v51);
                    ObfDereferenceObjectWithTag(v52, 0x63706C41u);
                    *(_DWORD *)(v15 + 40) |= 0x400u;
                  }
                  v53 = *(_QWORD *)(v15 + 208);
                  if ( v53 )
                  {
                    v54 = (void *)(v53 & 0xFFFFFFFFFFFFFFF8uLL);
                    v55 = 0;
                    v56 = 2;
                    if ( (*(_DWORD *)(v15 + 208) & 7) != 7 )
                    {
                      v55 = *(_DWORD *)(v15 + 208) & 7;
                      v56 = 0;
                    }
                    PspChargeProcessWakeCounter(v54, v56, v55, *(unsigned int *)(v15 + 264), -1, 1, 0LL);
                    *(_QWORD *)(v15 + 208) = 0LL;
                  }
                  v57 = *(_QWORD *)(v15 + 216);
                  if ( v57 )
                  {
                    v58 = (void *)(v57 & 0xFFFFFFFFFFFFFFF8uLL);
                    v59 = 0;
                    v60 = 2;
                    if ( (*(_DWORD *)(v15 + 216) & 7) != 7 )
                    {
                      v59 = *(_DWORD *)(v15 + 216) & 7;
                      v60 = 0;
                    }
                    PspChargeProcessWakeCounter(v58, v60, v59, *(unsigned int *)(v15 + 264), -1, 1, 0LL);
                    *(_QWORD *)(v15 + 216) = 0LL;
                  }
                  if ( v25 )
                    v15 = *a3;
                  else
                    v15 = *(_QWORD *)v15;
                  AlpcpUnlockMessage(v16, v44, v45, v46);
                  goto LABEL_123;
                }
              }
LABEL_67:
              --*(_WORD *)(v15 - 30);
              if ( !(unsigned int)Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline() )
              {
                AlpcpUnlockMessage(v15, v38, v39, v40);
LABEL_122:
                v15 = *a3;
                goto LABEL_123;
              }
              if ( v5 == 1 || v5 == 2 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)a2 + 17);
                KeAbPostRelease((unsigned __int64)(a2 + 34));
                AlpcpUnlockMessage(v15, v73, v74, v75);
                v70 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 34), 0LL, 0LL, v76);
                if ( _interlockedbittestandset64(a2 + 34, 0LL) )
                {
                  v71 = (__int64)(a2 + 34);
                  v72 = (unsigned __int64 *)(a2 + 34);
LABEL_117:
                  ExfAcquirePushLockExclusiveEx(v72, v70, v71);
                }
              }
              else if ( v5 == 3 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)a2 + 22);
                KeAbPostRelease((unsigned __int64)(a2 + 44));
                AlpcpUnlockMessage(v15, v65, v66, v67);
                v70 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 44), 0LL, 0LL, v68);
                if ( _interlockedbittestandset64(a2 + 44, 0LL) )
                {
                  v71 = (__int64)(a2 + 44);
                  v72 = (unsigned __int64 *)(a2 + 44);
                  goto LABEL_117;
                }
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)a2 + 25);
                KeAbPostRelease((unsigned __int64)(a2 + 50));
                AlpcpUnlockMessage(v15, v61, v62, v63);
                v70 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 50), 0LL, 0LL, v64);
                if ( _interlockedbittestandset64(a2 + 50, 0LL) )
                {
                  v71 = (__int64)(a2 + 50);
                  v72 = (unsigned __int64 *)(a2 + 50);
                  goto LABEL_117;
                }
              }
              if ( v70 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v70, v69);
                else
                  *((_BYTE *)v70 + 10) = 1;
              }
              goto LABEL_122;
            }
            v34 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 44), 0LL, 0LL, v30);
            if ( !_interlockedbittestandset64(a2 + 44, 0LL) )
              goto LABEL_59;
            v35 = (__int64)(a2 + 44);
            v36 = (unsigned __int64 *)(a2 + 44);
          }
LABEL_58:
          ExfAcquirePushLockExclusiveEx(v36, v34, v35);
          goto LABEL_59;
        }
        if ( v20 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v20, v21);
          else
            *((_BYTE *)v20 + 10) = 1;
        }
        *(_BYTE *)(v15 - 32) |= 1u;
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 24), 0x10000uLL) + 0x10000;
        if ( BugCheckParameter4 <= 0 )
          KeBugCheckEx(0x18u, 0LL, v15, 0x27uLL, BugCheckParameter4);
        v9 = a1;
        if ( *(_QWORD *)(v15 + 24) == a1 )
        {
          v25 = 0;
          goto LABEL_70;
        }
        --*(_WORD *)(v15 - 30);
        AlpcpUnlockMessage(v15, (__int64)v21, v22, v23);
        v15 = *(_QWORD *)v15;
      }
      else
      {
        v15 = *(_QWORD *)v15;
      }
LABEL_123:
      if ( (ULONG_PTR *)v15 == a3 )
      {
        v6 = v82;
        break;
      }
    }
  }
  v77 = v5 - 1;
  if ( v77 && (v78 = v77 - 1) != 0 )
  {
    if ( v78 == 1 )
      v79 = (volatile signed __int64 *)(a2 + 44);
    else
      v79 = (volatile signed __int64 *)(a2 + 50);
  }
  else
  {
    v79 = (volatile signed __int64 *)(a2 + 34);
  }
  if ( (_InterlockedExchangeAdd64(v79, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v79);
  KeAbPostRelease((unsigned __int64)v79);
  return v6;
}
