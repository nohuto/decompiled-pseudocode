/*
 * XREFs of NtResetEvent @ 0x1409B8AC0
 * Callers:
 *     DifNtResetEventWrapper @ 0x140689BF0 (DifNtResetEventWrapper.c)
 *     PfSnPrefetchFileMetadata @ 0x1409B8960 (PfSnPrefetchFileMetadata.c)
 *     PfSnGetSectionObject @ 0x1409B9738 (PfSnGetSectionObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     ExpResetCrossVmEvent @ 0x140778038 (ExpResetCrossVmEvent.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtResetEvent(HANDLE Handle, unsigned int *a2)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  int v6; // edi
  struct _KEVENT *v7; // rsi
  int ULongFromUser; // eax
  LONG v10; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = (struct _KEVENT *)Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(
               Handle,
               2u,
               *(POBJECT_TYPE *)&WheapConfigTableLock.WaitBlockFill11[64],
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
  if ( v6 >= 0 && a2 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a2, v10);
    else
      *a2 = v10;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  return (unsigned int)v6;
}
