/*
 * XREFs of KiIsSecureFlushRequired @ 0x140414F58
 * Callers:
 *     KeFlushSingleCurrentTb @ 0x1405F35E0 (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405F3764 (KeFlushSingleTb.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 */

__int64 __fastcall KiIsSecureFlushRequired(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (_DWORD)a2 == 1 )
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      return KeGetCurrentThread()->ApcState.Process->SecureState.EntireField != 0;
    return 0LL;
  }
  if ( (_DWORD)a2 )
    return 0LL;
  if ( (int)a3 >= 0 )
    return 0LL;
  LOBYTE(a3) = a3 & 9;
  if ( (_BYTE)a3 != 1 )
    return 0LL;
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL, a2, a3, a4) >> 13) & 2;
}
