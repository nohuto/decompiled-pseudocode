/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x1409517A4
 * Callers:
 *     PiDqIrpPropertySet @ 0x14094E168 (PiDqIrpPropertySet.c)
 *     PiPnpRtlObjectEventCallback @ 0x140951770 (PiPnpRtlObjectEventCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1407AB624 (PiDqObjectManagerMakeInconsistent.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlObjectEventCreate @ 0x140964B70 (PiPnpRtlObjectEventCreate.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1409688BC (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x140968918 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140968948 (PiPnpRtlObjectEventDispatch.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140969098 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409A9DA0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x140A8B0B0 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  char *v5; // rsi
  unsigned int v8; // r15d
  int v10; // eax
  int PWSTR; // edi
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbx
  _DWORD *v15; // rcx
  __int128 *v16; // rax
  const wchar_t *v17; // r14
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  __int128 v20; // xmm0
  char *v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  const wchar_t *v26; // rdx
  _DWORD *Pool2; // rax
  _DWORD *v28; // rbx
  __int64 v29; // rcx
  int v30; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  PVOID *v33; // r8
  _QWORD *v34; // rax
  int v35; // eax
  __int64 ObjectManagerForPnpObjectType; // rax
  __int64 *v37; // rax
  __int64 v38; // rbx
  _QWORD *v39; // rbx
  _QWORD *v40; // rcx
  PVOID *v41; // rdx
  _QWORD *v42; // rax
  void *Src; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  __int128 v45; // [rsp+40h] [rbp-20h]
  __int128 v46; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v47; // [rsp+98h] [rbp+38h] BYREF

  v5 = 0LL;
  P = 0LL;
  Src = 0LL;
  LOBYTE(v47) = 0;
  v8 = a2;
  v45 = 0LL;
  v46 = 0LL;
  if ( (int)a2 < 7 )
  {
    if ( a3 == 1 )
      goto LABEL_48;
    v10 = PiPnpRtlBeginOperation(&P, a2);
    v5 = (char *)P;
    if ( v10 < 0 )
      goto LABEL_55;
    PiPnpRtlDisableRemoveOperationDispatch();
    PWSTR = PiPnpRtlObjectEventCreate(a1, v8, v5, &Src);
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    if ( PWSTR < 0 )
      goto LABEL_55;
    if ( !Src )
      goto LABEL_20;
    v12 = a3 - 2;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = (unsigned int)(v13 - 1);
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 == 1 )
            *((_DWORD *)Src + 1) |= 8u;
          goto LABEL_20;
        }
        PiDmObjectProcessPropertyChange(
          v8,
          a1,
          *((_QWORD *)Src + 1),
          *(_QWORD *)(a4 + 8),
          *(_QWORD *)(a4 + 16),
          (__int64)&v47);
        if ( !(_BYTE)v47 )
        {
          PiPnpRtlDisableRemoveOperationDispatch();
          v15 = Src;
          if ( *((_QWORD *)Src + 7) )
            goto LABEL_19;
          v16 = *(__int128 **)(a4 + 16);
          v17 = *(const wchar_t **)(a4 + 8);
          v18 = a5;
          v20 = *v16;
          v47 = *((_DWORD *)v16 + 4);
          v19 = v47;
          *(_QWORD *)&v46 = __PAIR64__(a5, v47);
          v45 = v20;
          *((_QWORD *)&v46 + 1) = v17;
          while ( (unsigned int)v14 < v15[19] )
          {
            if ( v19 == v15[8 * v14 + 24] )
            {
              v24 = 8LL * (unsigned int)v14;
              v25 = v45 - *(_QWORD *)&v15[v24 + 20];
              if ( (_QWORD)v45 == *(_QWORD *)&v15[v24 + 20] )
                v25 = *((_QWORD *)&v45 + 1) - *(_QWORD *)&v15[v24 + 22];
              if ( !v25 && v18 == v15[v24 + 25] )
              {
                v26 = *(const wchar_t **)&v15[v24 + 26];
                if ( v17 == v26 )
                  goto LABEL_19;
                if ( v17 && v26 )
                {
                  if ( !wcsicmp(v17, v26) )
                    goto LABEL_19;
                  v15 = Src;
                }
              }
              v19 = v47;
            }
            v14 = (unsigned int)(v14 + 1);
          }
          if ( v18 == 1 )
          {
            v35 = v15[1];
            if ( (v35 & 4) == 0 )
            {
              v15[1] = v35 | 4;
              SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
              v15 = Src;
            }
          }
          if ( v15[19] == v15[18] )
          {
            Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
            v28 = Pool2;
            if ( !Pool2 )
            {
              PWSTR = -1073741670;
              goto LABEL_19;
            }
            memmove(Pool2, Src, 32LL * *((unsigned int *)Src + 19) + 80);
            v28[18] *= 2;
            *(_QWORD *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src) = v28;
            ExFreePoolWithTag(Src, 0x41706E50u);
            Src = v28;
          }
          PWSTR = PnpAllocatePWSTR(*(_WORD **)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, (PVOID *)&v46 + 1);
          if ( PWSTR >= 0 )
          {
            v21 = (char *)Src;
            v22 = v46;
            v23 = 32LL * *((unsigned int *)Src + 19);
            *(_OWORD *)((char *)Src + v23 + 80) = v45;
            *(_OWORD *)&v21[v23 + 96] = v22;
            ++*((_DWORD *)Src + 19);
          }
LABEL_19:
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KeLeaveCriticalRegion();
          if ( PWSTR >= 0 )
            goto LABEL_20;
LABEL_55:
          if ( !Src )
            goto LABEL_48;
          PiPnpRtlDisableRemoveOperationDispatch();
          if ( *((_QWORD *)Src + 7) )
          {
LABEL_59:
            ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
            KeLeaveCriticalRegion();
LABEL_48:
            ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(v8);
            if ( ObjectManagerForPnpObjectType )
              PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
            goto LABEL_20;
          }
          RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src);
          v41 = (PVOID *)*((_QWORD *)v5 + 17);
          v42 = (char *)Src + 56;
          if ( *v41 == v5 + 128 )
          {
            *v42 = v5 + 128;
            v42[1] = v41;
            *v41 = v42;
            *((_QWORD *)v5 + 17) = v42;
            goto LABEL_59;
          }
LABEL_42:
          __fastfail(3u);
        }
      }
      else
      {
        *((_DWORD *)Src + 1) |= 2u;
        KsepCacheLock(*((_QWORD *)Src + 1));
        v29 = *((_QWORD *)Src + 1);
        v30 = *(_DWORD *)(v29 + 32);
        *(_DWORD *)(v29 + 32) = v30 & 0xFFFFFFFE;
        CmpUnlockSiloKeyLockTracker(*((struct _KTHREAD **)Src + 1));
        if ( (v30 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(v8, a1);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        PiPnpRtlOperationListAcquireSharedLock();
        for ( i = PiPnpRtlActiveOperations; (__int64 *)i != &PiPnpRtlActiveOperations; i = *(_QWORD *)i )
        {
          if ( (char *)i != v5 )
          {
            v37 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(i + 24), &Src);
            if ( v37 )
            {
              v38 = *v37;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 24), v37);
              v39 = (_QWORD *)(v38 + 56);
              v40 = *(_QWORD **)(i + 136);
              if ( *v40 != i + 128 )
                goto LABEL_42;
              *v39 = i + 128;
              v39[1] = v40;
              *v40 = v39;
              *(_QWORD *)(i + 136) = v39;
            }
          }
        }
        PiPnpRtlOperationListReleaseLock();
        PiPnpRtlObjectEventDispatch(Src);
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src);
        v33 = (PVOID *)*((_QWORD *)v5 + 17);
        v34 = (char *)Src + 56;
        if ( *v33 != v5 + 128 )
          goto LABEL_42;
        *v34 = v5 + 128;
        v34[1] = v33;
        *v33 = v34;
        *((_QWORD *)v5 + 17) = v34;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegion();
        Src = 0LL;
      }
    }
    else
    {
      *((_DWORD *)Src + 1) |= 1u;
    }
LABEL_20:
    if ( v5 )
      PiPnpRtlEndOperation(v5);
  }
}
