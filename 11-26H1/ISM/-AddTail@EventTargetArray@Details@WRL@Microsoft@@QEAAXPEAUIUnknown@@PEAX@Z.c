/*
 * XREFs of ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1801653F0
 * Callers:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18016503C (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@I.c)
 *     ?RemoveDelegate@?$EventSource@U?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x18016941C (-RemoveDelegate@-$EventSource@U-$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Inpu.c)
 * Callees:
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x18004BAD4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::EventTargetArray::AddTail(__int64 **this, struct IUnknown *a2, __int64 a3)
{
  Microsoft::WRL::ComPtr<IInputTarget>::operator=(this[3], (__int64)a2);
  this[4][this[3] - this[2]] = a3;
  ++this[3];
}
