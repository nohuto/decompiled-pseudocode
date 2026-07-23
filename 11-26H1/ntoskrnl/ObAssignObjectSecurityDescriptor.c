/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x140A41C70
 * Callers:
 *     WmipSecurityMethod @ 0x140A41BA0 (WmipSecurityMethod.c)
 * Callees:
 *     RtlHashBytes2 @ 0x14024D064 (RtlHashBytes2.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, __int64 a2)
{
  __int16 v3; // r8
  unsigned int v4; // esi
  __int16 v5; // cx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  signed __int64 *v17; // r13
  _QWORD *v18; // r15
  volatile signed __int64 *v19; // r14
  struct _KLOCK_ENTRIES *v20; // r9
  LegacyAutoBoost *v21; // rbx
  signed __int64 v22; // rdx
  signed __int64 v23; // rbx
  _QWORD *v24; // r14
  unsigned int v25; // ebx
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v28; // r9
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+10h]

  if ( !a2 )
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
  v3 = *(_WORD *)(a2 + 2);
  v4 = 20;
  v5 = v3 & 0x8000;
  if ( v3 >= 0 )
    v4 = 40;
  if ( v5 )
  {
    v6 = *(unsigned int *)(a2 + 4);
    if ( !(_DWORD)v6 )
    {
      v8 = (unsigned int *)(a2 + 8);
      goto LABEL_10;
    }
    v7 = a2 + v6;
    v8 = (unsigned int *)(a2 + 8);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (unsigned int *)(a2 + 8);
  }
  if ( v7 )
    v4 += (4 * *(unsigned __int8 *)(v7 + 1) + 11) & 0xFFFFFFFC;
  if ( !v5 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    goto LABEL_12;
  }
LABEL_10:
  v9 = *v8;
  if ( !(_DWORD)v9 )
    goto LABEL_14;
  v10 = a2 + v9;
LABEL_12:
  if ( v10 )
    v4 += (4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC;
LABEL_14:
  if ( (v3 & 4) == 0 )
    goto LABEL_20;
  if ( v5 )
  {
    v11 = *(unsigned int *)(a2 + 16);
    if ( !(_DWORD)v11 )
      goto LABEL_20;
    v12 = a2 + v11;
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 32);
  }
  if ( v12 )
    v4 += (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
LABEL_20:
  if ( (v3 & 0x10) != 0 )
  {
    if ( !v5 )
    {
      v14 = *(_QWORD *)(a2 + 24);
LABEL_24:
      if ( v14 )
        v4 += (*(unsigned __int16 *)(v14 + 2) + 3) & 0xFFFFFFFC;
      goto LABEL_26;
    }
    v13 = *(unsigned int *)(a2 + 12);
    if ( (_DWORD)v13 )
    {
      v14 = a2 + v13;
      goto LABEL_24;
    }
  }
LABEL_26:
  v15 = RtlHashBytes2(a2, v4);
  CurrentThread = KeGetCurrentThread();
  v16 = v15;
  --CurrentThread->KernelApcDisable;
  v17 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (v15 & 0x3FF));
  v18 = 0LL;
  v19 = v17 + 1;
  v21 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v17, 0LL, 0LL, v20);
  v22 = 17LL;
  if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(v17, 0, v21, (struct _KTHREAD *)v17);
    v22 = 17LL;
  }
  if ( v21 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      goto LABEL_68;
    *((_BYTE *)v21 + 10) = 1;
  }
  while ( 1 )
  {
    v23 = *v19;
    if ( *v19 )
      break;
LABEL_36:
    if ( v18 )
    {
      *v18 = v23;
      v19 = (volatile signed __int64 *)_InterlockedCompareExchange64(v19, (signed __int64)v18, v23);
      if ( (volatile signed __int64 *)v23 == v19 )
      {
        if ( v22 != _InterlockedCompareExchange64(v17, 0LL, v22) )
          ExfReleasePushLockShared(v17);
        KeAbPostRelease((unsigned __int64)v17);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v24 = v18 + 4;
        goto LABEL_48;
      }
    }
    else
    {
      if ( v22 != _InterlockedCompareExchange64(v17, 0LL, v22) )
        ExfReleasePushLockShared(v17);
      KeAbPostRelease((unsigned __int64)v17);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v4 + 40 < v4 )
        return (unsigned int)-1073741670;
      Pool2 = ExAllocatePool2(0x108uLL);
      v18 = (_QWORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v16;
      *(_DWORD *)(Pool2 + 24) = v4;
      memmove((void *)(Pool2 + 32), (const void *)a2, v4);
      --CurrentThread->KernelApcDisable;
      v19 = v17 + 1;
      v21 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v17, 0LL, 0LL, v28);
      v22 = 17LL;
      if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v17, 0, v21, (struct _KTHREAD *)v17);
        v22 = 17LL;
      }
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
LABEL_68:
          AutoBoost::KiAbpPostAcquire(v21, (void *)0x11);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
    }
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v23 + 16) > v16 )
    {
LABEL_35:
      v22 = 17LL;
      goto LABEL_36;
    }
    if ( *(_QWORD *)(v23 + 16) == v16 && *(_DWORD *)(v23 + 24) == v4 )
    {
      v24 = (_QWORD *)(v23 + 32);
      if ( !memcmp((const void *)a2, (const void *)(v23 + 32), v4) )
        break;
    }
    v19 = (volatile signed __int64 *)v23;
    v23 = *(_QWORD *)v23;
    if ( !v23 )
      goto LABEL_35;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 8), 0x10uLL) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v17);
  KeAbPostRelease((unsigned __int64)v17);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x6353624Fu);
LABEL_48:
  v25 = 0;
  ExFreePoolWithTag((PVOID)a2, 0);
  if ( v24 )
    *(_QWORD *)(a1 - 8) = (char *)v24 + 15;
  else
    *(_QWORD *)(a1 - 8) = 0LL;
  return v25;
}
