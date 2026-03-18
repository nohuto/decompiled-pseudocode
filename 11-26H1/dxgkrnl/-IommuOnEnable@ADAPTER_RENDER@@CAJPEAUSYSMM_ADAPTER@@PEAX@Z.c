/*
 * XREFs of ?IommuOnEnable@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1401A9580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::IommuOnEnable(struct SYSMM_ADAPTER *a1, _QWORD *a2)
{
  int v2; // ebx

  if ( !a2[96] )
    return 0LL;
  v2 = (*(__int64 (**)(void))(*(_QWORD *)(a2[95] + 8LL) + 1168LL))();
  if ( v2 >= 0 )
    return 0LL;
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 5430;
  return (unsigned int)v2;
}
