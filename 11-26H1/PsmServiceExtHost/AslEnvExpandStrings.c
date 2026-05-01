/*
 * XREFs of AslEnvExpandStrings @ 0x1800A11F8
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1800A13C0 (AslEnvExpandStrings2.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslEnvVarQuery @ 0x1800A194C (AslEnvVarQuery.c)
 */

__int64 __fastcall AslEnvExpandStrings(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4, unsigned __int64 a5, _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 v10; // r10
  unsigned int v11; // ebp
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  _WORD *v14; // rdi
  int v15; // eax

  v7 = a3;
  v10 = a1;
  v11 = 0;
  v12 = 0LL;
  if ( !a3 )
  {
LABEL_25:
    if ( a5 )
      *a4 = 0;
    else
      v11 = -1073741789;
    goto LABEL_28;
  }
  do
  {
    if ( *a2 == 37 )
    {
      v13 = 0LL;
      v14 = a2 + 1;
      if ( v7 != 1 )
      {
        do
        {
          if ( *v14 == 37 )
            break;
          ++v14;
          ++v13;
        }
        while ( v13 < v7 - 1 );
        if ( v13 && v13 < v7 - 1 )
        {
          v15 = AslEnvVarQuery(v10, a2 + 1, v13);
          if ( v15 == -1073741789 )
          {
            --v12;
            v7 += -2LL - v13;
          }
          else
          {
            if ( v15 < 0 )
            {
              if ( v15 != -1073741568 )
                AslLogCallPrintf(1LL, "AslEnvExpandStrings", 698LL, "AslEnvVarQuery failed [%x]", v15);
              ++v12;
              v14 = a2;
              --v7;
              goto LABEL_11;
            }
            v7 += -2LL - v13;
            if ( a5 )
            {
LABEL_11:
              v10 = a1;
              goto LABEL_23;
            }
          }
          v11 = -1073741789;
          goto LABEL_11;
        }
      }
    }
    if ( v11 != -1073741789 )
    {
      if ( a5 <= 1 )
      {
        v11 = -1073741789;
      }
      else
      {
        --a5;
        *a4++ = *a2;
      }
    }
    ++v12;
    v14 = a2;
    --v7;
LABEL_23:
    a2 = v14 + 1;
  }
  while ( v7 );
  if ( v11 != -1073741789 )
    goto LABEL_25;
LABEL_28:
  if ( a6 )
    *a6 = v12 + 1;
  return v11;
}
