/*
 * XREFs of MiDeleteVaTail @ 0x140363010
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiReducePteUseCount @ 0x1403631B0 (MiReducePteUseCount.c)
 *     MiDecayPfnFullyInitialized @ 0x140491EA8 (MiDecayPfnFullyInitialized.c)
 */

__int64 __fastcall MiDeleteVaTail(__int64 a1)
{
  __int64 *v1; // rax
  int v2; // esi
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _SLIST_ENTRY *v9; // rcx
  char v10; // di
  unsigned __int64 v12; // rdx

  v1 = *(__int64 **)(a1 + 184);
  v2 = *(_DWORD *)a1 & 4;
  v3 = *v1;
  if ( *(_DWORD *)(*v1 + 96) )
  {
    v4 = *(_QWORD *)(v3 + 80) - 8LL;
    if ( (v4 < 0xFFFFF6FB7DBED000uLL || v4 > 0xFFFFF6FB7DBEDFFFuLL) && (unsigned int)MiReducePteUseCount(a1) )
      *(_DWORD *)(v3 + 100) |= 2u;
    *(_DWORD *)(v3 + 96) = 0;
  }
  v5 = *(_QWORD *)(v3 + 16);
  if ( v5 )
  {
    MiFlushTbList(*(_QWORD *)(v3 + 16));
    MiDecommitFreePagesTail(v3);
    if ( *(_DWORD *)(v5 + 16488) )
    {
      if ( (*(_DWORD *)(v3 + 116) & 0x100) == 0 )
        MiRemoveWsleList(*(_QWORD *)(v3 + 32), v5);
      *(_DWORD *)(v5 + 16488) = 0;
    }
    *(_DWORD *)(v5 + 12376) = 0;
    MiReleaseProcessorFlushList(v7, v6, v8);
    v9 = *(_SLIST_ENTRY **)(v3 + 104);
    *(_QWORD *)(v3 + 16) = 0LL;
    if ( v9 )
    {
      MiDecayPfnFullyInitialized(v9);
      *(_QWORD *)(v3 + 104) = 0LL;
    }
  }
  v10 = *(_BYTE *)(v3 + 101);
  if ( v10 != 17 )
  {
    if ( v2 )
    {
      v12 = *(_QWORD *)(v3 + 56);
      if ( v12 )
      {
        MiUnlockPageTableInternal(*(_QWORD *)(v3 + 32), v12);
        *(_QWORD *)(v3 + 56) = 0LL;
      }
      LOBYTE(v12) = v10;
      MiUnlockWorkingSetShared(*(_QWORD *)(v3 + 32), v12);
    }
    else
    {
      MiUnlockWorkingSetExclusive(*(_QWORD *)(v3 + 32), *(_BYTE *)(v3 + 101));
    }
    *(_BYTE *)(v3 + 101) = 17;
  }
  return 0LL;
}
