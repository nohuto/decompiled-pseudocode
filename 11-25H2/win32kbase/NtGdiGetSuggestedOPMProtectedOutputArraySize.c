/*
 * XREFs of NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x140158A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14006A610 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14007F970 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 */

__int64 __fastcall NtGdiGetSuggestedOPMProtectedOutputArraySize(struct _UNICODE_STRING *a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  int SuggestedPhysicalMonitorArraySize; // ebx
  __int64 v7; // rdx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    SuggestedPhysicalMonitorArraySize = DrvGetSuggestedPhysicalMonitorArraySize(a1, UserMode, a2);
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
    if ( SuggestedPhysicalMonitorArraySize < 0 )
      return (unsigned int)SuggestedPhysicalMonitorArraySize;
    return v5;
  }
  return result;
}
