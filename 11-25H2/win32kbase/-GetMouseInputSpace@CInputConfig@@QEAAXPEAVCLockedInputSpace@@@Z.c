/*
 * XREFs of ?GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z @ 0x1400E6D70
 * Callers:
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14002D9EC (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF43C (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputConfig::GetMouseInputSpace(CInputConfig *this, struct CLockedInputSpace *a2)
{
  char *v2; // rax

  v2 = (char *)*((_QWORD *)this + 3);
  if ( !v2 )
    v2 = (char *)this + 32;
  *(_QWORD *)a2 = v2;
}
