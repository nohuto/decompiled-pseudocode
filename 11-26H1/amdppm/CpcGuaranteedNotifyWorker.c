/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x140026A40
 * Callers:
 *     CpcNativeInterruptWorker @ 0x140026F20 (CpcNativeInterruptWorker.c)
 *     AcpiCppcGuaranteedNotifyWorker @ 0x140027B20 (AcpiCppcGuaranteedNotifyWorker.c)
 * Callees:
 *     ReadGenAddrMaybeHiddenEx @ 0x140002120 (ReadGenAddrMaybeHiddenEx.c)
 *     ProcLibTracePccCapChange @ 0x14000559C (ProcLibTracePccCapChange.c)
 *     WPP_RECORDER_SF_s @ 0x140006208 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x14000725C (WPP_RECORDER_SF_sD.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     ExecutePccCommand @ 0x140027564 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x14002787C (StartPccCommand.c)
 *     ProcLibCapChange @ 0x14004061C (ProcLibCapChange.c)
 */

__int64 __fastcall CpcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int16 v9; // r9
  int started; // eax
  unsigned __int16 v11; // r9
  char v12; // bl
  unsigned __int64 GenAddrMaybeHidden; // r14
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 280);
  if ( (result & 0x8000000) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 248);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 144);
      if ( !*(_BYTE *)(v7 + 131) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v9 = 22;
        return WPP_RECORDER_SF_s(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 2u,
                 1u,
                 v9,
                 (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
                 a3);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400155D8,
        0LL);
      if ( *(_BYTE *)(v7 + 133) )
      {
        started = StartPccCommand(*(_QWORD *)(v5 + 256));
        if ( started < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                     WdfDriverGlobals,
                     qword_1400155D8);
          v11 = 23;
LABEL_12:
          WPP_RECORDER_SF_sD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            v11,
            (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
            a3,
            started);
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                   WdfDriverGlobals,
                   qword_1400155D8);
        }
        started = ExecutePccCommand(*(_QWORD *)(v5 + 256), 0LL);
        if ( started < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                     WdfDriverGlobals,
                     qword_1400155D8);
          v11 = 24;
          goto LABEL_12;
        }
      }
      if ( *(_BYTE *)(v8 + 104) != 127 || *(_DWORD *)(v5 + 80) )
      {
        v12 = 0;
      }
      else
      {
        KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v12 = 1;
      }
      GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, v8 + 104);
      if ( v12 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v14 = *(_QWORD *)(v7 + 48);
      if ( GenAddrMaybeHidden > v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x19u,
            (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
            a3);
        GenAddrMaybeHidden = *(_QWORD *)(v7 + 48);
        v14 = GenAddrMaybeHidden;
      }
      if ( GenAddrMaybeHidden < *(_QWORD *)(v7 + 64) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x1Au,
            (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
            a3);
          v14 = *(_QWORD *)(v7 + 48);
        }
        GenAddrMaybeHidden = *(_QWORD *)(v7 + 64);
      }
      v15 = *(_DWORD *)(v7 + 112);
      *(_QWORD *)(v7 + 88) = GenAddrMaybeHidden;
      if ( (unsigned int)(100 * GenAddrMaybeHidden / v14) > v15 )
        v15 = 100 * GenAddrMaybeHidden / v14;
      *(_DWORD *)(v7 + 116) = v15;
      if ( v15 != *(_DWORD *)(v5 + 740) )
      {
        ProcLibCapChange(v5, *(unsigned int *)(v5 + 464), *(unsigned int *)(v5 + 512), v15);
        ((void (__fastcall *)(__int64))qword_140015B30)(v5);
      }
      ProcLibTracePccCapChange(v5, v15);
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1400155D8);
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return result;
  v9 = 21;
  return WPP_RECORDER_SF_s(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           2u,
           1u,
           v9,
           (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
           a3);
}
