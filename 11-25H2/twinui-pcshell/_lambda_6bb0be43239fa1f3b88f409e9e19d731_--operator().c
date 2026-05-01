/*
 * XREFs of _lambda_6bb0be43239fa1f3b88f409e9e19d731_::operator() @ 0x1801754C8
 * Callers:
 *     _lambda_6bb0be43239fa1f3b88f409e9e19d731_::_lambda_invoker_cdecl_ @ 0x1801CDFD0 (_lambda_6bb0be43239fa1f3b88f409e9e19d731_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_6bb0be43239fa1f3b88f409e9e19d731_::operator()(__int64 a1, unsigned __int64 a2, __int64 **a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rdx

  v4 = (__int64 *)(*a3)[1];
  v5 = *a3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( v4[4] < a2 )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v5 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  if ( v5 != *a3 && !*((_BYTE *)v5 + 25) && a2 >= v5[4] )
  {
    try
    {
      (*(void (__fastcall **)(__int64 *))(*a3[2] + 104))(a3[2]);
    }
    catch ( ... )
    {
      return 0LL;
    }
  }
  return 1LL;
}
