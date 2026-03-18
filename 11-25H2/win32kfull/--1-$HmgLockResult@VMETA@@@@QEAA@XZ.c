/*
 * XREFs of ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x140310F80
 * Callers:
 *     GreDeleteServerMetaFile @ 0x1402622C8 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x140311120 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     ?CleanupRoutine@?$HmgLockResult@VMETA@@@@QEAAXXZ @ 0x140310FAC (-CleanupRoutine@-$HmgLockResult@VMETA@@@@QEAAXXZ.c)
 */

__int64 __fastcall HmgLockResult<META>::~HmgLockResult<META>(__int64 a1)
{
  HmgLockResult<META>::CleanupRoutine();
  return PopThreadGuardedObject(a1 + 8);
}
