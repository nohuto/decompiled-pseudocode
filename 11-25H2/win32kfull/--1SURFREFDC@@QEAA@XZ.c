/*
 * XREFs of ??1SURFREFDC@@QEAA@XZ @ 0x140263508
 * Callers:
 *     ??$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z @ 0x140330900 (--$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z.c)
 *     ??$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z @ 0x1403310AC (--$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z.c)
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400D78E8 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 */

void __fastcall SURFREFDC::~SURFREFDC(SURFREFDC *this)
{
  SURFREFDC::vUnlock(this);
  PopThreadGuardedObject(this);
}
