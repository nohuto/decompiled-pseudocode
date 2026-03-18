/*
 * XREFs of ?OpenVerticalBlankEventHandle@ADAPTER_DISPLAY@@QEAAJIKDPEAPEAX@Z @ 0x1404263B0
 * Callers:
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401B7D10 (DxgkOpenVerticalBlankEventInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::OpenVerticalBlankEventHandle(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        ACCESS_MASK a3,
        KPROCESSOR_MODE a4,
        void **Handle)
{
  __int64 v6; // rbp

  v6 = a2;
  *Handle = 0LL;
  if ( (a3 & 2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7062;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!(DesiredAccess & EVENT_MODIFY_STATE)",
      7062LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return ObOpenObjectByPointer(
           *(PVOID *)(4024 * v6 + *((_QWORD *)this + 16) + 904),
           0,
           0LL,
           a3,
           (POBJECT_TYPE)ExEventObjectType,
           a4,
           Handle);
}
