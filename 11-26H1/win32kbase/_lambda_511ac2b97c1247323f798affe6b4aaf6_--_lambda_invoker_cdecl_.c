/*
 * XREFs of _lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_ @ 0x1401FDC10
 * Callers:
 *     <none>
 * Callees:
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 */

__int64 __fastcall lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_(struct RawInputManagerObject *a1)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = *((unsigned int *)a1 + 21);
  if ( (result & 0x14) != 0 )
  {
    for ( i = *((_QWORD *)a1 + 53); i; i = *(_QWORD *)(i + 40) )
    {
      result = *(unsigned int *)(i + 184);
      if ( (result & 0x80u) != 0LL && (*(_DWORD *)(i + 168) & 0x2000) != 0 )
        result = rimEndAllActiveContactsWorker(a1, *(_QWORD *)(i + 456), 0LL);
    }
  }
  return result;
}
