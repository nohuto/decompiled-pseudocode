/*
 * XREFs of sub_140134A98 @ 0x140134A98
 * Callers:
 *     sub_14008AB58 @ 0x14008AB58 (sub_14008AB58.c)
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008C144 @ 0x14008C144 (sub_14008C144.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_14008CE14 @ 0x14008CE14 (sub_14008CE14.c)
 *     sub_14008D024 @ 0x14008D024 (sub_14008D024.c)
 *     sub_14008E060 @ 0x14008E060 (sub_14008E060.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14008E63C @ 0x14008E63C (sub_14008E63C.c)
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 *     sub_14008EAAC @ 0x14008EAAC (sub_14008EAAC.c)
 * Callees:
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140137D80 @ 0x140137D80 (sub_140137D80.c)
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 */

__int64 __fastcall sub_140134A98(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int32 v5; // ebp

  v4 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
  {
    return (unsigned int)-2147483631;
  }
  else
  {
    v5 = _InterlockedExchange((volatile __int32 *)a2, 3);
    if ( v5 == 2 )
    {
      if ( !*(_QWORD *)(a2 + 40)
        && !*(_QWORD *)(a2 + 48)
        && (LOBYTE(v4) = 1,
            v4 = sub_140137D80(*(_QWORD *)a1, v4, *(unsigned __int16 *)(a2 + 24), 2048, a2 + 40, a2 + 48),
            v4 < 0)
        || (v4 = sub_14013A45C(a1, a2), v4 < 0) )
      {
        v4 = sub_1401361CC(a1, a2, (unsigned int)v4);
      }
    }
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    if ( ((v5 - 1) & 0xFFFFFFFC) != 0 || v5 == 3 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
    }
  }
  return (unsigned int)v4;
}
