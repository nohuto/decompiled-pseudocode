/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400E7018
 * Callers:
 *     NdisRegisterUserThreadExitCallback @ 0x1400E7110 (NdisRegisterUserThreadExitCallback.c)
 * Callees:
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@Z @ 0x1400DF1B4 (--$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@.c)
 */

__int64 *__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DRIVER_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DRIVER_OBJECT *,_DRIVER_OBJECT *,0,std::nullptr_t>>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  LONG_PTR (__stdcall *v7)(PVOID); // [rsp+38h] [rbp+10h] BYREF

  if ( a1 != a2 )
  {
    v4 = *a2;
    if ( *a1 )
    {
      v6 = *a1;
      v7 = ObfDereferenceObject;
      wistd::invoke<__int64 (*)(void *),_DRIVER_OBJECT * &>((__int64 (__fastcall **)(_QWORD))&v7, &v6);
    }
    *a1 = v4;
    *a2 = 0LL;
  }
  return a1;
}
