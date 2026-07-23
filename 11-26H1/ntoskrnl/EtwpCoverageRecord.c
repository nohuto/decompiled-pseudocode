/*
 * XREFs of EtwpCoverageRecord @ 0x140B0FA48
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1406CA460 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140B0F758 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     EtwpCoverageAddToStringBuffer @ 0x140486CD8 (EtwpCoverageAddToStringBuffer.c)
 *     EtwpCoverageValidateCP @ 0x140486D7C (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1404F20F0 (TelemetryCoverageTableLocateInternal.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x14082FE18 (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFlushPending @ 0x140B452E0 (EtwpCoverageFlushPending.c)
 */

void __fastcall EtwpCoverageRecord(int **a1, __int64 a2)
{
  int v4; // r12d
  int v5; // esi
  unsigned __int64 v6; // r15
  struct _KLOCK_ENTRIES *v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rsi
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  int v15; // edx
  unsigned int *v16; // rsi
  unsigned int *Internal; // r13
  int v18; // r11d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int *v21; // rcx
  const CHAR *v22; // rdx
  int *v23; // rcx
  const CHAR *v24; // rdx
  int v25; // r15d
  int v26; // [rsp+30h] [rbp-A9h] BYREF
  int v27; // [rsp+34h] [rbp-A5h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-A1h] BYREF
  int v29; // [rsp+40h] [rbp-99h] BYREF
  int v30; // [rsp+44h] [rbp-95h] BYREF
  int v31; // [rsp+48h] [rbp-91h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33[2]; // [rsp+60h] [rbp-79h] BYREF
  int *v34; // [rsp+80h] [rbp-59h]
  __int64 v35; // [rsp+88h] [rbp-51h]
  int *v36; // [rsp+90h] [rbp-49h]
  __int64 v37; // [rsp+98h] [rbp-41h]
  int *v38; // [rsp+A0h] [rbp-39h]
  __int64 v39; // [rsp+A8h] [rbp-31h]
  int *v40; // [rsp+B0h] [rbp-29h]
  __int64 v41; // [rsp+B8h] [rbp-21h]
  _QWORD v42[4]; // [rsp+C0h] [rbp-19h] BYREF
  char v43[16]; // [rsp+E0h] [rbp+7h] BYREF

  v4 = 0;
  v5 = 0;
  v27 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v28 = v6;
  v26 = 0;
  if ( (unsigned int)EtwpCoverageValidateCP((char **)a2, &v27) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.Padding[2], 0LL, 0LL, v7);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.Padding[2], 0LL);
    v12 = v9;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock.Padding[2], v9, (__int64)&ExpSysDbgLock.Padding[2]);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v10);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v13 = *(_DWORD *)(a2 + 12);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    v14 = a1[2][6];
    if ( v13 < v14 )
    {
      v15 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = v14;
      v16 = (unsigned int *)a1[2];
      Internal = TelemetryCoverageTableLocateInternal(v16, v15);
      if ( *Internal == v18 )
      {
        v5 = v26;
        v4 = 1;
      }
      else
      {
        if ( v16[8] < *((_DWORD *)a1 + 8) )
        {
          v5 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v27);
          if ( !v5 )
          {
            EtwpCoverageFlushPending(a1);
            if ( (int)EtwpCoverageEnsureStringBuffer((__int64)a1) < 0 )
            {
              *(_DWORD *)(a2 + 12) = v13;
              _InterlockedIncrement(*a1 + 1);
              goto LABEL_13;
            }
            v5 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v27);
          }
          *Internal = *(_DWORD *)(a2 + 8);
          ++*((_DWORD *)a1 + 16);
          ++a1[2][8];
          if ( *((_DWORD *)a1 + 16) == 1 )
          {
            v19 = -10000LL * *((unsigned int *)a1 + 7);
            v20 = (__int64)(*a1 + 60);
            v32[0] = 0LL;
            v32[1] = -1LL;
            KeSetTimer2(v20, v19, 0LL, (__int64)v32);
          }
          goto LABEL_13;
        }
        _InterlockedIncrement(*a1 + 1);
        v5 = 0;
      }
    }
    else
    {
      v4 = 1;
      v5 = 0;
    }
LABEL_13:
    LODWORD(v6) = v28;
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.Padding[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.Padding[2]);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.Padding[2]);
    KeLeaveCriticalRegion();
  }
  if ( !v4
    && v5
    && (unsigned int)dword_140E09028 > 5
    && (byte_140E09038 & 2) != 0
    && (qword_140E09040 & 2) == qword_140E09040 )
  {
    v21 = *a1;
    v22 = *(const CHAR **)a2;
    v27 = **a1;
    v34 = &v27;
    v35 = 4LL;
    v26 = v21[1];
    v36 = &v26;
    v37 = 4LL;
    v29 = v6 - v21[4];
    v38 = &v29;
    v39 = 4LL;
    v30 = v6 - v21[5];
    v40 = &v30;
    v41 = 4LL;
    tlgCreate1Sz_char((__int64)v42, v22);
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09028, (unsigned __int8 *)byte_140055777, 0LL, 0LL, 7u, v33);
  }
  if ( EtwpCoverageCoreTracingEnabled
    && (unsigned int)dword_140E09028 > 5
    && tlgKeywordOn((__int64)&dword_140E09028, 1LL) )
  {
    v23 = *a1;
    v24 = *(const CHAR **)a2;
    v30 = **a1;
    v34 = &v30;
    v35 = 4LL;
    v29 = v23[1];
    v36 = &v29;
    v37 = 4LL;
    v27 = v6 - v23[4];
    v38 = &v27;
    v39 = 4LL;
    v25 = v6 - v23[5];
    v40 = &v26;
    v42[0] = &v31;
    v42[2] = &v28;
    v26 = v25;
    v41 = 4LL;
    v31 = v5;
    v42[1] = 4LL;
    LODWORD(v28) = v4;
    v42[3] = 4LL;
    tlgCreate1Sz_char((__int64)v43, v24);
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09028, (unsigned __int8 *)byte_140055703, 0LL, 0LL, 9u, v33);
  }
}
