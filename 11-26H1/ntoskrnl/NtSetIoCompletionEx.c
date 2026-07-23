/*
 * XREFs of NtSetIoCompletionEx @ 0x140928F50
 * Callers:
 *     DifNtSetIoCompletionExWrapper @ 0x140690CF0 (DifNtSetIoCompletionExWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx @ 0x140266E50 (IoSetIoCompletionEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  NTSTATUS result; // eax
  PVOID v10; // rbx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v12; // eax
  _DWORD *v13; // rsi
  NTSTATUS v14; // edi
  PVOID Object[5]; // [rsp+40h] [rbp-28h] BYREF

  Object[0] = 0LL;
  result = ObReferenceObjectByHandle(
             IoCompletionHandle,
             2u,
             IoCompletionObjectType,
             KeGetCurrentThread()->PreviousMode,
             Object,
             0LL);
  v10 = Object[0];
  if ( result < 0 )
    return result;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  v12 = ObReferenceObjectByHandle(
          IoCompletionPacketHandle,
          2u,
          (POBJECT_TYPE)stru_140FC11F0.SchedulerApc.Reserved[0],
          PreviousMode,
          Object,
          0LL);
  v13 = Object[0];
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)Object[0], 1, 0) )
    {
      v14 = -1073741584;
    }
    else
    {
      v14 = IoSetIoCompletionEx(
              (__int64)v10,
              (__int64)KeyContext,
              (__int64)ApcContext,
              IoStatus,
              IoStatusInformation,
              0,
              (__int64)(v13 + 2));
      if ( v14 >= 0 )
        goto LABEL_5;
      *v13 = 0;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
  }
LABEL_5:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v14;
}
