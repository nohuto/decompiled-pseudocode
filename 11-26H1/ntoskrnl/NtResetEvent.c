/*
 * XREFs of NtResetEvent @ 0x140989AA0
 * Callers:
 *     DifNtResetEventWrapper @ 0x14068D7D0 (DifNtResetEventWrapper.c)
 *     PfSnPrefetchFileMetadata @ 0x140989940 (PfSnPrefetchFileMetadata.c)
 *     PfSnGetSectionObject @ 0x14098A718 (PfSnGetSectionObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     ExpResetCrossVmEvent @ 0x14077AED8 (ExpResetCrossVmEvent.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  NTSTATUS v6; // edi
  struct _KEVENT *v7; // rsi
  int ULongFromUser; // eax
  LONG v10; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousState && PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)PreviousState);
    RtlWriteULongToUser(PreviousState, ULongFromUser);
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = (struct _KEVENT *)Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(
               EventHandle,
               2u,
               (POBJECT_TYPE)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink,
               PreviousMode,
               &Object,
               0LL);
        v7 = (struct _KEVENT *)Object;
        LODWORD(Object) = v6;
        if ( v6 >= 0 )
        {
          v6 = ExpResetCrossVmEvent((__int64)v7, (__int64)&v10);
          LODWORD(Object) = v6;
        }
      }
    }
  }
  else
  {
    v10 = KeResetEvent(v7);
  }
  if ( v6 >= 0 && PreviousState )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(PreviousState, v10);
    else
      *PreviousState = v10;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  return v6;
}
