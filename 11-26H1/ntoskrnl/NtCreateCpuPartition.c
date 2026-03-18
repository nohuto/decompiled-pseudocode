/*
 * XREFs of NtCreateCpuPartition @ 0x1407F18E0
 * Callers:
 *     DifNtCreateCpuPartitionWrapper @ 0x14066FC00 (DifNtCreateCpuPartitionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwMakePermanentObject @ 0x1407256F0 (ZwMakePermanentObject.c)
 *     ZwMakeTemporaryObject @ 0x140725710 (ZwMakeTemporaryObject.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     PsCreateCpuPartition @ 0x1407F2660 (PsCreateCpuPartition.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x1407F2BBC (PspQueryAndCheckCpuPartitionName.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F2CB4 (PspReferenceCpuPartitionByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

__int64 __fastcall NtCreateCpuPartition(HANDLE *a1, unsigned int a2, __int64 a3, __int128 *a4, int a5)
{
  char v7; // r12
  ULONG_PTR v8; // rcx
  unsigned __int8 PreviousMode; // r15
  __int64 ULong64FromUser; // rax
  int PermanentObject; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  PVOID v16; // r14
  __int64 v17; // rdx
  HANDLE v19; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR v20; // [rsp+50h] [rbp-78h]
  __int64 v21; // [rsp+58h] [rbp-70h]
  HANDLE Handle; // [rsp+60h] [rbp-68h] BYREF
  __int64 v23; // [rsp+78h] [rbp-50h]
  PVOID v24; // [rsp+80h] [rbp-48h] BYREF
  PVOID Object; // [rsp+88h] [rbp-40h] BYREF
  __int128 v26; // [rsp+90h] [rbp-38h] BYREF

  v26 = 0LL;
  v21 = 0LL;
  v7 = 0;
  LOBYTE(v23) = 0;
  v24 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  Object = 0LL;
  v19 = 0LL;
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
      RtlCopyFromUser(&v26, a4, 0x10uLL);
    }
    else
    {
      v26 = *a4;
    }
    if ( (unsigned __int8)v26 == 1LL )
    {
      if ( v20 )
        goto LABEL_13;
      v8 = *((_QWORD *)&v26 + 1);
      v20 = *((_QWORD *)&v26 + 1);
    }
    else
    {
      if ( (unsigned __int8)v26 == 2LL )
      {
        v23 = *((_QWORD *)&v26 + 1);
      }
      else
      {
        if ( (unsigned __int8)v26 != 3LL || v7 )
        {
LABEL_13:
          PermanentObject = -1073741811;
          goto LABEL_37;
        }
        v21 = *((_QWORD *)&v26 + 1);
        v7 = 1;
      }
      v8 = v20;
    }
    ++a4;
    --a5;
  }
  v13 = v21;
  if ( !v7 )
    v13 = 1634100548LL;
  v21 = v13;
  if ( !v8 )
    v8 = -1LL;
  PermanentObject = PspReferenceCpuPartitionByHandle(v8, (__int64)&v24);
  if ( PermanentObject >= 0 )
  {
    LOBYTE(v14) = PreviousMode;
    PermanentObject = PsCreateCpuPartition(a3, a2, v14, v21, 0, v24, &Object, &v19, PreviousMode);
    if ( PermanentObject >= 0 )
    {
      if ( (_BYTE)v23 || (LOBYTE(v15) = 0, !v7) )
        LOBYTE(v15) = 1;
      v16 = Object;
      PermanentObject = PspQueryAndCheckCpuPartitionName(Object, v15);
      if ( PermanentObject >= 0 )
      {
        if ( !(_BYTE)v23
          || (PermanentObject = ObOpenObjectByPointer(v16, 0x200u, 0LL, 0xF0007u, PsCpuPartitionType, 0, &Handle),
              PermanentObject >= 0)
          && (PermanentObject = ZwMakePermanentObject((__int64)Handle, v17), PermanentObject >= 0) )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(a1, (__int64)v19);
          else
            *a1 = v19;
          v19 = 0LL;
        }
      }
    }
  }
LABEL_37:
  if ( v24 )
    ObfDereferenceObjectWithTag(v24, 0x50707350u);
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    ObCloseHandle(v19, PreviousMode);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)PermanentObject;
}
