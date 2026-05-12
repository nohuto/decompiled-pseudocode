/*
 * XREFs of RaidpBuildAdapterBusRelations @ 0x140036A00
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidUnitSetEnumerated @ 0x1400596DC (RaidUnitSetEnumerated.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaidpBuildAdapterBusRelations(__int64 a1, _QWORD *a2)
{
  void *v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rdx
  _DWORD *Pool; // r13
  unsigned int v7; // edi
  __int64 v8; // rsi
  _QWORD *i; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  _QWORD *v16; // rcx
  PDEVICE_OBJECT v17; // rcx
  __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // rax
  signed __int32 v22[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 Size; // [rsp+A0h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  memset(&v23, 0, sizeof(v23));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 37LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, a1);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 216), &v23);
  v4 = (unsigned int)(*(_DWORD *)(a1 + 160) + *(_DWORD *)(a1 + 240));
  if ( (*(_DWORD *)(a1 + 624) & 0x100) != 0 )
  {
    _InterlockedOr(v22, 0);
    v3 = *(void **)(a1 + 760);
    if ( v3 )
    {
      ObfReferenceObject(*(PVOID *)(a1 + 760));
      v4 = (unsigned int)(v4 + 1);
    }
  }
  Size = 8 * v4 + 16;
  Pool = (_DWORD *)RaidAllocatePool(64LL, Size, 1380213074LL, *(_QWORD *)(a1 + 8));
  if ( !Pool )
  {
    KeReleaseInStackQueuedSpinLock(&v23);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v7 = -1073741801;
    goto LABEL_66;
  }
  v8 = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 38LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids);
  }
  for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
  {
    v10 = i - 8;
    v11 = i - 8;
    if ( (i[55] & 4) != 0 )
    {
      LOBYTE(v5) = 1;
      RaidUnitSetEnumerated(v11, v5);
      ObfReferenceObject((PVOID)v10[1]);
      if ( (unsigned int)v8 > (unsigned int)v4 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          goto LABEL_36;
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          WPP_SF_DD(
            WPP_GLOBAL_Control->AttachedDevice,
            40LL,
            &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
            (unsigned int)v8,
            v4);
        break;
      }
      *(_QWORD *)&Pool[2 * v8 + 2] = v10[1];
      v8 = (unsigned int)(v8 + 1);
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        v13 = 41LL;
        goto LABEL_26;
      }
    }
    else
    {
      RaidUnitSetEnumerated(v11, 0LL);
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        v13 = 39LL;
LABEL_26:
        WPP_SF_q(v12->AttachedDevice, v13, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, i - 8);
        continue;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 42LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids);
  }
LABEL_36:
  v14 = *(_QWORD **)(a1 + 224);
  while ( 2 )
  {
    if ( v14 != (_QWORD *)(a1 + 224) )
    {
      v15 = v14 - 8;
      v16 = v14 - 8;
      if ( (v14[55] & 4) != 0 )
      {
        LOBYTE(v5) = 1;
        RaidUnitSetEnumerated(v16, v5);
        if ( (unsigned int)v8 > (unsigned int)v4 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          {
            WPP_SF_DD(
              WPP_GLOBAL_Control->AttachedDevice,
              44LL,
              &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
              (unsigned int)v8,
              v4);
          }
          break;
        }
        ObfReferenceObject((PVOID)v15[1]);
        *(_QWORD *)&Pool[2 * v8 + 2] = v15[1];
        v8 = (unsigned int)(v8 + 1);
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
        {
          v18 = 45LL;
LABEL_48:
          WPP_SF_q(v17->AttachedDevice, v18, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, v14 - 8);
        }
      }
      else
      {
        RaidUnitSetEnumerated(v16, 0LL);
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
        {
          v18 = 43LL;
          goto LABEL_48;
        }
      }
      v14 = (_QWORD *)*v14;
      continue;
    }
    break;
  }
  if ( v3 && (unsigned int)v8 < (unsigned int)v4 )
  {
    *(_QWORD *)&Pool[2 * v8 + 2] = v3;
    LODWORD(v8) = v8 + 1;
    v3 = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&v23);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *Pool = v8;
  v19 = *(void **)(a1 + 4440);
  *a2 = Pool;
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x52446152u);
    *(_QWORD *)(a1 + 4440) = 0LL;
  }
  v20 = (void *)RaidAllocatePool(64LL, Size, 1380213074LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 4440) = v20;
  if ( v20 )
  {
    memmove(v20, Pool, Size);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 46LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, a1);
  }
  v7 = 0;
LABEL_66:
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_qD(WPP_GLOBAL_Control->AttachedDevice, 47LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, a1, v7);
  }
  return v7;
}
