/*
 * XREFs of sub_14006FDFC @ 0x14006FDFC
 * Callers:
 *     sub_14018BE30 @ 0x14018BE30 (sub_14018BE30.c)
 * Callees:
 *     sub_14006DFE4 @ 0x14006DFE4 (sub_14006DFE4.c)
 *     sub_14006EF74 @ 0x14006EF74 (sub_14006EF74.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14006FDFC(char *Str2, unsigned __int16 a2, const void *a3)
{
  int v6; // esi
  const char *v7; // rax
  __int64 v8; // rbx
  _BYTE Dst[4]; // [rsp+20h] [rbp-348h] BYREF
  int v11; // [rsp+24h] [rbp-344h]

  memset_0(Dst, 0, 0x314uLL);
  v6 = -1073741275;
  v7 = (const char *)sub_14006DFE4(a2, a3);
  v8 = (__int64)v7;
  if ( v7 && !strnicmp(v7 + 20, Str2, 0x100uLL) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 16), 0, 0) )
    {
      return (unsigned int)-1073740024;
    }
    else
    {
      v6 = sub_14006EF74(v8);
      if ( v6 >= 0 )
      {
        v11 = *(_DWORD *)(v8 + 4);
        RtlDeleteElementGenericTable(&Table, Dst);
        return 0;
      }
    }
  }
  return (unsigned int)v6;
}
