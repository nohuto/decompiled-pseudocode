/*
 * XREFs of NtCreateCpuPartition @ 0x1407F7440
 * Callers:
 *     DifNtCreateCpuPartitionWrapper @ 0x1406737E0 (DifNtCreateCpuPartitionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwMakePermanentObject @ 0x14072A2C0 (ZwMakePermanentObject.c)
 *     ZwMakeTemporaryObject @ 0x14072A2E0 (ZwMakeTemporaryObject.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     PsCreateCpuPartition @ 0x1407F81C0 (PsCreateCpuPartition.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x1407F871C (PspQueryAndCheckCpuPartitionName.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F8814 (PspReferenceCpuPartitionByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 */

__int64 __fastcall NtCreateCpuPartition(HANDLE *a1, unsigned int a2, __int64 a3, __int128 *a4, int a5)
{
  char v7; // r12
  ULONG_PTR v8; // rcx
  unsigned __int8 PreviousMode; // r15
  __int64 ULong64FromUser; // rax
  NTSTATUS PermanentObject; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  PVOID v16; // r14
  HANDLE v18; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR v19; // [rsp+50h] [rbp-78h]
  __int64 v20; // [rsp+58h] [rbp-70h]
  HANDLE Handle; // [rsp+60h] [rbp-68h] BYREF
  __int64 v22; // [rsp+78h] [rbp-50h]
  PVOID v23; // [rsp+80h] [rbp-48h] BYREF
  PVOID Object; // [rsp+88h] [rbp-40h] BYREF
  __int128 v25; // [rsp+90h] [rbp-38h] BYREF

  v25 = 0LL;
  v20 = 0LL;
  v7 = 0;
  LOBYTE(v22) = 0;
  v23 = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  Object = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
    v8 = 0LL;
  }
  while ( a5 )
  {
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(&v25, a4, 0x10uLL);
    }
    else
    {
      v25 = *a4;
    }
    if ( (unsigned __int8)v25 == 1LL )
    {
      if ( v19 )
        goto LABEL_13;
      v8 = *((_QWORD *)&v25 + 1);
      v19 = *((_QWORD *)&v25 + 1);
    }
    else
    {
      if ( (unsigned __int8)v25 == 2LL )
      {
        v22 = *((_QWORD *)&v25 + 1);
      }
      else
      {
        if ( (unsigned __int8)v25 != 3LL || v7 )
        {
LABEL_13:
          PermanentObject = -1073741811;
          goto LABEL_37;
        }
        v20 = *((_QWORD *)&v25 + 1);
        v7 = 1;
      }
      v8 = v19;
    }
    ++a4;
    --a5;
  }
  v13 = v20;
  if ( !v7 )
    v13 = 1634100548LL;
  v20 = v13;
  if ( !v8 )
    v8 = -1LL;
  PermanentObject = PspReferenceCpuPartitionByHandle(v8, (__int64)&v23);
  if ( PermanentObject >= 0 )
  {
    LOBYTE(v14) = PreviousMode;
    PermanentObject = PsCreateCpuPartition(a3, a2, v14, v20, 0, v23, &Object, &v18, PreviousMode);
    if ( PermanentObject >= 0 )
    {
      if ( (_BYTE)v22 || (LOBYTE(v15) = 0, !v7) )
        LOBYTE(v15) = 1;
      v16 = Object;
      PermanentObject = PspQueryAndCheckCpuPartitionName(Object, v15);
      if ( PermanentObject >= 0 )
      {
        if ( !(_BYTE)v22
          || (PermanentObject = ObOpenObjectByPointer(v16, 0x200u, 0LL, 0xF0007u, PsCpuPartitionType, 0, &Handle),
              PermanentObject >= 0)
          && (PermanentObject = ZwMakePermanentObject(Handle), PermanentObject >= 0) )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(a1, (__int64)v18);
          else
            *a1 = v18;
          v18 = 0LL;
        }
      }
    }
  }
LABEL_37:
  if ( v23 )
    ObfDereferenceObjectWithTag(v23, 0x50707350u);
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ObCloseHandle(v18, PreviousMode);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)PermanentObject;
}
