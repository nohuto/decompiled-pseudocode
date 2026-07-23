/*
 * XREFs of NtReleaseMutant @ 0x140A72010
 * Callers:
 *     DifNtReleaseMutantWrapper @ 0x14068C280 (DifNtReleaseMutantWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     ExpReleaseCrossVmMutant @ 0x14077AF58 (ExpReleaseCrossVmMutant.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  struct _KTHREAD *v7; // rdi
  NTSTATUS v8; // eax
  int ULongFromUser; // eax
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  LONG v12; // [rsp+80h] [rbp+18h] BYREF
  PVOID v13; // [rsp+88h] [rbp+20h]

  v12 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)PreviousCount);
    RtlWriteULongToUser(PreviousCount, ULongFromUser);
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(MutantHandle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = (struct _KTHREAD *)Object;
  v13 = Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(
               MutantHandle,
               0,
               *(POBJECT_TYPE *)&WheapConfigTableLock.WaitBlockFill11[64],
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
    v8 = KeReleaseMutantEx(v7, 1LL, 0LL, &v12);
    v6 = v8;
    LODWORD(Object) = v8;
    if ( v8 == 128 || v8 == -1073741754 )
    {
LABEL_8:
      ObfDereferenceObject(v7);
      return v6;
    }
  }
  if ( v6 >= 0 && PreviousCount )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(PreviousCount, v12);
    else
      *PreviousCount = v12;
  }
  if ( v7 )
    goto LABEL_8;
  return v6;
}
