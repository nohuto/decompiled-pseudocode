/*
 * XREFs of ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18001BBD0
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001BA30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180017F08 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C0E8 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C288 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800203CC (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPickerHostContext::AddHostedAppInteractivityNotification(
        CPickerHostContext *a1,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  int v8; // esi
  int HostedAppInteractivity; // ebx
  const struct _tlgProvider_t *v10; // rax
  const struct _tlgProvider_t *v11; // r10
  const unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  CHostedAppInteractivityManager *v15; // rcx
  struct CHostedAppInteractivity *v17; // r15
  CHostedAppInteractivityManager *v18; // rcx
  int v19; // r14d
  int v20; // eax
  struct CHostedAppInteractivity *v21; // rax
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  struct CHostedAppInteractivity *v26; // [rsp+30h] [rbp-81h] BYREF
  int v27; // [rsp+38h] [rbp-79h]
  BOOL v28; // [rsp+3Ch] [rbp-75h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+40h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-51h] BYREF
  void *v32; // [rsp+70h] [rbp-41h]
  int v33; // [rsp+78h] [rbp-39h]
  int v34; // [rsp+7Ch] [rbp-35h]
  const unsigned __int16 *v35; // [rsp+80h] [rbp-31h]
  int v36; // [rsp+88h] [rbp-29h]
  int v37; // [rsp+8Ch] [rbp-25h]
  struct _RTL_CRITICAL_SECTION **v38; // [rsp+90h] [rbp-21h]
  __int64 v39; // [rsp+98h] [rbp-19h]
  BOOL *v40; // [rsp+A0h] [rbp-11h]
  __int64 v41; // [rsp+A8h] [rbp-9h]

  v8 = 0;
  v26 = 0LL;
  HostedAppInteractivity = CPickerHostContext::GetHostedAppInteractivity(a1, a2, a3, a4, &v26);
  if ( HostedAppInteractivity >= 0 )
  {
    switch ( a5 )
    {
      case 3:
        v21 = v26;
        v22 = *((_DWORD *)v26 + 3);
        v23 = v22;
        if ( !v22 )
          goto LABEL_27;
        --v22;
        break;
      case 1:
        v25 = *((_DWORD *)v26 + 3);
        *((_DWORD *)v26 + 3) = 0;
        v24 = v25 != 0;
LABEL_28:
        v27 = 0;
LABEL_3:
        if ( !v24 )
          return (unsigned int)HostedAppInteractivity;
        v10 = AudioSrvPolicyManagerTelemetryProvider::Provider();
        v11 = v10;
        if ( *(_DWORD *)v10 > 4u
          && (*((_DWORD *)v10 + 4) & 0x8000LL) != 0
          && (*((_QWORD *)v10 + 3) & 0x8000LL) == *((_QWORD *)v10 + 3) )
        {
          v28 = a5 == 2;
          v29 = (struct _RTL_CRITICAL_SECTION *)a3;
          v40 = &v28;
          v41 = 4LL;
          v38 = &v29;
          v39 = 8LL;
          if ( a2 )
          {
            v12 = a2;
            v13 = -1LL;
            do
              ++v13;
            while ( a2[v13] );
            v14 = 2 * v13 + 2;
          }
          else
          {
            v12 = (const unsigned __int16 *)byte_180056CEC;
            v14 = 2;
          }
          v35 = v12;
          v36 = v14;
          v37 = 0;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          *(_DWORD *)&EventDescriptor.Level = 4;
          EventDescriptor.Keyword = 0x8000LL;
          UserData.Ptr = *((_QWORD *)v11 + 1);
          UserData.Size = *(unsigned __int16 *)UserData.Ptr;
          UserData.Reserved = 2;
          v32 = &unk_18005AF68;
          v33 = 73;
          v34 = 1;
          LODWORD(v26) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EventWriteTransfer(*((_QWORD *)v11 + 4), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
        }
        v26 = 0LL;
        EnterCriticalSection(&CriticalSection);
        v29 = &CriticalSection;
        HostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                   v15,
                                   a2,
                                   a3,
                                   a4,
                                   &v26);
        if ( HostedAppInteractivity < 0 )
          goto LABEL_13;
        v17 = v26;
        v18 = (CHostedAppInteractivityManager *)*((unsigned int *)v26 + 3);
        if ( v27 )
        {
          v19 = (_DWORD)v18 + 1;
        }
        else
        {
          v19 = *((_DWORD *)v26 + 3);
          if ( !(_DWORD)v18 )
          {
LABEL_20:
            v20 = v19 != 0;
            LOBYTE(v8) = (_DWORD)v18 != 0;
            if ( v8 == v20
              || (HostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                             v18,
                                             a2,
                                             a3,
                                             a4,
                                             v20),
                  HostedAppInteractivity >= 0) )
            {
              if ( !v19 )
                CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v18, v17);
LABEL_14:
              LeaveCriticalSection(&CriticalSection);
              if ( HostedAppInteractivity >= 0 )
                return (unsigned int)HostedAppInteractivity;
              goto LABEL_2;
            }
LABEL_13:
            AudPolicyLogError(
              "CHostedAppInteractivityManager::AddHostedAppInteractivityNotification",
              401,
              HostedAppInteractivity);
            goto LABEL_14;
          }
          v19 = (_DWORD)v18 - 1;
        }
        *((_DWORD *)v26 + 3) = v19;
        goto LABEL_20;
      case 2:
        v21 = v26;
        v23 = *((_DWORD *)v26 + 3);
        v22 = v23 + 1;
        break;
      default:
        return (unsigned int)HostedAppInteractivity;
    }
    *((_DWORD *)v21 + 3) = v22;
LABEL_27:
    v24 = (v22 != 0) ^ (v23 != 0);
    v27 = 1;
    if ( v22 )
      goto LABEL_3;
    goto LABEL_28;
  }
LABEL_2:
  AudPolicyLogError("CPickerHostContext::AddHostedAppInteractivityNotification", 199, HostedAppInteractivity);
  return (unsigned int)HostedAppInteractivity;
}
