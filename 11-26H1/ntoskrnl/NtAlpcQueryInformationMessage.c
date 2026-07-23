/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x1407C3C50
 * Callers:
 *     DifNtAlpcQueryInformationMessageWrapper @ 0x140670EE0 (DifNtAlpcQueryInformationMessageWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407C32F4 (AlpcpQueryTokenModifiedIdMessage.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1409BB0A8 (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140A94098 (AlpcpCaptureIdMessage.c)
 *     AlpcpQuerySidMessage @ 0x140AA39E0 (AlpcpQuerySidMessage.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  PULONG v11; // r14
  int ULongFromUser; // eax
  int v13; // esi
  int v14; // ebx
  int v15; // r9d
  PVOID v16; // r15
  ULONG_PTR v17; // rsi
  __int32 v18; // edi
  __int32 v19; // edi
  int SidMessage; // eax
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  int v23; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-20h] BYREF

  v23 = 0;
  BugCheckParameter2 = 0LL;
  LODWORD(Object) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(PortMessage, &Object, &v23);
  if ( PreviousMode )
  {
    ProbeForWrite(MessageInformation, Length, 4u);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  v13 = (int)Object;
  if ( (_DWORD)Object )
  {
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v14 < 0 )
      goto LABEL_27;
    v16 = Object;
    v14 = AlpcpLookupMessage((_DWORD)Object, v13, v23, v15, (__int64)&BugCheckParameter2);
    if ( v14 < 0 )
    {
LABEL_9:
      ObfDereferenceObject(v16);
      goto LABEL_27;
    }
    v17 = BugCheckParameter2;
    v14 = *(_QWORD *)(BugCheckParameter2 + 16) == 0LL ? 0xC0000702 : 0;
    if ( !*(_QWORD *)(BugCheckParameter2 + 16) )
    {
LABEL_26:
      AlpcpUnlockMessage(v17);
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(BugCheckParameter2 + 24) )
    {
      v14 = -1073740029;
      goto LABEL_26;
    }
    if ( MessageInformationClass == AlpcMessageSidInformation )
    {
      SidMessage = AlpcpQuerySidMessage(
                     (_DWORD)v16,
                     BugCheckParameter2,
                     (_DWORD)MessageInformation,
                     Length,
                     (__int64)v11);
      goto LABEL_25;
    }
    v18 = MessageInformationClass - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          SidMessage = AlpcpQueryHandleInformationMessage(v16, BugCheckParameter2, MessageInformation, Length, v11);
LABEL_25:
          v14 = SidMessage;
          goto LABEL_26;
        }
      }
      else if ( !MessageInformation && !Length && !v11 )
      {
        v14 = (*(_DWORD *)(BugCheckParameter2 + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_26;
      }
      v14 = -1073741811;
      goto LABEL_26;
    }
    SidMessage = AlpcpQueryTokenModifiedIdMessage((__int64)v16, BugCheckParameter2, MessageInformation, Length, v11);
    goto LABEL_25;
  }
  v14 = -1073741811;
LABEL_27:
  KeLeaveCriticalRegion();
  return v14;
}
