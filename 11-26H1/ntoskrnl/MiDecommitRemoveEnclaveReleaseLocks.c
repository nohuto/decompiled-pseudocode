/*
 * XREFs of MiDecommitRemoveEnclaveReleaseLocks @ 0x14052E654
 * Callers:
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x140341128 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiDecommitGetMetadataSlot @ 0x1406FFEA0 (MiDecommitGetMetadataSlot.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
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
