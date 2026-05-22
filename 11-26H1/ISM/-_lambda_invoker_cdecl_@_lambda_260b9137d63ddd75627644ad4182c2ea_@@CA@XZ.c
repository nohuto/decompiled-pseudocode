/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CA@XZ @ 0x1800D2420
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x1800701D0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  ISMTracing *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 1u, &v1, (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)ISMTracing::`scalar deleting destructor'(v2, 0);
  }
  return result;
}
