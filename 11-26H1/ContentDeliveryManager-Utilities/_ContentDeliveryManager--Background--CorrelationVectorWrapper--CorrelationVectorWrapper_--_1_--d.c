/*
 * XREFs of _ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper_::_1_::dtor$0 @ 0x1800BAAC4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(*(void ***)(a2 + 48));
}
