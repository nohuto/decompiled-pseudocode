/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140CBD3BC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     SecureDump_Init @ 0x1405D67E8 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoInitializeCrashDump @ 0x1407930B8 (IoInitializeCrashDump.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140793468 (IopDumpTraceForceDumpDisabled.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 *     IopInitializeOfflineCrashDump @ 0x140CBA6C4 (IopInitializeOfflineCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x140CFB3A8 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 i; // rcx
  unsigned int v5; // ebx
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-C8h]
  void *v9; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A8h]
  const wchar_t *v11; // [rsp+68h] [rbp-A0h]
  char *v12; // [rsp+70h] [rbp-98h]
  int v13; // [rsp+78h] [rbp-90h]
  _BYTE v14[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v15; // [rsp+E6h] [rbp-22h]
  char v16; // [rsp+E8h] [rbp-20h]
  char v17; // [rsp+EDh] [rbp-1Bh]

  v2 = a2;
  v7 = 0;
  if ( !ForceDumpDisabled && (int)SecureDump_Init(a1, a2) < 0 && !SecureDmpCertProvisionFailedDuringBoot )
  {
    ForceDumpDisabled = 1;
    IopDumpTraceForceDumpDisabled();
  }
  if ( a1 && !SpecialMemoryRanges )
  {
    for ( i = 0LL; (unsigned int)i < 0x31; i = (unsigned int)(i + 1) )
      v14[i] = 0;
    v15 = 257;
    v14[6] = 1;
    v16 = 1;
    v17 = 1;
    SpecialMemoryRanges = MmInitializeMemoryLimits(a1, v14);
  }
  if ( !v2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x100000) != 0 )
    {
      LOBYTE(a2) = 1;
      IoConfigureCrashDump(0LL, a2);
    }
    memset_0(&v9, 0, 0x70uLL);
    LODWORD(v10) = 4;
    v9 = &IopInitCrashDumpRegCallback;
    v13 = 0;
    v11 = L"ExistingPageFiles";
    v12 = &v7;
    RtlQueryRegistryValuesEx(2, (int)L"Session Manager\\Memory Management", (int)&v9, a1);
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
    IopInitializeOfflineCrashDump(*(_QWORD *)(a1 + 240));
  return v5;
}
