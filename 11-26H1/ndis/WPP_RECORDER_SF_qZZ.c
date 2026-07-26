/*
 * XREFs of WPP_RECORDER_SF_qZZ @ 0x140062AC0
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rdi
  __int64 v12; // rcx
  const wchar_t *v13; // r10
  const wchar_t *v14; // r8
  __int64 v15; // rdx
  const wchar_t *v16; // r9
  const wchar_t *v17; // rax
  int v18; // [rsp+20h] [rbp-78h]

  v8 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a8 )
  {
    v12 = *a8;
    if ( (_WORD)v12 )
    {
      v13 = (const wchar_t *)*((_QWORD *)a8 + 1);
      goto LABEL_11;
    }
  }
  else
  {
    v12 = 8LL;
  }
  v13 = L"NULL";
LABEL_11:
  v14 = a8;
  if ( !a8 )
    v14 = L"\b";
  if ( !a7 )
  {
    v15 = 8LL;
    goto LABEL_17;
  }
  v15 = *a7;
  if ( !(_WORD)v15 )
  {
LABEL_17:
    v16 = L"NULL";
    goto LABEL_18;
  }
  v16 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_18:
  v17 = a7;
  if ( !a7 )
    v17 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
    a4,
    &a6,
    8LL,
    v17,
    2LL,
    v16,
    v15,
    v14,
    2LL,
    v13,
    v12,
    0LL);
LABEL_2:
  if ( !v8 )
    v8 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids, v18, &a6, 8LL, v8);
}
