/*
 * XREFs of AllocateW32ProcessImpl @ 0x14016AD30
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x14016AC04 (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x1401B64E0 (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 *     W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401C21C4 (W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___.c)
 */

__int64 __fastcall AllocateW32ProcessImpl(struct _EPROCESS *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbp
  __int64 v5; // rcx
  unsigned int ProcessSessionId; // eax
  volatile signed __int32 *v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  PVOID Buffer; // [rsp+58h] [rbp+10h] BYREF

  v3 = 1073741851;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 42536);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v4);
  if ( !PsGetProcessWin32Process(a1) )
  {
    if ( (unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      Buffer = 0LL;
      v9[0] = &Buffer;
      v9[1] = 256LL;
      v9[2] = 1192LL;
      v10 = 1768977237;
      v7 = 0LL;
      if ( (int)W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02_(ProcessSessionId, v9) >= 0 )
        v7 = (volatile signed __int32 *)Buffer;
    }
    else
    {
      v7 = (volatile signed __int32 *)Win32AllocPoolWithQuotaZInitImpl(v5, 0x4A8uLL, 0x69707355u);
    }
    if ( v7 )
    {
      tagPROCESSINFO::tagPROCESSINFO((tagPROCESSINFO *)v7, a1);
      v3 = PsSetProcessWin32Process(a1, v7, 0LL);
      if ( v3 < 0 )
      {
        UserSetLastError(5);
        GreDeleteFastMutex((char *)v7);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v7);
        _InterlockedIncrement(v7 + 2);
      }
    }
    else
    {
      UserSetLastError(8);
      v3 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v4);
  return (unsigned int)v3;
}
