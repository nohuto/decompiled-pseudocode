/*
 * XREFs of DpiFdoValidateKmdAndPnpVersionMatch @ 0x14041978C
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x140003C5C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x140086404 (-RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     IsKnownMismatchedVersionedDriver @ 0x14023F574 (IsKnownMismatchedVersionedDriver.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1403B089C (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiGetDriverFullPath @ 0x14042E03C (DpiGetDriverFullPath.c)
 */

__int64 __fastcall DpiFdoValidateKmdAndPnpVersionMatch(__int64 a1)
{
  __int64 v1; // rax
  char v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // rcx
  _WORD *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rax
  _WORD *v9; // rdx
  unsigned __int16 v10; // dx
  __int16 v11; // ax
  __int64 *v12; // rax
  unsigned __int16 **v13; // r10
  int v14; // r9d
  unsigned int i; // r8d
  NTSTATUS v16; // r15d
  unsigned int j; // ebx
  unsigned int v18; // r15d
  unsigned int v19; // edi
  union _LARGE_INTEGER v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r11d
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v29; // [rsp+68h] [rbp-69h] BYREF
  union _LARGE_INTEGER v30; // [rsp+70h] [rbp-61h] BYREF
  __int128 v31; // [rsp+78h] [rbp-59h] BYREF
  int v32; // [rsp+88h] [rbp-49h] BYREF
  int v33; // [rsp+8Ch] [rbp-45h] BYREF
  int v34; // [rsp+90h] [rbp-41h] BYREF
  int v35; // [rsp+94h] [rbp-3Dh] BYREF
  UNICODE_STRING String; // [rsp+98h] [rbp-39h] BYREF
  union _LARGE_INTEGER v37; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-21h] BYREF
  PVOID P[2]; // [rsp+B8h] [rbp-19h] BYREF
  unsigned __int16 *v40; // [rsp+C8h] [rbp-9h] BYREF
  int v41; // [rsp+D0h] [rbp-1h]
  __int128 v42; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+17h] BYREF
  int v44; // [rsp+F0h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)P = 0LL;
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 40LL) + 28LL);
  if ( v4 < 0x6000
    || *(_DWORD *)(a1 + 1124) == 1297040209 && v4 < 0x8000
    || *(_BYTE *)(a1 + 2717)
    || *(_BYTE *)(a1 + 2716)
    || dword_140169440 == 5
    || *(_BYTE *)(a1 + 481)
    || *(_BYTE *)(a1 + 2718)
    || *(_BYTE *)(a1 + 1158) )
  {
    goto LABEL_56;
  }
  v5 = *(_QWORD *)(a1 + 24);
  v30.QuadPart = 0LL;
  if ( (int)DpiGetDriverFullPath(v5, P) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9086;
    goto LABEL_56;
  }
  if ( (int)DxgkpGetFileVersion((struct _UNICODE_STRING *)P, &v30, 0LL) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9097;
    goto LABEL_56;
  }
  v6 = *(_WORD **)(a1 + 4968);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9106;
    goto LABEL_56;
  }
  v7 = 0x7FFFLL;
  v31 = 0LL;
  v8 = 0x7FFFLL;
  v9 = v6;
  while ( *v9 )
  {
    ++v9;
    if ( !--v8 )
    {
      v10 = v31;
      goto LABEL_21;
    }
  }
  v11 = 2 * v8;
  *((_QWORD *)&v31 + 1) = v6;
  v10 = -2 - v11;
  LOWORD(v31) = -2 - v11;
  WORD1(v31) = -v11;
LABEL_21:
  v43 = *(_QWORD *)L"00000";
  v44 = *(_DWORD *)L"0";
  v12 = &v43;
  String = 0LL;
  while ( *(_WORD *)v12 )
  {
    v12 = (__int64 *)((char *)v12 + 2);
    if ( !--v7 )
      goto LABEL_26;
  }
  String.Buffer = (wchar_t *)&v43;
  String.Length = -2 - 2 * v7;
  String.MaximumLength = -2 * v7;
LABEL_26:
  v40 = 0LL;
  v42 = 0LL;
  v41 = 0;
  v13 = &v40;
  v14 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= v10 >> 1 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9131;
      goto LABEL_56;
    }
    if ( *(_WORD *)(*((_QWORD *)&v31 + 1) + 2LL * i) == 46 )
    {
      *(_DWORD *)v13 = i;
      v13 = (unsigned __int16 **)((char *)v13 + 4);
      ++v14;
    }
    if ( v14 == 3 )
      break;
  }
  v16 = 0;
  for ( j = 0; j <= 3; ++j )
  {
    if ( j )
    {
      v18 = *((_DWORD *)&v40 + j - 1) + 1;
      if ( j == 3 )
      {
        v19 = v10 >> 1;
        goto LABEL_37;
      }
    }
    else
    {
      v18 = 0;
    }
    v19 = *((_DWORD *)&v40 + j);
LABEL_37:
    if ( v18 >= v19 || v19 > v10 >> 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9139;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"startCharIndex < endCharIndex && endCharIndex <= (PnPDriverVersionString.Length / sizeof(WCHAR))",
        9139LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)RtlUnicodeStringCchCopyStringN(&String, (wchar_t *)(*((_QWORD *)&v31 + 1) + 2LL * v18), v19 - v18) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9148;
      goto LABEL_56;
    }
    v16 = RtlUnicodeStringToInteger(&String, 0, (PULONG)&v42 + j);
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9159;
      goto LABEL_56;
    }
    v10 = v31;
  }
  v20 = v30;
  HIDWORD(v29) = WORD2(v42) | ((_DWORD)v42 << 16);
  LODWORD(v29) = WORD6(v42) | (DWORD2(v42) << 16);
  v21 = v29;
  if ( v29 != v30.QuadPart && !IsKnownMismatchedVersionedDriver(*(_DWORD *)(a1 + 1124), (__int64)&v29, (__int64)&v30) )
  {
    if ( (unsigned int)dword_140166660 > 5 && tlgKeywordOn((__int64)&dword_140166660, 0x400000000100LL) )
    {
      v32 = *(_DWORD *)(a1 + 1140);
      v33 = *(_DWORD *)(a1 + 1136);
      v34 = *(_DWORD *)(a1 + 1132);
      v35 = *(_DWORD *)(a1 + 1128);
      v40 = (unsigned __int16 *)&v31;
      LODWORD(v29) = v25;
      v37 = v20;
      v38 = v21;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v22,
        (__int64)&unk_14014442B,
        v23,
        v24,
        &v40,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v29,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
    WdLogSingleEntry5(2LL, a1, v21, (union _LARGE_INTEGER)v20.QuadPart, v16, -1073741438LL);
    v26 = *(unsigned int *)(a1 + 1124);
    WdLogGlobalForLineNumber = 9192;
    DxgCreateLiveDumpWithWdLogs(403LL, 2059LL, v26, v30.HighPart, v20.LowPart, v4 >= 0xB000);
    LOBYTE(v27) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v27) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "A mismatch between the PNP/INF version and the KMD file version on the graphics adapter has been detected. The a"
        "dapter will fail to start.");
      __debugbreak();
    }
    v3 = 1;
  }
LABEL_56:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return v3 != 0 ? 0xC0000182 : 0;
}
