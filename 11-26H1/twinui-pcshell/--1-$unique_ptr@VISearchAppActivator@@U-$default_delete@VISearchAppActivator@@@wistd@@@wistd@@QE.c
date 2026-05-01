/*
 * XREFs of ??1?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@QEAA@XZ @ 0x1801A813C
 * Callers:
 *     ??1CCrashDetector@@QEAA@XZ @ 0x1801A8108 (--1CCrashDetector@@QEAA@XZ.c)
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x1801A82F4 (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 *     ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x18042EF6C (-_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z.c)
 *     _UndockedSearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806E83A1 (_UndockedSearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1806E83D7 (_UndockedSearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>::~unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
