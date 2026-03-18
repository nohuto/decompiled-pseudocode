/*
 * XREFs of ?CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x140223180
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x140222778 (--0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDelive.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::CButtonEvent::CreateInputMessage(
        CMouseProcessor::CButtonEvent *this,
        unsigned __int64 a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  CMouseProcessor::ButtonInputMessage *v8; // rcx
  struct CMouseProcessor::MouseInputMessage *result; // rax

  v8 = (CMouseProcessor::ButtonInputMessage *)Win32AllocPoolZInitImpl(256LL, 0x198uLL, 0x504D7270u);
  result = 0LL;
  if ( v8 )
    return CMouseProcessor::ButtonInputMessage::ButtonInputMessage(v8, this, a2, a3, a4);
  return result;
}
