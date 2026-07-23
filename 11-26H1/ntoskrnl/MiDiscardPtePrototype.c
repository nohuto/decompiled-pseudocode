/*
 * XREFs of MiDiscardPtePrototype @ 0x140526F14
 * Callers:
 *     MiWsleFree @ 0x14031B9C0 (MiWsleFree.c)
 *     MiDiscardPte @ 0x1406F3B70 (MiDiscardPte.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiCopyOnWriteCombineCloneDereference @ 0x14036CA50 (MiCopyOnWriteCombineCloneDereference.c)
 */

unsigned __int64 __fastcall MiDiscardPtePrototype(__int64 *a1)
{
  __int64 PteShadow; // r8
  unsigned __int64 v3; // r8
  ULONG_PTR PrototypePteDirect; // rax
  char v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r10
  unsigned __int64 result; // rax

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a1, *a1);
  MiIsPrototypePteVadLookup(PteShadow);
  PrototypePteDirect = MiGetPrototypePteDirect(v3);
  v6 = *(_QWORD *)(PrototypePteDirect + 16);
  MiCopyOnWriteCombineCloneDereference(
    PrototypePteDirect,
    v5 + 1,
    *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v7 + 174)),
    v7);
  result = MiMakeDemandZeroPte(MmMakeProtectNotWriteCopy[v6 & 0x1F]);
  *a1 = result;
  return result;
}
