/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___ @ 0x180178F74
 * Callers:
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18017B420 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180149660 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _lambda_9df4cfb49f9aeda31819750223cddec6_::operator()_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy___ @ 0x180178A60 (_lambda_9df4cfb49f9aeda31819750223cddec6_--operator()_Microsoft--WRL--ComPtr_BamoControllerNavig.c)
 */

__int64 **std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 *i; // rdi
  char *j; // rsi
  __int64 **result; // rax
  __int64 (__fastcall ***v8)(_QWORD); // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v9 = v10;
  for ( i = a2; i != a3; ++i )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD))*i;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v8);
    if ( lambda_9df4cfb49f9aeda31819750223cddec6_::operator()_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy___(
           &v9,
           (__int64 *)&v8) )
    {
      break;
    }
  }
  if ( i != a3 )
  {
    for ( j = (char *)(i + 1); j != (char *)a3; j += 8 )
    {
      v8 = *(__int64 (__fastcall ****)(_QWORD))j;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v8);
      if ( !lambda_9df4cfb49f9aeda31819750223cddec6_::operator()_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy___(
              (__int64 *)va,
              (__int64 *)&v8) )
        Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
