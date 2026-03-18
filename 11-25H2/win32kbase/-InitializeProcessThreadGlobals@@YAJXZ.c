/*
 * XREFs of ?InitializeProcessThreadGlobals@@YAJXZ @ 0x14017705C
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Initialize@QualityOfService@@YAJXZ @ 0x1401A86B8 (-Initialize@QualityOfService@@YAJXZ.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall InitializeProcessThreadGlobals(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  QualityOfService *v5; // rcx

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_QWORD *)(UserSessionState + 36412) = 0x20000000CLL;
  *(_DWORD *)(UserSessionState + 36408) = 5000;
  *(_DWORD *)(UserSessionState + 36420) = 256;
  if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline(UserSessionState, v4) )
    return (unsigned int)QualityOfService::Initialize(v5);
  return v2;
}
