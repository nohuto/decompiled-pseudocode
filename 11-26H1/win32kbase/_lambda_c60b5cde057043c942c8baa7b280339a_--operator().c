/*
 * XREFs of _lambda_c60b5cde057043c942c8baa7b280339a_::operator() @ 0x140247BCC
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c60b5cde057043c942c8baa7b280339a___ @ 0x140247B58 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c60b5cde057043c942c8baa7b280339.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_c60b5cde057043c942c8baa7b280339a_::operator()(_DWORD **a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_DWORD *)(a2 + 8) = **a1;
  v2 = *((_QWORD *)*a1 + 1);
  result = 0LL;
  if ( v2 )
    result = *(unsigned int *)(v2 + 32);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
