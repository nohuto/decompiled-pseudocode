/*
 * XREFs of wil::details::lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___::_lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___ @ 0x18001C49C
 * Callers:
 *     _CreateLowRightsRegistryKey_::_1_::dtor$0 @ 0x18004D225 (_CreateLowRightsRegistryKey_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___::_lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    operator delete(*(void **)(*(_QWORD *)a1 + 8LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
  }
  return result;
}
