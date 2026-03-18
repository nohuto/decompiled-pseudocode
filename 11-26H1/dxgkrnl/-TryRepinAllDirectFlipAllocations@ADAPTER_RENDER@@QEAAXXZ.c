/*
 * XREFs of ?TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ @ 0x14030FF14
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030E300 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ @ 0x140310000 (-TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::TryRepinAllDirectFlipAllocations(ADAPTER_RENDER *this)
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
    WdLogGlobalForLineNumber = 2282;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2282LL, 0LL, 0LL, 0LL, 0LL);
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
    DXGDEVICE::TryRepinAllDirectFlipAllocations(v5);
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
    DXGDEVICE::TryRepinAllDirectFlipAllocations(v9);
  }
}
