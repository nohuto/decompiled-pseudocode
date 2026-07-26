/*
 * XREFs of WPP_RECORDER_SF_ZZ @ 0x1400D1FCC
 * Callers:
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D1ADC (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7)
{
  const wchar_t *v7; // rbp
  const wchar_t *v8; // rdi
  __int64 v10; // rax
  const wchar_t *v11; // r11
  const wchar_t *v12; // r10
  __int64 v13; // rcx
  const wchar_t *v14; // r9
  const wchar_t *v15; // r8
  bool v16; // zf
  int v18; // [rsp+20h] [rbp-78h]

  v7 = L"NULL";
  v8 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_18;
  if ( a7 )
  {
    v10 = *a7;
    if ( *a7 )
    {
      v11 = (const wchar_t *)*((_QWORD *)a7 + 1);
      goto LABEL_8;
    }
  }
  else
  {
    v10 = 8LL;
  }
  v11 = L"NULL";
LABEL_8:
  v12 = a7;
  if ( !a7 )
    v12 = L"\b";
  if ( !a6 )
  {
    v13 = 8LL;
    goto LABEL_14;
  }
  v13 = *a6;
  if ( !*a6 )
  {
LABEL_14:
    v14 = L"NULL";
    goto LABEL_15;
  }
  v14 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v15 = a6;
  if ( !a6 )
    v15 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_ec7904e244ab3ff37c3c2f5002e64fc8_Traceguids,
    0x10u,
    v15,
    2LL,
    v14,
    v13,
    v12,
    2LL,
    v11,
    v10,
    0LL);
LABEL_18:
  v16 = a6 == 0LL;
  if ( a6 )
  {
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v16 = a6 == 0LL;
  }
  if ( v16 )
    v8 = L"\b";
  LOWORD(v18) = 16;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_ec7904e244ab3ff37c3c2f5002e64fc8_Traceguids, v18, v8, 2LL, v7);
}
