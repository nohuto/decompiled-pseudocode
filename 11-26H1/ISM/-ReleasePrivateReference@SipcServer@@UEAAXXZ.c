/*
 * XREFs of ?ReleasePrivateReference@SipcServer@@UEAAXXZ @ 0x180112EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcServer::ReleasePrivateReference(SipcServer *this)
{
  SipcObjectBase<ISIPCServer>::PrivateRelease((volatile signed __int64 *)this - 2);
}
