/*
 * XREFs of ObpDecrementHandleCount2 @ 0x1408F0360
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x1409714E0 (ObCompleteObjectDuplication.c)
 *     ObReleaseDuplicateInfo @ 0x140A99D68 (ObReleaseDuplicateInfo.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpDeleteNameCheck @ 0x1408FC8F0 (ObpDeleteNameCheck.c)
 */

__int64 __fastcall ObpDecrementHandleCount2(PRKPROCESS PROCESS, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _LIST_ENTRY *v4; // rbp
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdi
  signed __int64 v10; // rsi
  char v11; // r14
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // r14
  __int64 v17; // rdx
  int v18; // eax
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rtt
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  v4 = 0LL;
  v7 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  result = 0x140000000uLL;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = ObTypeIndexTable[v7];
  if ( (*(_BYTE *)(v9 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire(a2 + 16, 0LL, 0LL, a4);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), v14, a2 + 16);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    v10 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v9 + 66) & 0x10) != 0 )
    {
      if ( (*(_BYTE *)(a2 + 26) & 4) != 0 )
        v17 = a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 7];
      else
        v17 = 0LL;
      if ( (*(_BYTE *)(a2 + 27) & 0x40) != 0 )
      {
        v18 = *(_DWORD *)(v17 + 8) ^ (*(_DWORD *)(v17 + 8) ^ (*(_DWORD *)(v17 + 8) - 1)) & 0xFFFFFF;
LABEL_25:
        *(_DWORD *)(v17 + 8) = v18;
      }
      else
      {
        v24 = **(_DWORD **)v17;
        v17 = *(_QWORD *)v17 + 8LL;
        while ( v24 )
        {
          if ( (*(_DWORD *)(v17 + 8) & 0xFFFFFF) != 0 && *(PRKPROCESS *)v17 == PROCESS )
          {
            v18 = *(_DWORD *)(v17 + 8) ^ (*(_DWORD *)(v17 + 8) ^ (*(_DWORD *)(v17 + 8) - 1)) & 0xFFFFFF;
            goto LABEL_25;
          }
          v17 += 16LL;
          --v24;
        }
      }
      if ( !*(_BYTE *)(v17 + 11) && (*(_DWORD *)(v17 + 8) & 0xFFFFFF) == 0 )
        *(_QWORD *)v17 = 0LL;
    }
    _m_prefetchw((const void *)(a2 + 16));
    v19 = *(_QWORD *)(a2 + 16);
    v20 = v19 - 16;
    if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (v19 & 2) != 0
      || (v21 = *(_QWORD *)(a2 + 16),
          v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v20, v19)) )
    {
      ExfReleasePushLock((_QWORD *)(a2 + 16));
    }
    KeAbPostRelease(a2 + 16);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23);
  }
  else
  {
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v9 + 128) )
  {
    v11 = 0;
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      v11 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
      v4 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(PROCESS, &ApcState);
    }
    result = guard_dispatch_icall_no_overrides((__int64)PROCESS, a2 + 48);
    if ( v11 )
    {
      KiUnstackDetachProcess((__int64)&ApcState, 0);
      result = (__int64)PsDetachSiloFromCurrentThread(v4);
    }
  }
  if ( v10 == 1 )
    result = ObpDeleteNameCheck(a2);
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 48));
  return result;
}
