/*
 * XREFs of ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x140260820
 * Callers:
 *     ?SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14006C90C (-SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x140095A48 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x14025965C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1402DB0E0 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1403E41CC (-ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::ReleaseDisplayManagerObject(DMMVIDEOPRESENTTARGET *this)
{
  VIDPN_MGR *v2; // rdi
  struct DXGADAPTER *ContainingAdapter; // rsi
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // rax

  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  if ( *((_QWORD *)this + 68) )
  {
    v2 = *(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v2);
    if ( (int)DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(
                *((DXGDISPLAYMANAGEROBJECT **)this + 68),
                *(struct _LUID *)((char *)ContainingAdapter + 412),
                *((_DWORD *)this + 6)) < 0 )
    {
      WdLogSingleEntry1(1LL);
      WdLogGlobalForLineNumber = 734;
    }
    PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v2, *((_DWORD *)this + 6));
    if ( PathFromTargetInClientVidPn )
      *(_BYTE *)(4024LL * *(unsigned int *)(*((_QWORD *)PathFromTargetInClientVidPn + 11) + 24LL)
               + *(_QWORD *)(*((_QWORD *)ContainingAdapter + 395) + 128LL)
               + 765) = 1;
    *((_QWORD *)this + 68) = 0LL;
  }
  return 0LL;
}
