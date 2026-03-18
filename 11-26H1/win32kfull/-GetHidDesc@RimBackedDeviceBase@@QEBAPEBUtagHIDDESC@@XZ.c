/*
 * XREFs of ?GetHidDesc@RimBackedDeviceBase@@QEBAPEBUtagHIDDESC@@XZ @ 0x1402FE65C
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1402FE0A0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FE680 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

const struct tagHIDDESC *__fastcall RimBackedDeviceBase::GetHidDesc(RimBackedDeviceBase *this)
{
  const struct tagHIDDESC *result; // rax

  result = (const struct tagHIDDESC *)*((_QWORD *)this + 2);
  if ( result )
    return (const struct tagHIDDESC *)*((_QWORD *)result + 64);
  return result;
}
