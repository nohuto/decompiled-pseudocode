/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1400CECC0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021EE08 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x14021F1E8 (--1CMouseProcessor@@QEAA@XZ.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this)
{
  char *v2; // rdi

  if ( (unsigned __int8)isInputVirtualizationEnabled() )
    CIVChannel::Uninitialize((CMouseSensor *)((char *)this + 1264));
  v2 = (char *)*((_QWORD *)this + 167);
  if ( v2 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 167));
    GreDeleteFastMutex(v2);
  }
  *((_QWORD *)this + 167) = 0LL;
}
