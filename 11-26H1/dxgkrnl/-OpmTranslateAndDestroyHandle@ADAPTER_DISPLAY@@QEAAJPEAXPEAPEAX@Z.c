/*
 * XREFs of ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1403F90DC
 * Callers:
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1403F8EA0 (DxgkOpmTranslateAndDestroyHandle.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     Feature_1691578680__private_IsEnabledDeviceUsageNoInline @ 0x1400706D4 (Feature_1691578680__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x1401A3360 (-FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1403F445C (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(
        ADAPTER_DISPLAY *this,
        struct _OPM_HANDLE_MAPPING *OpmAdapterMapping,
        void **a3)
{
  __int64 v6; // rax
  struct _OPM_HANDLE_MAPPING **v8; // rcx
  void **v9; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6894;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6894LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGFASTMUTEX::IsOwner((ADAPTER_DISPLAY *)((char *)this + 376)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6895;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6895LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)Feature_1691578680__private_IsEnabledDeviceUsageNoInline() )
  {
    OpmAdapterMapping = ADAPTER_DISPLAY::FindOpmAdapterMapping(this, (__int64)OpmAdapterMapping);
    if ( !OpmAdapterMapping )
    {
      WdLogSingleEntry0(1LL);
      v6 = 6906LL;
LABEL_8:
      WdLogGlobalForLineNumber = v6;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"OPM passed in an invalid hOpmAdapterHandle!",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3223192844LL;
    }
  }
  else if ( !ADAPTER_DISPLAY::OpmValidateAdapterHandle(this, OpmAdapterMapping) )
  {
    WdLogSingleEntry0(1LL);
    v6 = 6916LL;
    goto LABEL_8;
  }
  v8 = *(struct _OPM_HANDLE_MAPPING ***)OpmAdapterMapping;
  *a3 = (void *)*((_QWORD *)OpmAdapterMapping + 2);
  if ( v8[1] != OpmAdapterMapping || (v9 = (void **)*((_QWORD *)OpmAdapterMapping + 1), *v9 != OpmAdapterMapping) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = (struct _OPM_HANDLE_MAPPING *)v9;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(OpmAdapterMapping);
  return 0LL;
}
