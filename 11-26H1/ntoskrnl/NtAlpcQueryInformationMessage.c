/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x1407C0BF0
 * Callers:
 *     DifNtAlpcQueryInformationMessageWrapper @ 0x14066D300 (DifNtAlpcQueryInformationMessageWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407C0294 (AlpcpQueryTokenModifiedIdMessage.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpQueryHandleInformationMessage @ 0x140970F38 (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140A8F3C8 (AlpcpCaptureIdMessage.c)
 *     AlpcpQuerySidMessage @ 0x140AA1F10 (AlpcpQuerySidMessage.c)
 */

__int64 __fastcall NtAlpcQueryInformationMessage(
        HANDLE Handle,
        __int64 a2,
        int a3,
        _QWORD *a4,
        SIZE_T Length,
        unsigned int *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int *v11; // r14
  int ULongFromUser; // eax
  int v13; // esi
  NTSTATUS v14; // ebx
  int v15; // r9d
  PVOID v16; // r15
  ULONG_PTR v17; // rsi
  int v18; // edi
  int v19; // edi
  NTSTATUS SidMessage; // eax
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  int v23; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-20h] BYREF

  v23 = 0;
  BugCheckParameter2 = 0LL;
  LODWORD(Object) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(a2, &Object, &v23);
  if ( PreviousMode )
  {
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v11 = a6;
    if ( a6 )
    {
      ULongFromUser = RtlReadULongFromUser(a6);
      RtlWriteULongToUser(a6, ULongFromUser);
    }
  }
  else
  {
    v11 = a6;
  }
  v13 = (int)Object;
  if ( (_DWORD)Object )
  {
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
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
    if ( !a3 )
    {
      SidMessage = AlpcpQuerySidMessage((_DWORD)v16, BugCheckParameter2, (_DWORD)a4, Length, (__int64)v11);
      goto LABEL_25;
    }
    v18 = a3 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          SidMessage = AlpcpQueryHandleInformationMessage(v16, BugCheckParameter2, a4, (unsigned int)Length, v11);
LABEL_25:
          v14 = SidMessage;
          goto LABEL_26;
        }
      }
      else if ( !a4 && !(_DWORD)Length && !v11 )
      {
        v14 = (*(_DWORD *)(BugCheckParameter2 + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_26;
      }
      v14 = -1073741811;
      goto LABEL_26;
    }
    SidMessage = AlpcpQueryTokenModifiedIdMessage((__int64)v16, BugCheckParameter2, a4, Length, v11);
    goto LABEL_25;
  }
  v14 = -1073741811;
LABEL_27:
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
