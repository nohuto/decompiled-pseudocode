/*
 * XREFs of SepLpacCausedAccessFailure @ 0x1404A8EB0
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepLpacCausedAccessFailure(__int64 a1, int a2)
{
  int v2; // r8d

  if ( !*(_BYTE *)(a1 + 24) )
    return 0;
  v2 = a2 & ~(*(_DWORD *)(a1 + 4) | *(_DWORD *)(a1 + 8) | 0x2000000);
  return (v2 & *(_DWORD *)(a1 + 16)) == v2;
}
