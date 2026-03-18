/*
 * XREFs of ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1401A3590
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1403FB6B0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

void *__fastcall ADAPTER_DISPLAY::GetDoDCddShadowSection(ADAPTER_DISPLAY *this, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  void *v7; // rcx
  __int64 v8; // rcx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1477;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      1477LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1478;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1478LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 3168LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1479;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsDisplayOnlyAdapter()",
      1479LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 4024 * v3;
  v7 = *(void **)(v6 + *((_QWORD *)this + 16) + 616);
  if ( v7 )
    ObfReferenceObject(v7);
  v8 = *((_QWORD *)this + 16);
  *a3 = *(_DWORD *)(v8 + v6 + 612);
  return *(void **)(v8 + v6 + 616);
}
