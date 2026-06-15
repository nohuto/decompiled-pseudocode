/*
 * XREFs of sub_140055C7C @ 0x140055C7C
 * Callers:
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140055C7C(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 && *a2 >= 0x7FFFFFFFuLL )
    return 2147942487LL;
  if ( !*a1 )
  {
    *a1 = &unk_1400C7450;
    if ( a2 )
      *a2 = 0LL;
  }
  return result;
}
