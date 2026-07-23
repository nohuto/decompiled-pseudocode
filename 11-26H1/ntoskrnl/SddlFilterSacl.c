/*
 * XREFs of SddlFilterSacl @ 0x140A6F8E0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SddlFilterSacl(__int64 *a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int16 *v5; // rbp
  __int64 v6; // r14
  int v9; // r10d
  unsigned __int8 *v10; // r11
  unsigned int v11; // r10d
  char *v12; // rsi
  unsigned int v13; // edi
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  bool v19; // zf
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx

  result = *((unsigned __int16 *)a1 + 2);
  v5 = (unsigned __int16 *)(a1 + 1);
  v6 = a2;
  LODWORD(a2) = 0;
  v9 = 8;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( (_WORD)result )
  {
    a2 = *((unsigned __int16 *)a1 + 2);
    while ( 1 )
    {
      v17 = *v10;
      if ( v17 <= 0xF )
        break;
      v18 = v17 - 16;
      if ( !v18 )
        break;
      v20 = v18 - 1;
      if ( v20 )
      {
        v23 = v20 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( !v25 )
            {
              if ( (a4 & 0x80u) == 0 )
                goto LABEL_19;
LABEL_18:
              v9 += *((unsigned __int16 *)v10 + 1);
              goto LABEL_19;
            }
            if ( v25 != 1 )
              break;
            v19 = (a4 & 0x100) == 0;
          }
          else
          {
            v19 = (a4 & 0x40) == 0;
          }
        }
        else
        {
          v19 = (a4 & 0x20) == 0;
        }
      }
      else
      {
        v19 = (a4 & 0x10) == 0;
      }
LABEL_17:
      if ( !v19 )
        goto LABEL_18;
LABEL_19:
      result = *((unsigned __int16 *)v10 + 1);
      v10 += result;
      if ( !--a2 )
        goto LABEL_2;
    }
    v19 = (a4 & 8) == 0;
    goto LABEL_17;
  }
LABEL_2:
  v11 = (v9 + 3) & 0xFFFFFFFC;
  if ( *a3 < v11 )
  {
    *a3 = v11;
    return result;
  }
  result = *a1;
  v12 = (char *)(v6 + 8);
  *(_QWORD *)v6 = *a1;
  v13 = a2;
  *(_DWORD *)(v6 + 2) = 8;
  if ( (unsigned __int16)a2 < *((_WORD *)a1 + 2) )
  {
    do
    {
      v14 = *(unsigned __int8 *)v5;
      if ( v14 > 0xF )
      {
        v15 = v14 - 16;
        if ( v15 )
        {
          v21 = v15 - 1;
          if ( !v21 )
          {
            v22 = a4 >> 4;
LABEL_25:
            v16 = (v22 & 1) == 0;
            goto LABEL_9;
          }
          v26 = v21 - 1;
          if ( !v26 )
          {
            v22 = a4 >> 5;
            goto LABEL_25;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
            v22 = a4 >> 6;
            goto LABEL_25;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
            v22 = a4 >> 7;
            goto LABEL_25;
          }
          if ( v28 == 1 )
          {
            v22 = a4 >> 8;
            goto LABEL_25;
          }
        }
      }
      v16 = (a4 & 8) == 0;
LABEL_9:
      if ( !v16 )
      {
        memmove(v12, v5, v5[1]);
        ++*(_WORD *)(v6 + 4);
        *(_WORD *)(v6 + 2) += v5[1];
        v12 += v5[1];
      }
      ++v13;
      v5 = (unsigned __int16 *)((char *)v5 + v5[1]);
      result = *((unsigned __int16 *)a1 + 2);
    }
    while ( v13 < (unsigned int)result );
  }
  return result;
}
