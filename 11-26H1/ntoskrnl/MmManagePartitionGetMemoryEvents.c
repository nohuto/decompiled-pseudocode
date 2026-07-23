/*
 * XREFs of MmManagePartitionGetMemoryEvents @ 0x140B520B4
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 */

__int64 __fastcall MmManagePartitionGetMemoryEvents(PVOID **a1, __int64 a2, KPROCESSOR_MODE a3)
{
  PVOID *v3; // rbp
  unsigned int v5; // r8d
  ULONG v7; // edx
  NTSTATUS v8; // esi
  HANDLE *v9; // r12
  HANDLE *v10; // r15
  HANDLE *v11; // r14

  v3 = *a1;
  v5 = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 )
    return 3221225485LL;
  if ( v5 >= 2 )
    return 3221225485LL;
  v7 = *(_DWORD *)(a2 + 4);
  if ( (v7 & (a3 != 0 ? 7666 : 73714)) != v7 )
    return 3221225485LL;
  v8 = 0;
  v9 = (HANDLE *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = (HANDLE *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v11 = (HANDLE *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v8 = ObOpenObjectByPointer(
           v3[46],
           v7,
           0LL,
           *(_DWORD *)(a2 + 8),
           (POBJECT_TYPE)ExEventObjectType,
           a3,
           (PHANDLE)(a2 + 16));
    if ( v8 < 0
      || (v8 = ObOpenObjectByPointer(
                 v3[47],
                 *(_DWORD *)(a2 + 4),
                 0LL,
                 *(_DWORD *)(a2 + 8),
                 (POBJECT_TYPE)ExEventObjectType,
                 a3,
                 (PHANDLE)(a2 + 24)),
          v8 < 0)
      || (v8 = ObOpenObjectByPointer(
                 v3[48],
                 *(_DWORD *)(a2 + 4),
                 0LL,
                 *(_DWORD *)(a2 + 8),
                 (POBJECT_TYPE)ExEventObjectType,
                 a3,
                 (PHANDLE)(a2 + 32)),
          v8 < 0) )
    {
      if ( *v9 )
        ObCloseHandle(*v9, a3);
      if ( *v10 )
        ObCloseHandle(*v10, a3);
      if ( *v11 )
        ObCloseHandle(*v11, a3);
    }
  }
  return (unsigned int)v8;
}
