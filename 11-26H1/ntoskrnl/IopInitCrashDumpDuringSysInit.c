/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140CC3490
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 *     SecureDump_Init @ 0x1405D8FD8 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoInitializeCrashDump @ 0x140795BE8 (IoInitializeCrashDump.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140795F98 (IopDumpTraceForceDumpDisabled.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10120 (RtlQueryRegistryValuesEx.c)
 *     IopInitializeOfflineCrashDump @ 0x140CC0704 (IopInitializeOfflineCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x140D01728 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(_QWORD *Context, __int64 a2)
{
  char v2; // si
  __int64 i; // rcx
  unsigned int v5; // ebx
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-C8h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v10[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v11; // [rsp+E6h] [rbp-22h]
  char v12; // [rsp+E8h] [rbp-20h]
  char v13; // [rsp+EDh] [rbp-1Bh]

  v2 = a2;
  v7 = 0;
  if ( !ForceDumpDisabled && (int)SecureDump_Init((__int64)Context, a2) < 0 && !SecureDmpCertProvisionFailedDuringBoot )
  {
    ForceDumpDisabled = 1;
    IopDumpTraceForceDumpDisabled();
  }
  if ( Context && !SpecialMemoryRanges )
  {
    for ( i = 0LL; (unsigned int)i < 0x31; i = (unsigned int)(i + 1) )
      v10[i] = 0;
    v11 = 257;
    v10[6] = 1;
    v12 = 1;
    v13 = 1;
    SpecialMemoryRanges = MmInitializeMemoryLimits(Context, v10);
  }
  if ( !v2 )
  {
    if ( (*(_DWORD *)(Context[30] + 132LL) & 0x100000) != 0 )
    {
      LOBYTE(a2) = 1;
      IoConfigureCrashDump(0LL, a2);
    }
    memset_0(&QueryTable, 0, 0x70uLL);
    QueryTable.Flags = 4;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&IopInitCrashDumpRegCallback;
    QueryTable.DefaultType = 0;
    QueryTable.Name = L"ExistingPageFiles";
    QueryTable.EntryContext = &v7;
    RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", &QueryTable, Context, 0LL);
  }
  if ( v7 )
  {
    v5 = 0;
  }
  else
  {
    *(_OWORD *)&v8[1] = 0LL;
    v5 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  }
  if ( !v2 )
    IopInitializeOfflineCrashDump(Context[30]);
  return v5;
}
