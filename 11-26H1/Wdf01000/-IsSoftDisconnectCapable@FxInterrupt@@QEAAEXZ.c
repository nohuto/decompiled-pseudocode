/*
 * XREFs of ?IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ @ 0x14006787C
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140067454 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x140067650 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxInterrupt::IsSoftDisconnectCapable(FxInterrupt *this)
{
  bool result; // al

  result = 0;
  if ( unk_1400C8ED8 && this->m_UseSoftDisconnect )
  {
    if ( this->m_Interrupt )
      return this->m_Connected != 0;
  }
  return result;
}
