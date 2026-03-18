/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1400C72D8
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1400C5E00 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@7@Z @ 0x14004039C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA_ea_14004039C.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

void __fastcall VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT::LogData(
        VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT *this,
        struct DXGPROCESS *a2,
        struct DXGADAPTER *a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int16 v6; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int16 *v7; // [rsp+58h] [rbp-1h] BYREF
  __int128 *v8; // [rsp+60h] [rbp+7h] BYREF
  __int64 v9; // [rsp+68h] [rbp+Fh] BYREF
  VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT *v10; // [rsp+70h] [rbp+17h] BYREF
  int v11; // [rsp+78h] [rbp+1Fh]
  __int64 v12; // [rsp+80h] [rbp+27h] BYREF
  int v13; // [rsp+88h] [rbp+2Fh]
  __int128 v14; // [rsp+90h] [rbp+37h] BYREF

  if ( *((_BYTE *)this + 264)
    && (unsigned int)dword_14008A048 > 5
    && (qword_14008A058 & 0x400000000008LL) != 0
    && (qword_14008A060 & 0x400000000008LL) == qword_14008A060 )
  {
    v10 = this;
    v12 = (__int64)this + 176;
    v7 = (unsigned __int16 *)*((_QWORD *)a3 + 246);
    v4 = *((_QWORD *)a2 + 8);
    v11 = 176;
    v13 = 88;
    v5 = *(_OWORD *)(v4 + 144);
    v6 = 0;
    v8 = &v14;
    v14 = v5;
    v9 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      (__int64)this,
      (__int64)&unk_14007D435,
      (__int64)a3,
      a4,
      (__int64)&v9,
      (__int64)&v6,
      (__int64 *)&v8,
      &v7,
      &v12,
      (__int64 *)&v10);
  }
}
