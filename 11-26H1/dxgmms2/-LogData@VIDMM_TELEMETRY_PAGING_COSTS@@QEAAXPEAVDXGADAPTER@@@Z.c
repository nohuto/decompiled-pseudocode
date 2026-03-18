/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1400AB51C
 * Callers:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009BA24 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@@Z @ 0x140001D3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@66@Z @ 0x1400401AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNIC_ea_1400401AC.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004C680 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS@@CAXPEBUTimingData@1@PEAU21@@Z @ 0x1400AB430 (-ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS@@CAXPEBUTimingData@1@PEAU21@@Z.c)
 */

void __fastcall VIDMM_TELEMETRY_PAGING_COSTS::LogData(VIDMM_TELEMETRY_PAGING_COSTS *this, struct DXGADAPTER *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int16 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+70h] [rbp-90h]
  _BYTE *v37; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+80h] [rbp-80h]
  _BYTE *v39; // [rsp+88h] [rbp-78h] BYREF
  int v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  char v42; // [rsp+A0h] [rbp-60h]
  _BYTE v43[88]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v44[176]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v45[184]; // [rsp+1B8h] [rbp+B8h] BYREF

  if ( (*((_DWORD *)a2 + 111) & 0x10) == 0 )
  {
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v41,
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 3608));
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v36 = 88;
      v35 = (char *)this + 3520;
      v33 = *((_QWORD *)a2 + 246);
      v32 = 1;
      v34 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize>(
        v4,
        (__int64)&unk_14007D34C,
        v5,
        v6,
        (__int64)&v34,
        (__int64)&v32,
        (unsigned __int16 **)&v33,
        (__int64 *)&v35);
    }
    memset(v43, 0, sizeof(v43));
    memset(v44, 0, sizeof(v44));
    memset(v45, 0, 0xB0uLL);
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(this, (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v43);
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v36 = 176;
      v35 = v45;
      v38 = 176;
      v37 = v44;
      v39 = v43;
      v34 = *((_QWORD *)a2 + 246);
      v40 = 88;
      v32 = 0;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v7,
        (__int64)&unk_14007D1DE,
        v8,
        v9,
        (__int64)&v33,
        (__int64)&v32,
        (unsigned __int16 **)&v34,
        (__int64 *)&v39,
        (__int64 *)&v37,
        (__int64 *)&v35);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 440),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v43);
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v40 = 176;
      v39 = v45;
      v38 = 176;
      v37 = v44;
      v35 = v43;
      v34 = *((_QWORD *)a2 + 246);
      v36 = 88;
      v32 = 0;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v10,
        (__int64)&unk_14007D250,
        v11,
        v12,
        (__int64)&v33,
        (__int64)&v32,
        (unsigned __int16 **)&v34,
        (__int64 *)&v35,
        (__int64 *)&v37,
        (__int64 *)&v39);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 880),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v43);
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v40 = 176;
      v39 = v45;
      v38 = 176;
      v37 = v44;
      v35 = v43;
      v34 = *((_QWORD *)a2 + 246);
      v36 = 88;
      v32 = 0;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v13,
        (__int64)&unk_14007D100,
        v14,
        v15,
        (__int64)&v33,
        (__int64)&v32,
        (unsigned __int16 **)&v34,
        (__int64 *)&v35,
        (__int64 *)&v37,
        (__int64 *)&v39);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 1320),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v43);
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v40 = 176;
      v39 = v45;
      v38 = 176;
      v37 = v44;
      v35 = v43;
      v34 = *((_QWORD *)a2 + 246);
      v36 = 88;
      v32 = 0;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v16,
        (__int64)&unk_14007D16E,
        v17,
        v18,
        (__int64)&v33,
        (__int64)&v32,
        (unsigned __int16 **)&v34,
        (__int64 *)&v35,
        (__int64 *)&v37,
        (__int64 *)&v39);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 1760),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v43);
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v40 = 176;
      v39 = v45;
      v38 = 176;
      v37 = v44;
      v35 = v43;
      v34 = *((_QWORD *)a2 + 246);
      v36 = 88;
      v32 = 0;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v19,
        (__int64)&unk_14007D017,
        v20,
        v21,
        (__int64)&v33,
        (__int64)&v32,
        (unsigned __int16 **)&v34,
        (__int64 *)&v35,
        (__int64 *)&v37,
        (__int64 *)&v39);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 2200),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v43);
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v40 = 176;
      v39 = v45;
      v38 = 176;
      v37 = v44;
      v35 = v43;
      v34 = *((_QWORD *)a2 + 246);
      v36 = 88;
      v32 = 0;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v22,
        (__int64)&unk_14007D08C,
        v23,
        v24,
        (__int64)&v33,
        (__int64)&v32,
        (unsigned __int16 **)&v34,
        (__int64 *)&v35,
        (__int64 *)&v37,
        (__int64 *)&v39);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 2640),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v43);
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v40 = 176;
      v39 = v45;
      v38 = 176;
      v37 = v44;
      v35 = v43;
      v34 = *((_QWORD *)a2 + 246);
      v36 = 88;
      v32 = 0;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v25,
        (__int64)&unk_14007CF37,
        v26,
        v27,
        (__int64)&v33,
        (__int64)&v32,
        (unsigned __int16 **)&v34,
        (__int64 *)&v35,
        (__int64 *)&v37,
        (__int64 *)&v39);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 3080),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v43);
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
    {
      v40 = 176;
      v39 = v45;
      v38 = 176;
      v37 = v44;
      v35 = v43;
      v34 = *((_QWORD *)a2 + 246);
      v36 = 88;
      v32 = 0;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v28,
        (__int64)&unk_14007CFAB,
        v29,
        v30,
        (__int64)&v33,
        (__int64)&v32,
        (unsigned __int16 **)&v34,
        (__int64 *)&v35,
        (__int64 *)&v37,
        (__int64 *)&v39);
    }
    if ( v42 )
    {
      v31 = v41;
      _InterlockedDecrement((volatile signed __int32 *)(v41 + 16));
      ExReleasePushLockSharedEx(v31, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
