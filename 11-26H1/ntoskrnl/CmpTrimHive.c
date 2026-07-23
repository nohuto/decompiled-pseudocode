/*
 * XREFs of CmpTrimHive @ 0x1408BDDEC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpAcceptBoot @ 0x140854B2C (CmpAcceptBoot.c)
 * Callees:
 *     HvTrimHive @ 0x1408BEF28 (HvTrimHive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpTrimHive(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  if ( CmpAccessBitForPhase == 2 )
  {
    v5 = a1[1190];
    v6 = a1 + 1191;
    if ( v5 || (v5 = *v6) != 0 )
    {
      CmpLockRegistry(a1, a2, a3, a4);
      HvLockHiveFlusherShared(a1);
      HvLockHiveWriter(a1);
      a1[1192] = a1[70];
      *v6 = v5;
      HvTrimHive(a1, v5);
      HvUnlockHiveWriter(a1);
      HvUnlockHiveFlusherShared(a1);
      return CmpUnlockRegistry(v7);
    }
  }
  return result;
}
