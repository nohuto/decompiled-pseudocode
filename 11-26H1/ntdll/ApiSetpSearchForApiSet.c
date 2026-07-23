/*
 * XREFs of ApiSetpSearchForApiSet @ 0x180031690
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetResolveToHost @ 0x1800E5874 (ApiSetResolveToHost.c)
 *     ApiSetQuerySchemaInfo @ 0x18011F48C (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, unsigned __int16 *a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  unsigned __int16 *v4; // rbx
  unsigned int v6; // eax
  unsigned __int16 *v7; // r9
  int v8; // r11d
  __int64 v9; // r10
  unsigned __int16 v10; // cx
  int v11; // r10d
  int v12; // r9d
  int v14; // r11d
  char *v15; // rdx
  bool v16; // cf
  bool v17; // cc
  char *v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // r10d
  unsigned __int64 v21; // r14
  char *v22; // r11
  unsigned __int16 *v23; // rbp
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  int v26; // r10d

  v3 = 0LL;
  v4 = a2;
  v6 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a1[6];
    v9 = a3;
    do
    {
      v10 = *v7;
      if ( *v7 >= 0x41u && v10 <= 0x5Au )
        v10 += 32;
      ++v7;
      v6 = v6 * v8 + v10;
      --v9;
    }
    while ( v9 );
  }
  v11 = 0;
  v12 = a1[3] - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v11 > v12 )
        return v3;
      v14 = (v11 + v12) >> 1;
      v15 = (char *)a1 + (unsigned int)a1[5];
      v16 = v6 < *(_DWORD *)&v15[8 * v14];
      v17 = v6 <= *(_DWORD *)&v15[8 * v14];
      v18 = &v15[8 * v14];
      if ( !v16 )
        break;
      v12 = v14 - 1;
    }
    if ( v17 )
      break;
    v11 = v14 + 1;
  }
  v3 = (__int64)&a1[6 * *((unsigned int *)v18 + 1)] + (unsigned int)a1[4];
  if ( !v3 )
    return v3;
  v19 = a3;
  v20 = a3;
  v21 = (unsigned __int64)*(unsigned int *)(v3 + 12) >> 1;
  if ( a3 > v21 )
    v19 = (unsigned __int64)*(unsigned int *)(v3 + 12) >> 1;
  v22 = (char *)a1 + *(unsigned int *)(v3 + 4) - (_QWORD)v4;
  v23 = &v4[v19];
  while ( v4 < v23 )
  {
    v24 = *v4;
    v25 = *(unsigned __int16 *)((char *)v4 + (_QWORD)v22);
    if ( (_WORD)v24 != (_WORD)v25 )
    {
      if ( (unsigned int)v24 >= 0x61 )
      {
        if ( (unsigned int)v24 > 0x7A )
        {
          if ( qword_1801C5038 && (unsigned __int16)v24 >= 0xC0u )
            LOWORD(v24) = *(_WORD *)(qword_1801C5038
                                   + 2
                                   * ((v24 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801C5038
                                                          + 2LL
                                                          * (((unsigned __int8)v24 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                               + 2 * (v24 >> 8))))))
                        + v24;
        }
        else
        {
          LOWORD(v24) = v24 - 32;
        }
      }
      if ( (unsigned int)v25 >= 0x61 )
      {
        if ( (unsigned int)v25 > 0x7A )
        {
          if ( qword_1801C5038 )
          {
            if ( (unsigned __int16)v25 >= 0xC0u )
              LOWORD(v25) = *(_WORD *)(qword_1801C5038
                                     + 2
                                     * ((v25 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C5038
                                                            + 2LL
                                                            * (((unsigned __int8)v25 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                                 + 2 * (v25 >> 8))))))
                          + v25;
          }
        }
        else
        {
          LOWORD(v25) = v25 - 32;
        }
      }
      if ( (_WORD)v24 != (_WORD)v25 )
      {
        v26 = (unsigned __int16)v24 - (unsigned __int16)v25;
        goto LABEL_27;
      }
    }
    ++v4;
  }
  v26 = v20 - v21;
LABEL_27:
  if ( !v26 )
    return v3;
  return 0LL;
}
