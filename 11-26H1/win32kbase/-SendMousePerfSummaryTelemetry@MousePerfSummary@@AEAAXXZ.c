/*
 * XREFs of ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1400D2284
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1400D17BC (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333333333333333333333333333333333@Z @ 0x1401574B4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     ?Reset@MousePerfSummary@@AEAAXXZ @ 0x14015FA84 (-Reset@MousePerfSummary@@AEAAXXZ.c)
 */

void __fastcall MousePerfSummary::SendMousePerfSummaryTelemetry(MousePerfSummary *this)
{
  int *v2; // rdi
  int v3; // ecx
  int v4; // r9d
  LARGE_INTEGER PerformanceCounter; // r15
  _DWORD *v6; // rsi
  int v7; // r14d
  LARGE_INTEGER *v8; // r8
  __int64 v9; // [rsp+170h] [rbp-80h] BYREF
  __int64 v10; // [rsp+178h] [rbp-78h] BYREF
  __int64 v11; // [rsp+180h] [rbp-70h] BYREF
  __int64 v12; // [rsp+188h] [rbp-68h] BYREF
  __int64 v13; // [rsp+190h] [rbp-60h] BYREF
  __int64 v14; // [rsp+198h] [rbp-58h] BYREF
  __int64 v15; // [rsp+1A0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+1A8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+1B0h] [rbp-40h] BYREF
  __int64 v18; // [rsp+1B8h] [rbp-38h] BYREF
  __int64 v19; // [rsp+1C0h] [rbp-30h] BYREF
  __int64 v20; // [rsp+1C8h] [rbp-28h] BYREF
  __int64 v21; // [rsp+1D0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+1D8h] [rbp-18h] BYREF
  __int64 v23; // [rsp+1E0h] [rbp-10h] BYREF
  __int64 v24; // [rsp+1E8h] [rbp-8h] BYREF
  __int64 v25; // [rsp+1F0h] [rbp+0h] BYREF
  __int64 v26; // [rsp+1F8h] [rbp+8h] BYREF
  __int64 v27; // [rsp+200h] [rbp+10h] BYREF
  __int64 v28; // [rsp+208h] [rbp+18h] BYREF
  __int64 v29; // [rsp+210h] [rbp+20h] BYREF
  __int64 v30; // [rsp+218h] [rbp+28h] BYREF
  __int64 v31; // [rsp+220h] [rbp+30h] BYREF
  __int64 v32; // [rsp+228h] [rbp+38h] BYREF
  __int64 v33; // [rsp+230h] [rbp+40h] BYREF
  __int64 v34; // [rsp+238h] [rbp+48h] BYREF
  __int64 v35; // [rsp+240h] [rbp+50h] BYREF
  __int64 v36; // [rsp+248h] [rbp+58h] BYREF
  __int64 v37; // [rsp+250h] [rbp+60h] BYREF
  __int64 v38; // [rsp+258h] [rbp+68h] BYREF
  __int64 v39; // [rsp+260h] [rbp+70h] BYREF
  __int64 v40; // [rsp+268h] [rbp+78h] BYREF
  __int64 v41; // [rsp+270h] [rbp+80h] BYREF
  __int64 v42; // [rsp+278h] [rbp+88h] BYREF
  __int64 v43; // [rsp+280h] [rbp+90h] BYREF
  __int64 v44; // [rsp+288h] [rbp+98h] BYREF
  __int64 v45; // [rsp+290h] [rbp+A0h] BYREF
  __int64 v46[7]; // [rsp+298h] [rbp+A8h] BYREF
  __int64 v47; // [rsp+2E0h] [rbp+F0h] BYREF
  __int64 v48; // [rsp+2E8h] [rbp+F8h] BYREF
  __int64 v49; // [rsp+2F0h] [rbp+100h] BYREF
  __int64 v50; // [rsp+2F8h] [rbp+108h] BYREF

  v2 = (int *)((char *)this + 488);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = (_DWORD *)((char *)this + 484);
  if ( (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)this + 62))) / gliQpcFreq.QuadPart > 0x927C0 )
  {
    v7 = (_DWORD)this + 496;
  }
  else
  {
    if ( *v2 == *v6 )
      return;
    v7 = (_DWORD)this + 496;
  }
  if ( (unsigned int)dword_1402A9E78 > 5
    && (qword_1402A9E88 & 0x400000000000LL) != 0
    && (qword_1402A9E90 & 0x400000000000LL) == qword_1402A9E90 )
  {
    v47 = *((unsigned int *)this + 98);
    v48 = *((_QWORD *)this + 47);
    v49 = *((_QWORD *)this + 45);
    v50 = *((_QWORD *)this + 46);
    v9 = *((unsigned int *)this + 88);
    v10 = *((_QWORD *)this + 42);
    v11 = *((_QWORD *)this + 40);
    v12 = *((_QWORD *)this + 41);
    v13 = *((unsigned int *)this + 78);
    v14 = *((_QWORD *)this + 37);
    v15 = *((_QWORD *)this + 35);
    v16 = *((_QWORD *)this + 36);
    v17 = *((unsigned int *)this + 68);
    v18 = *((_QWORD *)this + 32);
    v19 = *((_QWORD *)this + 30);
    v20 = *((_QWORD *)this + 31);
    v21 = *((unsigned int *)this + 58);
    v22 = *((_QWORD *)this + 27);
    v23 = *((_QWORD *)this + 25);
    v24 = *((_QWORD *)this + 26);
    v25 = *((unsigned int *)this + 48);
    v26 = *((_QWORD *)this + 22);
    v27 = *((_QWORD *)this + 20);
    v28 = *((_QWORD *)this + 21);
    v29 = *((unsigned int *)this + 38);
    v30 = *((_QWORD *)this + 17);
    v31 = *((_QWORD *)this + 15);
    v32 = *((_QWORD *)this + 16);
    v33 = *((unsigned int *)this + 28);
    v34 = *((_QWORD *)this + 12);
    v35 = *((_QWORD *)this + 10);
    v36 = *((_QWORD *)this + 11);
    v37 = *((unsigned int *)this + 18);
    v38 = *((_QWORD *)this + 7);
    v39 = *((_QWORD *)this + 5);
    v40 = *((_QWORD *)this + 6);
    v41 = *((unsigned int *)this + 8);
    v42 = *((_QWORD *)this + 2);
    v43 = *(_QWORD *)this;
    v44 = *((_QWORD *)this + 1);
    v45 = *v2;
    v46[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v3,
      (unsigned int)&unk_14028CDD0,
      v7,
      v4,
      (__int64)v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47);
  }
  MousePerfSummary::Reset(this);
  *v6 = *v2;
  *v8 = PerformanceCounter;
}
