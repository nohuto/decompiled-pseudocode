/*
 * XREFs of ReadString_1 @ 0x180136774
 * Callers:
 *     ReadStringDelimited_1 @ 0x1801369A8 (ReadStringDelimited_1.c)
 *     _winput_s @ 0x180136C0C (_winput_s.c)
 * Callees:
 *     _fgetwc_nolock @ 0x1801375E0 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18013762C (_ungetwc_nolock.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall ReadString_1(
        char a1,
        __int64 a2,
        wint_t *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *Stream,
        unsigned __int64 Src,
        _DWORD *a9)
{
  _WORD *v12; // r14
  int v13; // esi
  unsigned __int64 v14; // rbp
  int v15; // eax
  wint_t v17; // ax
  int v18; // ecx
  size_t v19; // rsi
  __int64 v20; // rax
  _WORD *v22; // rax
  int v24; // [rsp+70h] [rbp+18h]

  v12 = *a5;
  --*a4;
  v24 = -((a1 & 8) != 0);
  if ( *a3 != 0xFFFF )
    ungetwc_nolock(*a3, Stream);
  v13 = a1 & 0x10;
  v14 = Src - 1;
  if ( (a1 & 0x10) != 0 )
    v14 = Src;
  v15 = a1 & 1;
  while ( 1 )
  {
    if ( v15 )
    {
      if ( !a6-- )
        goto LABEL_37;
    }
    ++*a4;
    v17 = fgetwc_nolock(Stream);
    *a3 = v17;
    if ( v17 == 0xFFFF )
      break;
    if ( !v13 && ((a1 & 0x20) == 0 || (unsigned __int16)(v17 - 9) <= 4u || v17 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v17 < (unsigned __int16)(v17 >> 3) )
        break;
      v18 = v24 ^ *(char *)((v17 >> 3) + a2);
      if ( !_bittest(&v18, v17 & 7) )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      ++v12;
LABEL_30:
      v15 = a1 & 1;
    }
    else
    {
      if ( !v14 )
      {
        if ( (a1 & 2) != 0 )
          *v12 = 0;
        else
LABEL_34:
          *(_BYTE *)v12 = 0;
        return 0xFFFFFFFFLL;
      }
      if ( (a1 & 2) != 0 )
      {
        *(_WORD *)*a5 = v17;
        *a5 = (char *)*a5 + 2;
        --v14;
        goto LABEL_30;
      }
      v19 = *(char *)a3;
      if ( v14 < _mb_cur_max )
      {
        LOBYTE(Src) = *(_BYTE *)a3;
        if ( (char)v19 > 0 && v19 > v14 || (unsigned __int8)v19 > 5u )
          goto LABEL_34;
        memmove(*a5, &Src, v19);
      }
      else
      {
        *(_BYTE *)*a5 = v19;
        LOBYTE(v19) = *(_BYTE *)*a5;
      }
      v15 = a1 & 1;
      if ( (char)v19 > 0 )
      {
        v20 = (char)v19;
        *a5 = (char *)*a5 + (char)v19;
        v13 = a1 & 0x10;
        v14 -= v20;
        goto LABEL_30;
      }
      v13 = a1 & 0x10;
    }
  }
  --*a4;
  if ( *a3 != 0xFFFF )
    ungetwc_nolock(*a3, Stream);
LABEL_37:
  if ( v12 == *a5 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( !v13 )
    {
      v22 = *a5;
      if ( (a1 & 2) != 0 )
        *v22 = 0;
      else
        *(_BYTE *)v22 = 0;
    }
  }
  return 0LL;
}
