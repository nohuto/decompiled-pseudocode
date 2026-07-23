/*
 * XREFs of _swoutput_s @ 0x180135C80
 * Callers:
 *     _vsnwprintf_s @ 0x180132FF0 (_vsnwprintf_s.c)
 *     vswprintf_s @ 0x180133F30 (vswprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _woutput_s @ 0x180135DA8 (_woutput_s.c)
 *     _flsbuf_s @ 0x1801375C4 (_flsbuf_s.c)
 */

__int64 __fastcall swoutput_s(_WORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // esi
  _BYTE *v8; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  _BYTE *v12; // [rsp+30h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  _WORD *v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+48h] [rbp-18h]
  __int128 v17; // [rsp+4Ch] [rbp-14h]
  int v18; // [rsp+5Ch] [rbp-4h]

  v14 = 0;
  v18 = 0;
  v17 = 0LL;
  if ( !a2 )
    goto LABEL_21;
  if ( a2 != -1LL )
  {
    if ( a2 <= 0x3FFFFFFF )
    {
      v13 = 2 * a2;
      goto LABEL_6;
    }
LABEL_21:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v13 = 0x7FFFFFFF;
LABEL_6:
  v15 = a1;
  v12 = a1;
  v16 = 66;
  v6 = woutput_s(&v12, a3, a4);
  a1[a2 - 1] = 0;
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( v13 >= 0 )
    {
      if ( a1 )
        *a1 = 0;
      return v7;
    }
    return 4294967294LL;
  }
  if ( --v13 < 0 )
  {
    if ( (unsigned int)flsbuf_s(0LL, &v12) == -1 )
      return 4294967294LL;
    v8 = v12;
  }
  else
  {
    *v12 = 0;
    v8 = ++v12;
  }
  if ( --v13 >= 0 )
  {
    *v8 = 0;
    return v7;
  }
  v10 = flsbuf_s(0LL, &v12);
  v11 = -2;
  if ( v10 != -1 )
    return v7;
  return v11;
}
