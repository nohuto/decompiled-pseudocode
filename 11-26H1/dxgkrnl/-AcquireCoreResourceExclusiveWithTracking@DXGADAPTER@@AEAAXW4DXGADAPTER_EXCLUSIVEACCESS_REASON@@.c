/*
 * XREFs of ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1402FE3C4
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14030D4B0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 * Callees:
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402FE460 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1402FE630 (--1DXGDEADLOCK_TRACKER@@QEAA@XZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1402FE6F4 (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(__int64 a1, int a2, bool a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  _BYTE v8[400]; // [rsp+20h] [rbp-198h] BYREF

  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v8, (struct DXGADAPTER *)a1, a3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 1u);
    DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v8);
  }
  *(_DWORD *)(a1 + 4964) = a2;
  result = DXGGLOBAL::GetFirstProfilerInterface(v6);
  *(_DWORD *)(a1 + 4968) = result;
  return result;
}
