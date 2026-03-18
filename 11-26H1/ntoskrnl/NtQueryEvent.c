/*
 * XREFs of NtQueryEvent @ 0x140A5F870
 * Callers:
 *     DifNtQueryEventWrapper @ 0x140682250 (DifNtQueryEventWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ExpQueryCrossVmEvent @ 0x140B65068 (ExpQueryCrossVmEvent.c)
 */

__int64 __fastcall NtQueryEvent(HANDLE Handle, int a2, unsigned __int64 a3, int a4, unsigned int *a5)
{
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  char UCharFromUser; // al
  unsigned int *v11; // rdi
  int ULongFromUser; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // r15d
  _DWORD *v15; // r14
  int v17; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object[2]; // [rsp+38h] [rbp-50h] BYREF
  int Src; // [rsp+48h] [rbp-40h] BYREF
  PVOID v20; // [rsp+50h] [rbp-38h]

  Src = 0;
  v17 = 0;
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 8 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = a3;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a3 + 8 <= a3 || a3 + 8 > 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v9 = ((a3 + 7) & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      UCharFromUser = RtlReadUCharFromUser((volatile void *)v8);
      RtlWriteUCharToUser((_BYTE *)v8, UCharFromUser);
      v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v8 != v9 );
    v11 = a5;
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(a5, ULongFromUser);
    }
  }
  else
  {
    v11 = a5;
  }
  Object[0] = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, Object, 0LL);
  v14 = v13;
  v15 = Object[0];
  v20 = Object[0];
  LODWORD(Object[0]) = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1073741788 )
    {
      if ( *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] )
      {
        Object[0] = 0LL;
        v14 = ObReferenceObjectByHandle(
                Handle,
                1u,
                *(POBJECT_TYPE *)&WheapConfigTableLock.WaitBlockFill11[64],
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
      RtlWriteULongToUser((_DWORD *)a3, Src);
    else
      RtlCopyVolatileMemory((void *)a3, &Src, 4uLL);
    if ( PreviousMode )
      RtlWriteULongToUser((_DWORD *)(a3 + 4), v17);
    else
      *(_DWORD *)(a3 + 4) = v17;
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
  return (unsigned int)v14;
}
