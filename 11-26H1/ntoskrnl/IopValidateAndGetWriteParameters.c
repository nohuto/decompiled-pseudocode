/*
 * XREFs of IopValidateAndGetWriteParameters @ 0x1404B3AFC
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1404B3A1C (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140467B40 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 */

__int64 __fastcall IopValidateAndGetWriteParameters(
        struct _KTHREAD **a1,
        void *a2,
        struct _KTHREAD **a3,
        _DWORD *a4,
        char a5)
{
  HANDLE v7; // r13
  NTSTATUS v9; // r14d
  struct _KTHREAD *v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  struct _KTHREAD *CurrentThread; // rax
  struct _FILE_OBJECT *v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  _DWORD *v17; // r8
  struct _KLOCK_ENTRIES *Dpc_low; // r9
  unsigned int ULongFromUser; // eax
  struct _KTHREAD *v20; // r10
  int v21; // ecx
  struct _KEVENT *v22; // rcx
  volatile __int32 *v23; // r14
  struct _KTHREAD *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  char v27; // r13
  __int64 v28; // rdx
  int v29; // eax
  struct _KTHREAD *v30; // rcx
  char v32; // [rsp+30h] [rbp-38h]
  int v33; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+10h]

  Handle = a2;
  Object = a1;
  v7 = a2;
  v9 = 0;
  if ( a1[12] && (a1[6] || a2 || a1[2]->ApcState.ApcListHead[1].Blink) )
    goto LABEL_79;
  v10 = a1[15];
  if ( v10 )
  {
    v11 = *(_QWORD *)&v10->Header.Lock;
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 40) < *((_DWORD *)a1 + 18) )
        goto LABEL_79;
    }
  }
  v12 = *((_DWORD *)a1 + 28);
  if ( (v12 & 1) == 0 || (a1[2]->CurrentRunTime & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
    *((_BYTE *)a1 + 8) = CurrentThread->PreviousMode;
    v14 = (struct _FILE_OBJECT *)a1[2];
    if ( (v14->Flags & 2) == 0 || (v15 = 1, v12 < 0) )
      v15 = 0;
    *((_BYTE *)a1 + 9) = v15;
    *((_BYTE *)a1 + 10) = (v12 & 0x40000000) == 0;
    a1[3] = (struct _KTHREAD *)IoGetRelatedDeviceObject(v14);
    if ( !*((_BYTE *)a1 + 8) || a1[12] )
    {
      if ( a3 )
        a1[10] = *a3;
      if ( a4 )
        *((_DWORD *)a1 + 22) = *a4;
    }
    else
    {
      ULongFromUser = RtlReadULongFromUser(a1[7]);
      RtlWriteULongToUser(a1[7], ULongFromUser);
      IopMarkApcRoutineIfAsynchronousIo32((__int64 *)a1 + 7, (__int64 *)a1 + 5, *((_BYTE *)a1 + 9));
      if ( !a1[16] )
        ProbeForRead(a1[8], *((unsigned int *)a1 + 18), 1u);
      if ( a1[2]->ApcState.ApcListHead[1].Blink && ((unsigned __int64)a1[5] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        v9 = -1073741811;
        goto LABEL_72;
      }
      if ( a3 )
      {
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        a1[10] = (struct _KTHREAD *)RtlReadULong64FromUser(a3);
      }
      if ( a4 )
        *((_DWORD *)a1 + 22) = RtlReadULongFromUser(a4);
      v7 = Handle;
    }
    if ( !*((_BYTE *)a1 + 8)
      || (a1[2]->CurrentRunTime & 8) == 0
      || (((v20 = a1[3], Dpc_low = (struct _KLOCK_ENTRIES *)LOWORD(v20->Timer.Dpc), v17 = a1 + 9, !(_WORD)Dpc_low)
        || (((_DWORD)Dpc_low - 1) & *v17) == 0)
       && (LODWORD(v20->ApcState.ApcListHead[0].Flink) & (unsigned __int64)a1[8]) == 0
       || (!(_WORD)Dpc_low || (v16 = *v17 % (unsigned int)Dpc_low, !(_DWORD)v16))
       && (LODWORD(v20->ApcState.ApcListHead[0].Flink) & (unsigned __int64)a1[8]) == 0)
      && (!a3
       || (v21 = *((_DWORD *)a1 + 20), v21 == -1) && *((_DWORD *)a1 + 21) == -1
       || v21 == -2 && *((_DWORD *)a1 + 21) == -1 && *((_BYTE *)a1 + 9)
       || (v16 = LOWORD(v20->Timer.Dpc), !(_WORD)v16)
       || (((_DWORD)v16 - 1) & v21) == 0) )
    {
      if ( (a5 & 6) == 4 )
      {
        *((_DWORD *)a1 + 20) = -1;
        *((_DWORD *)a1 + 21) = -1;
      }
      if ( v7 )
      {
        Object = 0LL;
        v9 = ObReferenceObjectByHandle(v7, 2u, (POBJECT_TYPE)ExEventObjectType, *((_BYTE *)a1 + 8), &Object, 0LL);
        v22 = (struct _KEVENT *)Object;
        a1[4] = (struct _KTHREAD *)Object;
        if ( v9 < 0 )
          goto LABEL_72;
        KeResetEvent(v22);
      }
      if ( *((_BYTE *)a1 + 9) )
      {
        v33 = a1[2]->CurrentRunTime & 4;
        v32 = *((_BYTE *)a1 + 8);
        v23 = (volatile __int32 *)a1[2];
        v24 = KeGetCurrentThread();
        --v24->KernelApcDisable;
        v25 = KeAbPreAcquire((__int64)(v23 + 32), 0LL, 0LL, Dpc_low);
        v27 = 0;
        LOBYTE(Object) = 0;
        v28 = 1LL;
        if ( _InterlockedExchange(v23 + 29, 1) )
        {
          LOBYTE(v26) = v33 != 0;
          LOBYTE(v28) = v32;
          v9 = IopWaitAndAcquireFileObjectLock(v23, v28, v26, v25, &Object);
          v27 = (char)Object;
        }
        else
        {
          if ( v25 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
            {
              LOBYTE(v28) = 2;
              AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v25 + 33), (volatile unsigned __int8 *)v28, 1);
            }
            else
            {
              *(_BYTE *)(v25 + 10) = 1;
            }
          }
          PsReferenceSiloContext((void *)v23);
          v9 = 0;
        }
        if ( v27 )
        {
LABEL_72:
          if ( v9 >= 0 )
            return (unsigned int)v9;
          goto LABEL_73;
        }
        v16 = (__int64)(a1 + 10);
        if ( !a3 && !*(_DWORD *)v16 || *(_DWORD *)v16 == -2 && *((_DWORD *)a1 + 21) == -1 )
          *(_QWORD *)v16 = a1[2]->SchedulingGroup;
LABEL_66:
        v29 = *((_DWORD *)a1 + 21);
        if ( v29 < 0 && (v29 != -1 || *((_DWORD *)a1 + 20) != -1) )
        {
          if ( *((_BYTE *)a1 + 9) )
            IopReleaseFileObjectLock((ULONG_PTR)a1[2], v16, (__int64)v17);
          v9 = -1073741811;
        }
        goto LABEL_72;
      }
      if ( a3 || (a1[2]->CurrentRunTime & 0x280) != 0 )
        goto LABEL_66;
    }
LABEL_79:
    v9 = -1073741811;
    goto LABEL_73;
  }
  v9 = -1073740587;
LABEL_73:
  v30 = a1[4];
  if ( v30 )
  {
    ObfDereferenceObjectWithTag(v30, 0x746C6644u);
    a1[4] = 0LL;
  }
  ObfDereferenceObjectWithTag(a1[2], 0x746C6644u);
  a1[2] = 0LL;
  return (unsigned int)v9;
}
