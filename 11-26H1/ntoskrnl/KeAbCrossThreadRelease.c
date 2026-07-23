/*
 * XREFs of KeAbCrossThreadRelease @ 0x1405F9D68
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14041E108 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14041E23C (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     ?KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x1404F0FBC (-KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 *     ?KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x140600118 (-KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 */

void __fastcall KeAbCrossThreadRelease(struct _KTHREAD *a1, char *a2, volatile signed __int32 *a3, struct _KTHREAD *a4)
{
  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpCrossThreadRelease((unsigned __int64)a1, a2, a3, a4);
  else
    LegacyAutoBoost::KiAbCrossThreadRelease(a1, (LegacyAutoBoost *)a2, (LegacyAutoBoost *)a3, a4);
}
