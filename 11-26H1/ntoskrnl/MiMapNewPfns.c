/*
 * XREFs of MiMapNewPfns @ 0x14086CA54
 * Callers:
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiGetClosestImplicitNode @ 0x1403A76AC (MiGetClosestImplicitNode.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 *     MiPhysicalMemoryEverRemoved @ 0x1406EEB94 (MiPhysicalMemoryEverRemoved.c)
 *     MiCreateIoPageExclusion @ 0x1406F8618 (MiCreateIoPageExclusion.c)
 *     MiRemoveIoPageExclusion @ 0x1406F9A64 (MiRemoveIoPageExclusion.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 */

__int64 __fastcall MiMapNewPfns(__int64 a1)
{
  __int64 v1; // r8
  __int64 PteAddress; // rbp
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  _BOOL8 v7; // r8
  int v8; // edx
  __int64 v9; // r14
  __int64 v10; // r9
  __int64 result; // rax
  int v12; // eax
  unsigned int ClosestImplicitNode; // eax
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  int v16; // edx
  unsigned int v17; // ebx
  unsigned int v18; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __int128 v21; // [rsp+38h] [rbp-40h]
  _BOOL8 v22; // [rsp+48h] [rbp-30h]
  unsigned __int64 v23; // [rsp+50h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 16);
  v20 = 0LL;
  v21 = 0LL;
  PteAddress = MiGetPteAddress(48 * v1 - 0x220000000000LL);
  v5 = MiGetPteAddress(48LL * *(_QWORD *)(a1 + 24) + v4 - 1);
  v6 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 40) >> 1;
  v9 = v5;
  v23 = v6 + v7 - 1;
  v22 = v7;
  result = MiCreateIoPageExclusion(&v20, v8 & 1, v7, v10);
  if ( (int)result >= 0 )
  {
    if ( v6 >= 0x40000 && qword_140E3D550 >= 0x200000 )
    {
      if ( PteAddress != (PteAddress & 0xFFFFFFFFFFFFF000uLL) )
        PteAddress &= 0xFFFFFFFFFFFFF000uLL;
      if ( v9 != (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
        v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    v12 = MiPageToNode(*(_QWORD *)(a1 + 16));
    ClosestImplicitNode = MiGetClosestImplicitNode(v12 + 1);
    v16 = *(_DWORD *)(a1 + 40);
    v17 = ClosestImplicitNode;
    v18 = ((v16 & 0x2000 | 0x1508u) >> 3) | 0x100;
    if ( (v16 & 0x4000) == 0 )
      v18 = (*(_DWORD *)(a1 + 40) & 0x2000 | 0x1508u) >> 3;
    if ( (v16 & 2) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread, v14, v15);
    }
    else
    {
      CurrentThread = 0LL;
    }
    if ( (unsigned int)MiMakeZeroedPageTablesEx(PteAddress, v9, v18, 3, v17) )
    {
      if ( !(unsigned int)MiPhysicalMemoryEverRemoved(*(_QWORD *)(a1 + 16), v6, 1) )
        *(_DWORD *)(a1 + 40) |= 0x20000u;
      MiCreateDynamicPfns(
        *(_QWORD *)(a1 + 16),
        v6,
        *(unsigned __int16 **)(a1 + 48),
        *(_DWORD *)(a1 + 40),
        *(_QWORD *)(a1 + 56));
      MiRemoveIoPageExclusion((__int64)&v20);
      if ( CurrentThread )
        MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      return 0LL;
    }
    else
    {
      if ( CurrentThread )
        MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      MiRemoveIoPageExclusion((__int64)&v20);
      return 3221225626LL;
    }
  }
  else
  {
    ++dword_140E3608C;
  }
  return result;
}
