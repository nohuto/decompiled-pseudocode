/*
 * XREFs of rimExtractGeometryPoints @ 0x140156B18
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1400F65C8 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimExtractGeometryPoints(__int16 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned __int8 v11; // bp
  int v12; // r14d
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rax
  __int64 result; // rax
  _BYTE *v17; // r8
  unsigned int v18; // r10d
  __int64 v19; // r11
  unsigned __int8 v20; // al
  unsigned int v21; // ecx
  __int64 v22; // rax
  int v23; // edx

  v5 = a5;
  v8 = 0;
  v9 = 0;
  v10 = a5;
  v11 = 0;
  v12 = a5 & 7;
  if ( (a5 & 7) != 0 )
    v11 = (1 << v12) - 1;
  if ( (unsigned __int16)(a1 - 48) > 1u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3284LL);
  if ( a5 > 0x20 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3285LL);
    goto LABEL_8;
  }
  if ( a5 < 8 )
  {
LABEL_10:
    if ( v10 && v8 < 4 )
      *(_BYTE *)(v8 + a3) = v11 & *(_BYTE *)(v9 + a4);
  }
  else
  {
LABEL_8:
    while ( v8 < 4 )
    {
      v13 = v9;
      v10 -= 8;
      ++v9;
      v14 = *(_BYTE *)(v13 + a4);
      v15 = v8++;
      *(_BYTE *)(v15 + a3) = v14;
      if ( v10 < 8 )
        goto LABEL_10;
    }
  }
  result = a2 + 12;
  v17 = (_BYTE *)(a2 + 16);
  if ( a1 != 49 )
    v17 = (_BYTE *)(a2 + 12);
  v18 = 0;
  if ( v10 )
  {
    v22 = v9++;
    v23 = *(unsigned __int8 *)(v22 + a4);
    result = ~v11;
    *v17 = (int)(result & v23) >> v12;
    v5 = v12 + a5 - 8;
  }
  for ( ; v5; ++v9 )
  {
    if ( v18 >= 4 || v9 >= 8 )
      break;
    v19 = v18 + 1;
    v20 = *(_BYTE *)(v9 + a4);
    if ( (a5 & 7) != 0 )
    {
      v17[v18] |= (v11 & v20) << (8 - v12);
      if ( (unsigned int)v19 < 4 )
        v17[v19] = (*(unsigned __int8 *)(v9 + a4) & ~v11) >> v12;
    }
    else
    {
      v17[v18] = v20;
    }
    result = v5;
    v21 = v5 - 8;
    v5 = 0;
    ++v18;
    if ( (unsigned int)result > 8 )
      v5 = v21;
  }
  return result;
}
