/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1400DF724
 * Callers:
 *     ?Close@DriverService@@QEAAXXZ @ 0x140148924 (-Close@DriverService@@QEAAXXZ.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1401489F0 (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx
  LONG_PTR result; // rax

  v4 = *a1;
  if ( v4 )
    result = ObfDereferenceObject(v4);
  *a1 = a2;
  return result;
}
