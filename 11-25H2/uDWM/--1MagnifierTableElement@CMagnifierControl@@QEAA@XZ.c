/*
 * XREFs of ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x180061D8C
 * Callers:
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800619B0 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x180061FA0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800A73B0 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800A7470 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800BAF40 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x1800BB348 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 *     _CMagnifierControl::OnMagnifierCreate_::_1_::dtor$0 @ 0x1800ED135 (_CMagnifierControl--OnMagnifierCreate_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CMagnifierControl::MagnifierTableElement::~MagnifierTableElement(
        CMagnifierControl::MagnifierTableElement *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
