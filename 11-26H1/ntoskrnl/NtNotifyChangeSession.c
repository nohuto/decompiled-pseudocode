/*
 * XREFs of NtNotifyChangeSession @ 0x140B4CFC0
 * Callers:
 *     DifNtNotifyChangeSessionWrapper @ 0x14067C820 (DifNtNotifyChangeSessionWrapper.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExNotifyCallback @ 0x14047A7E0 (ExNotifyCallback.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtNotifyChangeSession(
        HANDLE Handle,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        void *Src,
        unsigned int a8)
{
  char v11; // r12
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  char *v14; // r13
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rax
  _BYTE *v19; // rbx
  unsigned int v20; // edx
  _BYTE *Pool2; // rax
  _BYTE *v22; // rax
  PVOID v23; // r15
  __int64 v24; // rax
  char v25; // [rsp+30h] [rbp-1B8h]
  KPROCESSOR_MODE v26; // [rsp+32h] [rbp-1B6h]
  unsigned __int16 Size_4; // [rsp+38h] [rbp-1B0h]
  NTSTATUS v28; // [rsp+3Ch] [rbp-1ACh]
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-190h]
  char *v31; // [rsp+60h] [rbp-188h]
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-180h] BYREF
  _OWORD Argument1[2]; // [rsp+70h] [rbp-178h] BYREF
  __int128 v34; // [rsp+90h] [rbp-158h]
  __int128 v35; // [rsp+A0h] [rbp-148h]
  _BYTE v36[256]; // [rsp+B0h] [rbp-138h] BYREF

  v30 = a4;
  v25 = 0;
  memset_0(Argument1, 0, 0x40uLL);
  Size_4 = 0;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  if ( a8 > 0x100 )
    return -1073741580;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v28 = result;
  if ( result < 0 )
    return result;
  v14 = (char *)Object + 24;
  v31 = (char *)Object + 24;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 136LL), Executive, 0, 0, 0LL);
  v15 = *(_QWORD *)v14;
  v16 = *(_DWORD *)(*(_QWORD *)v14 + 132LL);
  if ( v16 == a2 )
  {
    *(_DWORD *)(v15 + 132) = v16 + 1;
  }
  else if ( v16 <= a2 || v16 - a2 >= 0xFFFFFFFD )
  {
    do
    {
      v17 = v15;
      if ( v16 == a2 )
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
    *(_DWORD *)(v17 + 132) = a2 + 1;
  }
  v18 = *(_QWORD *)v14;
  if ( !a4 )
  {
    KeSetEvent((PRKEVENT)(v18 + 136), 0, 0);
    ObfDereferenceObject(Object);
    return 0;
  }
  *(_DWORD *)(v18 + 128) = a5;
  v19 = 0LL;
  v20 = a8;
  if ( a8 )
  {
    if ( v26 == 1 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      v19 = Pool2;
      if ( Pool2 )
      {
        v25 = 1;
        RtlCopyFromUser(Pool2, Src, a8);
      }
      else
      {
        v19 = v36;
        RtlCopyFromUser(v36, Src, a8);
        v11 = 1;
      }
      v14 = v31;
      v20 = a8;
      goto LABEL_26;
    }
    if ( a4 - 1 > 1 )
    {
      v22 = (_BYTE *)ExAllocatePool2(0x100uLL);
      v19 = v22;
      if ( v22 )
      {
        v25 = 1;
        memmove(v22, Src, a8);
        v20 = a8;
        goto LABEL_26;
      }
      v11 = 1;
      v20 = a8;
    }
    v19 = Src;
  }
LABEL_26:
  *(_QWORD *)&v34 = __PAIR64__(a5, a4);
  DWORD2(v34) = v20;
  *(_QWORD *)&v35 = v19;
  v23 = Object;
  *((_QWORD *)&v35 + 1) = Object;
  if ( !v11 && a4 - 1 > 1 )
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
