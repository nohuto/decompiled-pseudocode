/*
 * XREFs of RIMRetrieveRealAngularPhysicalValues @ 0x140210B84
 * Callers:
 *     RIMRetrieveNormalizationRange @ 0x14016A7E8 (RIMRetrieveNormalizationRange.c)
 * Callees:
 *     RIMComputePower @ 0x140195224 (RIMComputePower.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRetrieveRealAngularPhysicalValues(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  char v3; // r13
  unsigned int v6; // r14d
  __int16 v7; // bp
  int v8; // esi
  __int64 v10; // r12
  unsigned __int16 *v11; // rax
  int v12; // r9d
  unsigned int v13; // r14d
  unsigned int v14; // r8d
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+68h] [rbp+10h]
  int v20; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v3 = *(_BYTE *)(a1 + 32) & 0xF;
  v19 = 62831;
  v6 = 0;
  v7 = 0;
  v8 = -4;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 162);
  v20 = *a2;
  if ( !*a2 )
    return 1LL;
  v10 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( (*(_DWORD *)(a1 + 36) & 0xF) != 0 )
  {
    v11 = word_140272798;
    while ( *(_BYTE *)v11 != v3 )
    {
      ++v6;
      v11 += 2;
      if ( v6 >= 0xB )
        goto LABEL_11;
    }
    v7 = word_140272798[2 * v6 + 1];
LABEL_11:
    v13 = RIMComputePower(v7);
    if ( !v13 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 186);
      v12 = v20;
    }
    v14 = -v12;
    if ( v12 >= 0 )
      v14 = v12;
    if ( (unsigned int)v10 < 5 )
    {
      v15 = dword_14027B9C0[v10];
      if ( v15 == 4 )
      {
        if ( v7 > -4 || !(v14 / v13) )
          return v2;
        if ( v7 < -4 )
        {
          v16 = 62831;
          do
          {
            if ( v8 <= -8 )
              break;
            v17 = v2;
            --v8;
            ++v2;
            v16 = dword_14027B9D8[v17] + 10 * v16;
          }
          while ( v8 > v7 );
          v19 = v16;
        }
        v18 = 360 * v14 / v19;
      }
      else
      {
        if ( v15 != 3 || v7 > -2 )
          return v2;
        v18 = v14 / v13;
      }
      v2 = 1;
      *a2 = v18;
    }
  }
  return v2;
}
