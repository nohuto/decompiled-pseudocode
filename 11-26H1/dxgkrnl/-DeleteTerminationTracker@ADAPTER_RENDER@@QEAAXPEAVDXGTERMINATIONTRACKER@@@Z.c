/*
 * XREFs of ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1403892E0
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9FEC (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::DeleteTerminationTracker(
        struct _PAGED_LOOKASIDE_LIST *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  if ( a2 )
  {
    ExFreeToPagedLookasideList(this + 12, a2);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4944;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTracker", 4944LL, 0LL, 0LL, 0LL, 0LL);
  }
}
