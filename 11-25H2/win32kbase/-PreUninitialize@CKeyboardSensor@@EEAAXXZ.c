/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1400CEC70
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021EE08 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  char *v2; // rcx

  if ( (unsigned __int8)isInputVirtualizationEnabled() )
    CIVChannel::Uninitialize((CKeyboardSensor *)((char *)this + 1264));
  v2 = (char *)*((_QWORD *)this + 167);
  if ( v2 )
  {
    *(_QWORD *)v2 = &CBaseProcessor::`vftable';
    GreDeleteFastMutex(v2);
  }
  *((_QWORD *)this + 167) = 0LL;
}
