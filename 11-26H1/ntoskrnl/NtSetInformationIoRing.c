/*
 * XREFs of NtSetInformationIoRing @ 0x1407993C0
 * Callers:
 *     DifNtSetInformationIoRingWrapper @ 0x14068BC70 (DifNtSetInformationIoRingWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopExceptionFilter @ 0x1405CA834 (IopExceptionFilter.c)
 *     IopIoRingUpdateCompletionUserEvent @ 0x1405CBF60 (IopIoRingUpdateCompletionUserEvent.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetInformationIoRing(HANDLE Handle, unsigned int a2, unsigned int a3, volatile void *a4)
{
  KPROCESSOR_MODE PreviousMode; // r14
  PVOID v8; // rdi
  unsigned int v9; // ecx
  NTSTATUS v10; // ebx
  NTSTATUS updated; // eax
  __int64 ULong64FromUser; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0LL;
  Object = 0LL;
  if ( a2 > 1 )
    goto LABEL_15;
  v9 = *((_DWORD *)&IopIoRingSetOperationLength + (int)a2);
  if ( !v9 )
    goto LABEL_15;
  if ( a3 < v9 )
  {
    v10 = -1073741820;
    goto LABEL_16;
  }
  if ( PreviousMode )
    ProbeForRead(a4, a3, 1u);
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v8 = Object;
  if ( v10 >= 0 )
  {
    if ( a2 == 1 )
    {
      ULong64FromUser = 0LL;
      if ( PreviousMode )
        ULong64FromUser = RtlReadULong64FromUser(a4);
      else
        RtlCopyVolatileMemory(&ULong64FromUser, (const void *)a4, 8uLL);
      updated = IopIoRingUpdateCompletionUserEvent((__int64)v8, (void **)&ULong64FromUser, PreviousMode);
      v10 = updated;
      if ( updated == -1073741816 || updated == -1073741788 )
        v10 = -1073741582;
      goto LABEL_16;
    }
LABEL_15:
    v10 = -1073741821;
  }
LABEL_16:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v10;
}
