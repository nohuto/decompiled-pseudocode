/*
 * XREFs of ReadString_0 @ 0x180134FE8
 * Callers:
 *     ReadStringDelimited_0 @ 0x180135190 (ReadStringDelimited_0.c)
 *     _input_s @ 0x180135328 (_input_s.c)
 * Callees:
 *     _ungetc_nolock @ 0x1801325A4 (_ungetc_nolock.c)
 *     _inc_0 @ 0x1801352F8 (_inc_0.c)
 */

__int64 __fastcall ReadString_0(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        FILE *Stream,
        __int64 a8,
        _DWORD *a9)
{
  _WORD **v9; // rdi
  _WORD *v13; // rsi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r12
  int v17; // eax
  FILE *v19; // rcx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  _WORD *v24; // rcx
  _WORD *v26; // rax
  char v27; // [rsp+60h] [rbp+8h] BYREF
  __int64 v28; // [rsp+68h] [rbp+10h]
  int v29; // [rsp+70h] [rbp+18h]

  v28 = a2;
  v9 = a5;
  v13 = *a5;
  v14 = -((a1 & 8) != 0);
  --*a4;
  v15 = *a3;
  v29 = v14;
  if ( v15 != -1 )
    ungetc_nolock(v15, Stream);
  v16 = a8 - 1;
  if ( (a1 & 0x10) != 0 )
    v16 = a8;
  v17 = a1 & 1;
  LODWORD(a5) = v17;
  while ( 1 )
  {
    if ( v17 )
    {
      if ( !a6-- )
        goto LABEL_31;
    }
    v19 = Stream;
    ++*a4;
    v20 = inc_0(v19, a2, 0LL);
    *a3 = v20;
    v21 = v20;
    if ( v20 == -1 )
      break;
    if ( (a1 & 0x10) == 0 && ((a1 & 0x20) == 0 || (unsigned int)(v20 - 9) <= 4 || v20 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v20 < 0 )
        break;
      v22 = v20 >> 3;
      if ( v21 < v21 >> 3 )
        break;
      a2 = v21 & 7;
      v23 = v29 ^ *(char *)(v22 + v28);
      if ( !_bittest(&v23, a2) )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      v13 = (_WORD *)((char *)v13 + 1);
    }
    else
    {
      if ( !v16 )
      {
        if ( (a1 & 2) != 0 )
          *v13 = 0;
        else
          *(_BYTE *)v13 = 0;
        return 0xFFFFFFFFLL;
      }
      LOBYTE(a2) = *(_BYTE *)a3;
      v24 = *v9;
      if ( (a1 & 2) != 0 )
      {
        *v24 = (unsigned __int16)&v27;
        ++*v9;
      }
      else
      {
        *(_BYTE *)v24 = a2;
        *v9 = (_WORD *)((char *)*v9 + 1);
      }
      --v16;
    }
    v17 = (int)a5;
  }
  --*a4;
  if ( *a3 != -1 )
    ungetc_nolock(*a3, Stream);
LABEL_31:
  if ( v13 == *v9 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v26 = *v9;
      if ( (a1 & 2) != 0 )
        *v26 = 0;
      else
        *(_BYTE *)v26 = 0;
    }
  }
  return 0LL;
}
