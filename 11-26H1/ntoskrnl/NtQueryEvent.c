/*
 * XREFs of NtQueryEvent @ 0x140A6C830
 * Callers:
 *     DifNtQueryEventWrapper @ 0x140685E30 (DifNtQueryEventWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExpQueryCrossVmEvent @ 0x140B68108 (ExpQueryCrossVmEvent.c)
 */

NTSTATUS __cdecl NtQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  char UCharFromUser; // al
  PULONG v11; // rdi
  int ULongFromUser; // eax
  NTSTATUS v13; // eax
  int v14; // r15d
  _DWORD *v15; // r14
  int v17; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object[2]; // [rsp+38h] [rbp-50h] BYREF
  int Src; // [rsp+48h] [rbp-40h] BYREF
  PVOID v20; // [rsp+50h] [rbp-38h]

  Src = 0;
  v17 = 0;
  if ( EventInformationClass )
    return -1073741821;
  if ( EventInformationLength != 8 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (unsigned __int64)EventInformation;
    if ( ((unsigned __int8)EventInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (char *)EventInformation + 8 <= EventInformation || (unsigned __int64)EventInformation + 8 > 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v9 = (((unsigned __int64)EventInformation + 7) & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      UCharFromUser = RtlReadUCharFromUser((volatile void *)v8);
      RtlWriteUCharToUser((_BYTE *)v8, UCharFromUser);
      v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v8 != v9 );
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  Object[0] = 0LL;
  v13 = ObReferenceObjectByHandle(EventHandle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, Object, 0LL);
  v14 = v13;
  v15 = Object[0];
  v20 = Object[0];
  LODWORD(Object[0]) = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1073741788 )
    {
      if ( WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink )
      {
        Object[0] = 0LL;
        v14 = ObReferenceObjectByHandle(
                EventHandle,
                1u,
                (POBJECT_TYPE)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink,
                PreviousMode,
                Object,
                0LL);
        v15 = Object[0];
        v20 = Object[0];
        LODWORD(Object[0]) = v14;
        if ( v14 >= 0 )
        {
          v14 = ExpQueryCrossVmEvent(v15, &Src, &v17);
          LODWORD(Object[0]) = v14;
        }
      }
    }
  }
  else
  {
    v17 = v15[1];
    Src = *(_BYTE *)v15 & 0x7F;
  }
  if ( v14 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(EventInformation, Src);
    else
      RtlCopyVolatileMemory(EventInformation, &Src, 4uLL);
    if ( PreviousMode )
      RtlWriteULongToUser((_DWORD *)EventInformation + 1, v17);
    else
      *((_DWORD *)EventInformation + 1) = v17;
    if ( v11 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(v11, 8);
      else
        *v11 = 8;
    }
  }
  if ( v15 )
    ObfDereferenceObject(v15);
  return v14;
}
