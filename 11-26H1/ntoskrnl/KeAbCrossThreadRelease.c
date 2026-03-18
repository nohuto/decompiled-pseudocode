/*
 * XREFs of KeAbCrossThreadRelease @ 0x1405F73A8
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x1404310D8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14043120C (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     ?KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x1404F79AC (-KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 *     ?KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x1405FD6C8 (-KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 */

void __fastcall KeAbCrossThreadRelease(struct _KTHREAD *a1, char *a2, volatile signed __int32 *a3, struct _KTHREAD *a4)
{
  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpCrossThreadRelease((unsigned __int64)a1, a2, a3, a4);
  else
    LegacyAutoBoost::KiAbCrossThreadRelease(a1, (LegacyAutoBoost *)a2, (LegacyAutoBoost *)a3, a4);
}
