/*
 * XREFs of sub_14008A93C @ 0x14008A93C
 * Callers:
 *     sub_1400392B0 @ 0x1400392B0 (sub_1400392B0.c)
 *     sub_14003BB30 @ 0x14003BB30 (sub_14003BB30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14008A93C(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rbp
  __int64 v4; // r9
  int v5; // ecx
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v11; // r11
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  int v16; // r10d
  int v17; // ecx
  char v18; // al

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = **(_DWORD **)(a1 + 64);
  if ( v5 != 1431193940 && v5 != 1094997074 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int *)(v3 + 16);
  if ( (unsigned int)v6 >= 0x54 )
  {
    if ( *(_DWORD *)v4 != 1 )
      goto LABEL_15;
    if ( *(_DWORD *)(v4 + 4) != 84 )
      goto LABEL_15;
    if ( *(_DWORD *)(v4 + 8) != 3 )
      goto LABEL_15;
    v7 = 64LL;
    if ( *(_DWORD *)(v4 + 24) != 64 )
      goto LABEL_15;
    v8 = *(unsigned int *)(v4 + 28);
    if ( (_DWORD)v8 )
    {
      v9 = *(unsigned int *)(v4 + 44);
      if ( v9 < 0x90 || (v9 & 7) != 0 || *(unsigned int *)(v3 + 8) < v9 + v8 )
        goto LABEL_15;
    }
    else
    {
      v7 = *(unsigned int *)(v4 + 24);
    }
    v11 = *(unsigned int *)(v4 + 32);
    v12 = v7 + 80;
    if ( (_DWORD)v11 )
    {
      v13 = *(unsigned int *)(v4 + 48);
      if ( v13 < v12 || (v13 & 7) != 0 || v6 < v13 + v11 )
        goto LABEL_15;
    }
    v14 = *(unsigned int *)(v4 + 36);
    if ( (_DWORD)v14 )
    {
      v15 = *(unsigned int *)(v4 + 52);
      if ( v15 < v12 || (v15 & 7) != 0 || *(unsigned int *)(v3 + 8) < v15 + v14 )
        goto LABEL_15;
    }
    if ( (_DWORD)v11 && (_DWORD)v8 && *(unsigned int *)(v4 + 48) < v8 + (unsigned __int64)*(unsigned int *)(v4 + 44)
      || (_DWORD)v14
      && ((_DWORD)v8 && *(unsigned int *)(v4 + 52) < v8 + (unsigned __int64)*(unsigned int *)(v4 + 44)
       || (_DWORD)v11 && *(unsigned int *)(v4 + 52) < v11 + (unsigned __int64)*(unsigned int *)(v4 + 48)) )
    {
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v4 + 8) != 3 )
      return v2;
    v16 = *(_DWORD *)(v4 + 56);
    if ( v16 == 1 )
    {
      if ( (unsigned __int8)*(_DWORD *)(v4 + 80) == 2
        && 4 * (*(unsigned __int16 *)(v4 + 122) | (unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 124) << 16)) + 4 > *(unsigned int *)(v4 + 36) )
      {
        goto LABEL_15;
      }
    }
    else if ( v16 != 2 )
    {
LABEL_15:
      *(_DWORD *)(v4 + 16) = 3;
      return (unsigned int)-1073741811;
    }
    if ( byte_140168D65 )
      return v2;
    if ( v16 == 1 )
    {
      v17 = *(_DWORD *)(v4 + 80);
      if ( (unsigned __int8)v17 >= 0xC0u )
        return v2;
    }
    else
    {
      v17 = *(_DWORD *)(v4 + 80);
      if ( (unsigned __int8)v17 >= 0x80u )
        return v2;
    }
    if ( (unsigned __int8)v17 != 2 )
    {
      if ( (unsigned __int8)v17 == 4 )
      {
        v18 = qword_140168890 & 1;
LABEL_50:
        if ( v18 )
          return v2;
LABEL_51:
        *(_DWORD *)(v4 + 16) = 3;
        return (unsigned int)-1056964602;
      }
      if ( (unsigned __int8)v17 != 20 )
        goto LABEL_51;
    }
    v18 = 1;
    goto LABEL_50;
  }
  if ( (unsigned int)v6 >= 0x14 )
    *(_DWORD *)(v4 + 16) = 3;
  return (unsigned int)-1073741820;
}
