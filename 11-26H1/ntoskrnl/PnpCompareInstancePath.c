/*
 * XREFs of PnpCompareInstancePath @ 0x140A36D30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall PnpCompareInstancePath(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  struct _LIST_ENTRY *Flink; // rbp
  unsigned __int16 *v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int16 *v11; // rsi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  int v14; // edx
  __int64 result; // rax

  v3 = *(unsigned __int16 **)(a3 + 8);
  v4 = *((_QWORD *)v3 + 1);
  v5 = (unsigned __int64)*v3 >> 1;
  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  v9 = v6;
  if ( v6 > v5 )
    v9 = v5;
  v10 = v4 - (_QWORD)v8;
  v11 = &v8[v9];
  while ( v8 < v11 )
  {
    v12 = *v8;
    v13 = *(unsigned __int16 *)((char *)v8 + v10);
    if ( (_WORD)v12 != (_WORD)v13 )
    {
      if ( (unsigned int)v12 >= 0x61 )
      {
        if ( (unsigned int)v12 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v12 >= 0xC0u )
            LOWORD(v12) = *((_WORD *)&Flink->Flink
                          + (v12 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v12 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v12 >> 8))))
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
          if ( Flink && (unsigned __int16)v13 >= 0xC0u )
            LOWORD(v13) = *((_WORD *)&Flink->Flink
                          + (v13 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v13 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v13 >> 8))))
                        + v13;
        }
        else
        {
          LOWORD(v13) = v13 - 32;
        }
      }
      if ( (_WORD)v12 != (_WORD)v13 )
      {
        v14 = (unsigned __int16)v12 - (unsigned __int16)v13;
        goto LABEL_15;
      }
    }
    ++v8;
  }
  v14 = v6 - v5;
LABEL_15:
  result = 0LL;
  if ( v14 >= 0 )
  {
    LOBYTE(result) = v14 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
