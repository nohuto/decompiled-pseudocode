/*
 * XREFs of ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180208EF0
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180165144 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1802236E8 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1802238BC (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1801654C8 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 */

__int64 __fastcall wil::details_abi::UsageIndexes::UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  __int64 v1; // r11
  char v2; // r9
  __int64 v3; // r11
  __int64 result; // rax
  char v5; // r9

  wil::details_abi::RawUsageIndex::RawUsageIndex((__int64)this, 0, 4, 1, 4, 0);
  wil::details_abi::RawUsageIndex::RawUsageIndex(v1 + 64, 0, 4, v2, 4, 2);
  result = v3;
  *(_DWORD *)(v3 + 128) = 0x40000;
  *(_BYTE *)(v3 + 132) = v5;
  *(_WORD *)(v3 + 134) = 0;
  *(_BYTE *)(v3 + 136) = v5;
  *(_QWORD *)(v3 + 144) = 0LL;
  *(_QWORD *)(v3 + 152) = 0LL;
  *(_QWORD *)(v3 + 160) = 0LL;
  *(_QWORD *)(v3 + 168) = 0LL;
  *(_QWORD *)(v3 + 176) = 0LL;
  *(_WORD *)(v3 + 184) = 0;
  *(_BYTE *)(v3 + 186) = 0;
  return result;
}
