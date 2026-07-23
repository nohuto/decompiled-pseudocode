/*
 * XREFs of MiIterateOverPartitions @ 0x1404A2784
 * Callers:
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x1404B69E0 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiMirrorDiscardPageContents @ 0x140527C58 (MiMirrorDiscardPageContents.c)
 *     MiFinishResume @ 0x1406F4600 (MiFinishResume.c)
 *     MiLockAllMemoryLists @ 0x1407085D4 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x140708EC8 (MiUnlockAllMemoryLists.c)
 *     MmEnumerateBadPages @ 0x140B6099C (MmEnumerateBadPages.c)
 *     MiMirrorBlackPhase @ 0x140C07048 (MiMirrorBlackPhase.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiIterateOverPartitions(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // r8d
  int v5; // r10d
  unsigned int v6; // r9d
  __int64 v7; // r11
  unsigned int v8; // edi
  unsigned int v9; // ecx
  _QWORD *v10; // rdx
  __int64 i; // r8
  unsigned __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d

  v2 = 0;
  while ( 2 )
  {
    v4 = *(_DWORD *)stru_140E2ED08.QuantumTarget - 1;
    v5 = (*(_DWORD *)(stru_140E2ED08.QuantumTarget + 8) & 4) != 0LL ? 0x20 : 0;
    v6 = v2 < *(_DWORD *)stru_140E2ED08.QuantumTarget ? v2 : 0;
    v7 = *(_QWORD *)(stru_140E2ED08.QuantumTarget + 8)
       - ((*(_QWORD *)(stru_140E2ED08.QuantumTarget + 8) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v8 = v5 + v4;
      v9 = v5 + v6;
      if ( v4 - v6 != -1 )
      {
        v10 = (_QWORD *)(v7 + 8 * ((unsigned __int64)v9 >> 6));
        for ( i = ~*v10 | ((1LL << v9) - 1); i == -1; i = ~*v10 )
        {
          if ( (unsigned __int64)++v10 > v7 + 8 * ((unsigned __int64)v8 >> 6) )
            goto LABEL_16;
        }
        _BitScanForward64(&v12, ~i);
        result = ((unsigned int)(((__int64)v10 - v7) >> 3) << 6) + (unsigned int)v12;
        if ( (unsigned int)result <= v8 )
          break;
      }
LABEL_16:
      result = 0xFFFFFFFFLL;
LABEL_17:
      if ( !v6 )
        goto LABEL_11;
      v15 = v2 + 1;
      if ( v2 + 1 > *(_DWORD *)stru_140E2ED08.QuantumTarget )
        v15 = *(_DWORD *)stru_140E2ED08.QuantumTarget;
      v4 = v15 - 1;
      v6 = 0;
    }
    if ( (_DWORD)result == -1 )
      goto LABEL_17;
    result = (unsigned int)(result - v5);
LABEL_11:
    if ( (unsigned int)result >= v2 && (_DWORD)result != -1 )
    {
      v2 = result + 1;
      v14 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (unsigned int)result);
      if ( (*(_DWORD *)(v14 + 4) & 2) != 0 )
        guard_dispatch_icall_no_overrides(v14, a2);
      continue;
    }
    return result;
  }
}
