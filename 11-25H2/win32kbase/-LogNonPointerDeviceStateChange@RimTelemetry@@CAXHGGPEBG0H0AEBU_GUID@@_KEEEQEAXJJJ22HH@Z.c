/*
 * XREFs of ?LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z @ 0x1401147CC
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1401140A0 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@88755577557@Z @ 0x140114B28 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrap.c)
 */

void __fastcall RimTelemetry::LogNonPointerDeviceStateChange(
        int a1,
        __int16 a2,
        int a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        int a6,
        const unsigned __int16 *a7,
        const struct _GUID *a8,
        unsigned __int64 a9,
        char a10,
        char a11,
        char a12,
        const struct _GUID *a13,
        int a14,
        int a15,
        int a16,
        const unsigned __int16 *a17,
        const unsigned __int16 *a18,
        int a19,
        int a20)
{
  char v20; // [rsp+C0h] [rbp-80h] BYREF
  char v21; // [rsp+C1h] [rbp-7Fh] BYREF
  __int16 v22; // [rsp+C2h] [rbp-7Eh] BYREF
  _WORD v23[2]; // [rsp+C4h] [rbp-7Ch] BYREF
  int v24; // [rsp+C8h] [rbp-78h] BYREF
  int v25; // [rsp+CCh] [rbp-74h] BYREF
  int v26; // [rsp+D0h] [rbp-70h] BYREF
  int v27; // [rsp+D4h] [rbp-6Ch] BYREF
  int v28; // [rsp+D8h] [rbp-68h] BYREF
  int v29; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-60h] BYREF
  const unsigned __int16 *v31; // [rsp+E8h] [rbp-58h] BYREF
  const unsigned __int16 *v32; // [rsp+F0h] [rbp-50h] BYREF
  const struct _GUID *v33; // [rsp+F8h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+100h] [rbp-40h] BYREF
  const struct _GUID *v35; // [rsp+108h] [rbp-38h] BYREF
  const unsigned __int16 *v36; // [rsp+110h] [rbp-30h] BYREF
  const unsigned __int16 *v37; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v38[2]; // [rsp+120h] [rbp-20h] BYREF
  char v39; // [rsp+140h] [rbp+0h] BYREF

  if ( a1 )
  {
    if ( (unsigned int)dword_14029EE58 > 5
      && (qword_14029EE68 & 0x800000000000LL) != 0
      && (qword_14029EE70 & 0x800000000000LL) == qword_14029EE70 )
    {
      v24 = a20;
      v25 = a19;
      v31 = a18;
      v32 = a17;
      v26 = a16;
      v27 = a15;
      v28 = a14;
      v33 = a13;
      v39 = a12;
      v20 = a11;
      v21 = a10;
      v34 = a9;
      v35 = a8;
      v36 = a7;
      v29 = a6;
      v37 = a5;
      v23[0] = a2;
      v30 = 2048LL;
      v38[0] = a4;
      v22 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        a1,
        (unsigned int)&unk_140279BDC,
        a3,
        (_DWORD)a4,
        (__int64)v23,
        (__int64)&v22,
        (__int64)v38,
        (__int64)&v37,
        (__int64)&v29,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v39,
        (__int64)&v33,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v30);
    }
  }
  else if ( (unsigned int)dword_14029EE58 > 5
         && (qword_14029EE68 & 0x800000000000LL) != 0
         && (qword_14029EE70 & 0x800000000000LL) == qword_14029EE70 )
  {
    v29 = a20;
    v28 = a19;
    v37 = a18;
    v36 = a17;
    v27 = a16;
    v26 = a15;
    v25 = a14;
    v35 = a13;
    v39 = a12;
    v21 = a11;
    v20 = a10;
    v34 = a9;
    v33 = a8;
    v32 = a7;
    v24 = a6;
    v31 = a5;
    v22 = a2;
    v38[0] = 2048LL;
    v30 = (__int64)a4;
    v23[0] = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      0,
      (unsigned int)&unk_140279D84,
      a3,
      (_DWORD)a4,
      (__int64)&v22,
      (__int64)v23,
      (__int64)&v30,
      (__int64)&v31,
      (__int64)&v24,
      (__int64)&v32,
      (__int64)&v33,
      (__int64)&v34,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v39,
      (__int64)&v35,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v27,
      (__int64)&v36,
      (__int64)&v37,
      (__int64)&v28,
      (__int64)&v29,
      (__int64)v38);
  }
}
