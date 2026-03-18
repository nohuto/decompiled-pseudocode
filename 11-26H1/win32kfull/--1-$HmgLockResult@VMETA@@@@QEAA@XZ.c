/*
 * XREFs of ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x140325B40
 * Callers:
 *     GreDeleteServerMetaFile @ 0x140325B80 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x140325D90 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgLockResult<META>::~HmgLockResult<META>(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)a1 + 12LL));
    *(_QWORD *)a1 = 0LL;
  }
  return PopThreadGuardedObject(a1 + 8);
}
