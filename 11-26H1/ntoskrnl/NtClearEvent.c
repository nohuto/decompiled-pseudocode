/*
 * XREFs of NtClearEvent @ 0x140928E70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     ExpResetCrossVmEvent @ 0x14077AED8 (ExpResetCrossVmEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtClearEvent(HANDLE EventHandle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  NTSTATUS v5; // edi
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741788 )
    {
      if ( WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(
               EventHandle,
               2u,
               (POBJECT_TYPE)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink,
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
