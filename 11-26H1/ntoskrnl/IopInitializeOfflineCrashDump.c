/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x140CBA6C4
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140CBD3BC (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     IopConstructInMemoryDumpHeader @ 0x1405C8AA8 (IopConstructInMemoryDumpHeader.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140908318 (IoGetEnvironmentVariableEx.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140B1C920 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     IopCachePreviousBootData @ 0x140CBA3B8 (IopCachePreviousBootData.c)
 *     IopInitializeInMemoryDumpData @ 0x140CBA480 (IopInitializeInMemoryDumpData.c)
 */

void __fastcall IopInitializeOfflineCrashDump(__int64 a1)
{
  int v1; // ebx
  NTSTATUS v2; // eax
  char v3; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v4[7]; // [rsp+31h] [rbp-4Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  int v7; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING v8; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v9[4]; // [rsp+60h] [rbp-20h] BYREF

  LOBYTE(v1) = 0;
  v9[0] = 2012912317;
  v9[1] = 1295123289;
  v9[2] = -198680387;
  v9[3] = 1266192359;
  *(_QWORD *)&v8.Length = 8388734LL;
  v8.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  P = 0LL;
  v4[0] = 0;
  v7 = 1;
  v3 = 0;
  Handle = 0LL;
  dword_140E65DD0 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 2808) )
    {
      *(_OWORD *)&stru_140F12D20.KcsanThread = *(_OWORD *)(a1 + 2808);
      *(_OWORD *)&stru_140F12D20.SchedulerAssistLastYieldBoostTime = *(_OWORD *)(a1 + 2824);
      v2 = IopOpenRegistryKey(&Handle, 0LL, &v8, 0x20019u, 0);
      if ( v2 >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"EnableOfflineDumps", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 3) )
            v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
          ExFreePoolWithTag(P, 0);
        }
        v3 = v1;
        OfflineDumpEnabled = v1 & 1;
        if ( (int)IoGetEnvironmentVariableEx(L"OfflineMemoryDumpUseCapability", (__int64)v9, (__int64)v4, &v7, 0LL) < 0
          || v4[0] != v3 )
        {
          IoSetEnvironmentVariableEx(L"OfflineMemoryDumpUseCapability", (__int64)v9, (__int64)&v3, 1, 7);
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
        }
      }
      else
      {
        dword_140E65DD0 = v2;
      }
      if ( Handle )
        ObCloseHandle(Handle, 0);
    }
    else
    {
      dword_140E65DD0 = -1073741736;
    }
  }
  else
  {
    dword_140E65DD0 = -1073741275;
  }
}
