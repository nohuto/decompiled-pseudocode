/*
 * XREFs of DpiFdoStartNonLdaAdapter @ 0x140248970
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiFdoCreateSysMmAdapter @ 0x14023FEBC (DpiFdoCreateSysMmAdapter.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiFdoStartNonLdaAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  int SysMmAdapter; // ebx

  SysMmAdapter = DpiFdoCreateSysMmAdapter(a1, (__int64)a1->DeviceExtension);
  if ( SysMmAdapter < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 17000;
    return (unsigned int)SysMmAdapter;
  }
  SysMmAdapter = DpiFdoStartAdapter(a1, a2, a3, a4, a5, a6, a7);
  if ( SysMmAdapter < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 17016;
    return (unsigned int)SysMmAdapter;
  }
  return 0LL;
}
