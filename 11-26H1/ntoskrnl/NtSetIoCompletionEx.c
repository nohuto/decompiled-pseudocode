/*
 * XREFs of NtSetIoCompletionEx @ 0x1408F8FC0
 * Callers:
 *     DifNtSetIoCompletionExWrapper @ 0x14068D110 (DifNtSetIoCompletionExWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx @ 0x1402678E0 (IoSetIoCompletionEx.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtSetIoCompletionEx(void *a1, void *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  NTSTATUS result; // eax
  PVOID v10; // rbx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v12; // eax
  _DWORD *v13; // rsi
  int v14; // edi
  PVOID Object[5]; // [rsp+40h] [rbp-28h] BYREF

  Object[0] = 0LL;
  result = ObReferenceObjectByHandle(a1, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, Object, 0LL);
  v10 = Object[0];
  if ( result < 0 )
    return result;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  v12 = ObReferenceObjectByHandle(
          a2,
          2u,
          (POBJECT_TYPE)stru_140FC01F0.SchedulerApc.Reserved[1],
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
      v14 = IoSetIoCompletionEx((__int64)v10, a3, a4, a5, a6, 0, (__int64)(v13 + 2));
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
