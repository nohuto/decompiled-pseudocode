/*
 * XREFs of LdrpChangeMrdataProtection @ 0x180081A50
 * Callers:
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 * Callees:
 *     LdrpLocateMrdata @ 0x180081AC0 (LdrpLocateMrdata.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpChangeMrdataProtection(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1;
  if ( !LdrpMrdataBase )
    LdrpLocateMrdata();
  v4 = LdrpMrdataBase;
  v3 = LdrpMrdataSize;
  result = ZwProtectVirtualMemory(-1LL, &v4, &v3, v2, &v2);
  if ( (int)result < 0 )
    __fastfail(5u);
  return result;
}
