/*
 * XREFs of ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1400205D8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x140020110 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333@Z @ 0x1400F3878 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     ?Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z @ 0x14013EBA0 (-Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$07@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140179CD0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tl.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall UserCritTelemetry::SendUserCritSummary(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  LARGE_INTEGER *v3; // rdi
  LARGE_INTEGER *v4; // r15
  LARGE_INTEGER *v5; // r14
  LARGE_INTEGER *v6; // r12
  int v7; // r9d
  LARGE_INTEGER v8; // r8
  unsigned __int64 QuadPart; // rax
  LARGE_INTEGER v10; // rcx
  unsigned __int64 v11; // rax
  LARGE_INTEGER v12; // r8
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  LARGE_INTEGER *v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  LARGE_INTEGER *v21; // [rsp+80h] [rbp-39h] BYREF
  __int16 v22; // [rsp+88h] [rbp-31h]
  LARGE_INTEGER *v23; // [rsp+90h] [rbp-29h] BYREF
  __int16 v24; // [rsp+98h] [rbp-21h]
  LARGE_INTEGER *v25; // [rsp+A0h] [rbp-19h] BYREF
  __int16 v26; // [rsp+A8h] [rbp-11h]
  LARGE_INTEGER v27; // [rsp+B0h] [rbp-9h] BYREF
  LARGE_INTEGER v28; // [rsp+B8h] [rbp-1h] BYREF
  LARGE_INTEGER v29; // [rsp+C0h] [rbp+7h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp+Fh] BYREF
  unsigned __int64 v31[8]; // [rsp+D0h] [rbp+17h] BYREF
  LARGE_INTEGER v32; // [rsp+120h] [rbp+67h] BYREF
  __int64 v33; // [rsp+128h] [rbp+6Fh] BYREF
  LARGE_INTEGER v34; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v35; // [rsp+138h] [rbp+7Fh] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = 0LL;
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[604].QuadPart)) / gliQpcFreq.QuadPart > 0x6B49D200 )
  {
    if ( (unsigned int)dword_1402A9F58 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x400000000000LL) )
    {
      v32.LowPart = 1;
      v26 = 15;
      v25 = this + 580;
      v24 = 15;
      v23 = this + 565;
      v21 = this + 550;
      v22 = 15;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
        15,
        (unsigned int)&unk_1402837FF,
        v19,
        v20,
        (__int64)&v33,
        (__int64)&v21,
        (__int64)&v23,
        (__int64)&v25,
        (__int64)&v32);
    }
    memset(&this[550], 0, 0x168uLL);
    this[604] = PerformanceCounter;
  }
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[605].QuadPart)) / gliQpcFreq.QuadPart > 0xF4240 )
  {
    v4 = this + 598;
    v5 = this + 595;
    v6 = this + 601;
    UserCritTelemetry::TelemetryBuffer::Update(
      (UserCritTelemetry::TelemetryBuffer *)this,
      (const unsigned __int64 *const)&this[601].QuadPart,
      (const unsigned __int64 *const)&this[595].QuadPart,
      (const unsigned __int64 *const)&this[598].QuadPart);
    if ( (unsigned int)dword_1402A9F58 > 5
      && (qword_1402A9F68 & 0x10000000) != 0
      && (qword_1402A9F70 & 0x10000000) == qword_1402A9F70 )
    {
      v8 = this[603];
      QuadPart = this[597].QuadPart;
      v10 = this[600];
      v32 = v8;
      v33 = QuadPart;
      v34 = v10;
      if ( v8.QuadPart )
        v11 = QuadPart / v8.QuadPart;
      else
        v11 = 0LL;
      v12 = this[602];
      v13 = this[599];
      v35 = v11;
      v14 = this[596];
      v28 = v14;
      v27 = v12;
      v29 = v13;
      if ( v12.QuadPart )
        v15 = v14.QuadPart / (unsigned __int64)v12.QuadPart;
      else
        v15 = 0LL;
      v16 = v6->QuadPart;
      v17 = (LARGE_INTEGER *)v4->QuadPart;
      v30 = v15;
      v18 = v5->QuadPart;
      v21 = (LARGE_INTEGER *)v5->QuadPart;
      v31[0] = v16;
      v23 = v17;
      if ( v16 )
        v3 = (LARGE_INTEGER *)(v18 / v16);
      v25 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (_DWORD)v17,
        (unsigned int)&unk_1402836F0,
        v16,
        v7,
        (__int64)&v25,
        (__int64)&v23,
        (__int64)&v21,
        (__int64)v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
    *(_OWORD *)&v5->LowPart = 0LL;
    this[597].QuadPart = 0LL;
    *(_OWORD *)&v4->LowPart = 0LL;
    this[600].QuadPart = 0LL;
    *(_OWORD *)&v6->LowPart = 0LL;
    this[603].QuadPart = 0LL;
    this[605] = PerformanceCounter;
  }
}
