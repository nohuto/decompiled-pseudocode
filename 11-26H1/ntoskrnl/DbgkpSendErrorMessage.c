/*
 * XREFs of DbgkpSendErrorMessage @ 0x140954DF4
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     KeTestAlertThread @ 0x1403D7210 (KeTestAlertThread.c)
 *     AlpcGetMessageAttribute @ 0x140438B60 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140438BA0 (AlpcInitializeMessageAttribute.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     KeCopyExceptionRecord @ 0x1404E5F9C (KeCopyExceptionRecord.c)
 *     DbgkpDereferenceErrorPort @ 0x140532ABC (DbgkpDereferenceErrorPort.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1407245B0 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     DbgkpStartSystemErrorHandler @ 0x14078AF7C (DbgkpStartSystemErrorHandler.c)
 *     MmGetSectionInformation @ 0x1408E5780 (MmGetSectionInformation.c)
 *     DbgkpResumeProcess @ 0x1409535CC (DbgkpResumeProcess.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     DbgkpSuspendProcess @ 0x140953D38 (DbgkpSuspendProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140985588 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpRemoveErrorPort @ 0x140B3A9A0 (DbgkpRemoveErrorPort.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, __int64 a3)
{
  char v5; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  struct _KTHREAD *v9; // rdi
  signed int started; // ebx
  int ServerSiloServiceSessionId; // ebx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v17; // eax
  void *v18; // rdx
  LegacyAutoBoost *v19; // r15
  struct _LIST_ENTRY *Blink; // rcx
  char v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rcx
  __int16 v29; // ax
  int v30; // ebx
  char *MessageAttribute; // rax
  int v32; // eax
  __int64 v33; // r8
  struct _KLOCK_ENTRIES *v34; // r9
  __int64 v35; // rdx
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD *v39; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h]
  _OWORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  _BYTE v46[96]; // [rsp+C0h] [rbp-40h] BYREF

  v42 = a1;
  memset_0(v46, 0, sizeof(v46));
  v38 = 0LL;
  v5 = 0;
  v41.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v39 = CurrentThread;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v9 = (struct _KTHREAD *)((char *)PsGetServerSiloGlobals(ProcessServerSilo) + 936);
  memset_0(v43, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1532) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 680), 1, (__int64 *)v43);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)PsGetSessionIdEx(Process) != ServerSiloServiceSessionId && (_DWORD)v44 != 1 && (a2 & 2) != 0 )
    v5 = DbgkpSuspendProcess(Process);
  Flink = 0LL;
  started = DbgkpStartSystemErrorHandler();
  if ( started >= 0 )
  {
    if ( DbgkErrorPortStartTimeout == -1 )
    {
      Timeout = 0LL;
    }
    else
    {
      Timeout = &v41;
      v41.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
    }
    v17 = KeWaitForSingleObject(v9->SListFaultAddress, Executive, 1, 0, Timeout);
    if ( v17 == 258 || !v9->Header.WaitListHead.Flink )
    {
      started = -1073740973;
    }
    else
    {
      if ( v17 != 257 && v17 != 192 )
      {
        --CurrentThread->KernelApcDisable;
        started = 0;
        Object = 0LL;
        v19 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, v15);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v9->Header.Lock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)&v9->Header.Lock, 0, v19, v9);
        if ( v19 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v19, v18);
          else
            *((_BYTE *)v19 + 10) = 1;
        }
        Blink = v9->Header.WaitListHead.Blink;
        v21 = 0;
        if ( (struct _LIST_ENTRY *)Process == Blink )
        {
          started = -1073741420;
        }
        else
        {
          Flink = v9->Header.WaitListHead.Flink;
          if ( Flink )
          {
            Object = v9->Header.WaitListHead.Blink;
            ObfReferenceObjectWithTag(Blink, 0x50676244u);
            _InterlockedIncrement((volatile signed __int32 *)Flink);
          }
          else
          {
            started = -1073740973;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v9->Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v9->Header.Lock);
        KeAbPostRelease((unsigned __int64)v9);
        KeLeaveCriticalRegionThread((__int64)v39, v22, v23);
        if ( started < 0 )
          goto LABEL_57;
        v24 = v42;
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 24) = 0LL;
        *(_QWORD *)(a3 + 32) = 0LL;
        *(_DWORD *)(a3 + 4) = 8;
        *(_WORD *)(a3 + 4) = -32761;
        *(_DWORD *)a3 = 17826024;
        *(_DWORD *)(a3 + 40) = 7;
        *(_DWORD *)(a3 + 44) = -2147418111;
        KeCopyExceptionRecord((_OWORD *)(a3 + 48), v24);
        v25 = v43[1];
        *(_OWORD *)(a3 + 200) = v43[0];
        *(_DWORD *)(a3 + 264) = 0;
        v26 = v44;
        *(_OWORD *)(a3 + 216) = v25;
        v27 = v45;
        *(_OWORD *)(a3 + 232) = v26;
        *(_OWORD *)(a3 + 248) = v27;
        if ( (*(_BYTE *)(Process + 1530) & 7) != 0 )
        {
          *(_DWORD *)(a3 + 264) = 1;
          v28 = 1LL;
        }
        else
        {
          v28 = 0LL;
        }
        if ( (*(_BYTE *)(Process + 368) & 1) != 0 )
        {
          v28 = (unsigned int)v28 | 8;
          *(_DWORD *)(a3 + 264) = v28;
        }
        if ( *(_QWORD *)(Process + 784) )
        {
          v29 = *(_WORD *)(Process + 1772);
          if ( v29 == 332 || v29 == 452 )
          {
            v28 = (unsigned int)v28 | 2;
            *(_DWORD *)(a3 + 264) = v28;
          }
        }
        if ( (a2 & 1) != 0 )
        {
          v28 = (unsigned int)v28 | 4;
          v21 = 1;
          *(_DWORD *)(a3 + 264) = v28;
        }
        LOBYTE(v28) = 1;
        v30 = (unsigned __int8)PsTestProtectedProcessIncompatibility(v28, Object, Process) != 0 ? 1055744 : 0x1FFFFF;
        AlpcInitializeMessageAttribute(0x10000000LL, v43, 0xA0uLL, &v38);
        DWORD1(v43[0]) = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(v43, 0x10000000);
        *((_DWORD *)MessageAttribute + 5) = v30;
        *(_DWORD *)MessageAttribute = 0;
        *((_DWORD *)MessageAttribute + 4) = 4;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        v38 = 272LL;
        KeTestAlertThread(0);
        if ( (*(_DWORD *)(&v39[1].SwapListEntry + 1) & 1) == 0 )
        {
          v32 = ZwAlpcSendWaitReceivePort((__int64)Flink->Blink, 2228224LL);
          v35 = 0LL;
          started = v32;
          if ( v32 < 0 )
          {
            if ( v32 == -1073741769 )
              DbgkpRemoveErrorPort(v39, v9, Flink);
            goto LABEL_54;
          }
          if ( v32 != 257 )
          {
            if ( _bittest16((const signed __int16 *)(a3 + 4), 0xDu) )
              ZwAlpcSendWaitReceivePort((__int64)Flink->Blink, 0x10000LL);
            started = *(_DWORD *)(a3 + 44);
            if ( started >= 0 && !v21 && started == 65538 )
            {
              if ( v5 )
              {
                DbgkpResumeProcess(Process, v35, v33, v34);
                v5 = 0;
              }
              started = !DbgkForwardException(v42, 1u, 1) ? 0xC0000144 : 0;
            }
            goto LABEL_54;
          }
        }
        started = -1073741749;
LABEL_54:
        ObfDereferenceObjectWithTag(Object, 0x50676244u);
        DbgkpDereferenceErrorPort((volatile signed __int32 *)Flink);
        goto LABEL_57;
      }
      started = -1073741749;
    }
  }
LABEL_57:
  if ( v5 )
    DbgkpResumeProcess(Process, v13, v14, v15);
  return (unsigned int)started;
}
