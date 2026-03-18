/*
 * XREFs of NtClearEvent @ 0x1408F8EE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     ExpResetCrossVmEvent @ 0x140778038 (ExpResetCrossVmEvent.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtClearEvent(HANDLE Handle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  unsigned int v5; // edi
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741788 )
    {
      if ( *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(
               Handle,
               2u,
               *(POBJECT_TYPE *)&WheapConfigTableLock.WaitBlockFill11[64],
               PreviousMode,
               &Object,
               0LL);
        v4 = Object;
        v5 = v7;
        if ( v7 >= 0 )
          v5 = ExpResetCrossVmEvent((__int64)Object, 0LL);
      }
    }
  }
  else
  {
    KeResetEvent((PRKEVENT)Object);
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return v5;
}
