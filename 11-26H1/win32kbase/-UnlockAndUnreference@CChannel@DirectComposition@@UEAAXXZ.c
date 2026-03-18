/*
 * XREFs of ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x14022AF50
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1401023BC (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CChannel::UnlockAndUnreference(DirectComposition::CChannel *this)
{
  DirectComposition::CChannel::Unlock(this);
  DirectComposition::CChannel::Release(this);
}
