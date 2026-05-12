/*
 * XREFs of sub_140135FC4 @ 0x140135FC4
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

__int64 __fastcall sub_140135FC4(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rcx
  int v6; // eax

  v4 = sub_140136180(a1, a2);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), 1, 0) )
      {
        v4 = -1073741595;
      }
      else
      {
        v6 = sub_14013AAA4(v5, a2, 1LL, 0LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          v4 = sub_1401361CC(a1, a2, (unsigned int)v6);
          _InterlockedExchange((volatile __int32 *)(a2 + 32), 0);
        }
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v4;
}
