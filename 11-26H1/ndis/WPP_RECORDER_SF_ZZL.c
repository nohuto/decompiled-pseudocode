/*
 * XREFs of WPP_RECORDER_SF_ZZL @ 0x14005F150
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016E8D0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZZL(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rbp
  const wchar_t *v8; // rdi
  bool v11; // zf
  __int64 v13; // rcx
  const wchar_t *v14; // r10
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  const wchar_t *v17; // r9
  const wchar_t *v18; // r8
  int v19; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = L"NULL";
  v8 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a7 )
  {
    v13 = *a7;
    if ( (_WORD)v13 )
    {
      v14 = (const wchar_t *)*((_QWORD *)a7 + 1);
      goto LABEL_15;
    }
  }
  else
  {
    v13 = 8LL;
  }
  v14 = L"NULL";
LABEL_15:
  v15 = a7;
  if ( !a7 )
    v15 = L"\b";
  if ( !a6 )
  {
    v16 = 8LL;
    goto LABEL_21;
  }
  v16 = *a6;
  if ( !(_WORD)v16 )
  {
LABEL_21:
    v17 = L"NULL";
    goto LABEL_22;
  }
  v17 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_22:
  v18 = a6;
  if ( !a6 )
    v18 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
    a4,
    v18,
    2LL,
    v17,
    v16,
    v15,
    2LL,
    v14,
    v13,
    va,
    4LL,
    0LL);
LABEL_2:
  v11 = a6 == 0LL;
  if ( a6 )
  {
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v11 = a6 == 0LL;
  }
  if ( v11 )
    v8 = L"\b";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids, v19, v8, 2LL, v7);
}
