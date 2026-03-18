/*
 * XREFs of HvpProtectBinPartial @ 0x1408B955C
 * Callers:
 *     HvpMapHiveImage @ 0x14085D694 (HvpMapHiveImage.c)
 *     HvpSetRangeProtection @ 0x1408B8E6C (HvpSetRangeProtection.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     CmpProtectPoolEx @ 0x1404C9778 (CmpProtectPoolEx.c)
 *     MmSetPageProtection @ 0x1405096F0 (MmSetPageProtection.c)
 */

__int64 __fastcall HvpProtectBinPartial(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    MmSetPageProtection(a2 + a4, a5, a6 != 0 ? 4 : 2);
    return 0;
  }
  else
  {
    v7 = 0;
    v8 = a2 + a4;
    if ( a6 )
    {
      if ( !(unsigned int)CmpProtectPoolEx(a2, v8, a5, 4u) )
        return (unsigned int)-1073741670;
    }
    else
    {
      CmpProtectPoolEx(a2, v8, a5, 2u);
    }
  }
  return v7;
}
