/*
 * XREFs of NtNotifyChangeSession @ 0x140B4ED50
 * Callers:
 *     DifNtNotifyChangeSessionWrapper @ 0x140680400 (DifNtNotifyChangeSessionWrapper.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtNotifyChangeSession(
        HANDLE SessionHandle,
        ULONG ChangeSequenceNumber,
        PLARGE_INTEGER ChangeTimeStamp,
        IO_SESSION_EVENT Event,
        IO_SESSION_STATE NewState,
        IO_SESSION_STATE PreviousState,
        PVOID Payload,
        ULONG PayloadSize)
{
  char v11; // r12
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  char *v14; // r13
  __int64 v15; // rdx
  ULONG v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rax
  _BYTE *v19; // rbx
  ULONG v20; // edx
  _BYTE *Pool2; // rax
  _BYTE *v22; // rax
  PVOID v23; // r15
  __int64 v24; // rax
  char v25; // [rsp+30h] [rbp-1B8h]
  KPROCESSOR_MODE v26; // [rsp+32h] [rbp-1B6h]
  unsigned __int16 Size_4; // [rsp+38h] [rbp-1B0h]
  NTSTATUS v28; // [rsp+3Ch] [rbp-1ACh]
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  IO_SESSION_EVENT v30; // [rsp+58h] [rbp-190h]
  char *v31; // [rsp+60h] [rbp-188h]
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-180h] BYREF
  _OWORD Argument1[2]; // [rsp+70h] [rbp-178h] BYREF
  __int128 v34; // [rsp+90h] [rbp-158h]
  __int128 v35; // [rsp+A0h] [rbp-148h]
  _BYTE v36[256]; // [rsp+B0h] [rbp-138h] BYREF

  v30 = Event;
  v25 = 0;
  memset_0(Argument1, 0, 0x40uLL);
  Size_4 = 0;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  if ( PayloadSize > 0x100 )
    return -1073741580;
  Object = 0LL;
  result = ObReferenceObjectByHandle(SessionHandle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v28 = result;
  if ( result < 0 )
    return result;
  v14 = (char *)Object + 24;
  v31 = (char *)Object + 24;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 136LL), Executive, 0, 0, 0LL);
  v15 = *(_QWORD *)v14;
  v16 = *(_DWORD *)(*(_QWORD *)v14 + 132LL);
  if ( v16 == ChangeSequenceNumber )
  {
    *(_DWORD *)(v15 + 132) = v16 + 1;
  }
  else if ( v16 <= ChangeSequenceNumber || v16 - ChangeSequenceNumber >= 0xFFFFFFFD )
  {
    do
    {
      v17 = v15;
      if ( v16 == ChangeSequenceNumber )
        break;
      Interval.QuadPart = -1000000LL;
      KeSetEvent((PRKEVENT)(v15 + 136), 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)v14 + 136LL), Executive, 0, 0, 0LL);
      ++Size_4;
      v15 = *(_QWORD *)v14;
      v16 = *(_DWORD *)(*(_QWORD *)v14 + 132LL);
      v17 = *(_QWORD *)v14;
    }
    while ( Size_4 <= 0xAu );
    *(_DWORD *)(v17 + 132) = ChangeSequenceNumber + 1;
  }
  v18 = *(_QWORD *)v14;
  if ( Event == IoSessionEventIgnore )
  {
    KeSetEvent((PRKEVENT)(v18 + 136), 0, 0);
    ObfDereferenceObject(Object);
    return 0;
  }
  *(_DWORD *)(v18 + 128) = NewState;
  v19 = 0LL;
  v20 = PayloadSize;
  if ( PayloadSize )
  {
    if ( v26 == 1 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      v19 = Pool2;
      if ( Pool2 )
      {
        v25 = 1;
        RtlCopyFromUser(Pool2, Payload, PayloadSize);
      }
      else
      {
        v19 = v36;
        RtlCopyFromUser(v36, Payload, PayloadSize);
        v11 = 1;
      }
      v14 = v31;
      v20 = PayloadSize;
      goto LABEL_26;
    }
    if ( (unsigned int)(Event - 1) > 1 )
    {
      v22 = (_BYTE *)ExAllocatePool2(0x100uLL);
      v19 = v22;
      if ( v22 )
      {
        v25 = 1;
        memmove(v22, Payload, PayloadSize);
        v20 = PayloadSize;
        goto LABEL_26;
      }
      v11 = 1;
      v20 = PayloadSize;
    }
    v19 = Payload;
  }
LABEL_26:
  LODWORD(v34) = Event;
  *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(v20, NewState);
  *(_QWORD *)&v35 = v19;
  v23 = Object;
  *((_QWORD *)&v35 + 1) = Object;
  if ( !v11 && (unsigned int)(Event - 1) > 1 )
  {
    v24 = ExAllocatePool2(0x40uLL);
    if ( v24 )
    {
      *(_OWORD *)v24 = Argument1[0];
      *(_OWORD *)(v24 + 16) = Argument1[1];
      *(_OWORD *)(v24 + 32) = v34;
      *(_OWORD *)(v24 + 48) = v35;
      *(_QWORD *)(v24 + 16) = IopSessionChangeWorker;
      *(_QWORD *)(v24 + 24) = v24;
      *(_QWORD *)v24 = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v24, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)(*(_QWORD *)v14 + 136LL), 0, 0);
  ObfDereferenceObject(v23);
  if ( v19 )
  {
    if ( v25 == 1 )
      ExFreePoolWithTag(v19, 0);
  }
  return v28;
}
