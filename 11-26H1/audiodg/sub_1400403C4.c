/*
 * XREFs of sub_1400403C4 @ 0x1400403C4
 * Callers:
 *     sub_140040350 @ 0x140040350 (sub_140040350.c)
 * Callees:
 *     sub_140040074 @ 0x140040074 (sub_140040074.c)
 *     sub_14004DE1C @ 0x14004DE1C (sub_14004DE1C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400403C4(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v5; // rsi
  char v6; // bl
  char v7; // bp
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rdi
  char v11; // al
  __int64 result; // rax

  v5 = a1;
  v6 = 0;
  *a2 = 0;
  v7 = 0;
  if ( qword_1400E8358 )
  {
    v8 = (__int64 *)sub_140040074();
    v9 = v8;
    if ( v8 )
    {
      if ( *v8 )
      {
        *a2 = 0;
        if ( (unsigned __int8)sub_14004DE1C(v5, *v8, a2, a3) )
          *(_QWORD *)(v5 + 72) = a2;
        v10 = *v9;
        do
        {
          v11 = *(_BYTE *)(v10 + 40);
          *(_BYTE *)(v10 + 40) = 1;
          if ( !v11 )
          {
            v7 |= sub_1400B6010(*(_QWORD *)(v10 + 8));
            *(_BYTE *)(v10 + 40) = 0;
          }
          v10 = *(_QWORD *)(v10 + 16);
        }
        while ( v10 );
      }
    }
  }
  result = qword_1400E8368;
  if ( qword_1400E8368 )
  {
    if ( v7 || (*(_BYTE *)(v5 + 4) & 2) != 0 )
      v6 = 1;
    LOBYTE(a1) = v6;
    return sub_1400B6010(a1);
  }
  return result;
}
