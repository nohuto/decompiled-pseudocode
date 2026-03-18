/*
 * XREFs of ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x140404560
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140430DD8 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::HasContextWithHintType(ADAPTER_RENDER **this, enum _D3DKMT_CLIENTHINT a2)
{
  ADAPTER_RENDER *v3; // rdx
  ADAPTER_RENDER *i; // rcx
  ADAPTER_RENDER *v5; // rax
  ADAPTER_RENDER *v6; // rax

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5614;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5614LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = (ADAPTER_RENDER *)(this + 62);
  for ( i = this[62]; ; i = *(ADAPTER_RENDER **)i )
  {
    v5 = 0LL;
    if ( i != v3 )
      v5 = i;
    if ( !v5 )
      break;
    v6 = i;
    if ( i == v3 )
      v6 = 0LL;
    if ( *((_DWORD *)v6 + 36) == 1 )
    {
      LOBYTE(v5) = 1;
      return (unsigned __int8)v5;
    }
  }
  return (unsigned __int8)v5;
}
