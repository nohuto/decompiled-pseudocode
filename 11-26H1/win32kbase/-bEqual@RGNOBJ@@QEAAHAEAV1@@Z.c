/*
 * XREFs of ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140125C40
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x14000EE30 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

__int64 __fastcall RGNOBJ::bEqual(RGNOBJ *this, struct RGNOBJ *a2)
{
  REGION_CORE *v2; // r14
  __int64 v3; // rcx
  unsigned int v4; // ebp
  REGION_CORE *v5; // rbx
  unsigned int pScan; // esi
  struct SCAN *v8; // rdi
  struct SCAN *v9; // rbx
  unsigned int pscnTail; // eax

  v2 = (REGION_CORE *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v3 = *(_QWORD *)a2 + 24LL;
  v4 = 0;
  v5 = (REGION_CORE *)(v3 & -(__int64)(*(_QWORD *)a2 != 0LL));
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    LOBYTE(v4) = (*(unsigned int (__fastcall **)(REGION_CORE *, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                        + 88LL))(
                   v2,
                   v3 & -(__int64)(*(_QWORD *)a2 != 0LL)) != 0;
  }
  else if ( *((_DWORD *)v2 + 6) == *(_DWORD *)((v3 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x18) )
  {
    pScan = (unsigned int)REGION_CORE::get_pScan(v2);
    v8 = REGION_CORE::get_pScan(v5);
    v9 = REGION_CORE::get_pScan(v2);
    pscnTail = (unsigned int)REGION_CORE::get_pscnTail(v2);
    return memcmp(v9, v8, pscnTail - pScan) == 0;
  }
  return v4;
}
