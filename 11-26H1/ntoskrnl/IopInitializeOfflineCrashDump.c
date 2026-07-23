/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x140CC0704
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140CC3490 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     Feature_WerOfflineDumpTriggerAlways__private_IsEnabledDeviceUsageNoInline @ 0x1405C89BC (Feature_WerOfflineDumpTriggerAlways__private_IsEnabledDeviceUsageNoInline.c)
 *     IopConstructInMemoryDumpHeader @ 0x1405CB378 (IopConstructInMemoryDumpHeader.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 *     IopOpenRegistryKey @ 0x140B1EB30 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IopCachePreviousBootData @ 0x140CC03F8 (IopCachePreviousBootData.c)
 *     IopInitializeInMemoryDumpData @ 0x140CC04C0 (IopInitializeInMemoryDumpData.c)
 */

char __fastcall IopInitializeOfflineCrashDump(__int64 a1)
{
  const wchar_t *v1; // rax
  int v2; // ebx
  char v4; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v5[7]; // [rsp+41h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+Fh] BYREF
  int v7; // [rsp+50h] [rbp+17h] BYREF
  UNICODE_STRING v8; // [rsp+58h] [rbp+1Fh] BYREF
  PVOID P; // [rsp+68h] [rbp+2Fh] BYREF
  _DWORD v10[4]; // [rsp+70h] [rbp+37h] BYREF

  v10[0] = 2012912317;
  v10[1] = 1295123289;
  v1 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v10[2] = -198680387;
  LOBYTE(v2) = 0;
  v10[3] = 1266192359;
  *(_QWORD *)&v8.Length = 8388734LL;
  v8.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  P = 0LL;
  v5[0] = 0;
  v7 = 1;
  v4 = 0;
  Handle = 0LL;
  dword_140E66110 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 2808) )
    {
      *(_OWORD *)&stru_140F12EA0.KcsanThread = *(_OWORD *)(a1 + 2808);
      *(_OWORD *)&stru_140F12EA0.SchedulerAssistLastYieldBoostTime = *(_OWORD *)(a1 + 2824);
      LODWORD(v1) = IopOpenRegistryKey(&Handle, 0LL, &v8, 0x20019u, 0);
      if ( (int)v1 >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"EnableOfflineDumps", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 3) )
            v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
          ExFreePoolWithTag(P, 0);
        }
        v4 = v2;
        OfflineDumpEnabled = v2 & 1;
        if ( (int)IoGetEnvironmentVariableEx(L"OfflineMemoryDumpUseCapability", (__int64)v10, (__int64)v5, &v7, 0LL) < 0
          || (LOBYTE(v1) = v4, v5[0] != v4) )
        {
          LOBYTE(v1) = IoSetEnvironmentVariableEx(L"OfflineMemoryDumpUseCapability", (__int64)v10, (__int64)&v4, 1, 7);
        }
        if ( OfflineDumpEnabled )
        {
          IopCachePreviousBootData(&Handle);
          IopInitializeInMemoryDumpData();
          IopConstructInMemoryDumpHeader();
          if ( IopGetRegistryValue(Handle, L"AttemptOffline", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 3) )
              DumpPolicyAttemptOffline = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
          LODWORD(v1) = Feature_WerOfflineDumpTriggerAlways__private_IsEnabledDeviceUsageNoInline();
          if ( (_DWORD)v1 )
          {
            P = (PVOID)WNF_WER_OFFLINE_DUMP_ABNORMAL_RESET;
            LOBYTE(v1) = ZwUpdateWnfStateData((PCWNF_STATE_NAME)&P, 0LL, 0, 0LL, 0LL, 0, 0);
          }
        }
      }
      else
      {
        dword_140E66110 = (int)v1;
      }
      if ( Handle )
        LOBYTE(v1) = ObCloseHandle(Handle, 0);
    }
    else
    {
      dword_140E66110 = -1073741736;
    }
  }
  else
  {
    dword_140E66110 = -1073741275;
  }
  return (char)v1;
}
