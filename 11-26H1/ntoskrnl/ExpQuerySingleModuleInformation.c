/*
 * XREFs of ExpQuerySingleModuleInformation @ 0x14077DB50
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     MmLockLoadedDataTableEntryShared @ 0x1404D2978 (MmLockLoadedDataTableEntryShared.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x140701EA0 (MmUnlockLoadedDataTableEntryShared.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x14097E258 (ExpConvertLdrEntryToModuleInfo.c)
 */

__int64 __fastcall ExpQuerySingleModuleInformation(__int64 a1, unsigned int a2, char a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rbx

  *a4 = 0;
  if ( a3 )
    return 3221225506LL;
  if ( a2 < 0x148 )
    return 3221225476LL;
  v7 = MmLockLoadedDataTableEntryShared(*(_QWORD *)a1);
  if ( !v7 )
    return 3221226021LL;
  *(_WORD *)(a1 + 8) = 0;
  ExpConvertLdrEntryToModuleInfo(0, v7, 0, 0, a1 + 8);
  MmUnlockLoadedDataTableEntryShared(v7);
  result = 0LL;
  *a4 = 328;
  return result;
}
