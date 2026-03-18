/*
 * XREFs of ?HasContextWithAnyHintType@DXGDEVICE@@QEAAEPEBW4_D3DKMT_CLIENTHINT@@I@Z @ 0x1401C309C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::HasContextWithAnyHintType(
        ADAPTER_RENDER **this,
        const enum _D3DKMT_CLIENTHINT *a2)
{
  ADAPTER_RENDER *v4; // rdx
  ADAPTER_RENDER *v5; // rcx
  ADAPTER_RENDER *v6; // rax
  ADAPTER_RENDER *v7; // rax
  unsigned int v8; // r8d
  int v9; // r9d
  const enum _D3DKMT_CLIENTHINT *v10; // rax

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5655;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5655LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
    return 0;
  v4 = (ADAPTER_RENDER *)(this + 62);
  v5 = this[62];
LABEL_5:
  v6 = 0LL;
  if ( v5 != v4 )
    v6 = v5;
  if ( !v6 )
    return 0;
  v7 = v5;
  v8 = 0;
  if ( v5 == v4 )
    v7 = 0LL;
  v9 = *((_DWORD *)v7 + 36);
  v10 = a2;
  while ( v9 != *v10 )
  {
    ++v8;
    ++v10;
    if ( v8 >= 8 )
    {
      v5 = *(ADAPTER_RENDER **)v5;
      goto LABEL_5;
    }
  }
  return 1;
}
