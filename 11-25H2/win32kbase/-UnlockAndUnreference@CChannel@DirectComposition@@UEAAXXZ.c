/*
 * XREFs of ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x140228C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x140055894 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CChannel::UnlockAndUnreference(PERESOURCE *this)
{
  DirectComposition::CChannel::Unlock(this);
  DirectComposition::CChannel::Release((DirectComposition::CChannel *)this);
}
