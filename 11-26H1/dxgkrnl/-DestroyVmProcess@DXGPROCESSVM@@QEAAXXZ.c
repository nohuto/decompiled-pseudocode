/*
 * XREFs of ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1401F5444
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140042470 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     Feature_MSRC100568_58756312__private_IsEnabledNoReportingNoInline @ 0x1400807DC (Feature_MSRC100568_58756312__private_IsEnabledNoReportingNoInline.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x1400808AC (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 *     ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x140195EC4 (-DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVM::DestroyVmProcess(DXGPROCESSVM *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  unsigned int v8; // edx

  if ( !(unsigned int)Feature_MSRC100568_58756312__private_IsEnabledNoReportingNoInline() )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      goto LABEL_8;
    v3 = *((_QWORD *)this + 8);
    goto LABEL_7;
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
LABEL_7:
    McTemplateK0ppqqpppz_EtwWriteTransfer(
      *((_QWORD *)this + 74),
      &EventDestroyDxgProcessVm,
      v2,
      this,
      *(_QWORD *)(v3 + 80),
      *((_DWORD *)this + 122),
      *((_DWORD *)this + 102),
      *(_QWORD *)(v3 + 88),
      *((_QWORD *)this + 75),
      *(_QWORD *)(*((_QWORD *)this + 74) + 592LL),
      *((_QWORD *)this + 78));
LABEL_8:
  v4 = (_QWORD *)((char *)this + 608);
  v5 = *(_QWORD *)(*((_QWORD *)this + 74) + 592LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v5 + 128));
  v6 = *((_QWORD *)this + 76);
  if ( v6 )
  {
    if ( *(_QWORD **)(v6 + 8) != v4 || (v7 = (_QWORD *)*((_QWORD *)this + 77), (_QWORD *)*v7 != v4) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *((_QWORD *)this + 77) = 0LL;
    *v4 = 0LL;
  }
  *(_QWORD *)(v5 + 136) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 128, 0LL);
  KeLeaveCriticalRegion();
  v8 = *((_DWORD *)this + 159);
  if ( v8 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 74), v8);
    *((_DWORD *)this + 159) = 0;
  }
  DXGVIRTUALMACHINE::DecrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(*((_QWORD *)this + 74) + 592LL));
  DXGPROCESS::ReleaseReference(*((DXGPROCESS **)this + 74));
  *((_QWORD *)this + 74) = 0LL;
}
