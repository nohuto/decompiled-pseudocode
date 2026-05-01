/*
 * XREFs of ?IsBiDiLocale@@YAHK@Z @ 0x1801C47E0
 * Callers:
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsBiDiLocale(LCID a1)
{
  unsigned int v1; // ebx
  int LCData; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LCData = 0;
  if ( GetLocaleInfoW(a1, 0x20000070u, (LPWSTR)&LCData, 2) > 0 )
    LOBYTE(v1) = LCData == 1;
  return v1;
}
