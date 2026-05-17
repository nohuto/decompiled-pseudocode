/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18009A730
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180042600 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009D6F8 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x180098B60 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindCharInUnicodeString(int a1, __int16 *a2, __int16 *a3, _WORD *a4)
{
  unsigned __int16 v4; // r13
  char v6; // bl
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  __int16 v11; // cx
  unsigned __int16 *v12; // r11
  char *v13; // r14
  unsigned __int16 v14; // r15
  unsigned __int16 v15; // r10
  int v16; // r12d
  _BOOL8 v17; // rbp
  __int16 v18; // ax
  int v19; // ebx
  __int16 v20; // r10
  int v22; // ebx
  __int64 v23; // r11
  int v24; // ebx
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // cx
  __int64 v27; // rax
  __int64 v28; // r13
  signed __int64 v29; // r14
  _WORD *v30; // rsi
  int v31; // ebx
  __int16 v32; // r8
  __int64 v33; // r11
  unsigned __int16 v34; // dx
  unsigned __int16 i; // cx
  __int16 v36; // [rsp+20h] [rbp-98h]
  __int16 v37; // [rsp+22h] [rbp-96h]
  _WORD v38[32]; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v6 = a1;
  if ( a4 )
    *a4 = 0;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  if ( a2 )
  {
    v7 = *a2;
    if ( (*a2 & 1) != 0 )
      return 3221225485LL;
    v8 = a2[1];
    if ( (v8 & 1) != 0 || v8 == 0xFFFF || v7 > v8 || !*((_QWORD *)a2 + 1) && (v7 || v8) )
      return 3221225485LL;
  }
  if ( a3 )
  {
    v9 = *a3;
    if ( (*a3 & 1) != 0 )
      return 3221225485LL;
    v10 = a3[1];
    if ( (v10 & 1) != 0 || v10 == 0xFFFF || v9 > v10 || !*((_QWORD *)a3 + 1) && (v9 || v10) )
      return 3221225485LL;
  }
  v11 = *a2;
  v12 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v13 = (char *)*((_QWORD *)a3 + 1);
  v14 = (unsigned __int16)*a3 >> 1;
  v15 = (unsigned __int16)*a2 >> 1;
  v37 = *a2;
  v16 = v6 & 1;
  if ( (v6 & 1) != 0 )
    v12 = &v12[v15 - 1];
  v17 = !(v6 & 1);
  if ( (v6 & 4) == 0 )
  {
    if ( v14 != 1 )
    {
      if ( v15 )
      {
        v24 = v6 & 2;
        while ( 1 )
        {
          v25 = *v12;
          v26 = 0;
          if ( v24 )
          {
            if ( v14 )
            {
              while ( v25 != *(_WORD *)&v13[2 * v26] )
              {
                if ( ++v26 >= v14 )
                  goto LABEL_81;
              }
            }
            else
            {
LABEL_81:
              if ( v26 == v14 )
                goto LABEL_36;
            }
          }
          else
          {
            if ( v14 )
            {
              while ( v25 != *(_WORD *)&v13[2 * v26] )
              {
                if ( ++v26 >= v14 )
                  goto LABEL_50;
              }
              goto LABEL_36;
            }
LABEL_50:
            if ( v26 != v14 )
              goto LABEL_36;
          }
          v12 = &v12[2 * v17 - 1];
          if ( !--v15 )
            return 3221226021LL;
        }
      }
      return 3221226021LL;
    }
    v18 = *(_WORD *)v13;
    v19 = v6 & 2;
    if ( !v15 )
      return 3221226021LL;
    if ( v19 )
    {
      while ( *v12 == v18 )
      {
        v12 = &v12[2 * v17 - 1];
        if ( !--v15 )
          return 3221226021LL;
      }
    }
    else
    {
      while ( *v12 != v18 )
      {
        v12 = &v12[2 * v17 - 1];
        if ( !--v15 )
          return 3221226021LL;
      }
    }
LABEL_24:
    v20 = 2 * v15 - 2;
    if ( !v16 )
      v20 = v11 - v20;
    *a4 = v20;
    return 0LL;
  }
  if ( v14 > 0x20u )
  {
    if ( v15 )
    {
      v22 = v6 & 2;
      while ( 1 )
      {
        v36 = NLS_DOWNCASE(qword_1801C6040, *v12);
        if ( v22 )
        {
          while ( v36 != (unsigned __int16)NLS_DOWNCASE(qword_1801C6040, *(unsigned __int16 *)&v13[2 * v4]) )
          {
            if ( ++v4 >= v14 )
            {
              if ( v4 == v14 )
                goto LABEL_36;
              break;
            }
          }
        }
        else
        {
          do
          {
            if ( v36 == (unsigned __int16)NLS_DOWNCASE(qword_1801C6040, *(unsigned __int16 *)&v13[2 * v4]) )
              goto LABEL_36;
            ++v4;
          }
          while ( v4 < v14 );
          if ( v4 != v14 )
            goto LABEL_36;
        }
        v4 = 0;
        v12 = (unsigned __int16 *)(v23 + 4 * v17 - 2);
        if ( v15 == 1 )
          return 3221226021LL;
      }
    }
    return 3221226021LL;
  }
  v27 = qword_1801C6040;
  if ( v14 )
  {
    v28 = v14;
    v29 = v13 - (char *)v38;
    v30 = v38;
    do
    {
      *v30 = NLS_DOWNCASE(v27, *(unsigned __int16 *)((char *)v30 + v29));
      ++v30;
      v27 = qword_1801C6040;
      --v28;
    }
    while ( v28 );
  }
  if ( !v15 )
    return 3221226021LL;
  v31 = v6 & 2;
  while ( 1 )
  {
    v32 = NLS_DOWNCASE(v27, *v12);
    if ( v31 )
    {
      v34 = 0;
      if ( v14 )
      {
        while ( v32 != v38[v34] )
        {
          if ( ++v34 >= v14 )
            goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        if ( v34 == v14 )
          break;
      }
      goto LABEL_68;
    }
    for ( i = 0; i < v14; ++i )
    {
      if ( v32 == v38[i] )
        goto LABEL_36;
    }
    if ( i != v14 )
      break;
LABEL_68:
    v27 = qword_1801C6040;
    v12 = (unsigned __int16 *)(v33 + 4 * v17 - 2);
    if ( v15 == 1 )
      return 3221226021LL;
  }
LABEL_36:
  if ( v15 )
  {
    v11 = v37;
    goto LABEL_24;
  }
  return 3221226021LL;
}
