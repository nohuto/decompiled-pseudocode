/*
 * XREFs of ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x1401A3360
 * Callers:
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1403ED4A8 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1403F90DC (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x14040A434 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

struct _OPM_HANDLE_MAPPING *__fastcall ADAPTER_DISPLAY::FindOpmAdapterMapping(ADAPTER_DISPLAY *this, __int64 a2)
{
  struct _OPM_HANDLE_MAPPING *result; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6981;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6981LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGFASTMUTEX::IsOwner((ADAPTER_DISPLAY *)((char *)this + 376)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6982;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6982LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( result = (struct _OPM_HANDLE_MAPPING *)*((_QWORD *)this + 44);
        result != (ADAPTER_DISPLAY *)((char *)this + 352);
        result = *(struct _OPM_HANDLE_MAPPING **)result )
  {
    if ( *((_QWORD *)result + 3) == a2 )
      return result;
  }
  return 0LL;
}
