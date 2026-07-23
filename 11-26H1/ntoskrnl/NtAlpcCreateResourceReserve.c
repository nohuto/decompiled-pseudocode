/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x140AC5570
 * Callers:
 *     DifNtAlpcCreateResourceReserveWrapper @ 0x140670270 (DifNtAlpcCreateResourceReserveWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 */

NTSTATUS __cdecl NtAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS Reserve; // ebx
  size_t v10; // rdx
  PVOID v11; // rdi
  int v13; // eax
  int ULongFromUser; // eax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF

  v16[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    Reserve = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      ULongFromUser = RtlReadULongFromUser((unsigned int *)ResourceId);
      RtlWriteULongToUser(ResourceId, ULongFromUser);
    }
    Object = 0LL;
    Reserve = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( Reserve >= 0 )
    {
      v10 = MessageSize;
      v11 = Object;
      Reserve = AlpcpCreateReserve((__int64)Object, v10, v16);
      if ( Reserve >= 0 )
      {
        v13 = LODWORD(v16[0]) | 0x80000000;
        if ( PreviousMode )
          RtlWriteULongToUser(ResourceId, v13);
        else
          *(_DWORD *)ResourceId = v13;
      }
      ObfDereferenceObject(v11);
    }
  }
  KeLeaveCriticalRegion();
  return Reserve;
}
