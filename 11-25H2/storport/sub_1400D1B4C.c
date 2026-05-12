/*
 * XREFs of sub_1400D1B4C @ 0x1400D1B4C
 * Callers:
 *     sub_1400F8858 @ 0x1400F8858 (sub_1400F8858.c)
 *     sub_1400FDA54 @ 0x1400FDA54 (sub_1400FDA54.c)
 * Callees:
 *     sub_14002A740 @ 0x14002A740 (sub_14002A740.c)
 *     sub_14002CA70 @ 0x14002CA70 (sub_14002CA70.c)
 */

__int64 __fastcall sub_1400D1B4C(_DWORD *a1, __int64 a2)
{
  bool v2; // r9
  __int64 v5; // rbx
  unsigned int v6; // r15d
  __int64 v7; // rcx
  int v8; // r13d
  unsigned int v9; // ebp
  char *v10; // r9
  char v11; // si
  unsigned int v12; // edi
  unsigned int *v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // r10
  __int64 v16; // r9
  char v17; // cl
  int v18; // r13d
  _DWORD *v19; // rax
  int v20; // edx
  __int64 v21; // r8
  int v22; // r10d
  __int64 v23; // rdx
  unsigned int v24; // edi
  unsigned int v25; // r10d
  unsigned int *v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v30; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v5 + 2) != 40 )
    goto LABEL_63;
  v6 = *(_DWORD *)(v5 + 20);
  v7 = *(_QWORD *)(v5 + 64);
  v8 = *(_DWORD *)(v5 + 24);
  v30 = v7;
  if ( !v6 )
  {
    v9 = *(_DWORD *)(v5 + 56);
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    if ( !v9 )
      goto LABEL_30;
    v13 = (unsigned int *)(v5 + 120);
    while ( 1 )
    {
      v14 = *v13;
      if ( (unsigned int)v14 >= 0x80 )
      {
        v15 = *(unsigned int *)(v5 + 16);
        if ( (unsigned int)v14 < (unsigned int)v15 )
        {
          if ( *(_DWORD *)(v14 + v5) == 64 )
          {
            if ( v14 + 40 <= v15 )
            {
              if ( !*(_BYTE *)(v14 + v5 + 10) )
                goto LABEL_23;
              v16 = v5 + 24;
LABEL_22:
              v10 = (char *)(v14 + v16);
LABEL_23:
              if ( v10 )
              {
                v17 = *v10;
                if ( ((*v10 - 8) & 0x5F) == 0 || v17 == 10 || v17 == 42 || v17 == -86 || v17 == -118 )
                {
                  v2 = 1;
                  goto LABEL_33;
                }
              }
LABEL_30:
              v2 = 0;
LABEL_33:
              v7 = v30;
              goto LABEL_34;
            }
          }
          else if ( *(_DWORD *)(v14 + v5) == 65 )
          {
            if ( v14 + 56 <= v15 )
            {
              v11 = 1;
              if ( !*(_BYTE *)(v14 + v5 + 10) )
                goto LABEL_23;
              v10 = (char *)(v14 + v5 + 24);
            }
          }
          else if ( *(_DWORD *)(v14 + v5) == 66 && v14 + 40 <= v15 )
          {
            if ( !*(_DWORD *)(v14 + v5 + 12) )
              goto LABEL_23;
            v16 = v5 + 32;
            goto LABEL_22;
          }
          if ( v11 )
            goto LABEL_23;
        }
      }
      ++v12;
      ++v13;
      if ( v12 >= v9 )
        goto LABEL_23;
    }
  }
  if ( v6 == 10 )
  {
    v2 = (unsigned int)(unsigned __int8)*(_DWORD *)(*(unsigned int *)(v5 + 120) + v5 + 16) - 1 <= 1;
    goto LABEL_33;
  }
LABEL_34:
  v18 = v8 & 0xC0;
  if ( v18 && (v7 || *(_QWORD *)(a2 + 8)) )
  {
    if ( *a1 == 1094997074 )
    {
      v19 = a1 + 94;
    }
    else if ( *a1 == 1314275652 )
    {
      v19 = a1 + 42;
    }
    else
    {
      v19 = 0LL;
    }
    if ( v6 <= 0x17 && (v20 = 8389124, _bittest(&v20, v6))
      || v19 && (*((_BYTE *)v19 + 97) == 3 || (unsigned __int8)(*((_BYTE *)v19 + 97) - 1) <= 1u && !v2) )
    {
      v30 = 0LL;
      LODWORD(v21) = sub_14002A740(*(_QWORD *)(a2 + 8), v7, *(_BYTE *)(a2 + 64) != 0 ? 16 : 32, &v30);
      if ( (int)v21 >= 0 )
        *(_QWORD *)(v5 + 64) = v30;
    }
    else if ( (unsigned int)sub_14002CA70((__int64)a1) )
    {
      v23 = 0LL;
      if ( v18 == v22 )
      {
        v24 = *(_DWORD *)(v5 + 56);
        v25 = 0;
        if ( v24 )
        {
          v26 = (unsigned int *)(v5 + 120);
          while ( 1 )
          {
            v27 = *v26;
            v23 = 0LL;
            if ( (unsigned int)v27 >= 0x80 )
            {
              v28 = *(unsigned int *)(v5 + 16);
              if ( (unsigned int)v27 <= (unsigned int)v28 && *(_DWORD *)(v27 + v5) == 1 && v27 + 24 <= v28 )
                break;
            }
            ++v25;
            ++v26;
            if ( v25 >= v24 )
              goto LABEL_61;
          }
          v23 = v27 + v5;
        }
      }
LABEL_61:
      *(_QWORD *)(v5 + 64) &= v21;
      if ( v23 )
        *(_QWORD *)(v23 + 16) &= v21;
    }
  }
  else
  {
LABEL_63:
    LODWORD(v21) = -1073741811;
  }
  return (unsigned int)v21;
}
