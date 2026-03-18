/*
 * XREFs of ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1401CBBB0
 * Callers:
 *     DestroyProcessInfoEditionRundown @ 0x1401CBB80 (DestroyProcessInfoEditionRundown.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@444444444444@Z @ 0x1401CBD64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1401CC074 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 */

void __fastcall TraceLoggingProcessUsageOnTerminationEvent(
        struct tagPROCESSINFO *const a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v5; // ecx
  int v6; // r8d
  int v7; // ecx
  int v8; // [rsp+A0h] [rbp+7h] BYREF
  int v9; // [rsp+A4h] [rbp+Bh] BYREF
  int v10; // [rsp+A8h] [rbp+Fh] BYREF
  int v11; // [rsp+ACh] [rbp+13h] BYREF
  int v12; // [rsp+B0h] [rbp+17h] BYREF
  int v13; // [rsp+B4h] [rbp+1Bh] BYREF
  int v14; // [rsp+B8h] [rbp+1Fh] BYREF
  int v15; // [rsp+BCh] [rbp+23h] BYREF
  int v16; // [rsp+C0h] [rbp+27h] BYREF
  const char *v17; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v18[4]; // [rsp+D0h] [rbp+37h] BYREF
  int v19; // [rsp+100h] [rbp+67h] BYREF
  int v20; // [rsp+108h] [rbp+6Fh] BYREF
  int v21; // [rsp+110h] [rbp+77h] BYREF
  int v22; // [rsp+118h] [rbp+7Fh] BYREF

  v5 = *((_DWORD *)a1 + 67);
  if ( (v5 & 0xF) == 2 && (v5 & 0xF0) == 0x20 )
    v6 = 3;
  else
    v6 = ProcessDpiAwarenessFromKernelDpiAwarenessContext();
  if ( (unsigned int)dword_14039BBC0 > 5
    && (qword_14039BBD0 & 0x400000000000LL) != 0
    && (qword_14039BBD8 & 0x400000000000LL) == qword_14039BBD8 )
  {
    v7 = *((_DWORD *)a1 + 243);
    v9 = v6;
    v18[0] = 0x1000000LL;
    v19 = -__CFSHR__(v7, 3);
    v20 = -__CFSHR__(v7, 2);
    v22 = *((_DWORD *)a1 + 241);
    v8 = *((_DWORD *)a1 + 242);
    v10 = *((_DWORD *)a1 + 239);
    v11 = *((_DWORD *)a1 + 238);
    v12 = *((_DWORD *)a1 + 237);
    v13 = *((_DWORD *)a1 + 236);
    v14 = *((_DWORD *)a1 + 240);
    v15 = *((_DWORD *)a1 + 235);
    v17 = "ATTRI_DEPRECATED";
    v16 = *((_DWORD *)a1 + 230);
    v21 = -(v7 & 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v21,
      (unsigned int)&unk_14036A2F4,
      v6,
      a4,
      (__int64)v18,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
}
