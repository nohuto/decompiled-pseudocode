/*
 * XREFs of sub_18000BC00 @ 0x18000BC00
 * Callers:
 *     sub_18000BDFC @ 0x18000BDFC (sub_18000BDFC.c)
 * Callees:
 *     sub_18000C10C @ 0x18000C10C (sub_18000C10C.c)
 *     sub_18000C13C @ 0x18000C13C (sub_18000C13C.c)
 */

__int64 __fastcall sub_18000BC00(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 1LL;
        LOBYTE(result) = sub_18000C13C();
      }
      else
      {
        LOBYTE(result) = sub_18000C10C();
      }
      return (unsigned __int8)result;
    }
    else
    {
      return sub_18000BC58(a1, a3);
    }
  }
  else
  {
    LOBYTE(a1) = a3 != 0;
    return sub_18000BD70(a1);
  }
}
