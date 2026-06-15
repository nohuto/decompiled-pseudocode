/*
 * XREFs of ??0?$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBluetoothBroadcastProvider@@@Z @ 0x1800E9760
 * Callers:
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800EC560 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800EC690 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_::_Copy @ 0x1800ED950 (std--_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Copy @ 0x1800ED9C0 (std--_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_--_Copy.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18001DE40 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

volatile int **__fastcall wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(
        volatile int **a1,
        volatile int *a2)
{
  volatile int **v2; // r8

  *a1 = a2;
  v2 = a1;
  if ( a2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
  return v2;
}
