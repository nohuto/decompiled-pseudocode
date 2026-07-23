/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x14042A148
 * Callers:
 *     MiRemoveLoaderEntry @ 0x140429F78 (MiRemoveLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmUnlockLoadedModuleListExclusive @ 0x14042A1AC (MmUnlockLoadedModuleListExclusive.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x14042B488 (RtlpRemoveInvertedFunctionTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14052F5A4 (MmLockLoadedModuleListExclusive.c)
 */

__int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // r9
  _QWORD *v7; // rdx

  v5 = MmLockLoadedModuleListExclusive(a1, a2, a3);
  v6 = (unsigned int)(PsInvertedFunctionTable[0] - 1);
  if ( PsInvertedFunctionTable[0] != 1 )
  {
    v7 = (_QWORD *)&xmmword_141200030 + 3 * v6 + 1;
    while ( a1 != *v7 )
    {
      v7 -= 3;
      LODWORD(v6) = v6 - 1;
      if ( !(_DWORD)v6 )
        goto LABEL_5;
    }
    RtlpRemoveInvertedFunctionTableEntry(v4, (unsigned int)v6);
  }
LABEL_5:
  LOBYTE(v4) = v5;
  return MmUnlockLoadedModuleListExclusive(v4);
}
