/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x180056670
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180055400 (RtlpQueryDefaultUILanguage.c)
 *     RtlpInitializeUserList @ 0x180056710 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008FB80 (RtlpMuiRegDupLanguageList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800D8790 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EB120 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

_WORD *__fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  __int16 v6; // di
  _WORD *result; // rax
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
  result = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v8);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v8;
  result[2] = 0;
  *((_QWORD *)result + 3) = result + 32;
  *((_DWORD *)result + 10) = 0;
  result[3] = v6;
  *((_BYTE *)result + 8) = a2;
  *((_QWORD *)result + 2) = a3;
  return result;
}
