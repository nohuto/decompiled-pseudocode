/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x18000AF40
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180008900 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180008EA0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180009CD0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpInitializeUserList @ 0x18000AFE0 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x18006F730 (RtlpMuiRegDupLanguageList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800DB8B0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EBF50 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  __int16 v6; // di
  __int64 result; // rax
  unsigned int v8; // ebx

  v3 = 4LL;
  if ( a1 >= 1 )
    v3 = (unsigned int)a1;
  v6 = v3;
  if ( (unsigned __int64)(6 * v3) > 0xFFFFFFFF )
    return 0LL;
  v8 = 6 * v3 + 64;
  if ( v8 < 0x40 )
    return 0LL;
  result = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v8);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v8;
  *(_WORD *)(result + 4) = 0;
  *(_QWORD *)(result + 24) = result + 64;
  *(_DWORD *)(result + 40) = 0;
  *(_WORD *)(result + 6) = v6;
  *(_BYTE *)(result + 8) = a2;
  *(_QWORD *)(result + 16) = a3;
  return result;
}
