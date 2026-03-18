/*
 * XREFs of ?GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1401ECBE0
 * Callers:
 *     GreSelectPen @ 0x1401926B0 (GreSelectPen.c)
 * Callees:
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     ?W32PidDCOwner@XDCOBJ@@QEAAKXZ @ 0x14010EFEC (-W32PidDCOwner@XDCOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall GrepSelectPen(DC **a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (unsigned int)XDCOBJ::W32PidDCOwner((XDCOBJ *)a1) )
    return GreDCSelectPen(*a1, a2);
  return v3;
}
