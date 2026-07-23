/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x1406D7550
 * Callers:
 *     DifNtQueryInformationWorkerFactoryWrapper @ 0x140687710 (DifNtQueryInformationWorkerFactoryWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQueryInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *v10; // rbx
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  __int128 Src; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-A8h]
  __int16 v14; // [rsp+58h] [rbp-A0h]
  bool v15; // [rsp+5Ah] [rbp-9Eh]
  bool v16; // [rsp+5Bh] [rbp-9Dh]
  bool v17; // [rsp+5Ch] [rbp-9Ch]
  char v18; // [rsp+5Dh] [rbp-9Bh]
  char v19; // [rsp+5Eh] [rbp-9Ah]
  char v20; // [rsp+5Fh] [rbp-99h]
  int v21; // [rsp+60h] [rbp-98h]
  int v22; // [rsp+64h] [rbp-94h]
  int v23; // [rsp+68h] [rbp-90h]
  int v24; // [rsp+6Ch] [rbp-8Ch]
  int v25; // [rsp+70h] [rbp-88h]
  int v26; // [rsp+74h] [rbp-84h]
  int v27; // [rsp+78h] [rbp-80h]
  int v28; // [rsp+7Ch] [rbp-7Ch]
  __int64 v29; // [rsp+80h] [rbp-78h]
  __int64 v30; // [rsp+88h] [rbp-70h]
  __int64 v31; // [rsp+90h] [rbp-68h]
  __int64 v32; // [rsp+98h] [rbp-60h]
  __int64 v33; // [rsp+A0h] [rbp-58h]
  __int64 v34; // [rsp+A8h] [rbp-50h]
  int v35; // [rsp+B0h] [rbp-48h]
  int v36; // [rsp+B4h] [rbp-44h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( WorkerFactoryInformationClass != WorkerFactoryBasicInformation )
    return -1073741821;
  if ( PreviousMode )
    ProbeForWrite(WorkerFactoryInformation, 0x78uLL, 4u);
  if ( ReturnLength )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(ReturnLength, 120LL);
    else
      *ReturnLength = 120;
  }
  if ( WorkerFactoryInformationLength != 120 )
    return -1073741820;
  Object = 0LL;
  result = ObReferenceObjectByHandle(WorkerFactoryHandle, 8u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v20 = 0;
    v28 = 0;
    v36 = 0;
    v10 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    Src = 0LL;
    v13 = v10[14];
    v14 = 0;
    v15 = (v10[51] & 8) != 0;
    v16 = *(_DWORD *)(v10[2] + 28LL) == 0;
    v17 = *((_DWORD *)v10 + 100) != 0;
    v18 = *(_BYTE *)(v10[2] + 32LL);
    v19 = *(_BYTE *)(v10[2] + 33LL);
    v21 = *((_DWORD *)v10 + 101);
    v22 = *((_DWORD *)v10 + 94);
    v23 = *((_DWORD *)v10 + 95);
    v24 = *((_DWORD *)v10 + 98);
    v25 = *(_DWORD *)(v10[2] + 28LL);
    v26 = *((_DWORD *)v10 + 97);
    v27 = *(_DWORD *)(v10[2] + 24LL);
    v29 = 0LL;
    v30 = v10[3];
    v31 = v10[4];
    v32 = *(_QWORD *)(v10[6] + 464LL);
    v33 = v10[7];
    v34 = v10[8];
    v35 = *((_DWORD *)v10 + 104);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    if ( PreviousMode )
      RtlCopyToUser(WorkerFactoryInformation, &Src, 0x78uLL);
    else
      RtlCopyVolatileMemory(WorkerFactoryInformation, &Src, 0x78uLL);
    return 0;
  }
  return result;
}
