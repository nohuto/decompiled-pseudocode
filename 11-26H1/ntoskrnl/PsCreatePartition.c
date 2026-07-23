/*
 * XREFs of PsCreatePartition @ 0x14080347C
 * Callers:
 *     NtCreatePartition @ 0x140802EC0 (NtCreatePartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B68D40 (MiInitializePartitionSpecialPurposeMemory.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140CDF5A8 (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall PsCreatePartition(__int64 a1, HANDLE *a2, int a3, int a4, KPROCESSOR_MODE PreviousMode, int a6)
{
  __int64 ULong64FromUser; // rax
  int Partition; // edi
  __int64 v12; // r8
  HANDLE *p_Handle; // rsi
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  void *v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h] BYREF

  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  if ( PreviousMode && (ULong64FromUser = RtlReadULong64FromUser(a2), RtlWriteULong64ToUser(a2, ULong64FromUser), a6) )
  {
    Partition = -1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( !a1
      || (LOBYTE(v12) = PreviousMode,
          Partition = PsReferencePartitionByHandle(a1, 2LL, v12, 1883468624LL, &v17),
          Partition >= 0) )
    {
      p_Handle = &Handle;
      if ( (a6 & 1) != 0 )
        p_Handle = 0LL;
      LOBYTE(v12) = PreviousMode;
      Partition = PspAllocatePartition(a4, a3, v12, v17, a6, (__int64)&v16, (__int64)p_Handle);
      if ( Partition >= 0 )
      {
        if ( p_Handle )
        {
          PsDereferencePartition((__int64)v16);
          if ( PreviousMode )
            RtlWriteULong64ToUser(a2, (__int64)Handle);
          else
            *a2 = Handle;
        }
        else
        {
          PspSystemPartition = v16;
        }
      }
    }
  }
  else
  {
    Partition = -1073741727;
  }
  if ( v17 )
    PsDereferencePartition(v17);
  return (unsigned int)Partition;
}
