/*
 * XREFs of CmpVolumeContextCanHiveSectionBeExtended @ 0x140AC0BC4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 * Callees:
 *     CmpVolumeContextLockShared @ 0x140AC0C50 (CmpVolumeContextLockShared.c)
 *     CmpVolumeContextUnlockShared @ 0x140AC0CBC (CmpVolumeContextUnlockShared.c)
 */

bool __fastcall CmpVolumeContextCanHiveSectionBeExtended(__int64 a1)
{
  int v2; // edx
  bool v3; // bl

  CmpVolumeContextLockShared();
  v2 = *(_DWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 )
    v3 = (unsigned int)(v2 - 1) <= 1;
  CmpVolumeContextUnlockShared(a1);
  return v3;
}
