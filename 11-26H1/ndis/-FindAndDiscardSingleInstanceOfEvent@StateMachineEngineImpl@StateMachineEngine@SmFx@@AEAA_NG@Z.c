/*
 * XREFs of ?FindAndDiscardSingleInstanceOfEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x1400E96B8
 * Callers:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x14005F6A0 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::FindAndDiscardSingleInstanceOfEvent(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        __int16 a2)
{
  unsigned __int8 v2; // r8
  bool v3; // r11
  unsigned __int8 i; // r9
  bool result; // al

  v2 = *((_BYTE *)this + 978);
  v3 = 0;
  for ( i = v2; i != *((_BYTE *)this + 979); i = (i + 1) & 0xF )
  {
    *((_WORD *)this + v2 + 416) = *((_WORD *)this + i + 416);
    if ( v3 || *((_WORD *)this + i + 416) != a2 )
      v2 = (v2 + 1) & 0xF;
    else
      v3 = 1;
  }
  result = v3;
  *((_BYTE *)this + 979) = v2;
  return result;
}
