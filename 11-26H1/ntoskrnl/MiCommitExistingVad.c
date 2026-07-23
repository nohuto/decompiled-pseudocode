/*
 * XREFs of MiCommitExistingVad @ 0x1409982E0
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiReturnFullProcessCharges @ 0x1404C3598 (MiReturnFullProcessCharges.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCommitVadPreparePacket @ 0x140998470 (MiCommitVadPreparePacket.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 */

__int64 __fastcall MiCommitExistingVad(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        __int64 a8,
        __int64 a9,
        _WORD *a10)
{
  __int64 result; // rax
  __int64 v15; // rdi
  char v16; // al
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rbx
  __int64 ProcessPartition; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+30h] [rbp-128h] BYREF
  __int64 v23; // [rsp+38h] [rbp-120h]
  __int64 v24; // [rsp+60h] [rbp-F8h]
  __int64 v25; // [rsp+68h] [rbp-F0h]
  _WORD *v26; // [rsp+70h] [rbp-E8h]
  int v27; // [rsp+F4h] [rbp-64h]
  __int64 v28; // [rsp+F8h] [rbp-60h]
  __int64 v29; // [rsp+100h] [rbp-58h]

  memset_0(v22, 0, 0xD8uLL);
  v23 = a1;
  v25 = a9;
  v24 = a8;
  result = MiCommitVadPreparePacket((unsigned int)v22, a2, a3, a5, a4);
  if ( (int)result >= 0 )
  {
    result = MiCommitVadGetCharges(v22, a6, a7);
    if ( (int)result >= 0 )
    {
      v15 = MiCommitVadFillPageTables((__int64)v22);
      v16 = v27;
      if ( (v27 & 2) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
        v16 = v27;
      }
      if ( (v16 & 1) != 0 )
      {
        if ( v15 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          ProcessPartition = MiGetProcessPartition((__int64)Process);
          MiReturnCommit(ProcessPartition, v15, 0);
          MiReturnFullProcessCharges((__int64)Process, v15);
        }
        v20 = v28 - v15;
      }
      else
      {
        v20 = v29;
      }
      v21 = v20 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32) | *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 52) += v20;
      *(_BYTE *)(a1 + 34) = BYTE4(v21);
      result = 0LL;
      *a10 = *v26;
    }
  }
  return result;
}
