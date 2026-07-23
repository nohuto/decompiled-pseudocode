/*
 * XREFs of AppendUlongAsHexadecimalW @ 0x140650428
 * Callers:
 *     CarInitializeTelemetryData @ 0x14064D870 (CarInitializeTelemetryData.c)
 * Callees:
 *     <none>
 */

void __fastcall AppendUlongAsHexadecimalW(__int64 a1, int a2)
{
  __int64 v2; // r8
  char v4; // r10
  unsigned int v5; // r9d
  __int64 v6; // rax
  __int16 v7; // cx
  _DWORD v8[8]; // [rsp+0h] [rbp-20h]

  if ( a1 )
  {
    v2 = 0LL;
    v4 = 0;
    v5 = -268435456;
    do
    {
      v8[0] = 3211312;
      v8[1] = 3342386;
      v8[2] = 3473460;
      v6 = (a2 & v5) >> (4 * v4 + 28);
      v8[3] = 3604534;
      v8[4] = 3735608;
      v8[5] = 4325441;
      v8[6] = 4456515;
      v8[7] = 4587589;
      if ( (unsigned int)v6 > 0xF )
        v7 = 63;
      else
        v7 = *((_WORD *)v8 + v6);
      v5 >>= 4;
      *(_WORD *)(a1 + 2 * v2++) = v7;
      --v4;
    }
    while ( v2 < 8 );
  }
}
