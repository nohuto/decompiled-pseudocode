/*
 * XREFs of ?GetInterruptPtr@FxInterrupt@@QEAAPEAU_KINTERRUPT@@XZ @ 0x14005D8DC
 * Callers:
 *     imp_WdfInterruptWdmGetInterrupt @ 0x14005D8A0 (imp_WdfInterruptWdmGetInterrupt.c)
 * Callees:
 *     <none>
 */

struct _KINTERRUPT *__fastcall FxInterrupt::GetInterruptPtr(FxInterrupt *this)
{
  struct _KINTERRUPT *result; // rax

  result = this->m_Interrupt;
  if ( !result )
    return this->m_InterruptCaptured;
  return result;
}
