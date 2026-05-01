/*
 * XREFs of AslEnvExpandStrings @ 0x18018EAF4
 * Callers:
 *     AslEnvExpandStrings2 @ 0x18015CA50 (AslEnvExpandStrings2.c)
 * Callees:
 *     AslEnvVarQuery @ 0x18018ECBC (AslEnvVarQuery.c)
 *     AslLogCallPrintf @ 0x1802C3E28 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvExpandStrings(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4, unsigned __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v10; // r10
  unsigned int v11; // ebp
  __int64 v12; // r14
  _WORD *v13; // rdi
  unsigned __int64 v15; // r15
  int v16; // eax
  unsigned __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v6 = a5;
  v7 = a3;
  v18 = 0LL;
  v10 = a1;
  v11 = 0;
  v12 = 0LL;
  if ( !a3 )
  {
LABEL_9:
    if ( v6 )
      *a4 = 0;
    else
      v11 = -1073741789;
    goto LABEL_11;
  }
  do
  {
    if ( *a2 == 37 )
    {
      v15 = 0LL;
      v13 = a2 + 1;
      if ( v7 != 1 )
      {
        do
        {
          if ( *v13 == 37 )
            break;
          ++v13;
          ++v15;
        }
        while ( v15 < v7 - 1 );
        if ( v15 && v15 < v7 - 1 )
        {
          v16 = AslEnvVarQuery(v10, a2 + 1, v15, a4, v6, &v18);
          if ( v16 == -1073741789 )
          {
            v12 += v18 - 1;
            v7 += -2LL - v15;
          }
          else
          {
            if ( v16 < 0 )
            {
              if ( v16 != -1073741568 )
                AslLogCallPrintf(1LL, "AslEnvExpandStrings", 698LL, "AslEnvVarQuery failed [%x]", v16);
              ++v12;
              v13 = a2;
              --v7;
              goto LABEL_23;
            }
            v12 += v18;
            v7 += -2LL - v15;
            if ( v6 > v18 )
            {
              v6 -= v18;
              a4 += v18;
LABEL_23:
              v10 = a1;
              goto LABEL_7;
            }
          }
          v11 = -1073741789;
          goto LABEL_23;
        }
      }
    }
    if ( v11 != -1073741789 )
    {
      if ( v6 <= 1 )
      {
        v11 = -1073741789;
      }
      else
      {
        --v6;
        *a4++ = *a2;
      }
    }
    ++v12;
    v13 = a2;
    --v7;
LABEL_7:
    a2 = v13 + 1;
  }
  while ( v7 );
  if ( v11 != -1073741789 )
    goto LABEL_9;
LABEL_11:
  if ( a6 )
    *a6 = v12 + 1;
  return v11;
}
