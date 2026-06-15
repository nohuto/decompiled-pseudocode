/*
 * XREFs of sub_14002644C @ 0x14002644C
 * Callers:
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_140047DB4 @ 0x140047DB4 (sub_140047DB4.c)
 *     sub_14006D350 @ 0x14006D350 (sub_14006D350.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_14002644C(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r13

  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 72);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    v10 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    if ( !*(_QWORD *)v10 )
      sub_14004639C(2147500037LL, a2);
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
    if ( *(_DWORD *)(v9 + 40) == 2 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
      if ( v11 )
        sub_1400B6010(v11);
      v13 = v11;
      if ( (int)sub_1400B6010(v11) >= 0 )
      {
        if ( a3 )
          *a3 = v9;
        if ( a4 )
          *a4 = v12;
        if ( a5 )
        {
          v11 = 0LL;
          *a5 = v13;
        }
        if ( v11 )
          sub_1400B6010(v11);
        return;
      }
      if ( v11 )
        sub_1400B6010(v11);
    }
  }
}
