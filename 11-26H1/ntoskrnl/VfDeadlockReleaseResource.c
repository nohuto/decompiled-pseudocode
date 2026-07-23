/*
 * XREFs of VfDeadlockReleaseResource @ 0x140C4A94C
 * Callers:
 *     ViDeadlockExReleaseFastMutexUnsafe_Entry @ 0x140C3D770 (ViDeadlockExReleaseFastMutexUnsafe_Entry.c)
 *     ViDeadlockExReleaseFastMutex_Entry @ 0x140C3D7A0 (ViDeadlockExReleaseFastMutex_Entry.c)
 *     ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry @ 0x140C3DA20 (ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry.c)
 *     ViDeadlockKeReleaseMutant_Entry @ 0x140C3DA60 (ViDeadlockKeReleaseMutant_Entry.c)
 *     ViDeadlockKeReleaseMutex_Entry @ 0x140C3DA90 (ViDeadlockKeReleaseMutex_Entry.c)
 *     ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry @ 0x140C3DAC0 (ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry.c)
 *     ViDeadlockKeReleaseSpinLock_Entry @ 0x140C4A920 (ViDeadlockKeReleaseSpinLock_Entry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x14064AF6C (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14064AFA4 (ViRaiseIrqlToDpcLevel.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ViDeadlockDetectionLock @ 0x140C3D470 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140C3D4A8 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140C3D920 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x140C3DDD0 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140C3E1A8 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140C3E2F8 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140C3E3DC (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140C3E500 (ViIsThreadInsidePagingCodePaths.c)
 *     ViDeadlockCanProceed @ 0x140C4B470 (ViDeadlockCanProceed.c)
 */

