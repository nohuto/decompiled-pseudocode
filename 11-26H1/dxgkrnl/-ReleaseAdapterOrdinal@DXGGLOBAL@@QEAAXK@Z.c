/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1401DF9E8
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140372410 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, unsigned int a2)
{
  ULONG v2; // ebx
  struct _RTL_BITMAP *v4; // rcx

  v2 = a2;
  if ( a2 >= 0x400 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4045;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Ordinal < MAX_ADAPTERS_CEILING", 4045LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 824));
  if ( v2 < DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
  {
    v4 = (struct _RTL_BITMAP *)((char *)this + 872);
  }
  else
  {
    v2 -= DXGGLOBAL::GetMaximumGlobalAdapterCount(this);
    v4 = (struct _RTL_BITMAP *)((char *)this + 888);
  }
  RtlClearBits(v4, v2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 103);
}
