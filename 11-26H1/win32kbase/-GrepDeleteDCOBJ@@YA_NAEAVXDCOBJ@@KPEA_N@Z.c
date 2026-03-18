/*
 * XREFs of ?GrepDeleteDCOBJ@@YA_NAEAVXDCOBJ@@KPEA_N@Z @ 0x14013B80C
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x14003DC30 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 */

char __fastcall GrepDeleteDCOBJ(DC **a1, int a2, bool *a3)
{
  if ( (a2 & 0x400000) != 0 )
    *((_DWORD *)*a1 + 9) &= ~8u;
  if ( (*((_DWORD *)*a1 + 9) & 8) != 0 )
  {
    *a3 = 1;
    XDCOBJ::bCleanDC(a1, HIBYTE(a2) & 1);
    return 1;
  }
  else
  {
    *a3 = 0;
    return XDCOBJ::bDelete(a1, a2);
  }
}
