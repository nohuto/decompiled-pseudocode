/*
 * XREFs of ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140369800
 * Callers:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140268B94 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140368B20 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140369220 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x140369FE0 (-DxgkGetMaximumAdapterCountInSession@@YAKXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCountInSession(DXGGLOBAL *this)
{
  unsigned int v2; // ecx

  if ( !*((_DWORD *)this + 345) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2977;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2977LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = 1024;
  if ( (unsigned int)(*((_DWORD *)this + 345) + 2) < 0x400 )
    return (unsigned int)(*((_DWORD *)this + 345) + 2);
  return v2;
}
