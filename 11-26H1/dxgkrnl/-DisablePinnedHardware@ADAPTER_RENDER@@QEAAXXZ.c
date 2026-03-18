/*
 * XREFs of ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x14030EEC4
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x14030DB28 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140416A0C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x14030EFB0 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::DisablePinnedHardware(ADAPTER_RENDER *this)
{
  DXGDEVICE *v2; // rdi
  DXGDEVICE *i; // rbx
  DXGDEVICE *v4; // rax
  DXGDEVICE *v5; // rcx
  DXGDEVICE *v6; // rdi
  DXGDEVICE *j; // rbx
  DXGDEVICE *v8; // rax
  DXGDEVICE *v9; // rcx

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2236;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2236LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (ADAPTER_RENDER *)((char *)this + 144);
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 18); ; i = *(DXGDEVICE **)i )
  {
    v4 = 0LL;
    if ( i != v2 )
      v4 = i;
    if ( !v4 )
      break;
    v5 = i;
    if ( i == v2 )
      v5 = 0LL;
    DXGDEVICE::DisablePinnedHardware(v5);
  }
  v6 = (ADAPTER_RENDER *)((char *)this + 160);
  for ( j = (DXGDEVICE *)*((_QWORD *)this + 20); ; j = *(DXGDEVICE **)j )
  {
    v8 = 0LL;
    if ( j != v6 )
      v8 = j;
    if ( !v8 )
      break;
    v9 = j;
    if ( j == v6 )
      v9 = 0LL;
    DXGDEVICE::DisablePinnedHardware(v9);
  }
}
