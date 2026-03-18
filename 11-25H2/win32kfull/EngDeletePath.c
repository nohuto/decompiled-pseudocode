/*
 * XREFs of EngDeletePath @ 0x1400D49A0
 * Callers:
 *     EngLineTo @ 0x14006ABB0 (EngLineTo.c)
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x1400D3718 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 *     NtGdiEngDeletePath @ 0x1400D41D0 (NtGdiEngDeletePath.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D4E94 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall EngDeletePath(PATHOBJ *ppo)
{
  if ( ppo )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)ppo);
    Win32FreePool(ppo);
  }
}
