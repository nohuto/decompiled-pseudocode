/*
 * XREFs of EtwpEventNameFilterSearch @ 0x140414150
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x140413C18 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpEventNameFilterSearch(const char *a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int64 v3; // r11
  unsigned __int8 *v6; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r8d
  char v12; // cl
  unsigned int v13; // r8d
  __int64 v14; // r14
  __int64 v15; // rbp
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // r9

  v3 = a2;
  v6 = (unsigned __int8 *)a1;
  v7 = 314159LL;
  if ( v3 >= 8 )
  {
    v8 = (unsigned __int64)(unsigned int)v3 >> 3;
    v3 -= 8 * v8;
    do
    {
      v9 = v6[6] + 37 * (v6[5] + 37 * (v6[4] + 37 * (v6[3] + 37 * (v6[2] + 37 * (v6[1] + 37 * (*v6 + 37 * v7))))));
      v10 = v6[7];
      v6 += 8;
      v7 = v10 + 37 * v9;
      --v8;
    }
    while ( v8 );
  }
  if ( v3 != 2 )
  {
    switch ( v3 )
    {
      case 1uLL:
        goto LABEL_6;
      case 3uLL:
        goto LABEL_22;
      case 4uLL:
        goto LABEL_21;
      case 5uLL:
        goto LABEL_20;
      case 6uLL:
        goto LABEL_19;
      case 7uLL:
        v7 = *v6++ + 37 * v7;
LABEL_19:
        v7 = *v6++ + 37 * v7;
LABEL_20:
        v7 = *v6++ + 37 * v7;
LABEL_21:
        v7 = *v6++ + 37 * v7;
LABEL_22:
        v7 = *v6++ + 37 * v7;
        break;
      default:
        goto LABEL_7;
    }
  }
  v7 = *v6++ + 37 * v7;
LABEL_6:
  v7 = *v6 + 37 * v7;
LABEL_7:
  v11 = *(_DWORD *)(a3 + 28);
  v12 = v11;
  v13 = v11 >> 5;
  v14 = -1LL << (v12 & 0x1F);
  v16 = (v7 & (unsigned __int64)v14) >> 56;
  v17 = (v7 & (unsigned __int64)v14) >> 48;
  v18 = (v7 & (unsigned __int64)v14) >> 40;
  v15 = v7 & v14;
  v19 = (v7 & (unsigned __int64)v14) >> 32;
  v20 = (v7 & (unsigned __int64)v14) >> 24;
  v21 = (v7 & (unsigned __int64)v14) >> 16;
  if ( !v13 )
    goto LABEL_23;
  v22 = *(_QWORD *)(a3 + 32)
      + 8LL
      * ((v13 - 1) & (442596621 * (unsigned __int8)v15
                    - 877075889
                    + (_DWORD)v16
                    + 37
                    * ((unsigned __int8)v17
                     + 37
                     * ((unsigned __int8)v18
                      + 37
                      * ((unsigned __int8)v19
                       + 37 * ((unsigned __int8)v20 + 37 * ((unsigned __int8)v21 + 37 * BYTE1(v15))))))));
  do
  {
    v22 = *(_QWORD *)v22;
    if ( (v22 & 1) != 0 )
      goto LABEL_23;
  }
  while ( v15 != (v14 & *(_QWORD *)(v22 + 8)) );
LABEL_11:
  while ( v22 )
  {
    if ( !strcmp(a1, *(const char **)(v22 + 16)) )
      return 1;
    while ( 1 )
    {
      v22 = *(_QWORD *)v22;
      if ( (v22 & 1) != 0 )
        break;
      if ( v15 == (v14 & *(_QWORD *)(v22 + 8)) )
        goto LABEL_11;
    }
LABEL_23:
    v22 = 0LL;
  }
  return 0;
}
