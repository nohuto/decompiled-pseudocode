/*
 * XREFs of MiDecommitRegion @ 0x140A0567C
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 * Callees:
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiFreeLargePages @ 0x1403D0F00 (MiFreeLargePages.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiFillCommitReturnInfo @ 0x14046E040 (MiFillCommitReturnInfo.c)
 *     MiReturnFullProcessCharges @ 0x1404C3598 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiDecommitRegion(__int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rdi
  unsigned __int64 v4; // r8
  __int64 PteAddress; // rax
  __int64 v6; // r10
  __int64 v7; // rsi
  int VadFlags; // ebx
  int v9; // r10d
  unsigned int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rsi
  unsigned int v13; // r12d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 ProcessPartition; // rax
  __int64 v20; // r10
  __int64 v21; // rax
  __int128 v22; // [rsp+40h] [rbp-19h] BYREF
  __int128 v23; // [rsp+50h] [rbp-9h] BYREF
  __int128 v24; // [rsp+60h] [rbp+7h]
  __int128 v25; // [rsp+70h] [rbp+17h]
  __int64 v26; // [rsp+80h] [rbp+27h]
  __int64 v27; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v23 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v4);
  v7 = ((PteAddress - v6) >> 3) + 1;
  VadFlags = MiReadVadFlags(a1);
  v10 = MiDecommitPages(v9, v7, 0, (__int64)Process, a1, 1, 0LL, (__int64)&v23);
  v11 = 0LL;
  v12 = v7 - *((_QWORD *)&v24 + 1);
  v13 = v10;
  v27 = 0LL;
  if ( v26 )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    v21 = MiFreeLargePages(ProcessPartition, v20, &v27, &v28, 0);
    v11 = v27;
    *((_QWORD *)&v23 + 1) = v21;
  }
  v14 = *(unsigned int *)(a1 + 52);
  v15 = (v14 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) - v12;
  *(_DWORD *)(a1 + 52) = v14 - v12;
  *(_BYTE *)(a1 + 34) = BYTE4(v15);
  if ( (VadFlags & 0x80000) != 0 && (VadFlags & 0x200000) != 0 )
    _InterlockedAdd64((volatile signed __int64 *)&Process[3].ProfileListHead, -v12);
  if ( v26 )
    v12 = v11 + *((_QWORD *)&v23 + 1);
  MiFillCommitReturnInfo(v12, (__int64)&v23, &v22);
  if ( (_QWORD)v22 )
    MiReturnFullProcessCharges((__int64)Process, v22);
  if ( *((_QWORD *)&v22 + 1) && *((_QWORD *)&v22 + 1) != v11 )
  {
    v16 = MiGetProcessPartition((__int64)Process);
    MiReturnCommit(v16, v17, 0);
  }
  return v13;
}
