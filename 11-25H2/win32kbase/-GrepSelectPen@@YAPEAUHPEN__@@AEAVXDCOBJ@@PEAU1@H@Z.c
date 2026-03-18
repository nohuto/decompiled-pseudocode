/*
 * XREFs of ?GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1401C70C0
 * Callers:
 *     GreSelectPen @ 0x140156820 (GreSelectPen.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     GreDCSelectPen @ 0x140090080 (GreDCSelectPen.c)
 */

__int64 __fastcall GrepSelectPen(DC **a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*a1) + 8) & 0xFFFFFFFE) != 0 )
    return GreDCSelectPen(*a1, a2);
  return v3;
}
