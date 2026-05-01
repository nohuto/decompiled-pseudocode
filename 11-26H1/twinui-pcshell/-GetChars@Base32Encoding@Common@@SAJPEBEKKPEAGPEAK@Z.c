/*
 * XREFs of ?GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z @ 0x1806793DC
 * Callers:
 *     ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x180571C18 (-Base32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAEK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Common::Base32Encoding::GetChars(
        const unsigned __int8 *a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int *a5)
{
  __int64 v5; // r10
  unsigned int v7; // r8d
  __int64 v8; // r14
  const unsigned __int8 *v9; // r11
  unsigned __int64 v10; // r9
  unsigned __int8 v11; // bl
  __int64 v12; // r10
  unsigned __int8 v13; // r9
  __int64 v14; // r10
  unsigned __int8 v15; // bl
  unsigned __int8 v16; // r9
  __int64 v17; // r10

  v5 = 0LL;
  if ( (unsigned int)(a3 - 13) > 0x7FFFFFF1 )
    return 2147942487LL;
  v7 = 2;
  v8 = 2LL;
  v9 = a1 + 2;
  do
  {
    v10 = *(v9 - 2);
    if ( v7 - 1 >= 8 )
      v11 = 0;
    else
      v11 = *(v9 - 1);
    a4[v5] = a0123456789abcd[v10 >> 3];
    v12 = (unsigned int)(v5 + 1);
    a4[v12] = a0123456789abcd[((unsigned __int64)v11 >> 6) | (unsigned __int8)(4 * (v10 & 7))];
    v5 = (unsigned int)(v12 + 1);
    if ( v7 - 1 < 8 )
    {
      v13 = v7 >= 8 ? 0 : *v9;
      a4[v5] = a0123456789abcd[((unsigned __int64)v11 >> 1) & 0x1F];
      v14 = (unsigned int)(v5 + 1);
      a4[v14] = a0123456789abcd[((unsigned __int64)v13 >> 4) | (unsigned __int8)(16 * (v11 & 1))];
      v5 = (unsigned int)(v14 + 1);
      if ( v7 < 8 )
      {
        v15 = v7 + 1 >= 8 ? 0 : v9[1];
        a4[v5] = a0123456789abcd[((unsigned __int64)v15 >> 7) | (unsigned __int8)(2 * (v13 & 0xF))];
        v5 = (unsigned int)(v5 + 1);
        if ( v7 + 1 < 8 )
        {
          if ( v7 + 2 >= 8 )
            v16 = 0;
          else
            v16 = v9[2];
          a4[v5] = a0123456789abcd[((unsigned __int64)v15 >> 2) & 0x1F];
          v17 = (unsigned int)(v5 + 1);
          a4[v17] = a0123456789abcd[((unsigned __int64)v16 >> 5) | (unsigned __int8)(8 * (v15 & 3))];
          v5 = (unsigned int)(v17 + 1);
          if ( v7 + 2 < 8 )
          {
            a4[v5] = a0123456789abcd[v16 & 0x1F];
            v5 = (unsigned int)(v5 + 1);
          }
        }
      }
    }
    v7 += 5;
    v9 += 5;
    --v8;
  }
  while ( v8 );
  *a5 = 13;
  return 0LL;
}
