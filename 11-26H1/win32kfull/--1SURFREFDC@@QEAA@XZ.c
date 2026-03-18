/*
 * XREFs of ??1SURFREFDC@@QEAA@XZ @ 0x140076814
 * Callers:
 *     GreDrawStream @ 0x140075C4C (GreDrawStream.c)
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x140076628 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 */

void __fastcall SURFREFDC::~SURFREFDC(SURFACE **this)
{
  SURFREFDC::vUnlock(this);
  PopThreadGuardedObject(this);
}
