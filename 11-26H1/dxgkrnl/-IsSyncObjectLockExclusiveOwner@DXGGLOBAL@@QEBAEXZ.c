/*
 * XREFs of ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x14004E0D0
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockExclusiveOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(this[76]) != 0;
}
