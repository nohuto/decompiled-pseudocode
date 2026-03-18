/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x140117750
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1402225A0 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x140222990 (--1CMouseProcessor@@QEAA@XZ.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this)
{
  char *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (unsigned __int8)isInputVirtualizationEnabled() )
    CIVChannel::Uninitialize((CMouseSensor *)((char *)this + 1264));
  v2 = (char *)*((_QWORD *)this + 166);
  if ( v2 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 166));
    GreDeleteFastMutex(v2, v3, v4, v5);
  }
  *((_QWORD *)this + 166) = 0LL;
}
