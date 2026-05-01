/*
 * XREFs of wil::scope_exit__lambda_b908b03b39898ddc08bf3fd6694a598e___ @ 0x1805BE750
 * Callers:
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805C13D4 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_b908b03b39898ddc08bf3fd6694a598e___(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  v2 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a1 + 32) = v2;
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
