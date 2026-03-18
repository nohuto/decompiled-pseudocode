/*
 * XREFs of ?CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ @ 0x140273A04
 * Callers:
 *     ?MonitorInitializeGlobal@@YAJXZ @ 0x14026F480 (-MonitorInitializeGlobal@@YAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0USB4_POWERON_WORK_QUEUE@@QEAA@XZ @ 0x1402774B8 (--0USB4_POWERON_WORK_QUEUE@@QEAA@XZ.c)
 *     ?Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ @ 0x14027808C (-Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ.c)
 */

__int64 MONITOR_MGR::CreateStaticUSB4Class(void)
{
  _QWORD *v0; // rbx
  __int64 result; // rax

  v0 = (_QWORD *)operator new(0xB0uLL, 0x4D677844u, 64LL);
  if ( v0 )
  {
    *v0 = 0LL;
    v0[2] = 0LL;
    v0[3] = 0LL;
    v0[4] = 0LL;
    *((_DWORD *)v0 + 10) = 0;
    *((_DWORD *)v0 + 11) = -1;
    *((_DWORD *)v0 + 12) = 1;
    USB4_POWERON_WORK_QUEUE::USB4_POWERON_WORK_QUEUE((USB4_POWERON_WORK_QUEUE *)(v0 + 9));
    MONITOR_MGR::_pUsb4Manager = v0;
    v0[8] = v0 + 7;
    v0[7] = v0 + 7;
    return USB4_HOSTROUTER_MGR::Initalize((USB4_HOSTROUTER_MGR *)(v0 + 7));
  }
  else
  {
    MONITOR_MGR::_pUsb4Manager = 0LL;
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 5142;
  }
  return result;
}
