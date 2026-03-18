/*
 * XREFs of _lambda_5ba4a65bff08d755783aff6afc159ac4_::operator() @ 0x14021FAF8
 * Callers:
 *     ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234840 (-VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1400816C4 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x140081C34 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_5ba4a65bff08d755783aff6afc159ac4_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  struct DXGGLOBAL *Global; // r10
  struct _LUID *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _LUID v9; // [rsp+50h] [rbp-38h] BYREF
  DWORD LowPart; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  __int64 v14; // [rsp+6Ch] [rbp-1Ch]
  int v15; // [rsp+74h] [rbp-14h]
  __int64 v16; // [rsp+78h] [rbp-10h]

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 96LL) + 592LL);
  if ( *(_DWORD *)(v2 + 392) >= 0x23u )
  {
    if ( *(_QWORD *)(v2 + 320) )
    {
      v4 = a1[1];
      if ( *(_DWORD *)(*(_QWORD *)v4 + 36LL) < 0x10u )
      {
        if ( *(_DWORD *)(*(_QWORD *)v4 + 40LL) < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          v6 = *(struct _LUID **)a1[1];
          if ( (v6[5].LowPart & 1) != 0 )
          {
            v7 = *a1;
            v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 96LL) + 592LL);
            v11 = 0;
            v14 = 0LL;
            v15 = 0;
            v12 = *(_QWORD *)(*(_QWORD *)v7 + 104LL) + 160LL;
            v9 = v6[3];
            LowPart = v6[4].LowPart;
            v16 = *(_QWORD *)(v8 + 320) + 32LL * (unsigned int)v6[4].HighPart + 8;
            v13 = *(_DWORD *)(v8 + 392);
            return HOSTVMMONITORMAPPING::AddMapping((KSPIN_LOCK *)Global + 38166, &v9);
          }
          else
          {
            return HOSTVMMONITORMAPPING::RemoveMapping(
                     (struct DXGGLOBAL *)((char *)Global + 305328),
                     (void *)(*(_QWORD *)(*(_QWORD *)*a1 + 104LL) + 160LL),
                     v6[3],
                     v6[4].LowPart,
                     0LL);
          }
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 8704;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Flags.Unused was not zero, failing request",
            8704LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225714LL;
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 8698;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SharedDataIndex was not out of range, failing request",
          8698LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225713LL;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 8692;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Shared page is not enabled", 8692LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 8685;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Message is not supported from this guest VM",
      8685LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
