/*
 * XREFs of MiComparePages @ 0x1402EA970
 * Callers:
 *     MiConfirmCombinePageContents @ 0x1402EA8E0 (MiConfirmCombinePageContents.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiComparePages(__int64 a1, __int64 a2)
{
  unsigned int i; // eax
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbp

  for ( i = 505; i != -7; i -= 8 )
  {
    v3 = 8LL * (i + 2);
    v4 = 8LL * (i + 3);
    v5 = 8LL * (i + 4);
    v6 = 8LL * (i - 1);
    v7 = 8LL * (i + 1);
    v8 = *(_QWORD *)(8LL * i + a2) ^ *(_QWORD *)(8LL * i + a1) | *(_QWORD *)(v6 + a1) ^ *(_QWORD *)(v6 + a2) | *(_QWORD *)(v7 + a1) ^ *(_QWORD *)(v7 + a2) | *(_QWORD *)(v3 + a1) ^ *(_QWORD *)(v3 + a2) | *(_QWORD *)(v4 + a1) ^ *(_QWORD *)(v4 + a2) | *(_QWORD *)(v5 + a1) ^ *(_QWORD *)(v5 + a2) | *(_QWORD *)(8LL * (i + 5) + a1) ^ *(_QWORD *)(8LL * (i + 5) + a2) | *(_QWORD *)(a1 + 8LL * (i + 6)) ^ *(_QWORD *)(a2 + 8LL * (i + 6));
    if ( v8 )
      break;
  }
  return v8 == 0;
}
