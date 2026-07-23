/*
 * XREFs of DbgkpSendErrorMessage @ 0x140B5CE74
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeTestAlertThread @ 0x1403DA1E0 (KeTestAlertThread.c)
 *     AlpcGetMessageAttribute @ 0x1404277C0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140427800 (AlpcInitializeMessageAttribute.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     KeCopyExceptionRecord @ 0x1404DF53C (KeCopyExceptionRecord.c)
 *     DbgkpDereferenceErrorPort @ 0x140534F5C (DbgkpDereferenceErrorPort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140729180 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkpStartSystemErrorHandler @ 0x14078DAAC (DbgkpStartSystemErrorHandler.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140947588 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpResumeProcess @ 0x1409CEF0C (DbgkpResumeProcess.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     DbgkpSuspendProcess @ 0x1409CF678 (DbgkpSuspendProcess.c)
 *     DbgkpRemoveErrorPort @ 0x140AF6254 (DbgkpRemoveErrorPort.c)
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
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // ecx
  __int16 v27; // ax
  int v28; // ebx
  _DWORD *MessageAttribute; // rax
  NTSTATUS v30; // eax
  __int64 v31; // r8
  struct _KLOCK_ENTRIES *v32; // r9
  __int64 v33; // rdx
  ULONG_PTR RequiredBufferSize; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD *v37; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  _ALPC_MESSAGE_ATTRIBUTES Buffer[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+A0h] [rbp-60h]
  __int128 v44; // [rsp+B0h] [rbp-50h]
  _BYTE v45[96]; // [rsp+C0h] [rbp-40h] BYREF

  v40 = a1;
  memset_0(v45, 0, sizeof(v45));
  RequiredBufferSize = 0LL;
  v5 = 0;
  v39.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v9 = (struct _KTHREAD *)((char *)PsGetServerSiloGlobals(ProcessServerSilo) + 936);
  memset_0(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1532) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 680), 1, (__int64 *)Buffer);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)PsGetSessionIdEx(Process) != ServerSiloServiceSessionId && (_DWORD)v43 != 1 && (a2 & 2) != 0 )
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
      Timeout = &v39;
      v39.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
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
        KeLeaveCriticalRegionThread((__int64)v37);
        if ( started < 0 )
          goto LABEL_57;
        v22 = v40;
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 24) = 0LL;
        *(_QWORD *)(a3 + 32) = 0LL;
        *(_DWORD *)(a3 + 4) = 8;
        *(_WORD *)(a3 + 4) = -32761;
        *(_DWORD *)a3 = 17826024;
        *(_DWORD *)(a3 + 40) = 7;
        *(_DWORD *)(a3 + 44) = -2147418111;
        KeCopyExceptionRecord((_OWORD *)(a3 + 48), v22);
        v23 = v42;
        *(_OWORD *)(a3 + 200) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
        *(_DWORD *)(a3 + 264) = 0;
        v24 = v43;
        *(_OWORD *)(a3 + 216) = v23;
        v25 = v44;
        *(_OWORD *)(a3 + 232) = v24;
        *(_OWORD *)(a3 + 248) = v25;
        if ( (*(_BYTE *)(Process + 1530) & 7) != 0 )
        {
          *(_DWORD *)(a3 + 264) = 1;
          v26 = 1;
        }
        else
        {
          v26 = 0;
        }
        if ( (*(_BYTE *)(Process + 368) & 1) != 0 )
        {
          v26 |= 8u;
          *(_DWORD *)(a3 + 264) = v26;
        }
        if ( *(_QWORD *)(Process + 784) )
        {
          v27 = *(_WORD *)(Process + 1772);
          if ( v27 == 332 || v27 == 452 )
          {
            v26 |= 2u;
            *(_DWORD *)(a3 + 264) = v26;
          }
        }
        if ( (a2 & 1) != 0 )
        {
          v21 = 1;
          *(_DWORD *)(a3 + 264) = v26 | 4;
        }
        v28 = PsTestProtectedProcessIncompatibility(1, (__int64)Object, Process) ? 1055744 : 0x1FFFFF;
        AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
        Buffer[0].ValidAttributes = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
        MessageAttribute[5] = v28;
        *MessageAttribute = 0;
        MessageAttribute[4] = 4;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        RequiredBufferSize = 272LL;
        KeTestAlertThread(0);
        if ( (*(_DWORD *)(&v37[1].SwapListEntry + 1) & 1) == 0 )
        {
          v30 = ZwAlpcSendWaitReceivePort(
                  Flink->Blink,
                  0x220000u,
                  (PPORT_MESSAGE)a3,
                  Buffer,
                  (PPORT_MESSAGE)a3,
                  &RequiredBufferSize,
                  0LL,
                  0LL);
          v33 = 0LL;
          started = v30;
          if ( v30 < 0 )
          {
            if ( v30 == -1073741769 )
              DbgkpRemoveErrorPort((__int64)v37, (unsigned __int64)v9, (volatile signed __int32 *)Flink, v32);
            goto LABEL_54;
          }
          if ( v30 != 257 )
          {
            if ( _bittest16((const signed __int16 *)(a3 + 4), 0xDu) )
              ZwAlpcSendWaitReceivePort(Flink->Blink, 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
            started = *(_DWORD *)(a3 + 44);
            if ( started >= 0 && !v21 && started == 65538 )
            {
              if ( v5 )
              {
                DbgkpResumeProcess(Process, v33, v31, v32);
                v5 = 0;
              }
              started = !DbgkForwardException(v40, 1u, 1) ? 0xC0000144 : 0;
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
