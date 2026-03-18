/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x140117830
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1402225A0 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char *v5; // rcx

  if ( (unsigned __int8)isInputVirtualizationEnabled() )
    CIVChannel::Uninitialize((CKeyboardSensor *)((char *)this + 1264));
  v5 = (char *)*((_QWORD *)this + 166);
  if ( v5 )
  {
    *(_QWORD *)v5 = &CBaseProcessor::`vftable';
    GreDeleteFastMutex(v5, v2, v3, v4);
  }
  *((_QWORD *)this + 166) = 0LL;
}
