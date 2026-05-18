/*
 * XREFs of sub_18003D52C @ 0x18003D52C
 * Callers:
 *     sub_18003A924 @ 0x18003A924 (sub_18003A924.c)
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 * Callees:
 *     sub_18003B678 @ 0x18003B678 (sub_18003B678.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18003D52C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_18003D758();
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_18003D718(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_18003B678(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
