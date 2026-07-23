/*
 * XREFs of MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80
 * Callers:
 *     MiLockVirtualMemoryRevert @ 0x1402E8DB8 (MiLockVirtualMemoryRevert.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiLockVirtualMemoryGoodCitizen(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  unsigned __int64 v4; // r14
  unsigned __int8 v6; // al
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 MmInternal; // rax
  __int64 v10; // r8

  v2 = *(_QWORD *)(a1 + 104);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 120);
  if ( (_DWORD)a2 )
    goto LABEL_11;
  v6 = *(_DWORD *)(v2 + 184) & 0xF;
  if ( v6 == 5 || v6 <= 4u )
  {
    v7 = &qword_140E37980;
    if ( (*(_DWORD *)(v2 + 184) & 0xF) != 1 )
      v7 = (__int64 *)(v2 + 192);
    v8 = *v7;
    MmInternal = (unsigned __int64)KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal = *(unsigned int *)(MmInternal + 324);
    if ( (*(_DWORD *)((MmInternal << 6) + v8) & 0x40000000) != 0 )
      goto LABEL_11;
  }
  if ( v4 && (unsigned int)MiPageTableLockIsContended(v2, v4) || KeShouldYieldProcessor() )
  {
LABEL_11:
    v10 = *(_QWORD *)(a1 + 152);
    v3 = 1;
    if ( v10 )
    {
      if ( *(_DWORD *)(v10 + 28) )
        MiFreeWsleList(v2, a2, v10, 0LL);
      MiReleaseProcessorFlushList();
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    if ( v4 )
    {
      MiUnlockPageTableInternal(v2, v4);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    LOBYTE(a2) = *(_BYTE *)(a1 + 112);
    MiUnlockWorkingSetShared(v2, a2);
  }
  return v3;
}
