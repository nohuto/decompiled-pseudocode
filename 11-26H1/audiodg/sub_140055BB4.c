/*
 * XREFs of sub_140055BB4 @ 0x140055BB4
 * Callers:
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140055BB4(_WORD *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  _WORD *v5; // r10
  __int64 v6; // r11
  __int64 v8; // r9
  __int16 v9; // cx
  _WORD *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx

  v5 = a1;
  v6 = 0LL;
  if ( a2 )
  {
    v8 = a4 - (_QWORD)a1;
    do
    {
      if ( !a5 )
        break;
      v9 = *(_WORD *)((char *)v5 + v8);
      if ( !v9 )
        break;
      *v5 = v9;
      --a5;
      ++v5;
      ++v6;
      --a2;
    }
    while ( a2 );
  }
  v10 = v5 - 1;
  result = a2 == 0 ? 0x8007007A : 0;
  if ( a2 )
    v10 = v5;
  *v10 = 0;
  if ( a3 )
  {
    v12 = v6 - 1;
    if ( a2 )
      v12 = v6;
    *a3 = v12;
  }
  return result;
}
