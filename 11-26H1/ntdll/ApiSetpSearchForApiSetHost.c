/*
 * XREFs of ApiSetpSearchForApiSetHost @ 0x18007B250
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     ApiSetResolveToHost @ 0x1800E5874 (ApiSetResolveToHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSetHost(__int64 a1, unsigned __int16 *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v4; // r12
  int v6; // r11d
  int v7; // r14d
  int i; // r11d
  unsigned __int16 *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  int v14; // esi
  __int64 v16; // [rsp+0h] [rbp-48h]
  unsigned __int16 v17; // [rsp+60h] [rbp+18h]
  unsigned __int64 v18; // [rsp+68h] [rbp+20h]

  v17 = a3;
  v4 = *(unsigned int *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 1;
  v16 = v4 + a4;
LABEL_2:
  for ( i = v6 - 1; v7 <= i; v7 = ((v7 + i) >> 1) + 1 )
  {
    v9 = a2;
    v10 = a3;
    v11 = a4 + v4 + 20LL * ((v7 + i) >> 1);
    v18 = (unsigned __int64)*(unsigned int *)(v11 + 8) >> 1;
    if ( a3 > v18 )
      v10 = (unsigned __int64)*(unsigned int *)(v11 + 8) >> 1;
    while ( v9 < &a2[v10] )
    {
      v12 = *v9;
      v13 = *(unsigned __int16 *)((char *)v9 + a4 + *(unsigned int *)(v11 + 4) - (_QWORD)a2);
      if ( (_WORD)v12 != (_WORD)v13 )
      {
        if ( (unsigned int)v12 >= 0x61 )
        {
          if ( (unsigned int)v12 > 0x7A )
          {
            if ( qword_1801C5038 && (unsigned __int16)v12 >= 0xC0u )
              LOWORD(v12) = *(_WORD *)(qword_1801C5038
                                     + 2
                                     * ((v12 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C5038
                                                            + 2LL
                                                            * (*(unsigned __int16 *)(qword_1801C5038 + 2 * (v12 >> 8))
                                                             + (unsigned int)((unsigned __int8)v12 >> 4)))))
                          + v12;
          }
          else
          {
            LOWORD(v12) = v12 - 32;
          }
        }
        if ( (unsigned int)v13 >= 0x61 )
        {
          if ( (unsigned int)v13 > 0x7A )
          {
            if ( qword_1801C5038 )
            {
              if ( (unsigned __int16)v13 >= 0xC0u )
                LOWORD(v13) = *(_WORD *)(qword_1801C5038
                                       + 2
                                       * ((v13 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801C5038
                                                              + 2LL
                                                              * (*(unsigned __int16 *)(qword_1801C5038 + 2 * (v13 >> 8))
                                                               + (unsigned int)((unsigned __int8)v13 >> 4)))))
                            + v13;
            }
          }
          else
          {
            LOWORD(v13) = v13 - 32;
          }
        }
        if ( (_WORD)v12 != (_WORD)v13 )
        {
          v14 = (unsigned __int16)v12 - (unsigned __int16)v13;
          goto LABEL_17;
        }
      }
      ++v9;
    }
    v14 = a3 - (_DWORD)v18;
LABEL_17:
    if ( v14 < 0 )
    {
      v6 = (v7 + i) >> 1;
      a3 = v17;
      goto LABEL_2;
    }
    if ( v14 <= 0 )
      return a4 + v4 + 20LL * ((v7 + i) >> 1);
    a3 = v17;
  }
  return v16;
}
