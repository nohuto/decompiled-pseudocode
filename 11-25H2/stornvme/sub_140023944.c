/*
 * XREFs of sub_140023944 @ 0x140023944
 * Callers:
 *     sub_140010C10 @ 0x140010C10 (sub_140010C10.c)
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 */

void __fastcall sub_140023944(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v5 = 0LL;
    v1 = a1 + 4320;
    if ( a1 != -4320 )
    {
      while ( !(unsigned int)StorPortExtendedFunction(37LL, a1, v1, &v5) && v5 )
      {
        v4 = v5 - 112;
        if ( v5 != 112 )
        {
          if ( *(_QWORD *)(v4 + 96) )
            sub_14000CF50(a1, 4232LL, (__int64 *)(v4 + 96), *(_QWORD *)(v4 + 104));
          StorPortExtendedFunction(1LL, a1, v4, v3);
        }
      }
    }
  }
}
