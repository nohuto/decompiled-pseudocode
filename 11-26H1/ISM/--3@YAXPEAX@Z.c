/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18009B2C4
 * Callers:
 *     _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x180059F20 (_lambda_31685d6d76905a19580e009ac071d915_--_lambda_invoker_cdecl_.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180060180 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x180082F00 (-OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInp.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18009ADD0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ?FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z @ 0x1800CD5E0 (-FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800E0650 (--1GazeHidDevice@@UEAA@XZ.c)
 *     ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x18010EC80 (--_GDevice@GameInputServerProxy@@QEAAPEAXI@Z.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18010ECAC (--_GGameInputModule@@QEAAPEAXI@Z.c)
 *     ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x18010ECE0 (--_GGameInputServerProxy@@EEAAPEAXI@Z.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18010F9B0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ??_GAlpcSection@@UEAAPEAXI@Z @ 0x18010F9F0 (--_GAlpcSection@@UEAAPEAXI@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010FA28 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x18010FA50 (--_GSipcEndpoint@@EEAAPEAXI@Z.c)
 *     ??_ESipcServer@@EEAAPEAXI@Z @ 0x18010FA90 (--_ESipcServer@@EEAAPEAXI@Z.c)
 *     ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x18011047C (-Clear@-$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ.c)
 *     ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180112F54 (-RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x180113020 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
