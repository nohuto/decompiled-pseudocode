/*
 * XREFs of MiAllocateProtoPool @ 0x1403988A0
 * Callers:
 *     MiAllocateSubsectionProtos @ 0x1404503C4 (MiAllocateSubsectionProtos.c)
 *     MiAllocateCombineBlock @ 0x140488D08 (MiAllocateCombineBlock.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiCreatePagingFileControlArea @ 0x140989124 (MiCreatePagingFileControlArea.c)
 *     MiBuildImageControlArea @ 0x140A6279C (MiBuildImageControlArea.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 *     MiBuildNewCloneDescriptor @ 0x140B58184 (MiBuildNewCloneDescriptor.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiAllocateProtoPool(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // r9
  __int64 PoolMm; // rax
  ULONG_PTR v8; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v11; // rsi
  ULONG_PTR i; // rbp
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v4 = 24LL;
  v6 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v6) = v6 | 0x80000000;
  if ( a2 >= 0x18 )
    v4 = a2;
  PoolMm = ExAllocatePoolMm(a1, v4, a3, v6);
  v8 = PoolMm;
  if ( a1 == 64 && PoolMm )
  {
    BugCheckParameter4 = PoolMm;
    v11 = ((PoolMm & 0xFFF) + a2 + 4095) >> 12;
    for ( i = 0LL; i < v11; ++i )
    {
      v14 = 0LL;
      v13 = 0LL;
      if ( (int)MiGetVirtualAddressState((__int64)&v13, BugCheckParameter4, 0) < 0 )
        KeBugCheckEx(0x1Au, 0x530BuLL, v8, v11, BugCheckParameter4);
      BugCheckParameter4 += 4096LL;
    }
  }
  return v8;
}
