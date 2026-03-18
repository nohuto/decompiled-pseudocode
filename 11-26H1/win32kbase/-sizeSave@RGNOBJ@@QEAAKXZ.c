/*
 * XREFs of ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x14011FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::sizeSave(RGNOBJ *this)
{
  REGION_CORE *v1; // rcx
  int v3; // ebx
  struct SCAN *pScan; // r8
  int i; // eax

  v1 = (REGION_CORE *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 248LL))(v1);
  v3 = *((_DWORD *)v1 + 6);
  pScan = REGION_CORE::get_pScan(v1);
  for ( i = 0; v3; --v3 )
  {
    i += *(_DWORD *)pScan >> 1;
    pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
  }
  return (unsigned int)(16 * i);
}
