/*
 * XREFs of NtSetIoCompletion @ 0x140A5D840
 * Callers:
 *     DifNtSetIoCompletionWrapper @ 0x14068D2C0 (DifNtSetIoCompletionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx2 @ 0x140267520 (IoSetIoCompletionEx2.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtSetIoCompletion(void *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  NTSTATUS result; // eax
  int v9; // ebx
  int v10; // [rsp+38h] [rbp-20h]
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = IoSetIoCompletionEx2((__int64)Object, a2, a3, a4, a5, 1u, 0LL, v10);
    ObfDereferenceObject(Object);
    return v9;
  }
  return result;
}
