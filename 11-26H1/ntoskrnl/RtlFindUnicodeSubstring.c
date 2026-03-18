/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1408BFA80
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1407B55B8 (PiDrvDbFindSystemFilePathToken.c)
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     CmpTraceSecurityChanging @ 0x1408BFC0C (CmpTraceSecurityChanging.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, __int64 a2)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v5; // rdx
  char v6; // r8
  size_t v7; // rbp
  struct _LIST_ENTRY *Flink; // r15
  unsigned int v9; // eax
  char *v10; // rbx
  char *v11; // rsi
  unsigned __int64 v12; // r14
  char *v13; // r11
  unsigned __int16 *v14; // rdi
  unsigned __int16 *v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v5;
  Flink = CurrentServerSiloGlobals[75].Flink;
  v9 = *a1;
  if ( (unsigned __int16)v9 >= (unsigned __int16)v7 )
  {
    v10 = (char *)*((_QWORD *)a1 + 1);
    v11 = &v10[v9 - v7];
    if ( v6 )
    {
      v12 = *((_QWORD *)v5 + 1);
      v13 = &v10[-v12];
      v14 = (unsigned __int16 *)(v12 + v7);
      while ( v10 <= v11 )
      {
        v15 = (unsigned __int16 *)*((_QWORD *)v5 + 1);
        if ( v12 < (unsigned __int64)v14 )
        {
          do
          {
            v16 = *(unsigned __int16 *)((char *)v15 + (_QWORD)v13);
            v17 = *v15;
            if ( (_WORD)v16 != (_WORD)v17 )
            {
              if ( (unsigned int)v16 >= 0x61 )
              {
                if ( (unsigned int)v16 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v16 >= 0xC0u )
                    LOWORD(v16) = *((_WORD *)&Flink->Flink
                                  + (v16 & 0xF)
                                  + *((unsigned __int16 *)&Flink->Flink
                                    + ((unsigned __int8)v16 >> 4)
                                    + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v16 >> 8))))
                                + v16;
                }
                else
                {
                  LOWORD(v16) = v16 - 32;
                }
              }
              if ( (unsigned int)v17 >= 0x61 )
              {
                if ( (unsigned int)v17 > 0x7A )
                {
                  if ( Flink )
                  {
                    if ( (unsigned __int16)v17 >= 0xC0u )
                      LOWORD(v17) = *((_WORD *)&Flink->Flink
                                    + (v17 & 0xF)
                                    + *((unsigned __int16 *)&Flink->Flink
                                      + ((unsigned __int8)v17 >> 4)
                                      + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v17 >> 8))))
                                  + v17;
                  }
                }
                else
                {
                  LOWORD(v17) = v17 - 32;
                }
              }
              if ( (_WORD)v16 != (_WORD)v17 )
                break;
            }
            ++v15;
          }
          while ( v15 < v14 );
        }
        if ( v15 == v14 )
          return v10;
        v10 += 2;
        v13 += 2;
      }
    }
    else
    {
      while ( v10 <= v11 )
      {
        if ( !memcmp(v10, *(const void **)(a2 + 8), v7) )
          return v10;
        v10 += 2;
      }
    }
  }
  return 0LL;
}
