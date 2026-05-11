/*
 * XREFs of PinMatchChannelConfigToFormat @ 0x14003B07C
 * Callers:
 *     IntersectConvertDatarangeToFormat @ 0x14003AC04 (IntersectConvertDatarangeToFormat.c)
 *     PinValidateDataFormat @ 0x14003AE98 (PinValidateDataFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PinMatchChannelConfigToFormat(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int i; // r10d
  __int64 v5; // r10
  unsigned int v6; // ecx
  int v8; // [rsp+0h] [rbp-28h]
  _DWORD v9[9]; // [rsp+4h] [rbp-24h]

  v2 = 0LL;
  v3 = a2;
  for ( i = 0; v3; v3 &= v3 - 1 )
    ++i;
  if ( i < a1 )
  {
    if ( !i )
    {
      v6 = a1 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          return 3;
      }
      else
      {
        return 4;
      }
    }
  }
  else
  {
    v8 = 63;
    v9[0] = 1551;
    v9[1] = 255;
    v9[2] = 1599;
    v9[3] = 1;
    v9[4] = 4;
    if ( a1 )
    {
      v5 = a1;
      do
      {
        v3 |= a2 - (a2 & (a2 - 1));
        a2 &= a2 - 1;
        --v5;
      }
      while ( v5 );
    }
    while ( (unsigned int)v2 < 3 )
    {
      if ( v3 == v9[2 * v2 - 1] )
        return (unsigned int)v9[2 * v2];
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return v3;
}
