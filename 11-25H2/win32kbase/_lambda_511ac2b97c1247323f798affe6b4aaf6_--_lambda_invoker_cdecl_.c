/*
 * XREFs of _lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_ @ 0x1401D5D20
 * Callers:
 *     <none>
 * Callees:
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 */

__int64 __fastcall lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = *(unsigned int *)(a1 + 84);
  if ( (result & 0x14) != 0 )
  {
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      result = *(unsigned int *)(i + 184);
      if ( (result & 0x80u) != 0LL && (*(_DWORD *)(i + 168) & 0x2000) != 0 )
        result = rimEndAllActiveContactsWorker((struct RawInputManagerObject *)a1, *(_QWORD *)(i + 456), 0LL);
    }
  }
  return result;
}
