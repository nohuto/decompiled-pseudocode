/*
 * XREFs of ObShutdownSystem @ 0x1407C5600
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObCleanupSiloState @ 0x1407C51CC (ObCleanupSiloState.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     ExEnumHandleTable @ 0x14092BB30 (ExEnumHandleTable.c)
 *     ObpDeleteSymbolicLinkName @ 0x140B025FC (ObpDeleteSymbolicLinkName.c)
 *     ObMakeTemporaryObject @ 0x140B03770 (ObMakeTemporaryObject.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140CD3F9C (ObpShutdownTraceLoggingProvider.c)
 */

LONG_PTR __fastcall ObShutdownSystem(void **a1, _KTHREAD **a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r12
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  void *v7; // rcx
  __int64 v8; // rax
  volatile __int64 *ServerSiloGlobals; // rax
  struct _KLOCK_ENTRIES *v11; // rbx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // rsi
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  unsigned int v16; // ecx
  _KTHREAD **v17; // r10
  _KTHREAD **v18; // rdi
  struct _KLOCK_ENTRIES *v19; // r13
  struct _OBJECT_TYPE *v20; // rax
  char v21; // cl
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v23; // rax
  volatile signed __int64 *v24; // rdx
  AutoBoost *v25; // r15
  signed __int64 v26; // r8
  volatile signed __int64 *v27; // r15
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  _KTHREAD **v30; // rcx
  struct _OBJECT_TYPE *v31; // r15
  __int64 v32; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  int v34; // [rsp+B0h] [rbp+48h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+50h]
  _KTHREAD **v36; // [rsp+C0h] [rbp+58h]
  struct _OBJECT_TYPE *v37; // [rsp+C8h] [rbp+60h]

  v4 = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      v34 = 0;
      return ExEnumHandleTable(PsInitialSystemProcess[1].KernelTime, ObpShutdownCloseHandleProcedure, &v34, 0LL);
    }
    else
    {
      v5 = *(_QWORD **)&ObpStackTraceLock.PriorityFloorSummary;
      DestinationString = 0LL;
      Object = 0LL;
      v6 = **(_QWORD ***)&ObpStackTraceLock.PriorityFloorSummary;
      while ( v6 != v5 )
      {
        v7 = v6 + 10;
        v6 = (_QWORD *)*v6;
        Object = v7;
        ObMakeTemporaryObject(v7);
      }
      RtlInitUnicodeString(&DestinationString, L"DosDevices");
      if ( (int)ObReferenceObjectByName(&DestinationString, 64LL, 0LL) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"Global");
      if ( (int)ObReferenceObjectByName(&DestinationString, 64LL, 0LL) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
      if ( (int)ObReferenceObjectByName(&DestinationString, 64LL, 0LL) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      v8 = HalSystemVectorDispatchEntry();
      ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(v8);
      ObCleanupSiloState(ServerSiloGlobals);
      ObfDereferenceObject(*(PVOID *)&ObpStackTraceLock.PriorityFloorCounts[24]);
      ObfDereferenceObject(ObpDirectoryObjectType);
      ObfDereferenceObject(ObpSymbolicLinkObjectType);
      ObfDereferenceObject(ObpTypeDirectoryObject);
      return ObfDereferenceObject(*(PVOID *)&ObpStackTraceLock.PriorityFloorSummary);
    }
  }
  else
  {
    v11 = *(struct _KLOCK_ENTRIES **)&ObpStackTraceLock.PriorityFloorCounts[24];
    v12 = 1LL;
    v34 = 1;
    v13 = 0LL;
    v14 = 1;
    v15 = 1;
    if ( *(_QWORD *)&ObpStackTraceLock.PriorityFloorCounts[24] )
    {
LABEL_15:
      while ( 2 )
      {
        v16 = 0;
LABEL_16:
        LODWORD(Object) = v16;
        if ( v16 < 0x25 )
        {
          v17 = &v11->Thread + v16;
          v36 = v17;
          v18 = v17;
          while ( 1 )
          {
            while ( 1 )
            {
              a2 = (_KTHREAD **)*v18;
              a4 = v13;
              if ( !*v18 )
              {
                v16 = (_DWORD)Object + 1;
                goto LABEL_16;
              }
              v19 = (struct _KLOCK_ENTRIES *)a2[1];
              v20 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(_BYTE *)&v19[-1].Entries[0].WaiterTree.0 ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v19 - 48) >> 8)];
              v21 = BYTE2(v19[-1].Entries[0].WaiterTree.Min);
              v37 = v20;
              if ( (v21 & 2) != 0 )
              {
                v4 = (__int64)&v19[-1].Entries[0].40 - ObpInfoMaskToOffset[v21 & 3];
                v20 = v37;
              }
              if ( !v13 )
                break;
              v4 = 0LL;
              if ( v19 == v13 && (v13 = 0LL, v15 > v14) )
              {
                v18 = v17;
                v34 = v14;
                v15 = v14;
              }
              else
              {
                v13 = 0LL;
                v18 = a2;
                if ( v19 != a4 )
                  v13 = a4;
              }
            }
            if ( v20 == *(struct _OBJECT_TYPE **)&ObpStackTraceLock.PriorityFloorSummary )
            {
              v18 = a2;
            }
            else
            {
              if ( v20 == ObpDirectoryObjectType )
              {
                ++v14;
                v11 = v19;
                v4 = 0LL;
                goto LABEL_15;
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v23 = (AutoBoost *)KeAbPreAcquire((__int64)&v19[-1].Entries[0].WaiterTree, 0LL, 0LL, v13);
              v24 = (volatile signed __int64 *)&v19[-1].Entries[0].40;
              v25 = v23;
              if ( _interlockedbittestandset64((volatile signed __int32 *)&v19[-1].Entries[0].WaiterTree, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx(
                  (unsigned __int64 *)&v19[-1].Entries[0].WaiterTree,
                  v23,
                  (__int64)&v19[-1].Entries[0].WaiterTree);
                v24 = (volatile signed __int64 *)&v19[-1].Entries[0].40;
              }
              v26 = 0LL;
              if ( v25 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v25, (void *)v24);
                else
                  *((_BYTE *)v25 + 10) = 1;
              }
              *((_BYTE *)v24 + 27) &= ~0x10u;
              v27 = v24 + 2;
              _m_prefetchw((const void *)(v24 + 2));
              v28 = *((_QWORD *)v24 + 2);
              v29 = v28 - 16;
              if ( (v28 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v29 = v26;
              if ( (v28 & 2) != 0 || v28 != _InterlockedCompareExchange64(v27, v29, v28) )
                ExfReleasePushLock(v27);
              KeAbPostRelease((unsigned __int64)v27);
              KeLeaveCriticalRegion();
              v30 = (_KTHREAD **)*v18;
              if ( v19[-1].Entries[0].OwnerTree.Min )
              {
                v15 = v34;
                v18 = (_KTHREAD **)*v18;
              }
              else
              {
                *v18 = *v30;
                ExFreePoolWithTag(v30, 0);
                v31 = v37;
                if ( (v37->TypeInfo.ObjectTypeFlags & 8) == 0 )
                {
                  v32 = 0LL;
                  guard_dispatch_icall_no_overrides((__int64)v19, 2LL);
                }
                if ( v31 == ObpSymbolicLinkObjectType )
                {
                  v34 = v14;
                  v15 = v14;
                  ObpDeleteSymbolicLinkName(v19);
                  v18 = v36;
                }
                else
                {
                  v15 = v34;
                }
                ExFreePoolWithTag(*(PVOID *)(v4 + 16), 0);
                *(_QWORD *)(v4 + 16) = 0LL;
                *(_DWORD *)(v4 + 8) = 0;
                *(_QWORD *)v4 = 0LL;
                ObfDereferenceObject(v19);
                ObfDereferenceObject(v11);
              }
              v17 = v36;
            }
            v4 = 0LL;
          }
        }
        --v14;
        if ( (BYTE2(v11[-1].Entries[0].WaiterTree.Min) & 2) != 0 )
          a1 = (void **)((char *)&v11[-1].Entries[0].OwnerTree.Root
                       - ObpInfoMaskToOffset[BYTE2(v11[-1].Entries[0].WaiterTree.Min) & 3]);
        else
          a1 = 0LL;
        v13 = v11;
        v11 = (struct _KLOCK_ENTRIES *)*a1;
        if ( *a1 )
          continue;
        break;
      }
    }
    return ObpShutdownTraceLoggingProvider(a1, a2, v12, a4, v32);
  }
}