void __fastcall VfDeadlockReleaseResource(const void *a1, int a2, unsigned __int64 a3, void *a4)
{
  __int64 *v4; // r14
  ULONG_PTR v5; // r15
  _QWORD *v8; // rdi
  int v9; // esi
  __int64 *v10; // r13
  unsigned int v11; // ecx
  PVOID v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int *v15; // rax
  int *v16; // rsi
  __int64 v17; // rcx
  __int16 v18; // ax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r15
  __int64 *v22; // rdi
  __int16 v23; // ax
  _DWORD *v24; // rax
  __int64 v25; // rcx
  __int64 **i; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  _QWORD *v30; // rbx
  unsigned __int8 v31; // [rsp+40h] [rbp-49h]
  int v32; // [rsp+44h] [rbp-45h]
  _QWORD *v33; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-39h]
  PVOID BackTrace[2]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v36; // [rsp+70h] [rbp-19h]
  __int128 v37; // [rsp+80h] [rbp-9h]
  __int128 v38; // [rsp+90h] [rbp+7h]

  v4 = 0LL;
  v34 = a3;
  v5 = a2;
  v33 = 0LL;
  v8 = 0LL;
  memset_0(BackTrace, 0, 0x40uLL);
  v32 = 0;
  v9 = 0;
  if ( !(unsigned int)ViDeadlockCanProceed(a1)
    || ViIsThreadInsidePagingCodePaths()
    || *((_DWORD *)ViDeadlockGlobals + 8196)
    || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    return;
  }
  v10 = 0LL;
  v11 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v12 = BackTrace[0];
  if ( !(_WORD)v11 )
    v12 = a4;
  BackTrace[0] = v12;
  v13 = v11 + 1;
  if ( (_WORD)v11 )
    v13 = v11;
  if ( (unsigned int)v13 < 8 )
    BackTrace[v13] = 0LL;
  v31 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1);
  v14 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v15 = (int *)ViDeadlockSearchResource((unsigned __int64)a1, &v33);
    v16 = v15;
    if ( !v15 )
    {
      v9 = 0;
      goto LABEL_60;
    }
    v17 = *v15;
    if ( (_DWORD)v17 == (_DWORD)v5 )
      goto LABEL_17;
    if ( (_DWORD)v17 == 7 )
    {
      if ( (unsigned int)(v5 - 5) <= 1 )
      {
        *v15 = v5;
        LODWORD(v17) = v5;
        goto LABEL_17;
      }
    }
    else if ( (_DWORD)v17 == 1 && (_DWORD)v5 == 2 )
    {
      if ( *((_WORD *)v15 + 3) > 1u )
        *((_WORD *)v15 + 3) = 1;
LABEL_17:
      v18 = *((_WORD *)v15 + 3);
      if ( v18 )
      {
        v4 = (__int64 *)*((_QWORD *)v16 + 2);
        v21 = *v4;
        if ( (_DWORD)v17 == 5 || (_DWORD)v17 == 6 )
          v22 = (__int64 *)v4[1];
        else
          v22 = (__int64 *)v4[2];
        v23 = v18 - 1;
        *((_WORD *)v16 + 3) = v23;
        if ( !v23 )
        {
          v24 = ViDeadlockGlobals;
          *((_QWORD *)v16 + 2) = 0LL;
          ++v24[8210];
          if ( (int *)v22[7] == v16 )
          {
            *((_DWORD *)v22 + 18) &= ~1u;
            v10 = v22;
          }
          else
          {
            ++v24[8208];
            if ( (ViDeadlockResourceTypeInfo[*(int *)v22[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v16] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v22[7] + 8),
                v4,
                a1);
              ViDeadlockPreprocessOptions(
                byte_140E0EB64,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                (__int64)a1,
                *(_QWORD *)(v22[7] + 8),
                (__int64)v4);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v22[7] + 8),
                (ULONG_PTR)v4,
                byte_140E0EB64);
            }
            while ( v22 )
            {
              if ( (int *)v22[7] == v16 )
              {
                *((_DWORD *)v22 + 18) &= ~1u;
                v10 = v22;
                if ( (v22[9] & 4) == 0 )
                  ++*((_DWORD *)ViDeadlockGlobals + 8209);
                *((_DWORD *)v22 + 18) |= 4u;
                break;
              }
              v22 = (__int64 *)*v22;
            }
          }
          if ( (unsigned int)(*v16 - 5) <= 1 )
          {
            for ( i = (__int64 **)v4[1]; i && (((_DWORD)i[9] & 1) == 0 || i[8] != v4); v4[1] = (__int64)i )
              i = (__int64 **)*i;
          }
          else
          {
            while ( 1 )
            {
              v25 = v4[2];
              if ( !v25 || (*(_DWORD *)(v25 + 72) & 1) != 0 && *(__int64 **)(v25 + 64) == v4 )
                break;
              v4[2] = *(_QWORD *)v25;
            }
          }
          if ( v10 )
          {
            v10[8] = 0LL;
            --*((_DWORD *)v4 + 10);
            if ( v21 != v34 )
              *((_DWORD *)v10 + 18) |= 4u;
            if ( !*((_DWORD *)v4 + 10) )
            {
              v32 = 1;
              ViDeadlockRemoveThread((ULONG_PTR)v4, 0);
            }
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196) && *((int *)ViDeadlockGlobals + 8282) <= 1024 )
      {
        v19 = ViDeadlockSearchThread(v34);
        ViDeadlockPreprocessOptions(
          &dword_140E0EB60,
          "Releasing lock 0x%p that is not owned by the current thread.",
          4103LL,
          (__int64)a1,
          (__int64)v16,
          (__int64)v19);
        v20 = ViDeadlockSearchThread(v34);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v16, (ULONG_PTR)v20, &dword_140E0EB60);
      }
      goto LABEL_58;
    }
    ViDeadlockPreprocessOptions(
      byte_140E0EB5C,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      4105LL,
      (__int64)a1,
      v17,
      v5);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v16, v5, byte_140E0EB5C);
LABEL_58:
    v27 = v36;
    *(_OWORD *)(v16 + 46) = *(_OWORD *)BackTrace;
    v28 = v37;
    *(_OWORD *)(v16 + 50) = v27;
    v29 = v38;
    *(_OWORD *)(v16 + 54) = v28;
    *(_OWORD *)(v16 + 58) = v29;
    v9 = v32;
LABEL_60:
    v8 = v33;
  }
  if ( MEMORY[0xFFFFF78000000320] - v14 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v14;
  ViDeadlockDetectionUnlock(1);
  ViLowerIrql(v31);
  if ( v8 )
  {
    do
    {
      v30 = (_QWORD *)*v8;
      ViDeadlockFree(v8, 2);
      v8 = v30;
    }
    while ( v30 );
  }
  if ( v9 )
    ViDeadlockFree(v4, 3);
}
