/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x18011F48C
 * Callers:
 *     ApiSetQueryApiSetPresenceEx @ 0x1800E2950 (ApiSetQueryApiSetPresenceEx.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x180031690 (ApiSetpSearchForApiSet.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x180116F14 (ApiSetQuerySchemaInfo_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(__int64 a1, unsigned __int16 *a2, bool *a3, bool *a4)
{
  unsigned int v4; // ebx
  _DWORD *v8; // rsi
  bool v9; // bp
  bool v10; // r12
  __int64 v12; // rcx
  char v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int16 *v15; // r10
  _WORD *v16; // rax
  int v17; // r8d
  unsigned int v18; // edi
  unsigned int v19; // r8d
  _WORD *v20; // rdx
  _WORD *v21; // rdx
  int v22; // r8d
  int v23; // eax
  unsigned int *v24; // rax
  unsigned int *v25; // rdx
  unsigned int v26; // r10d
  unsigned int v27; // r9d
  _WORD *v28; // r8
  _WORD *v29; // r8
  int v30; // r9d
  int v31; // eax

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = (_DWORD *)a1;
  v9 = 0;
  v10 = 0;
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetQuerySchemaInfo_V7(a1, (__int64)a2, a3, a4);
  if ( *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u )
  {
    a1 += 28LL;
    if ( *(_BYTE *)a1 == 7 )
      return ApiSetQuerySchemaInfo_V7(a1, (__int64)a2, a3, a4);
  }
  v12 = *a2;
  v13 = 0;
  if ( (unsigned __int16)v12 >= 8u )
  {
    v14 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v14 == 0x2D004900500041LL || v14 == 0x2D005400580045LL )
      v13 = 1;
  }
  v15 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  if ( v13 )
  {
    v16 = (unsigned __int16 *)((char *)v15 + v12);
    v17 = v12;
    do
    {
      if ( (unsigned int)v12 <= 1 )
        break;
      --v16;
      LODWORD(v12) = v12 - 2;
    }
    while ( *v16 != 45 );
    if ( (unsigned __int16)v12 >> 1 )
    {
      v18 = 0;
      v19 = (v17 - (unsigned int)(unsigned __int16)v12) >> 1;
      if ( v19 )
      {
        v20 = (unsigned __int16 *)((char *)v15 + (unsigned __int16)v12);
        if ( *v20 == 45 )
        {
          v21 = v20 + 1;
          v22 = v19 - 1;
          if ( v22 )
          {
            while ( v22 > 0 )
            {
              if ( (unsigned __int16)(*v21 - 48) > 9u )
                return (unsigned int)-1073741811;
              v23 = (unsigned __int16)*v21++;
              --v22;
              v18 = v23 + 2 * (5 * v18 - 24);
            }
            v24 = (unsigned int *)ApiSetpSearchForApiSet(v8, v15, (unsigned __int16)v12 >> 1);
            v25 = v24;
            if ( v24 )
            {
              v26 = 0;
              v27 = (v24[2] - v24[3]) >> 1;
              if ( v27 )
              {
                v28 = (_WORD *)((char *)v8 + v24[1] + v24[3]);
                if ( *v28 == 45 )
                {
                  v29 = v28 + 1;
                  v30 = v27 - 1;
                  if ( v30 )
                  {
                    while ( v30 > 0 )
                    {
                      if ( (unsigned __int16)(*v29 - 48) > 9u )
                        goto LABEL_35;
                      v31 = (unsigned __int16)*v29++;
                      --v30;
                      v26 = v31 + 2 * (5 * v26 - 24);
                    }
                    if ( v18 <= v26 )
                    {
                      v9 = 1;
                      if ( v25[5] )
                        v10 = *(_DWORD *)((char *)v8 + v25[4] + 16) != 0;
                    }
                  }
                }
              }
            }
            goto LABEL_35;
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( (unsigned __int16)v12 >= 0x14u )
    LOWORD(v12) = 20;
  if ( RtlCompareUnicodeStrings(
         *((PCWCH *)a2 + 1),
         (unsigned __int64)(unsigned __int16)v12 >> 1,
         L"schemaext-",
         0xAuLL,
         1u) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = ApiSetpSearchForApiSet(v8, *((unsigned __int16 **)a2 + 1), *a2 >> 1) != 0;
  v10 = v9;
LABEL_35:
  *a3 = v9;
  *a4 = v10;
  return v4;
}
