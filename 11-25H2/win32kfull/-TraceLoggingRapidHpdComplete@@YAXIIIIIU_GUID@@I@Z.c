/*
 * XREFs of ?TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z @ 0x1401F9768
 * Callers:
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F93B0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapperByRef@$0BA@@@555554@Z @ 0x140002224 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U-$_tlgWrap.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?RapidHpdToString@InputTraceLogging@@SAPEBDW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1402B7B88 (-RapidHpdToString@InputTraceLogging@@SAPEBDW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 */

void __fastcall TraceLoggingRapidHpdComplete(
        unsigned int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        struct _GUID *a6,
        unsigned int a7)
{
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // [rsp+90h] [rbp-11h] BYREF
  unsigned int v17; // [rsp+94h] [rbp-Dh] BYREF
  unsigned int v18; // [rsp+98h] [rbp-9h] BYREF
  unsigned int v19; // [rsp+9Ch] [rbp-5h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp-1h] BYREF
  int v21; // [rsp+A4h] [rbp+3h] BYREF
  int v22; // [rsp+A8h] [rbp+7h] BYREF
  int v23; // [rsp+ACh] [rbp+Bh] BYREF
  __int64 ProcessImageFileName; // [rsp+B0h] [rbp+Fh] BYREF
  struct _GUID *v25; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+C8h] [rbp+27h] BYREF
  unsigned int v28; // [rsp+F0h] [rbp+4Fh] BYREF

  if ( (unsigned int)dword_14039BBC0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_14039BBC0, 0x400000000000LL) )
    {
      CurrentProcess = PsGetCurrentProcess(v11);
      ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
      v21 = a4;
      v28 = (a7 >> 4) & 1;
      v22 = a3;
      v16 = (a7 >> 3) & 1;
      v23 = a2;
      v17 = (a7 >> 2) & 1;
      v19 = a7 & 1;
      v18 = (a7 >> 1) & 1;
      v25 = a6;
      v20 = a5;
      v26 = InputTraceLogging::RapidHpdToString(a1);
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v13,
        (__int64)&unk_14036982D,
        v14,
        v15,
        (__int64)&v27,
        &v26,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v25,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v28,
        &ProcessImageFileName);
    }
  }
}
