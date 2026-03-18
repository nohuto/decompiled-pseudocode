/*
 * XREFs of AllocateW32ProcessImpl @ 0x14018A480
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x14018A5D8 (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 *     W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401B4578 (W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___.c)
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x1401D7A2C (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall AllocateW32ProcessImpl(struct _EPROCESS *a1, int a2, int a3)
{
  int v4; // edi
  __int64 v5; // rbp
  int v6; // ecx
  unsigned int ProcessSessionId; // eax
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[3]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-10h]
  PVOID Buffer; // [rsp+58h] [rbp+10h] BYREF

  v4 = 1073741851;
  v5 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 42560);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v5);
  if ( !PsGetProcessWin32Process(a1) )
  {
    if ( (unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      Buffer = 0LL;
      v13[0] = &Buffer;
      v13[1] = 256LL;
      v13[2] = 1216LL;
      v14 = 1768977237;
      v8 = 0LL;
      if ( (int)W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02_(ProcessSessionId, v13) >= 0 )
        v8 = (volatile signed __int32 *)Buffer;
    }
    else
    {
      v8 = (volatile signed __int32 *)Win32AllocPoolWithQuotaZInitImpl(v6, 0x4C0uLL, 0x69707355u);
    }
    if ( v8 )
    {
      tagPROCESSINFO::tagPROCESSINFO((tagPROCESSINFO *)v8, a1);
      v4 = PsSetProcessWin32Process(a1, v8, 0LL);
      if ( v4 < 0 )
      {
        UserSetLastError(5);
        GreDeleteFastMutex((char *)v8, v9, v10, v11);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v8);
        _InterlockedIncrement(v8 + 2);
      }
    }
    else
    {
      UserSetLastError(8);
      v4 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v5);
  return (unsigned int)v4;
}
