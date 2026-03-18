/*
 * XREFs of _lambda_23cd897c47050bff0d2fbbbc5d471d8f_::operator() @ 0x14021E814
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x14014C274 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _lambda_23cd897c47050bff0d2fbbbc5d471d8f_::_lambda_invoker_cdecl_ @ 0x1402DDF10 (_lambda_23cd897c47050bff0d2fbbbc5d471d8f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_23cd897c47050bff0d2fbbbc5d471d8f_::operator()(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool result; // al

  v3 = a3;
  v4 = (unsigned __int8)a2;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  result = 0;
  if ( v4 <= *(_DWORD *)(v6 + 144) )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63448);
    if ( (unsigned __int8)v4 <= *(_BYTE *)(v3 + v8 + 4) )
    {
      v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63448);
      if ( (unsigned __int8)v4 <= *(_BYTE *)(v3 + v10 + 8)
        && (unsigned __int8)v4 <= *(_BYTE *)(v3 + *(_QWORD *)(W32GetUserSessionState(v10, v9) + 63448) + 16) )
      {
        return 1;
      }
    }
  }
  return result;
}
