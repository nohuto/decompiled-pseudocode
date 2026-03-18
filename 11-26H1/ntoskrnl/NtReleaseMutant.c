/*
 * XREFs of NtReleaseMutant @ 0x140A65040
 * Callers:
 *     DifNtReleaseMutantWrapper @ 0x1406886A0 (DifNtReleaseMutantWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     ExpReleaseCrossVmMutant @ 0x1407780B8 (ExpReleaseCrossVmMutant.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtReleaseMutant(HANDLE Handle, unsigned int *a2)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  int v6; // ebx
  struct _KTHREAD *v7; // rdi
  int v8; // eax
  int ULongFromUser; // eax
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+18h] BYREF
  PVOID v13; // [rsp+88h] [rbp+20h]

  v12 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = (struct _KTHREAD *)Object;
  v13 = Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(
               Handle,
               0,
               (POBJECT_TYPE)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink,
               PreviousMode,
               &Object,
               0LL);
        v7 = (struct _KTHREAD *)Object;
        v13 = Object;
        LODWORD(Object) = v6;
        if ( v6 >= 0 )
        {
          v6 = ExpReleaseCrossVmMutant((__int64)v7, (__int64)&v12);
          LODWORD(Object) = v6;
        }
      }
    }
  }
  else
  {
    v8 = KeReleaseMutantEx(v7, 1LL, 0LL, (LONG *)&v12);
    v6 = v8;
    LODWORD(Object) = v8;
    if ( v8 == 128 || v8 == -1073741754 )
    {
LABEL_8:
      ObfDereferenceObject(v7);
      return (unsigned int)v6;
    }
  }
  if ( v6 >= 0 && a2 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a2, v12);
    else
      *a2 = v12;
  }
  if ( v7 )
    goto LABEL_8;
  return (unsigned int)v6;
}
