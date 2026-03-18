/*
 * XREFs of ?GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140175100
 * Callers:
 *     <none>
 * Callees:
 *     GreDCSelectBrush @ 0x14003A7C0 (GreDCSelectBrush.c)
 *     ?W32PidDCOwner@XDCOBJ@@QEAAKXZ @ 0x14010EFEC (-W32PidDCOwner@XDCOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall GrepSelectBrush(struct XDCOBJ *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (unsigned int)XDCOBJ::W32PidDCOwner(a1) )
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  return v3;
}
