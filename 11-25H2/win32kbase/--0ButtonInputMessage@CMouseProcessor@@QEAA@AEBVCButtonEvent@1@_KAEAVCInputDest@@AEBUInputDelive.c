/*
 * XREFs of ??0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021EFB4
 * Callers:
 *     ?CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021FD10 (-CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@.c)
 * Callees:
 *     ??0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021F060 (--0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDelivery.c)
 */

CMouseProcessor::ButtonInputMessage *__fastcall CMouseProcessor::ButtonInputMessage::ButtonInputMessage(
        CMouseProcessor::ButtonInputMessage *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        unsigned __int64 a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  CMouseProcessor::MouseInputMessage::MouseInputMessage(this, a3, a2, a4, a5);
  *((_QWORD *)this + 45) = &CMouseProcessor::CMouseEvent::`vftable';
  *((_QWORD *)this + 46) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 4);
  *((_QWORD *)this + 45) = &CMouseProcessor::CButtonEvent::`vftable';
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 97) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 98) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 99) = *((_DWORD *)a2 + 9);
  *((_QWORD *)this + 50) = *((_QWORD *)a2 + 5);
  *((_QWORD *)this + 46) = (char *)this + 176;
  return this;
}
