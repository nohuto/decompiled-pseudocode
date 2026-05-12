/*
 * XREFs of sub_140136054 @ 0x140136054
 * Callers:
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008CE14 @ 0x14008CE14 (sub_14008CE14.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 * Callees:
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_14013AAA4 @ 0x14013AAA4 (sub_14013AAA4.c)
 */

__int64 __fastcall sub_140136054(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // r10d

  result = 3221225987LL;
  if ( a3 != -1073741309 )
  {
    result = sub_140136180(a1, a2);
    if ( (int)result >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
      {
        return 2147483665LL;
      }
      else
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), 0, 1) == 1 )
        {
          LOBYTE(v7) = v8 < 0;
          result = sub_14013AAA4(a1, v6, 0LL, v7);
          if ( (int)result < 0 )
            result = sub_1401361CC(a1, a2, (unsigned int)result);
        }
        else
        {
          result = 3221225701LL;
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  return result;
}
