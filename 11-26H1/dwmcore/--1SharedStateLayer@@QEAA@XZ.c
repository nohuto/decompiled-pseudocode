/*
 * XREFs of ??1SharedStateLayer@@QEAA@XZ @ 0x1801353F0
 * Callers:
 *     ??_GCBatchOptimizer@@QEAAPEAXI@Z @ 0x180135388 (--_GCBatchOptimizer@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedStateLayer::~SharedStateLayer(SharedStateLayer *this)
{
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 4);
}
