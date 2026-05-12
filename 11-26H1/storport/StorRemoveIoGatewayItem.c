/*
 * XREFs of StorRemoveIoGatewayItem @ 0x1400135F0
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaFreeIoResource @ 0x14002F6F0 (RaFreeIoResource.c)
 *     StorIsIoGatewayPaused @ 0x14004789C (StorIsIoGatewayPaused.c)
 *     StorGetOutstandingIoCount @ 0x14005C75C (StorGetOutstandingIoCount.c)
 *     StorSetAllIoGatewayNotBusy @ 0x1400AFAE4 (StorSetAllIoGatewayNotBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1400AFC74 (StorSetIoGatewayNotBusy.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

bool __fastcall StorRemoveIoGatewayItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  bool v6; // r14
  struct _KEVENT *v7; // r12
  __int64 v8; // rdi
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  char v28; // dl
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 i; // rbx
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  char v39; // [rsp+90h] [rbp+50h]

  v3 = *(_QWORD *)(a1 + 16);
  v39 = 0;
  v6 = 0;
  v7 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(v3 - 16);
  if ( a2 )
    *(_QWORD *)a2 = 0LL;
  v9 = *(_DWORD *)(v8 + 32);
  if ( FeatureFixKcsanRacyAccessV2 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(v8 + 192)) > v9
      || !*(_DWORD *)(v8 + 40)
      || *(_DWORD *)(*(_QWORD *)(v8 + 48) + 1056LL) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 48) + 1056LL) == 2 )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(v8 + 48) + 1048LL);
        if ( (unsigned int)StorGetOutstandingIoCount(*(_QWORD *)(v8 + 48), a2, a3) <= v10 )
        {
          StorSetAllIoGatewayNotBusy(*(_QWORD *)(v8 + 48));
          v6 = 1;
        }
      }
    }
    else
    {
      StorSetIoGatewayNotBusy(v8, 0LL);
      v6 = 1;
    }
    if ( !*(_DWORD *)(v8 + 192) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v8, &LockHandle);
      if ( (*(_QWORD *)(v8 + 200) || *(_BYTE *)(v8 + 208)) && !*(_DWORD *)(v8 + 192) )
      {
        v7 = *(struct _KEVENT **)(v8 + 200);
        v39 = *(_BYTE *)(v8 + 208);
        *(_QWORD *)(v8 + 200) = 0LL;
        *(_BYTE *)(v8 + 208) = 0;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    if ( *(_DWORD *)(v8 + 24) && *(_DWORD *)(v8 + 40) != 1850304845 && !(unsigned __int8)StorIsIoGatewayPaused(v8) && a2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v8, &LockHandle);
      if ( *(_DWORD *)(v8 + 40) != 1850304845 && !(unsigned __int8)StorIsIoGatewayPaused(v8) && *(_DWORD *)(v8 + 24) )
      {
        v11 = (_QWORD *)(v8 + 8);
        v12 = *(_QWORD **)(v8 + 8);
        if ( v12[1] != v8 + 8 )
          goto LABEL_66;
        v13 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12 )
          goto LABEL_66;
        *v11 = v13;
        *(_QWORD *)(v13 + 8) = v11;
        *(_QWORD *)a2 = v12;
        _InterlockedAdd((volatile signed __int32 *)(v8 + 192), 1u);
        if ( *(_DWORD *)(v8 + 192) <= *(_DWORD *)(v8 + 36) )
          v14 = *(_DWORD *)(v8 + 36);
        else
          v14 = *(_DWORD *)(v8 + 192);
        *(_DWORD *)(v8 + 36) = v14;
        if ( *(_DWORD *)(v8 + 192) == *(_DWORD *)(v8 + 28) )
        {
          *(_DWORD *)(v8 + 40) = 1631805773;
          v6 = 0;
        }
LABEL_58:
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 24));
        goto LABEL_60;
      }
LABEL_67:
      RaFreeIoResource(v8 + 64, *(_QWORD *)(a1 + 16) - 48LL);
      goto LABEL_68;
    }
LABEL_69:
    RaFreeIoResource(v8 + 64, *(_QWORD *)(a1 + 16) - 48LL);
    if ( !a2 )
      goto LABEL_72;
    goto LABEL_70;
  }
  if ( _InterlockedDecrement((volatile signed __int32 *)(v8 + 192)) > v9
    || !*(_DWORD *)(v8 + 40)
    || *(_DWORD *)(*(_QWORD *)(v8 + 48) + 1056LL) )
  {
    v15 = *(_QWORD *)(v8 + 48);
    if ( *(_DWORD *)(v15 + 1056) == 2 )
    {
      v16 = *(_DWORD *)(v15 + 1048);
      if ( (unsigned int)StorGetOutstandingIoCount(v15, a2, a3) <= v16 )
      {
        StorSetAllIoGatewayNotBusy(*(_QWORD *)(v8 + 48));
        v6 = 1;
      }
    }
  }
  else
  {
    StorSetIoGatewayNotBusy(v8, 0LL);
    v6 = 1;
  }
  if ( !*(_DWORD *)(v8 + 192) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v8, &LockHandle);
    if ( (*(_QWORD *)(v8 + 200) || *(_BYTE *)(v8 + 208)) && !*(_DWORD *)(v8 + 192) )
    {
      v7 = *(struct _KEVENT **)(v8 + 200);
      *(_QWORD *)(v8 + 200) = 0LL;
      v39 = *(_BYTE *)(v8 + 208);
      *(_BYTE *)(v8 + 208) = 0;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( !*(_DWORD *)(v8 + 24) || *(_DWORD *)(v8 + 40) == 1850304845 || (unsigned __int8)StorIsIoGatewayPaused(v8) || !a2 )
    goto LABEL_69;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v8, &LockHandle);
  if ( *(_DWORD *)(v8 + 40) == 1850304845 || (unsigned __int8)StorIsIoGatewayPaused(v8) || !*(_DWORD *)(v8 + 24) )
    goto LABEL_67;
  v17 = (_QWORD *)(v8 + 8);
  v18 = *(_QWORD **)(v8 + 8);
  if ( v18[1] != v8 + 8 )
    goto LABEL_66;
  v19 = *v18;
  if ( *(_QWORD **)(*v18 + 8LL) != v18 )
    goto LABEL_66;
  *v17 = v19;
  *(_QWORD *)(v19 + 8) = v17;
  *(_QWORD *)a2 = v18;
  _InterlockedAdd((volatile signed __int32 *)(v8 + 192), 1u);
  v20 = *(_DWORD *)(v8 + 192);
  v21 = v20;
  if ( v20 <= *(_DWORD *)(v8 + 36) )
    v21 = *(_DWORD *)(v8 + 36);
  *(_DWORD *)(v8 + 36) = v21;
  if ( v20 == *(_DWORD *)(v8 + 28) )
  {
    *(_DWORD *)(v8 + 40) = 1631805773;
    v6 = 0;
  }
  if ( FeatureFixKcsanRacyAccess )
    goto LABEL_58;
  --*(_DWORD *)(v8 + 24);
LABEL_60:
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 22LL) & 0x20) != 0 )
  {
    v22 = 96LL;
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 64LL) + 8LL);
    if ( *(_BYTE *)(v23 + 2) != 40 )
      v22 = 48LL;
    v24 = (_QWORD *)(*(_QWORD *)(v22 + v23) + 24LL);
    v25 = *v24;
    if ( *(_QWORD **)(*v24 + 8LL) == v24 )
    {
      v26 = (_QWORD *)v24[1];
      if ( (_QWORD *)*v26 == v24 )
      {
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        goto LABEL_68;
      }
    }
LABEL_66:
    __fastfail(3u);
  }
LABEL_68:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_70:
  if ( *(_QWORD *)a2 )
  {
    RaidZeroXrb(
      *(_QWORD *)(a1 + 16),
      v27,
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 744LL),
      *(void **)(*(_QWORD *)(a1 + 16) + 760LL));
    v28 = 1;
    goto LABEL_73;
  }
LABEL_72:
  v28 = 0;
LABEL_73:
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 48) + 112LL) & 4) == 0 )
    goto LABEL_90;
  if ( FeatureFixKcsanRacyAccessV2 )
  {
    if ( !v28 && !v6 && *(_DWORD *)(v8 + 24) && !*(_DWORD *)(v8 + 192) )
    {
      if ( *(_DWORD *)(v8 + 40) != 1699901262 )
      {
        if ( *(_DWORD *)(v8 + 40) )
          goto LABEL_90;
        goto LABEL_88;
      }
LABEL_87:
      *(_DWORD *)(v8 + 40) = 0;
LABEL_88:
      v6 = 1;
    }
  }
  else if ( !v28 && !v6 && *(_DWORD *)(v8 + 24) && !*(_DWORD *)(v8 + 192) )
  {
    if ( *(_DWORD *)(v8 + 40) == 1699901262 )
      goto LABEL_87;
    v6 = *(_DWORD *)(v8 + 40) == 0;
  }
LABEL_90:
  if ( v7 )
  {
    v29 = *(_QWORD *)(v8 + 48);
    v30 = (unsigned int)(*(_DWORD *)(v8 + 284) + 1);
    if ( (unsigned int)v30 < *(_DWORD *)(v29 + 1032) )
    {
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v30 + *(_QWORD *)(v29 + 1024)), &LockHandle);
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + 320 * v30 + 192),
               0,
               0) )
        {
          break;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v29 = *(_QWORD *)(v8 + 48);
        v30 = (unsigned int)(v30 + 1);
        if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 1032) )
          goto LABEL_96;
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + 320 * v30 + 200) = v7;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
LABEL_96:
    if ( (unsigned int)v30 >= *(_DWORD *)(*(_QWORD *)(v8 + 48) + 1032LL) )
      KeSetEvent(v7, 0, 0);
  }
  if ( v39 )
  {
    for ( i = (unsigned int)(*(_DWORD *)(v8 + 284) + 1); ; i = (unsigned int)(i + 1) )
    {
      v33 = *(_QWORD *)(v8 + 48);
      if ( (unsigned int)i >= *(_DWORD *)(v33 + 1032) )
        break;
      v32 = 320 * i;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * i + *(_QWORD *)(v33 + 1024)), &LockHandle);
      if ( _InterlockedCompareExchange(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + 320 * i + 192),
             0,
             0) )
      {
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + v32 + 208) = 1;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + v32 + 224) = *(_QWORD *)(v8 + 224);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + v32 + 216) = *(_QWORD *)(v8 + 216);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + v32 + 232) = *(_QWORD *)(v8 + 232);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + v32 + 240) = *(_QWORD *)(v8 + 240);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    v34 = *(_QWORD *)(v8 + 48);
    if ( (unsigned int)i >= *(_DWORD *)(v34 + 1032) )
    {
      v35 = *(_QWORD *)(v34 + 1024);
      if ( FeatureFixKcsanRacyAccessV2 )
      {
        if ( *(_BYTE *)(v35 + 209) )
        {
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + 224LL) = *(_QWORD *)(v8 + 224);
LABEL_114:
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + 216LL) = *(_QWORD *)(v8 + 216);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + 232LL) = *(_QWORD *)(v8 + 232);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + 240LL) = *(_QWORD *)(v8 + 240);
          IoQueueWorkItem(
            *(PIO_WORKITEM *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 1024LL) + 312LL),
            GatewayWaitForForwardIo,
            DelayedWorkQueue,
            *(PVOID *)(v8 + 48));
          return v6;
        }
        v36 = *(_QWORD *)(v8 + 224);
      }
      else
      {
        v36 = *(_QWORD *)(v8 + 224);
        if ( *(_BYTE *)(v35 + 209) )
        {
          *(_QWORD *)(v35 + 224) = v36;
          goto LABEL_114;
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v8 + 240))(*(_QWORD *)(v8 + 232), *(_QWORD *)(v8 + 216), v36);
    }
  }
  return v6;
}
