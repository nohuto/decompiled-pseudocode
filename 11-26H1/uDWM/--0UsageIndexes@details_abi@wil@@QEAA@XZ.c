/*
 * XREFs of ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18005B550
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18005B47C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180091B20 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180091EAC (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18005B7F8 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 */

__int64 __fastcall wil::details_abi::UsageIndexes::UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  unsigned __int64 Size; // rax
  __int64 v2; // r8
  __int64 v3; // r10
  __int16 v4; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // r10
  __int16 v9; // [rsp+20h] [rbp-20h] BYREF
  char v10; // [rsp+22h] [rbp-1Eh]
  int v11; // [rsp+24h] [rbp-1Ch]
  __int16 v12; // [rsp+28h] [rbp-18h]
  __int128 v13; // [rsp+30h] [rbp-10h]

  *(_DWORD *)this = 0x40000;
  *((_BYTE *)this + 4) = 1;
  *((_BYTE *)this + 8) = 0;
  v10 = 0;
  v11 = 0;
  *((_WORD *)this + 3) = 4;
  v9 = 4;
  v12 = 0;
  v13 = 0LL;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v9);
  *(_QWORD *)(v2 + 16) = Size;
  *(_QWORD *)(v2 + 24) = v3;
  *(_QWORD *)(v2 + 32) = v3;
  *(_QWORD *)(v2 + 40) = v3;
  *(_QWORD *)(v2 + 48) = v3;
  *(_WORD *)(v2 + 56) = v3;
  *(_BYTE *)(v2 + 58) = v3;
  *(_DWORD *)(v2 + 64) = 0x40000;
  *(_BYTE *)(v2 + 68) = 1;
  *(_WORD *)(v2 + 70) = v4;
  *(_BYTE *)(v2 + 72) = 2;
  v9 = v4;
  v10 = 2;
  v11 = v3;
  v12 = v3;
  v13 = 0LL;
  v5 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v9);
  *(_QWORD *)(v6 + 80) = v5;
  result = v6;
  *(_QWORD *)(v6 + 88) = v8;
  *(_QWORD *)(v6 + 96) = v8;
  *(_QWORD *)(v6 + 104) = v8;
  *(_QWORD *)(v6 + 112) = v8;
  *(_WORD *)(v6 + 120) = v8;
  *(_BYTE *)(v6 + 122) = v8;
  *(_DWORD *)(v6 + 128) = 0x40000;
  *(_BYTE *)(v6 + 132) = 1;
  *(_WORD *)(v6 + 134) = v8;
  *(_BYTE *)(v6 + 136) = 1;
  *(_QWORD *)(v6 + 144) = v8;
  *(_QWORD *)(v6 + 152) = v8;
  *(_QWORD *)(v6 + 160) = v8;
  *(_QWORD *)(v6 + 168) = v8;
  *(_QWORD *)(v6 + 176) = v8;
  *(_WORD *)(v6 + 184) = v8;
  *(_BYTE *)(v6 + 186) = v8;
  return result;
}
