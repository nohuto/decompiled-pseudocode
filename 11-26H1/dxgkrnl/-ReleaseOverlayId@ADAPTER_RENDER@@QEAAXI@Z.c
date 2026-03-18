/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1401A9984
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1401EFCC8 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 2484LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3426;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"OverlayId < GetAdapter()->m_DriverCaps.MaxOverlays",
      3426LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + v3 + 103) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3427;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OverlayOwner[OverlayId] != NULL",
      3427LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_QWORD *)this + v3 + 103) = 0LL;
}
