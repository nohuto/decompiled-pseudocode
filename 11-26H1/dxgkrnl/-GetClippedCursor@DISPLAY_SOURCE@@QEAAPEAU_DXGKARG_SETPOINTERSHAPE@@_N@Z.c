/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1402CF050
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(ADAPTER_DISPLAY **this, char a2)
{
  __int64 v4; // rcx
  ADAPTER_DISPLAY *v5; // rax
  unsigned int *v6; // rsi
  unsigned int *v7; // r14
  unsigned __int64 v9; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this[1]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5563;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5563LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this[1] + 2);
  v5 = this[111];
  if ( v5 )
  {
    v6 = (unsigned int *)(v4 + 2468);
    v7 = (unsigned int *)(v4 + 2464);
LABEL_5:
    memset(v5, 0, 4 * *v7 * (unsigned __int64)*v6);
    return (struct _DXGKARG_SETPOINTERSHAPE *)(this + 108);
  }
  if ( a2 )
  {
    v7 = (unsigned int *)(v4 + 2464);
    v6 = (unsigned int *)(v4 + 2468);
    v9 = 4LL * (unsigned int)(*(_DWORD *)(v4 + 2468) * *(_DWORD *)(v4 + 2464));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v4 + 2468) * *(_DWORD *)(v4 + 2464)), 4uLL) )
      v9 = -1LL;
    v5 = (ADAPTER_DISPLAY *)operator new[](v9, 0x4B677844u, 256LL);
    this[111] = v5;
    if ( v5 )
      goto LABEL_5;
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)(this + 108);
}
