/*
 * XREFs of ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18005FD24
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18005FC50 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18007273C (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180072A18 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18005FFB0 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 */

__int64 __fastcall wil::details_abi::UsageIndexes::UsageIndexes(
        wil::details_abi::UsageIndexes *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 result; // rax
  char v8; // r9
  __int16 v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+28h] [rbp-10h]

  v11 = 0;
  v9 = 4;
  LOBYTE(a4) = 1;
  wil::details_abi::RawUsageIndex::RawUsageIndex(this, 0LL, 4LL, a4, v9, v11);
  LOBYTE(v12) = 2;
  LOWORD(v10) = 4;
  wil::details_abi::RawUsageIndex::RawUsageIndex(v4 + 64, 0LL, 4LL, v5, v10, v12);
  result = v6;
  *(_DWORD *)(v6 + 128) = 0x40000;
  *(_BYTE *)(v6 + 132) = v8;
  *(_WORD *)(v6 + 134) = 0;
  *(_BYTE *)(v6 + 136) = v8;
  *(_QWORD *)(v6 + 144) = 0LL;
  *(_QWORD *)(v6 + 152) = 0LL;
  *(_QWORD *)(v6 + 160) = 0LL;
  *(_QWORD *)(v6 + 168) = 0LL;
  *(_QWORD *)(v6 + 176) = 0LL;
  *(_WORD *)(v6 + 184) = 0;
  *(_BYTE *)(v6 + 186) = 0;
  return result;
}
