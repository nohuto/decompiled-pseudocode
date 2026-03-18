/*
 * XREFs of rimExtractTouchInfo @ 0x1400F74A4
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1400F65C8 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     rimExtractData @ 0x1400F874C (rimExtractData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimExtractTouchInfo(__int64 a1, int a2, _DWORD *a3)
{
  int v4; // ebp
  int v5; // edi
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // ecx
  unsigned int i; // edx
  __int64 v12; // r9
  int v13; // r10d
  int v14; // r9d
  unsigned int v15; // edx
  int v16; // ecx
  __int64 v17; // r9
  int v18; // r10d
  int v19; // r9d
  _DWORD *v20; // rdi
  int v21; // ecx
  unsigned int j; // r8d
  __int64 v23; // r9
  int v24; // r10d
  int v25; // r9d
  int v26; // edx
  int v27; // edx
  int v28; // edx

  v4 = 0;
  v5 = 0;
  result = RIMIsTouchPointerDevice(a1);
  if ( !(_DWORD)result && *(_DWORD *)(v9 + 24) != 7 )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3089LL);
  v10 = 0;
  for ( i = 0; i < 6; ++i )
  {
    result = i;
    if ( *(_WORD *)(a1 + 16LL * i + 28) == 13 && *(_WORD *)(a1 + 16LL * i + 30) == 72 )
    {
      result = 2 * (i + 2LL);
      v12 = *(unsigned int *)(a1 + 16 * (i + 2LL));
      if ( (_DWORD)v12 != -1 )
      {
        v13 = *(_DWORD *)(a1 + 16LL * i + 40);
        result = 60 * v12;
        v14 = *(_DWORD *)(a1 + 16LL * i + 36);
        v10 = *(_DWORD *)(result + a1 + 460);
        if ( v13 != v14 )
        {
          v26 = *(_DWORD *)(result + a1 + 444);
          result = *(unsigned int *)(result + a1 + 440);
          if ( v26 != (_DWORD)result )
          {
            if ( v10 < (int)result )
            {
              v10 = v14;
            }
            else if ( v10 > v26 )
            {
              v10 = v13;
            }
            else
            {
              result = (unsigned int)((v13 - v14) * (v10 - (int)result) / (v26 - (int)result));
              v10 = v14 + result;
            }
          }
        }
        v4 = 1;
        break;
      }
    }
  }
  a3[6] = v10;
  v15 = 0;
  v16 = 0;
  while ( v15 < 6 )
  {
    result = v15;
    if ( *(_WORD *)(a1 + 16LL * v15 + 28) == 13 && *(_WORD *)(a1 + 16LL * v15 + 30) == 73 )
    {
      result = 2 * (v15 + 2LL);
      v17 = *(unsigned int *)(a1 + 16 * (v15 + 2LL));
      if ( (_DWORD)v17 != -1 )
      {
        v18 = *(_DWORD *)(a1 + 16LL * v15 + 40);
        result = 60 * v17;
        v19 = *(_DWORD *)(a1 + 16LL * v15 + 36);
        v16 = *(_DWORD *)(result + a1 + 460);
        if ( v18 != v19 )
        {
          v27 = *(_DWORD *)(result + a1 + 444);
          result = *(unsigned int *)(result + a1 + 440);
          if ( v27 != (_DWORD)result )
          {
            if ( v16 < (int)result )
            {
              v16 = v19;
            }
            else if ( v16 > v27 )
            {
              v16 = v18;
            }
            else
            {
              result = (unsigned int)((v18 - v19) * (v16 - (int)result) / (v27 - (int)result));
              v16 = v19 + result;
            }
          }
        }
        v5 = 1;
        break;
      }
    }
    ++v15;
  }
  a3[7] = v16;
  if ( v5 == 1 && v4 == 1 )
    a3[41] |= 1u;
  a3[5] = 1;
  v20 = a3 + 41;
  if ( (*(_DWORD *)(a1 + 368) & 0x4000) != 0 )
  {
    result = rimExtractData(a1, 13, 48, 4, (__int64)(a3 + 41));
    a3[51] = result;
  }
  else if ( a2 )
  {
    *v20 |= 4u;
    a3[51] = 512;
  }
  v21 = 0;
  for ( j = 0; j < 6; ++j )
  {
    result = j;
    if ( *(_WORD *)(a1 + 16LL * j + 28) == 13 && *(_WORD *)(a1 + 16LL * j + 30) == 63 )
    {
      result = 2 * (j + 2LL);
      v23 = *(unsigned int *)(a1 + 16 * (j + 2LL));
      if ( (_DWORD)v23 != -1 )
      {
        v24 = *(_DWORD *)(a1 + 16LL * j + 40);
        result = 60 * v23;
        v25 = *(_DWORD *)(a1 + 16LL * j + 36);
        v21 = *(_DWORD *)(result + a1 + 460);
        if ( v24 != v25 )
        {
          v28 = *(_DWORD *)(result + a1 + 444);
          result = *(unsigned int *)(result + a1 + 440);
          if ( v28 != (_DWORD)result )
          {
            if ( v21 < (int)result )
            {
              v21 = *(_DWORD *)(a1 + 16LL * j + 36);
            }
            else if ( v21 > v28 )
            {
              v21 = v24;
            }
            else
            {
              result = (unsigned int)((v24 - v25) * (v21 - (int)result) / (v28 - (int)result));
              v21 = v25 + result;
            }
          }
        }
        if ( a3 != (_DWORD *)-164LL )
          *v20 |= 2u;
        break;
      }
    }
  }
  a3[50] = v21;
  return result;
}
