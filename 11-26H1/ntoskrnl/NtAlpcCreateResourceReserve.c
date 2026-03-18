/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x140AC3900
 * Callers:
 *     DifNtAlpcCreateResourceReserveWrapper @ 0x14066C690 (DifNtAlpcCreateResourceReserveWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 */

__int64 __fastcall NtAlpcCreateResourceReserve(HANDLE Handle, int a2, size_t a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  int Reserve; // ebx
  size_t v10; // rdx
  PVOID v11; // rdi
  int v13; // eax
  int ULongFromUser; // eax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF

  v16[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    Reserve = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      ULongFromUser = RtlReadULongFromUser(a4);
      RtlWriteULongToUser(a4, ULongFromUser);
    }
    Object = 0LL;
    Reserve = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( Reserve >= 0 )
    {
      v10 = a3;
      v11 = Object;
      Reserve = AlpcpCreateReserve((__int64)Object, v10, v16);
      if ( Reserve >= 0 )
      {
        v13 = LODWORD(v16[0]) | 0x80000000;
        if ( PreviousMode )
          RtlWriteULongToUser(a4, v13);
        else
          *a4 = v13;
      }
      ObfDereferenceObject(v11);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Reserve;
}
