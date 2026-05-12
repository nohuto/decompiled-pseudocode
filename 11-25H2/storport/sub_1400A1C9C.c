/*
 * XREFs of sub_1400A1C9C @ 0x1400A1C9C
 * Callers:
 *     sub_140040228 @ 0x140040228 (sub_140040228.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400A1C9C(_WORD *a1, size_t a2, __int64 a3, _QWORD *a4, size_t *a5, __int16 a6)
{
  size_t v7; // rdi
  _WORD *v10; // rax

  v7 = a2 >> 1;
  if ( a2 >> 1 && (a6 & 0x1000) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  if ( (a6 & 0x400) == 0 )
  {
LABEL_7:
    if ( !v7 )
      return 0LL;
    goto LABEL_8;
  }
  memset_0(a1, (unsigned __int8)a6, a2);
  if ( !(_BYTE)a6 )
  {
    *a4 = a1;
    *a5 = v7;
    goto LABEL_7;
  }
  if ( !v7 )
    return 0LL;
  *a5 = 1LL;
  v10 = &a1[v7 - 1];
  *a4 = v10;
  *v10 = 0;
LABEL_8:
  if ( (a6 & 0x800) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  return 0LL;
}
