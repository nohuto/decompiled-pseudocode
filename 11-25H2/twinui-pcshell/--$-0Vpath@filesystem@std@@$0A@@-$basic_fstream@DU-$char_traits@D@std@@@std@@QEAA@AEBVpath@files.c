/*
 * XREFs of ??$?0Vpath@filesystem@std@@$0A@@?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@AEBVpath@filesystem@1@HH@Z @ 0x1805EB800
 * Callers:
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x180299048 (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x1805ED1E8 (--0-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@PEBGHH@Z.c)
 */

__int64 __fastcall std::fstream::fstream(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  std::fstream::fstream(a1, a2);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::fstream::`vftable';
  result = a1;
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 184;
  return result;
}
