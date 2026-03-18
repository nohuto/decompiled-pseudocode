/*
 * XREFs of ?WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x140192A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14021FCB4 (-ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ.c)
 *     Feature_FixInteractionTrackerScrollDirection__private_IsEnabledDeviceUsageNoInline @ 0x140222C44 (Feature_FixInteractionTrackerScrollDirection__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CMouseProcessor::CWheelEvent::WriteChunkMouseInputData(
        CMouseProcessor::CWheelEvent *this,
        struct _MOUSE_INPUT_DATA *a2)
{
  USHORT *p_ButtonData; // rbx
  unsigned __int16 v4; // ax

  a2->ButtonFlags |= *(_WORD *)(*((_QWORD *)this + 1) + 28LL) & 0xC00;
  p_ButtonData = &a2->ButtonData;
  if ( (unsigned int)Feature_FixInteractionTrackerScrollDirection__private_IsEnabledDeviceUsageNoInline() )
    v4 = CMouseProcessor::CWheelEvent::ComputeWheelData(this);
  else
    v4 = *(_WORD *)(*((_QWORD *)this + 1) + 30LL);
  *p_ButtonData = v4;
}
