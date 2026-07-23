/*
 * XREFs of MiDecommitRemoveEnclaveReleaseLocks @ 0x140530B74
 * Callers:
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x1403431A8 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiDecommitGetMetadataSlot @ 0x140704B70 (MiDecommitGetMetadataSlot.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiDecommitRemoveEnclaveReleaseLocks(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  int v3; // ebp
  unsigned __int64 *v5; // rsi
  __int64 v6; // rcx

  v2 = (unsigned __int64 *)(a1 + 40);
  v3 = a2;
  v5 = (unsigned __int64 *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 40) )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      MiFlushTbList(v6);
      MiReleaseProcessorFlushList();
      *(_QWORD *)(a1 + 48) = 0LL;
      v5 = (unsigned __int64 *)(a1 + 40);
    }
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 56), *v2);
  }
  if ( v3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 64);
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 56), a2);
    v2 = v5;
  }
  *v2 = 0LL;
}
