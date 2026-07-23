/*
 * XREFs of PiDmInitializeComparisonObject @ 0x1409AA040
 * Callers:
 *     PiDmAddCacheReferenceForObject @ 0x1409A9E30 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall PiDmInitializeComparisonObject(_WORD *a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v7; // rdx
  _WORD *v8; // rax
  unsigned __int16 v9; // r8
  struct _LIST_ENTRY *Flink; // rsi
  unsigned __int16 v11; // r8
  int v12; // r9d
  unsigned __int16 *v13; // r11
  int *v14; // rbx
  int v15; // r10d
  unsigned __int64 v16; // r8

  v3 = 0;
  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)(a3 + 28) = a2;
  result = 0LL;
  if ( !a1 )
    goto LABEL_23;
  v7 = 0x7FFFLL;
  v8 = a1;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  result = 3221225485LL;
  if ( v7 )
  {
    result = 0LL;
    v9 = -2 - 2 * v7;
  }
  else
  {
LABEL_23:
    v9 = 0;
  }
  if ( (int)result >= 0 )
  {
    if ( a2 == 3 && v9 <= 8u )
    {
      return 3221225524LL;
    }
    else
    {
      Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
      v14 = (int *)(a3 + 24);
      if ( v14 )
      {
        v15 = v11 >> 1;
        for ( *v14 = 0; v15; v12 = (unsigned __int16)v16 + 65599 * v12 )
        {
          v16 = *v13++;
          --v15;
          if ( (unsigned int)v16 >= 0x61 )
          {
            if ( (unsigned int)v16 > 0x7A )
            {
              if ( Flink )
              {
                if ( (unsigned __int16)v16 >= 0xC0u )
                  LOWORD(v16) = *((_WORD *)&Flink->Flink
                                + (v16 & 0xF)
                                + *((unsigned __int16 *)&Flink->Flink
                                  + ((unsigned __int8)v16 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v16 >> 8))))
                              + v16;
              }
            }
            else
            {
              LOWORD(v16) = v16 - 32;
            }
          }
        }
        *v14 = v12;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
      return v3;
    }
  }
  return result;
}
