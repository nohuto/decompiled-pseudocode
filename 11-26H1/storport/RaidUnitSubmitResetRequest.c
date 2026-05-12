/*
 * XREFs of RaidUnitSubmitResetRequest @ 0x14004CED4
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 *     RaUnitResetBusSrb @ 0x14009F0B0 (RaUnitResetBusSrb.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaidUnitStartDeviceBusy @ 0x140032E10 (RaidUnitStartDeviceBusy.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitSubmitResetRequest(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v6; // r14
  int v7; // eax
  _QWORD *v8; // r8
  __int64 v9; // rax
  __int64 ContiguousIoResources; // rax
  char v11; // al
  bool v12; // zf
  int v13; // ecx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  void *v17; // rdx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // r14
  char v21; // r11
  char v22; // di
  char v23; // r10
  char v24; // r15
  char *v25; // r15
  unsigned int v26; // r13d
  unsigned __int64 v27; // r12
  __int64 v28; // r8
  int v29; // ecx
  char v30; // r12
  char v31; // cl
  char v32; // r8
  char v33; // al
  char *v34; // r10
  unsigned int v35; // eax
  __int128 v36; // xmm1
  KIRQL CurrentIrql; // al
  __int64 v38; // rcx
  __int64 v39; // r8
  KSPIN_LOCK *v40; // rcx
  _QWORD *Pool; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  KIRQL v44; // bl
  char v46; // [rsp+60h] [rbp-29h]
  char v47; // [rsp+61h] [rbp-28h]
  unsigned int v48; // [rsp+64h] [rbp-25h]
  __int128 v49; // [rsp+68h] [rbp-21h] BYREF
  __int128 v50; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-1h] BYREF

  LOBYTE(v2) = 0;
  *(_QWORD *)&v50 = 0LL;
  DWORD2(v50) = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v49 = 0LL;
  v6 = *(_QWORD *)(v4 + 8);
  *(_BYTE *)(v4 + 3) |= 1u;
  v7 = *(unsigned __int8 *)(v6 + 2);
  *(_BYTE *)(v6 + 3) = 0;
  if ( (_BYTE)v7 == 40 )
    v7 = *(_DWORD *)(v6 + 20);
  if ( v7 != 16 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1856), 1, 0) )
    {
      v36 = *(_OWORD *)(a1 + 1840);
      v49 = *(_OWORD *)(a1 + 1824);
      v50 = v36;
      goto LABEL_77;
    }
LABEL_9:
    v11 = RaidNtStatusToSrbStatus(-1073741670);
    v12 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v6 + 3) = v11;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v13;
    if ( v12 )
      goto LABEL_75;
    LockHandle.LockQueue = 0LL;
    IoGetActivityIdIrp(a2, &LockHandle);
    v15 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v15 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v17 = &EventNonReadWriteRequestComplete;
        goto LABEL_74;
      }
LABEL_75:
      IofCompleteRequest((PIRP)a2, 0);
      return 259LL;
    }
    if ( *(_BYTE *)v15 != 15 )
    {
      if ( *(_BYTE *)v15 == 27 )
      {
        if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v16 = *(int **)(a2 + 56);
            if ( v16 )
              v2 = *v16;
            McTemplateK0pqd_EtwWriteTransfer(v14, v15, (unsigned int)&LockHandle, a2, v2, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_75;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v17 = &EventPnpRequestComplete;
LABEL_74:
          McTemplateK0pd_EtwWriteTransfer(v14, v17, &LockHandle, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_75;
        }
      }
      goto LABEL_75;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_75;
    v18 = *(_QWORD *)(v15 + 8);
    v19 = 0LL;
    v46 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    if ( *(_BYTE *)(v18 + 2) == 40 )
    {
      v25 = 0LL;
      v47 = 0;
      if ( *(_DWORD *)(v18 + 20) )
        goto LABEL_75;
      v26 = 0;
      v48 = *(_DWORD *)(v18 + 56);
      if ( !v48 )
        goto LABEL_75;
      do
      {
        v14 = *(unsigned int *)(v18 + 4LL * v26 + 120);
        if ( (unsigned int)v14 >= 0x80 )
        {
          v27 = *(unsigned int *)(v18 + 16);
          if ( (unsigned int)v14 < (unsigned int)v27 )
          {
            v28 = (unsigned int)v14;
            v29 = *(_DWORD *)(v14 + v18) - 64;
            if ( v29 )
            {
              LODWORD(v14) = v29 - 1;
              if ( (_DWORD)v14 )
              {
                if ( (_DWORD)v14 == 1 )
                {
                  LODWORD(v14) = v28 + 40;
                  if ( v28 + 40 <= v27 )
                  {
                    if ( *(_DWORD *)(v28 + v18 + 12) )
                      v25 = (char *)(v28 + v18 + 32);
                    v19 = *(_BYTE **)(v28 + v18 + 24);
LABEL_34:
                    v30 = *(_BYTE *)(v28 + v18 + 8);
                    v20 = *(_BYTE *)(v28 + v18 + 9);
                    goto LABEL_43;
                  }
                }
              }
              else
              {
                LODWORD(v14) = v28 + 56;
                if ( v28 + 56 <= v27 )
                {
                  v47 = 1;
                  if ( *(_BYTE *)(v28 + v18 + 10) )
                    v25 = (char *)(v28 + v18 + 24);
                  v19 = *(_BYTE **)(v28 + v18 + 16);
                  v20 = *(_BYTE *)(v28 + v18 + 9);
                  v46 = *(_BYTE *)(v28 + v18 + 8);
                }
              }
            }
            else
            {
              LODWORD(v14) = v28 + 40;
              if ( v28 + 40 <= v27 )
              {
                if ( *(_BYTE *)(v28 + v18 + 10) )
                  v25 = (char *)(v28 + v18 + 24);
                v19 = *(_BYTE **)(v28 + v18 + 16);
                goto LABEL_34;
              }
            }
            if ( v47 )
              break;
          }
        }
        ++v26;
      }
      while ( v26 < v48 );
      v30 = v46;
LABEL_43:
      if ( !v25 )
        goto LABEL_75;
      v31 = *v25;
      v24 = 0;
    }
    else
    {
      v31 = *(_BYTE *)(v18 + 72);
      v19 = *(_BYTE **)(v18 + 32);
      v20 = *(_BYTE *)(v18 + 11);
      v30 = *(_BYTE *)(v18 + 4);
      if ( *(_BYTE *)(v18 + 2) )
        goto LABEL_75;
    }
    LOBYTE(v14) = v31 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_75;
    v32 = *(_BYTE *)(v18 + 3);
    if ( v32 == 1 || !v19 || !v20 )
    {
LABEL_68:
      if ( byte_140173441 < 0 )
      {
        if ( !v24 )
        {
          v23 = 0;
          v22 = 0;
          v21 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v14,
          v18,
          (unsigned int)&LockHandle,
          a2,
          *(_DWORD *)(a2 + 48),
          v32,
          v30,
          v21,
          v22,
          v23,
          a2);
      }
      goto LABEL_75;
    }
    v33 = *v19 & 0x7F;
    if ( v33 == 114 || v33 == 115 )
    {
      v14 = (unsigned __int64)&v19[v20];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v19 + 8) > v14 )
        goto LABEL_66;
      v22 = v19[2];
      v21 = v19[1] & 0xF;
      v23 = v19[3];
    }
    else
    {
      v14 = (unsigned __int64)&v19[v20];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v19 + 8) > v14 )
        goto LABEL_66;
      v34 = v19 + 13;
      v21 = v19[2] & 0xF;
      v35 = v20;
      if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
        v35 = (unsigned __int8)v19[7] + 8;
      v14 = (unsigned __int64)&v19[v35];
      if ( (unsigned __int64)v34 <= v14 )
        v22 = v19[12];
      if ( (unsigned __int64)(v19 + 14) > v14 )
        v23 = 0;
      else
        v23 = *v34;
    }
    LOBYTE(v18) = 1;
LABEL_66:
    if ( (_BYTE)v18 )
      v24 = 1;
    goto LABEL_68;
  }
  v8 = *(_QWORD **)(a1 + 24);
  v9 = 316LL;
  if ( *(_DWORD *)v8 != 1314275652 )
    v9 = 524LL;
  ContiguousIoResources = StorAllocateContiguousIoResources(
                            ((*(_DWORD *)((char *)v8 + v9) + 7) & 0xFFFFFFF8) + 1200,
                            a2,
                            v8);
  if ( !ContiguousIoResources )
    goto LABEL_9;
  *(_QWORD *)&v50 = ContiguousIoResources + 48;
  *((_QWORD *)&v50 + 1) = ContiguousIoResources + 944;
  *((_QWORD *)&v49 + 1) = ContiguousIoResources + 1200;
  RaidZeroXrb(ContiguousIoResources + 48, ContiguousIoResources, 0, 0LL);
  LODWORD(v49) = -1;
LABEL_77:
  if ( (qword_140172448 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (*(_BYTE *)(a1 + 505) & 1) != 0 || *(char *)(a1 + 504) < 0 )
    goto LABEL_91;
  CurrentIrql = KeGetCurrentIrql();
  v38 = a1;
  if ( CurrentIrql < 2u )
  {
    v39 = 1LL;
LABEL_90:
    RaidUnitStartDeviceBusy(v38, a2, v39);
    goto LABEL_91;
  }
  if ( !RaidUnitCheckAndAcquirePoFx(a1) )
  {
LABEL_91:
    v44 = KfRaiseIrql(2u);
    RaUnitStartResetIo(*(_QWORD *)(a1 + 8), a2, &v49);
    KeLowerIrql(v44);
    return 259LL;
  }
  v40 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1872) + 96LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v40, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 2) != 0
    || (Pool = (_QWORD *)RaidAllocatePool(64LL, 32LL, 1330667858LL, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    v39 = 0LL;
    v38 = a1;
    goto LABEL_90;
  }
  Pool[2] = a2;
  v42 = *(_QWORD *)(a1 + 1872) + 80LL;
  v43 = *(_QWORD *)v42;
  if ( *(_QWORD *)(*(_QWORD *)v42 + 8LL) != v42 )
    __fastfail(3u);
  Pool[1] = v42;
  *Pool = v43;
  *(_QWORD *)(v43 + 8) = Pool;
  *(_QWORD *)v42 = Pool;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  RaidUnitStartDeviceBusy(a1, a2, 0LL);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  return 259LL;
}
