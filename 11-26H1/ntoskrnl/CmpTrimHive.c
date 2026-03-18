/*
 * XREFs of CmpTrimHive @ 0x1408B781C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpAcceptBoot @ 0x14084E81C (CmpAcceptBoot.c)
 * Callees:
 *     HvTrimHive @ 0x1408B8958 (HvTrimHive.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpTrimHive(_DWORD *a1)
{
  unsigned int v2; // esi
  unsigned int *v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  if ( CmpAccessBitForPhase == 2 )
  {
    v2 = a1[1190];
    v3 = a1 + 1191;
    if ( v2 || (v2 = *v3) != 0 )
    {
      CmpLockRegistry();
      HvLockHiveFlusherShared(a1);
      HvLockHiveWriter(a1);
      a1[1192] = a1[70];
      *v3 = v2;
      HvTrimHive(a1, v2);
      HvUnlockHiveWriter(a1);
      HvUnlockHiveFlusherShared(a1);
      return CmpUnlockRegistry(v4);
    }
  }
  return result;
}
