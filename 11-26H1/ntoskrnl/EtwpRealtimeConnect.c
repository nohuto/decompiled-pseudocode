/*
 * XREFs of EtwpRealtimeConnect @ 0x140AB34A8
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x140AB3A1C (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  PVOID v2; // r15
  PVOID v3; // r12
  volatile void *v4; // rdi
  int ULongFromUser; // eax
  int v6; // eax
  int v7; // eax
  _KPROCESS *Process; // rax
  __int16 v9; // ax
  char v10; // al
  SIZE_T v11; // rdx
  bool v12; // zf
  unsigned int *v13; // rax
  unsigned int *v14; // rbx
  int v15; // edi
  _WORD *v17; // rdi
  _KPROCESS *v18; // rax
  char v19; // cl
  struct _KLOCK_ENTRIES *v20; // r9
  int inserted; // r15d
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // r14
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 v27; // rtt
  __int16 v28; // ax
  char v29; // al
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  PVOID v31; // [rsp+50h] [rbp-B8h] BYREF
  void *v32; // [rsp+58h] [rbp-B0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-A8h]
  unsigned int *v34; // [rsp+68h] [rbp-A0h]
  unsigned int *v35; // [rsp+70h] [rbp-98h]
  volatile void *v36; // [rsp+78h] [rbp-90h]
  unsigned int *v37; // [rsp+80h] [rbp-88h]
  struct _LIST_ENTRY *Flink; // [rsp+88h] [rbp-80h]
  volatile void *v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-58h]
  __int128 v43; // [rsp+C0h] [rbp-48h]
  unsigned int v44; // [rsp+110h] [rbp+8h]
  unsigned int v45; // [rsp+118h] [rbp+10h]
  HANDLE Handle; // [rsp+128h] [rbp+20h] BYREF

  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  *(_QWORD *)&v43 = 0LL;
  DWORD2(v43) = 0;
  v32 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v44 = *(_DWORD *)a1;
  Handle = 0LL;
  v39 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v45 = *(_DWORD *)(a1 + 4);
  v35 = *(unsigned int **)(a1 + 48);
  v4 = *(volatile void **)(a1 + 40);
  v36 = v4;
  v37 = *(unsigned int **)(a1 + 56);
  v34 = *(unsigned int **)(a1 + 64);
  ProbeForWrite(v39, (((v45 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v45, 4u);
  ULongFromUser = RtlReadULongFromUser(v35);
  RtlWriteULongToUser(v35, ULongFromUser);
  v6 = RtlReadULongFromUser(v37);
  RtlWriteULongToUser(v37, v6);
  v7 = RtlReadULongFromUser(v34);
  RtlWriteULongToUser(v34, v7);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ReadyTime )
    goto LABEL_5;
  v9 = WORD2(Process[3].PerProcessorCycleTimes);
  if ( v9 == 332 || (v12 = v9 == 452, v10 = 0, v12) )
    v10 = 1;
  v11 = 4LL;
  if ( !v10 )
LABEL_5:
    v11 = 8LL;
  ProbeForWrite(v4, v11, 4u);
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v13 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v44, 1);
  v14 = v13;
  if ( !v13 )
    return 3221225485LL;
  if ( (v13[3] & 0x100) == 0 )
  {
    v15 = -1073741811;
LABEL_11:
    KeReleaseMutex((PRKMUTEX)(v14 + 158), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v14 + 170) + 704LL) + 8LL * *v14),
      1u);
    if ( Handle )
      ZwClose(Handle);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v2 )
      ObfDereferenceObject(v2);
    return (unsigned int)v15;
  }
  v15 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v13);
  if ( v15 < 0 )
    goto LABEL_11;
  v15 = EtwpOpenConsumer(&Handle);
  if ( v15 < 0 )
    goto LABEL_11;
  v31 = 0LL;
  v15 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v31, 0LL);
  v3 = v31;
  if ( v15 < 0 )
    goto LABEL_11;
  v31 = 0LL;
  v15 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 32), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v31, 0LL);
  v2 = v31;
  if ( v15 < 0 )
    goto LABEL_11;
  LODWORD(v41) = 48;
  *((_QWORD *)&v41 + 1) = 0LL;
  DWORD2(v42) = 64;
  *(_QWORD *)&v42 = 0LL;
  v43 = 0LL;
  v15 = ObCreateObjectEx(0, EtwpRealTimeConnectionObjectType, (__int64)&v41, 1u, (__int64)Object, 160, 0, 0, &v32, 0LL);
  if ( v15 < 0 )
    goto LABEL_11;
  v17 = v32;
  memset_0(v32, 0, 0xA0uLL);
  v17[44] = v44;
  *((_QWORD *)v17 + 2) = Handle;
  *((_QWORD *)v17 + 3) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)v17 + 6) = v3;
  *((_QWORD *)v17 + 7) = v2;
  *((_QWORD *)v17 + 8) = v35;
  *((_QWORD *)v17 + 9) = v36;
  *((_QWORD *)v17 + 14) = Address;
  *((_DWORD *)v17 + 30) = v45;
  *((_QWORD *)v17 + 17) = v37;
  *((_QWORD *)v17 + 18) = v34;
  *((_QWORD *)v17 + 19) = Flink;
  *((_DWORD *)v17 + 24) = v45 >> 12;
  *((_QWORD *)v17 + 13) = v39;
  v18 = KeGetCurrentThread()->ApcState.Process;
  if ( !v18[1].ReadyTime )
    goto LABEL_24;
  v28 = WORD2(v18[3].PerProcessorCycleTimes);
  if ( v28 == 332 || (v12 = v28 == 452, v29 = 0, v12) )
    v29 = 1;
  v19 = 16;
  if ( !v29 )
LABEL_24:
    v19 = 0;
  *((_BYTE *)v17 + 90) = v19 | v17[45] & 0xEF;
  *((_QWORD *)v17 + 5) = a1;
  inserted = ObInsertObjectEx((char *)v17, 0LL, 1024, 1, 0, (__int64)&v40, (_QWORD *)(a1 + 72));
  if ( inserted >= 0 )
  {
    v22 = (AutoBoost *)KeAbPreAcquire((__int64)(v14 + 172), 0LL, 0LL, v20);
    v24 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 172, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14 + 86, v22, (__int64)(v14 + 172));
    if ( v24 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v24, v23);
      else
        *((_BYTE *)v24 + 10) = 1;
    }
    *((_QWORD *)v14 + 44) = v17;
    _m_prefetchw(v14 + 172);
    v25 = *((_QWORD *)v14 + 86);
    v26 = v25 - 16;
    if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v26 = 0LL;
    if ( (v25 & 2) != 0
      || (v27 = *((_QWORD *)v14 + 86),
          v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 86, v26, v25)) )
    {
      ExfReleasePushLock((_QWORD *)v14 + 86);
    }
    KeAbPostRelease((unsigned __int64)(v14 + 172));
    EtwpSynchronizeWithLogger((__int64)v14, 0x20u);
  }
  KeReleaseMutex((PRKMUTEX)(v14 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v14 + 170) + 704LL) + 8LL * *v14),
    1u);
  return (unsigned int)inserted;
}
