/*
 * XREFs of ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x140325AF4
 * Callers:
 *     GreDeleteServerMetaFile @ 0x140325B80 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x140325D90 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgLockResult<META>::HmgLockResult<META>(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  PushThreadGuardedObject(
    a1 + 8,
    a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 + 8) >> 64),
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
