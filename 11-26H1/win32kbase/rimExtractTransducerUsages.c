/*
 * XREFs of rimExtractTransducerUsages @ 0x14015890C
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400F5058 (rimPopulateContactFrameData.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U2@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@4333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400063C4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U2@U1@U1@U1@U1@U1@U1@U-$_tlgWra.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

__int64 __fastcall rimExtractTransducerUsages(__int64 a1, USHORT a2, CHAR *Report, ULONG ReportLength, __int64 a5)
{
  __int64 v6; // rbx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  NTSTATUS v11; // r13d
  NTSTATUS v12; // eax
  int v13; // r8d
  int v14; // r14d
  NTSTATUS v15; // r15d
  ULONG v17; // edx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rbx
  ULONG v27; // [rsp+88h] [rbp-11h] BYREF
  ULONG v28; // [rsp+8Ch] [rbp-Dh] BYREF
  ULONG UsageValue; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v30; // [rsp+94h] [rbp-5h] BYREF
  int v31; // [rsp+98h] [rbp-1h] BYREF
  int v32; // [rsp+9Ch] [rbp+3h] BYREF
  int v33; // [rsp+A0h] [rbp+7h] BYREF
  ULONG v34; // [rsp+A4h] [rbp+Bh] BYREF
  ULONG v35; // [rsp+A8h] [rbp+Fh] BYREF
  BOOL v36; // [rsp+ACh] [rbp+13h] BYREF
  BOOL v37; // [rsp+B0h] [rbp+17h] BYREF
  BOOL v38; // [rsp+B4h] [rbp+1Bh] BYREF
  __int64 v39; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v40; // [rsp+F8h] [rbp+5Fh] BYREF

  v6 = a5;
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a1 + 440) + 16LL);
  v40 = *(_QWORD *)(a1 + 456);
  if ( !*(_QWORD *)(a5 + 2848) )
  {
    v28 = 0;
    v27 = 0;
    UsageValue = 0;
    v11 = HidP_GetUsageValue(HidP_Input, 0xDu, a2, 0x91u, &UsageValue, PreparsedData, Report, ReportLength);
    LODWORD(a5) = HidP_GetUsageValue(HidP_Input, 0xDu, a2, 0x5Bu, &v28, PreparsedData, Report, ReportLength);
    v12 = HidP_GetUsageValue(HidP_Input, 0xDu, a2, 0x6Eu, &v27, PreparsedData, Report, ReportLength);
    v14 = a5;
    v15 = v12;
    if ( (int)a5 >= 0 )
    {
      v17 = UsageValue;
      v18 = v28 | ((unsigned __int64)v27 << 32);
      *(_WORD *)(v6 + 2856) = UsageValue;
      v19 = v40;
      *(_QWORD *)(v6 + 2848) = v18;
      if ( (*(_DWORD *)(v19 + 368) & 0x8000) != 0 && v11 >= 0 && (_WORD)v17 )
      {
        if ( !v18 )
          return 0LL;
        *(_DWORD *)(v6 + 2860) = 1;
        *(_WORD *)(v6 + 2590) = v17;
        *(_QWORD *)(v6 + 2592) = v18;
      }
      else if ( !v18 )
      {
        return 0LL;
      }
      v20 = *(_DWORD *)(v6 + 2496);
      v22 = *(_QWORD *)(W32GetUserSessionState(v18, v17, v13) + 264);
      if ( *(_QWORD *)(v6 + 2848) != v22 || (v21 = v20 / 0x64, LODWORD(v22) = v20 % 0x64, v20 % 0x64 < 2) )
      {
        if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x800000000000LL) )
        {
          v25 = *(_QWORD *)(a1 + 440);
          v31 = *(_DWORD *)(v6 + 64);
          v32 = *(_DWORD *)(v6 + 2860);
          v33 = *(unsigned __int16 *)(v6 + 2856);
          v34 = v27;
          v35 = v28;
          v39 = 2048LL;
          v30 = v20;
          LOWORD(a5) = *(_WORD *)(v25 + 112);
          LOWORD(v40) = *(_WORD *)(v25 + 110);
          v36 = v11 >= 0;
          v37 = v15 >= 0;
          v38 = v14 >= 0;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v25,
            (__int64)&unk_1402872D8,
            v23,
            v24,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v40,
            (__int64)&a5,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v39);
        }
        v26 = *(_QWORD *)(v6 + 2848);
        *(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 264) = v26;
      }
    }
  }
  return 0LL;
}
