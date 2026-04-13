/*
 * XREFs of ??$Base64Encode@$0IB@@TLV@@YAXPEBEIAEAY0IB@D@Z @ 0x18004609C
 * Callers:
 *     ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x180046238 (--$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x18007C29C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TLV::Base64Encode<129>(unsigned __int8 *a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // edx
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // rbp
  unsigned int v12; // r10d
  unsigned int v13; // r9d
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // r11
  int v17; // edi
  unsigned int v18; // r9d
  unsigned __int8 v19; // r8
  __int64 v20; // r11
  __int64 v21; // r11
  char v22; // dl
  __int64 v23; // r11

  v6 = a2 / 3;
  v7 = a2 - 3 * v6;
  if ( v7 )
    v8 = (v7 != 1) + 3;
  else
    v8 = 1;
  LODWORD(v9) = v8 + 4 * v6;
  if ( (unsigned int)v9 <= 0x81 )
  {
    v10 = 0LL;
    if ( v6 )
    {
      v11 = v6;
      do
      {
        v12 = a1[1];
        v9 = *a1;
        v13 = a1[2];
        a1 += 3;
        *(_BYTE *)(v10 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v9 >> 2];
        v14 = (unsigned int)(v10 + 1);
        *(_BYTE *)(v14 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v12 >> 4) | (unsigned __int8)(16 * (v9 & 3))];
        v15 = (unsigned int)(v14 + 1);
        *(_BYTE *)(v15 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v13 >> 6) | (unsigned __int8)(4 * (v12 & 0xF))];
        v16 = (unsigned int)(v15 + 1);
        LOBYTE(v9) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v13 & 0x3F];
        *(_BYTE *)(v16 + a3) = v9;
        v10 = (unsigned int)(v16 + 1);
        --v11;
      }
      while ( v11 );
    }
    v17 = v7 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
      {
LABEL_13:
        *(_BYTE *)(v10 + a3) = 0;
        return v9;
      }
      v18 = a1[1];
      v19 = 16 * (*a1 & 3);
      *(_BYTE *)(v10 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int64)*a1 >> 2];
      v20 = (unsigned int)(v10 + 1);
      *(_BYTE *)(v20 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v18 >> 4) | v19];
      v21 = (unsigned int)(v20 + 1);
      LOBYTE(v9) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int8)(4 * (v18 & 0xF))];
      *(_BYTE *)(v21 + a3) = v9;
    }
    else
    {
      v22 = *a1 & 3;
      *(_BYTE *)(v10 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int64)*a1 >> 2];
      v21 = (unsigned int)(v10 + 1);
      LOBYTE(v9) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int8)(16 * v22)];
      *(_BYTE *)(v21 + a3) = v9;
      LODWORD(v21) = v21 + 1;
      *(_BYTE *)((unsigned int)v21 + a3) = 61;
    }
    v23 = (unsigned int)(v21 + 1);
    *(_BYTE *)(v23 + a3) = 61;
    v10 = (unsigned int)(v23 + 1);
    goto LABEL_13;
  }
  return v9;
}
