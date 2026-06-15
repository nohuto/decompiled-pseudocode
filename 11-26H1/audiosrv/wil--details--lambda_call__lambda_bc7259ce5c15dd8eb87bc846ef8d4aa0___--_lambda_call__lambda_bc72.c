/*
 * XREFs of wil::details::lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___::_lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___ @ 0x1800AD8B4
 * Callers:
 *     _CVADServer::InitializePolicy_::_1_::dtor$1 @ 0x1801630C0 (_CVADServer--InitializePolicy_--_1_--dtor$1.c)
 *     _CVADServer::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1801637E8 (_CVADServer--RuntimeClassInitialize_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 */

void ***__fastcall wil::details::lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___::_lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___(
        __int64 a1)
{
  void ***result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    operator delete(***(void ****)a1);
    result = *(void ****)a1;
    ***(_QWORD ***)a1 = 0LL;
  }
  return result;
}
