/*
 * XREFs of ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x18021CDA4
 * Callers:
 *     _lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_ @ 0x18030D700 (_lambda_fde1e3dd508437221a89b1c19fd2671f_--_lambda_fde1e3dd508437221a89b1c19fd2671f_.c)
 *     _lambda_a03ebfe222b20f6e78e73c052cdff49c_::_lambda_a03ebfe222b20f6e78e73c052cdff49c_ @ 0x18030D728 (_lambda_a03ebfe222b20f6e78e73c052cdff49c_--_lambda_a03ebfe222b20f6e78e73c052cdff49c_.c)
 *     _lambda_95ac369ff7c54e9b7c0e7f066758ab94_::operator() @ 0x18030D8D4 (_lambda_95ac369ff7c54e9b7c0e7f066758ab94_--operator().c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

volatile int **__fastcall wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
        volatile int **a1,
        volatile int *a2)
{
  volatile int **v2; // r8

  *a1 = a2;
  v2 = a1;
  if ( a2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 41), a2);
  return v2;
}
