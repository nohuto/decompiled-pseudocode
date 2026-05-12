/*
 * XREFs of StorPortDebugPrint @ 0x1400343F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400344E0 @ 0x1400344E0 (sub_1400344E0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

ULONG StorPortDebugPrint(ULONG Level, const CHAR *a2, ...)
{
  ULONG v2; // edi
  __int64 v3; // rbx
  ULONG TimeIncrement; // eax
  CHAR Prefix[16]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v7; // [rsp+48h] [rbp-40h]
  __int64 v8; // [rsp+58h] [rbp-30h]
  va_list va; // [rsp+A0h] [rbp+18h] BYREF

  va_start(va, a2);
  v2 = Level;
  *(_OWORD *)Prefix = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( Level )
  {
    if ( Level == 1 || Level == 2 )
    {
      v2 = 2;
    }
    else if ( Level == 3 )
    {
      v2 = 3;
    }
  }
  else
  {
    v2 = 1;
  }
  v3 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  sub_1400344E0(Prefix, 40LL, "%I64u - STORMINI: ", v3 * TimeIncrement);
  return vDbgPrintExWithPrefix(Prefix, 0x5Au, v2, a2, va);
}
