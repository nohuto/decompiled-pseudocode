/*
 * XREFs of sub_14004510C @ 0x14004510C
 * Callers:
 *     sub_140068AA8 @ 0x140068AA8 (sub_140068AA8.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004510C(void **a1, __int128 *a2, int a3)
{
  void **i; // rax
  signed __int64 v5; // rdx
  int v6; // ebx
  int v7; // edx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (void **)&unk_1400BAC50; ; i += 4 )
  {
    if ( i == (void **)&off_1400BAD50 )
    {
      v6 = -2147418113;
      v7 = 78;
      goto LABEL_12;
    }
    v5 = (_BYTE *)*a1 - (_BYTE *)*i;
    if ( *a1 == *i )
      v5 = (_BYTE *)a1[1] - (_BYTE *)i[1];
    if ( !v5 && a3 == *((_DWORD *)i + 4) )
      break;
  }
  v9 = *a2;
  v6 = sub_1400B6010(&v9);
  if ( v6 >= 0 )
    return 0LL;
  v7 = 73;
LABEL_12:
  sub_14000C2A8(
    (int)retaddr,
    v7,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
    v6);
  return (unsigned int)v6;
}
