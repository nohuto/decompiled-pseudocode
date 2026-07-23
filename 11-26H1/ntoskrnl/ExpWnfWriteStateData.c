/*
 * XREFs of ExpWnfWriteStateData @ 0x1409C7434
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExpWnfComposeValueName @ 0x1409C78CC (ExpWnfComposeValueName.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140AFC7AC (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfWriteStateData(
        __int64 a1,
        void *a2,
        unsigned int a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        char a6)
{
  int v6; // r15d
  size_t v7; // r13
  _QWORD *Pool2; // r14
  void *v10; // r12
  AutoBoost *v11; // rax
  AutoBoost *v12; // rbx
  _DWORD *v13; // rcx
  _DWORD *v14; // rsi
  __int32 v15; // r15d
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r13
  _KPROCESS *v20; // rcx
  int v21; // eax
  int v22; // esi
  struct _KLOCK_ENTRIES *v23; // r9
  AutoBoost *v24; // rax
  AutoBoost *v25; // rsi
  NTSTATUS v26; // [rsp+30h] [rbp-D8h]
  void *Src; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-C8h]
  int v29; // [rsp+48h] [rbp-C0h]
  NTSTATUS v30; // [rsp+4Ch] [rbp-BCh]
  void *v31; // [rsp+50h] [rbp-B8h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h]
  _OWORD v34[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-68h] BYREF

  v6 = (int)a4;
  v7 = a3;
  Src = a2;
  v33 = a1;
  memset(v34, 0, sizeof(v34));
  v26 = 0;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v35;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  Pool2 = 0LL;
  v28 = 0LL;
  v10 = 0LL;
  v31 = 0LL;
  v11 = (AutoBoost *)KeAbPreAcquire(a1 + 80, 0LL, 0LL, a4);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v11, a1 + 80);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, 0LL);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( !a5 )
    goto LABEL_9;
  v21 = 0;
  if ( *(_QWORD *)(a1 + 88) )
    v21 = *(_DWORD *)(a1 + 96);
  if ( v21 == v6 )
  {
LABEL_9:
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v13 = *(_DWORD **)(a1 + 88);
    if ( !v13 && (*(_QWORD *)(a1 + 104) || (_DWORD)v7) || (v14 = v13) != 0LL && v13[1] < (unsigned int)v7 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
      KeAbPostRelease(a1 + 80);
      if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || PsInitialSystemProcess == *(PEPROCESS *)(a1 + 152) )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
        v28 = Pool2;
      }
      else
      {
        v20 = *(_KPROCESS **)(a1 + 152);
        if ( !v20 )
          return 3221225524LL;
        if ( v20 == KeGetCurrentThread()->ApcState.Process )
        {
          v22 = 0;
        }
        else
        {
          v22 = 1;
          KiStackAttachProcess(v20, 0, (__int64)v34);
        }
        Pool2 = (_QWORD *)ExAllocatePool2(0x101uLL);
        v28 = Pool2;
        if ( v22 )
          KiUnstackDetachProcess((__int64)v34, 0);
      }
      if ( !Pool2 )
        return 3221225626LL;
      Pool2[1] = 0LL;
      *(_DWORD *)Pool2 = 1050884;
      *((_DWORD *)Pool2 + 1) = v7;
      v24 = (AutoBoost *)KeAbPreAcquire(a1 + 80, 0LL, 0LL, v23);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v24, a1 + 80);
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v25, 0LL);
        else
          *((_BYTE *)v25 + 10) = 1;
      }
      v14 = 0LL;
      if ( *(_QWORD *)(a1 + 88) != 1LL )
        v14 = *(_DWORD **)(a1 + 88);
      if ( !v14 || v14[1] < (unsigned int)v7 )
        v14 = Pool2;
    }
    v15 = *(_DWORD *)(a1 + 96) + 1;
    v29 = v15;
    while ( !v15 )
    {
      v15 = 1;
      v29 = 1;
    }
    if ( v14 )
    {
      v16 = v14 + 4;
      if ( a6 )
        RtlCopyFromUser(v16, Src, v7);
      else
        RtlCopyVolatileMemory(v16, Src, v7);
      v14[2] = v7;
      v14[3] = v15;
      v17 = *(_QWORD *)(a1 + 104);
      if ( v17 )
      {
        Src = 0LL;
        v26 = ExpWnfAcquirePermanentDataStoreHandle(v17, &Src);
        v30 = v26;
        if ( v26 < 0 )
          goto LABEL_28;
        v26 = ZwSetValueKey(Src, &ValueName, 0, 3u, v14 + 3, v7 + 4);
        v30 = v26;
        v18 = *(_QWORD *)(a1 + 104);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 8), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v18 + 8));
        KeAbPostRelease(v18 + 8);
        if ( v26 < 0 )
        {
LABEL_28:
          v10 = *(void **)(a1 + 88);
          v31 = v10;
          *(_QWORD *)(a1 + 88) = 0LL;
          goto LABEL_30;
        }
      }
      if ( v14 == (_DWORD *)Pool2 )
      {
        v10 = *(void **)(a1 + 88);
        v31 = v10;
        *(_QWORD *)(a1 + 88) = v14;
        Pool2 = 0LL;
        v28 = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 88) = 1LL;
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 96), v15);
LABEL_30:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    if ( (unsigned __int64)v10 >= 2 )
      ExFreePoolWithTag(v10, 0x20666E57u);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x20666E57u);
    return (unsigned int)v26;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  return 3221225473LL;
}
