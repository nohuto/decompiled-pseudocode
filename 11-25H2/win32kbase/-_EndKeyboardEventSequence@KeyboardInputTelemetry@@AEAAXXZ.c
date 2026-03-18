/*
 * XREFs of ?_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C1DDC
 * Callers:
 *     ?EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ @ 0x1400C1D18 (-EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ.c)
 * Callees:
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1400C1E28 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 */

void __fastcall KeyboardInputTelemetry::_EndKeyboardEventSequence(KeyboardInputTelemetry *this)
{
  unsigned int KeyboardInputLatency; // eax
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // eax

  if ( *((_DWORD *)this + 2) )
  {
    KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(*(_QWORD *)this);
    v3 = *((_DWORD *)this + 3);
    v4 = v3 + *((_DWORD *)this + 2);
    if ( v4 >= v3 )
    {
      v5 = *((_DWORD *)this + 5);
      v6 = v5 + KeyboardInputLatency;
      if ( v6 >= v5 )
      {
        ++*((_DWORD *)this + 4);
        *((_DWORD *)this + 5) = v6;
        *((_DWORD *)this + 3) = v4;
      }
    }
    *((_DWORD *)this + 2) = 0;
  }
}
