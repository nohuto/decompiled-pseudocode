/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1408EB720
 * Callers:
 *     DifNtAlpcOpenSenderThreadWrapper @ 0x140670D30 (DifNtAlpcOpenSenderThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1408ECEA0 (AlpcpProbeAndCaptureMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     PsOpenThread @ 0x140A0F720 (PsOpenThread.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  int v10; // ebx
  int v11; // r9d
  __int64 ULong64FromUser; // rax
  PVOID v13; // rdi
  ULONG_PTR v14; // rbx
  _QWORD *v15; // rsi
  __int64 v16; // rax
  int Object; // [rsp+20h] [rbp-98h]
  int HandleInformation; // [rsp+28h] [rbp-90h]
  PVOID v20; // [rsp+40h] [rbp-78h] BYREF
  void *v21; // [rsp+48h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-68h] BYREF
  __int128 v23; // [rsp+58h] [rbp-60h] BYREF
  __int128 v24; // [rsp+68h] [rbp-50h]
  unsigned __int64 ClientViewSize; // [rsp+78h] [rbp-40h]
  OBJECT_ATTRIBUTES v26; // [rsp+80h] [rbp-38h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  ClientViewSize = 0LL;
  memset(&v26, 0, 44);
  v21 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = 0LL;
  v10 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v20, 0LL);
  if ( v10 >= 0 )
  {
    if ( PreviousMode )
    {
      ULong64FromUser = RtlReadULong64FromUser(ThreadHandle);
      RtlWriteULong64ToUser(ThreadHandle, ULong64FromUser);
      AlpcpProbeAndCaptureMessageHeader(PortMessage, &v23);
      RtlCopyFromUser(&v26, ObjectAttributes, 0x30uLL);
    }
    else
    {
      v23 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v24 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
      v26 = *ObjectAttributes;
    }
    v13 = v20;
    v10 = AlpcpLookupMessage((_DWORD)v20, DWORD2(v24), ClientViewSize, v11, (__int64)&BugCheckParameter2);
    if ( v10 < 0 )
    {
      ObfDereferenceObject(v13);
    }
    else
    {
      v14 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        ObfDereferenceObject(v13);
        v10 = -1073740029;
      }
      else
      {
        v15 = *(_QWORD **)(BugCheckParameter2 + 32);
        if ( !v15 )
          goto LABEL_16;
        v16 = v15[161] - *((_QWORD *)&v23 + 1);
        if ( !v16 )
          v16 = v15[162] - v24;
        if ( v16 )
        {
LABEL_16:
          AlpcpUnlockMessage(BugCheckParameter2);
          ObfDereferenceObject(v13);
          v10 = -1073741790;
        }
        else
        {
          PsReferenceSiloContext(*(void **)(BugCheckParameter2 + 32));
          AlpcpUnlockMessage(v14);
          LOBYTE(HandleInformation) = PreviousMode;
          LOBYTE(Object) = 0;
          v10 = PsOpenThread(&v21, DesiredAccess, &v26, (char *)&v23 + 8, Object, HandleInformation);
          ObfDereferenceObject(v15);
          ObfDereferenceObject(v13);
          if ( v10 >= 0 )
          {
            if ( PreviousMode )
              RtlWriteULong64ToUser(ThreadHandle, (__int64)v21);
            else
              *ThreadHandle = v21;
          }
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return v10;
}
