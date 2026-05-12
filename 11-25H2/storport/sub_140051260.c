/*
 * XREFs of sub_140051260 @ 0x140051260
 * Callers:
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 * Callees:
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140027930 @ 0x140027930 (sub_140027930.c)
 *     sub_140055FD0 @ 0x140055FD0 (sub_140055FD0.c)
 *     sub_1400A6778 @ 0x1400A6778 (sub_1400A6778.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall sub_140051260(__int64 a1, __int64 a2)
{
  bool v2; // bp
  __int64 v3; // rax
  char v4; // r12
  char v5; // r15
  _QWORD *v6; // rdi
  struct _KEVENT *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 i; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // edx
  unsigned int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  union _SLIST_HEADER *v22; // rcx
  struct _SLIST_ENTRY *v23; // rdx
  __int64 v24; // rdx
  union _SLIST_HEADER *v25; // rcx
  struct _SLIST_ENTRY *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = 0;
  v6 = (_QWORD *)a2;
  v8 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *(_QWORD *)(v3 - 16);
  if ( a2 )
    *(_QWORD *)a2 = 0LL;
  if ( (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 192)) <= *(_DWORD *)(v9 + 32)
    && *(_DWORD *)(v9 + 40)
    && !*(_DWORD *)(*(_QWORD *)(v9 + 48) + 992LL) )
  {
    if ( *(_DWORD *)(v9 + 40) )
    {
      *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 28);
      *(_DWORD *)(v9 + 40) = 0;
    }
    goto LABEL_13;
  }
  v10 = *(_QWORD *)(v9 + 48);
  if ( *(_DWORD *)(v10 + 992) == 2 )
  {
    v11 = 0;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v10 + 968); i = (unsigned int)(i + 1) )
    {
      a2 = *(_QWORD *)(v10 + 960) + 320LL * (unsigned int)i;
      v11 += _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 192), 0, 0);
    }
    v13 = *(_QWORD *)(v9 + 48);
    if ( v11 <= *(_DWORD *)(v13 + 984) )
    {
      sub_1400A6778(v13, a2, i);
LABEL_13:
      v2 = 1;
    }
  }
  if ( !*(_DWORD *)(v9 + 192) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9, &LockHandle);
    if ( (*(_QWORD *)(v9 + 200) || *(_BYTE *)(v9 + 208)) && !*(_DWORD *)(v9 + 192) )
    {
      v4 = *(_BYTE *)(v9 + 208);
      v8 = *(struct _KEVENT **)(v9 + 200);
      *(_BYTE *)(v9 + 208) = 0;
      *(_QWORD *)(v9 + 200) = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *(_DWORD *)(v9 + 24) && *(_DWORD *)(v9 + 40) != 1850304845 && !*(_DWORD *)(*(_QWORD *)(v9 + 48) + 988LL) && v6 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9, &LockHandle);
    if ( *(_DWORD *)(v9 + 40) == 1850304845 || sub_140027930(v9) || !*(_DWORD *)(v9 + 24) )
    {
      v22 = (union _SLIST_HEADER *)(v9 + 64);
      v23 = (struct _SLIST_ENTRY *)(*(_QWORD *)(a1 + 16) - 48LL);
      if ( *(_DWORD *)(v9 + 128) )
        v22 = *(union _SLIST_HEADER **)(v22->Alignment + 8LL * LODWORD(v23->Next));
      ExpInterlockedPushEntrySList(v22, v23);
      goto LABEL_41;
    }
    v14 = *(_QWORD **)(v9 + 8);
    v15 = (_QWORD *)(v9 + 8);
    if ( v14[1] == v9 + 8 )
    {
      v16 = *v14;
      if ( *(_QWORD **)(*v14 + 8LL) == v14 )
      {
        *v15 = v16;
        *(_QWORD *)(v16 + 8) = v15;
        *v6 = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 192));
        v17 = *(_DWORD *)(v9 + 192);
        v18 = v17;
        if ( v17 <= *(_DWORD *)(v9 + 36) )
          v18 = *(_DWORD *)(v9 + 36);
        *(_DWORD *)(v9 + 36) = v18;
        if ( v17 == *(_DWORD *)(v9 + 28) )
        {
          *(_DWORD *)(v9 + 40) = 1631805773;
          v2 = 0;
        }
        --*(_DWORD *)(v9 + 24);
        if ( (*(_BYTE *)(*v6 + 22LL) & 0x20) == 0 )
          goto LABEL_41;
        v19 = (_QWORD *)sub_140055FD0(*v6);
        v20 = *v19;
        if ( *(_QWORD **)(*v19 + 8LL) == v19 )
        {
          v21 = (_QWORD *)v19[1];
          if ( (_QWORD *)*v21 == v19 )
          {
            *v21 = v20;
            *(_QWORD *)(v20 + 8) = v21;
LABEL_41:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_45:
            if ( *v6 )
            {
              sub_140017C40(
                *(_QWORD *)(a1 + 16),
                v24,
                *(_DWORD *)(*(_QWORD *)(a1 + 16) + 744LL),
                *(void **)(*(_QWORD *)(a1 + 16) + 760LL));
              v5 = 1;
            }
            goto LABEL_47;
          }
        }
      }
    }
    __fastfail(3u);
  }
  v25 = (union _SLIST_HEADER *)(v9 + 64);
  v26 = (struct _SLIST_ENTRY *)(*(_QWORD *)(a1 + 16) - 48LL);
  if ( *(_DWORD *)(v9 + 128) )
    v25 = *(union _SLIST_HEADER **)(v25->Alignment + 8LL * LODWORD(v26->Next));
  ExpInterlockedPushEntrySList(v25, v26);
  if ( v6 )
    goto LABEL_45;
LABEL_47:
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 48) + 112LL) & 4) != 0
    && !v5
    && !v2
    && *(_DWORD *)(v9 + 24)
    && !*(_DWORD *)(v9 + 192) )
  {
    if ( *(_DWORD *)(v9 + 40) == 1699901262 )
    {
      *(_DWORD *)(v9 + 40) = 0;
      v2 = 1;
    }
    else
    {
      v2 = *(_DWORD *)(v9 + 40) == 0;
    }
  }
  if ( v8 )
  {
    v27 = *(_QWORD *)(v9 + 48);
    v28 = (unsigned int)(*(_DWORD *)(v9 + 284) + 1);
    if ( (unsigned int)v28 < *(_DWORD *)(v27 + 968) )
    {
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v28 + *(_QWORD *)(v27 + 960)), &LockHandle);
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 320 * v28 + 192),
               0,
               0) )
        {
          break;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v27 = *(_QWORD *)(v9 + 48);
        v28 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v28 >= *(_DWORD *)(v27 + 968) )
          goto LABEL_61;
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 320 * v28 + 200) = v8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
LABEL_61:
    if ( (unsigned int)v28 >= *(_DWORD *)(*(_QWORD *)(v9 + 48) + 968LL) )
      KeSetEvent(v8, 0, 0);
  }
  if ( v4 )
  {
    v29 = *(_QWORD *)(v9 + 48);
    v30 = (unsigned int)(*(_DWORD *)(v9 + 284) + 1);
    if ( (unsigned int)v30 < *(_DWORD *)(v29 + 968) )
    {
      while ( 1 )
      {
        v31 = 320 * v30;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v30 + *(_QWORD *)(v29 + 960)), &LockHandle);
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 320 * v30 + 192),
               0,
               0) )
        {
          break;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v29 = *(_QWORD *)(v9 + 48);
        v30 = (unsigned int)(v30 + 1);
        if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 968) )
          goto LABEL_69;
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v31 + 208) = 1;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v31 + 224) = *(_QWORD *)(v9 + 224);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v31 + 216) = *(_QWORD *)(v9 + 216);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v31 + 232) = *(_QWORD *)(v9 + 232);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v31 + 240) = *(_QWORD *)(v9 + 240);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
LABEL_69:
    v32 = *(_QWORD *)(v9 + 48);
    if ( (unsigned int)v30 >= *(_DWORD *)(v32 + 968) )
    {
      v33 = *(_QWORD *)(v32 + 960);
      v34 = *(_QWORD *)(v9 + 224);
      if ( *(_BYTE *)(v33 + 209) )
      {
        *(_QWORD *)(v33 + 224) = v34;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 216LL) = *(_QWORD *)(v9 + 216);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 232LL) = *(_QWORD *)(v9 + 232);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 240LL) = *(_QWORD *)(v9 + 240);
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 312LL),
          sub_1400A5FC0,
          DelayedWorkQueue,
          *(PVOID *)(v9 + 48));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v9 + 240))(*(_QWORD *)(v9 + 232), *(_QWORD *)(v9 + 216), v34);
      }
    }
  }
  return v2;
}
