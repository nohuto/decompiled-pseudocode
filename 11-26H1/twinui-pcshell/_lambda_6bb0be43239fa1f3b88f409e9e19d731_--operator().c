/*
 * XREFs of _lambda_6bb0be43239fa1f3b88f409e9e19d731_::operator() @ 0x180163D34
 * Callers:
 *     _lambda_6bb0be43239fa1f3b88f409e9e19d731_::_lambda_invoker_cdecl_ @ 0x180163D20 (_lambda_6bb0be43239fa1f3b88f409e9e19d731_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_6bb0be43239fa1f3b88f409e9e19d731_::operator()(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 *v6; // rax

  v4 = *(_QWORD *)(*a3 + 8);
  v5 = *a3;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( *(_QWORD *)(v4 + 32) >= a2 )
      v5 = v4;
    v6 = (__int64 *)(v4 + 16);
    if ( *(_QWORD *)(v4 + 32) >= a2 )
      v6 = (__int64 *)v4;
    v4 = *v6;
  }
  if ( v5 != *a3 && !*(_BYTE *)(v5 + 25) && a2 >= *(_QWORD *)(v5 + 32) )
  {
    try
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3[2] + 104LL))(a3[2]);
    }
    catch ( ... )
    {
      return 0LL;
    }
  }
  return 1LL;
}
