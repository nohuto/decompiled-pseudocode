/*
 * XREFs of SmProcessListRequest @ 0x14081FBB8
 * Callers:
 *     SmQueryStoreInformation @ 0x140B28564 (SmQueryStoreInformation.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140204C10 (SmKmStoreRefFromStoreIndex.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     SmProcessListRequestExtended @ 0x14081FE00 (SmProcessListRequestExtended.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessListRequest(void *a1, unsigned int a2, unsigned int *a3, char a4)
{
  unsigned int v8; // esi
  struct _PRIVILEGE_SET *v9; // rax
  struct _PRIVILEGE_SET *v10; // rdi
  int v11; // ebx
  __int64 v12; // r8
  LUID Luid; // rcx
  __int64 ProcessPartition; // r10
  unsigned int i; // r9d
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // r11
  __int64 v20[2]; // [rsp+40h] [rbp-38h] BYREF

  v20[0] = 0LL;
  v8 = 4240;
  v9 = (struct _PRIVILEGE_SET *)SmAllocEx(4240LL, 0x524C6D73u, -1);
  v10 = v9;
  v20[1] = (__int64)v9;
  if ( !v9 )
  {
    v11 = -1073740716;
    goto LABEL_33;
  }
  memset_0(v9, 0, 0x1090uLL);
  if ( a2 < 0x90 )
    goto LABEL_4;
  if ( a4 )
  {
    ProbeForWrite(a1, 0x90uLL, 8u);
    RtlCopyFromUser(v10, a1, 0x90uLL);
  }
  else
  {
    RtlCopyVolatileMemory(v10, a1, 0x90uLL);
  }
  if ( (v10->PrivilegeCount & 0x10000) != 0 )
  {
    if ( a4 )
      ProbeForWrite(a1, 0x1090uLL, 8u);
  }
  else
  {
    v8 = 144;
  }
  if ( a2 != v8 )
  {
LABEL_4:
    v11 = -1073741306;
    goto LABEL_33;
  }
  if ( __PAIR16__(BYTE1(v10->PrivilegeCount), v10->PrivilegeCount) == 3 && v10->PrivilegeCount < 0x20000 )
  {
    Luid = v10->Privilege[0].Luid;
    if ( Luid )
    {
      LOBYTE(v12) = a4;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PsReferencePartitionByHandle)(
              Luid,
              1LL,
              v12,
              1280404819LL,
              v20);
      if ( v11 < 0 )
        goto LABEL_33;
      ProcessPartition = *(_QWORD *)(v20[0] + 24);
      if ( !ProcessPartition )
      {
        v11 = -1073741399;
        goto LABEL_33;
      }
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    for ( i = 0; i < 0x20; i = v17 + 1 )
    {
      v16 = SmKmStoreRefFromStoreIndex(ProcessPartition, i);
      if ( v16 && *(_QWORD *)v16 )
      {
        *(&v10->Privilege[0].Attributes + v18) = v17 | ((*(_WORD *)(v16 + 32) & 0x3F) << 10);
        LOBYTE(v18) = v18 + 1;
      }
    }
    BYTE1(v10->PrivilegeCount) = v18;
    v11 = 0;
    if ( (v10->PrivilegeCount & 0x10000) == 0 || (v11 = SmProcessListRequestExtended(ProcessPartition, v10), v11 >= 0) )
    {
      if ( a4 )
        RtlCopyToUser(a1, v10, v8);
      else
        RtlCopyVolatileMemory(a1, v10, v8);
      *a3 = v8;
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_33:
  if ( v10 )
    CmSiFreeMemory(v10);
  if ( v20[0] )
    PsDereferencePartition(v20[0]);
  return (unsigned int)v11;
}
