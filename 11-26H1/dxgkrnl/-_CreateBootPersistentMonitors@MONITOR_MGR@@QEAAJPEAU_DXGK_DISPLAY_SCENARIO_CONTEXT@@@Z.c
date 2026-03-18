/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273E20
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402751FC (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1402752AC (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x140275598 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403409F4 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  ULONG v3; // ebx
  unsigned int *v4; // rsi
  unsigned int *v5; // rdi
  unsigned int *v6; // r12
  const WCHAR *v7; // r13
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // r14d
  int IsTargetForceable; // eax
  MONITOR_MGR *v17; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned int *v21; // rbx
  unsigned int *v22; // r8
  struct DXGMONITOR *v23; // rdx
  int v24; // edx
  int SimulatedMonitor; // esi
  char v26[8]; // [rsp+30h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-91h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-81h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v32[16]; // [rsp+78h] [rbp-51h] BYREF
  char KeyValueInformation[12]; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v34; // [rsp+94h] [rbp-35h]
  WCHAR SourceString[32]; // [rsp+A0h] [rbp-29h] BYREF

  v29[0] = a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 3691;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3703;
    }
    v3 = -1;
    ResultLength = 0;
    v4 = 0LL;
    v5 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          ++v3;
          if ( !v4 )
          {
            v4 = (unsigned int *)operator new[](0x60uLL, 0x4D677844u, 256LL);
            if ( !v4 )
            {
              WdLogSingleEntry0(6LL);
              result = 3221225495LL;
              WdLogGlobalForLineNumber = 3754;
              return result;
            }
          }
          v6 = v4 + 2;
          v4[2] = -1;
          v7 = (const WCHAR *)(v4 + 3);
          v8 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueBasicInformation, v4 + 3, 0x4Eu, &ResultLength);
          if ( v8 == -2147483622 )
          {
            v19 = WdLogNewEntry5_WdTrace(v10, v9);
            *(_QWORD *)(v19 + 24) = v3;
            *(_QWORD *)(v19 + 32) = this;
            WdLogGlobalForLineNumber = 3786;
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
            if ( v5 )
            {
              v20 = v29[0];
              do
              {
                v21 = v5;
                v22 = v5;
                v5 = *(unsigned int **)v5;
                if ( v21[2] == -1 )
                {
                  if ( RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, (PCWSTR)v22 + 12) < 0 )
                  {
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 3997;
                  }
                }
                else
                {
                  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v29, 0LL);
                  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v32, v23);
                  SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                                       this,
                                       v21[2],
                                       (unsigned int)(v24 + 2),
                                       v32,
                                       v29,
                                       v20);
                  if ( SimulatedMonitor >= 0 && !v29[1] )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 3979;
                  }
                  MONITOR_MGR::_LogMonitorPresentEvent(this, 1073741825LL, v21[2], (unsigned int)SimulatedMonitor, 0LL);
                  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v32);
                  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v29);
                }
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
              }
              while ( v5 );
            }
            ZwClose(KeyHandle);
            return 0LL;
          }
          if ( v8 >= 0 )
            break;
          WdLogSingleEntry2(3LL, v3, v8);
          WdLogGlobalForLineNumber = 3802;
        }
        *((_WORD *)v4 + ((unsigned __int64)v4[5] >> 1) + 12) = 0;
        *(_QWORD *)v4 = v5;
        v5 = v4;
        v11 = v4[4];
        v4 = 0LL;
        if ( v11 == 4 )
          break;
        WdLogSingleEntry2(3LL, v3, v11);
        WdLogGlobalForLineNumber = 3828;
      }
      v12 = ZwEnumerateValueKey(KeyHandle, v3, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v13 = v12;
      if ( v12 == -2147483622 )
        break;
      if ( v12 >= 0 )
      {
        v14 = *((_QWORD *)this + 3);
        v15 = v34;
        v26[0] = 0;
        IsTargetForceable = DmmIsTargetForceable(*(_QWORD *)(v14 + 16), v34, v26, 0LL);
        if ( IsTargetForceable < 0 )
        {
          if ( IsTargetForceable == -1071774971 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 3894;
          }
        }
        else if ( v26[0] )
        {
          if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(v17, v15, SourceString) >= 0 )
          {
            DestinationString = 0LL;
            String2 = 0LL;
            RtlInitUnicodeString(&DestinationString, v7 + 6);
            RtlInitUnicodeString(&String2, SourceString);
            if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 3934;
            }
            else
            {
              *v6 = v15;
            }
          }
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 3881;
        }
      }
      else
      {
LABEL_15:
        WdLogSingleEntry2(3LL, v3, v13);
        WdLogGlobalForLineNumber = 3854;
      }
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3840;
    goto LABEL_15;
  }
  return 0LL;
}
