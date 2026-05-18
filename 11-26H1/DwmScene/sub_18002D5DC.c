/*
 * XREFs of sub_18002D5DC @ 0x18002D5DC
 * Callers:
 *     sub_18002D5DC @ 0x18002D5DC (sub_18002D5DC.c)
 *     sub_18002D6A0 @ 0x18002D6A0 (sub_18002D6A0.c)
 * Callees:
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_18002D5DC @ 0x18002D5DC (sub_18002D5DC.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18002D5DC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax

  sub_180029E54(a1 + 16);
  v6 = *a3;
  sub_18003D718(*a3);
  v7 = *(_QWORD *)(v6 + 376);
  i = *(_QWORD *)(v6 + 384);
  while ( v7 != i )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      goto LABEL_7;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
    v7 += 16LL;
  }
  v10 = *a3;
  result = sub_18003D718(*a3);
  v7 = *(_QWORD *)(v10 + 40);
  for ( i = *(_QWORD *)(v10 + 32); i != v7; i += 16LL )
LABEL_7:
    result = sub_18002D5DC(a1, a2, i);
  return result;
}
