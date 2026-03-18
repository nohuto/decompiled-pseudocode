/*
 * XREFs of ?LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z @ 0x1401AE058
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140096FAC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@8875557755@Z @ 0x140004D44 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrap.c)
 */

void __fastcall RimTelemetry::LogNonPointerDeviceStateChange(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        int a6,
        const unsigned __int16 *a7,
        const struct _GUID *a8,
        const struct _GUID *a9,
        char a10,
        char a11,
        char a12,
        const WCHAR *a13,
        int a14,
        int a15,
        int a16,
        const WCHAR *a17,
        const WCHAR *a18,
        int a19,
        int a20)
{
  char v20; // [rsp+C8h] [rbp-80h] BYREF
  char v21; // [rsp+C9h] [rbp-7Fh] BYREF
  __int16 v22; // [rsp+CAh] [rbp-7Eh] BYREF
  _WORD v23[2]; // [rsp+CCh] [rbp-7Ch] BYREF
  int v24; // [rsp+D0h] [rbp-78h] BYREF
  int v25; // [rsp+D4h] [rbp-74h] BYREF
  int v26; // [rsp+D8h] [rbp-70h] BYREF
  int v27; // [rsp+DCh] [rbp-6Ch] BYREF
  int v28; // [rsp+E0h] [rbp-68h] BYREF
  int v29; // [rsp+E4h] [rbp-64h] BYREF
  const WCHAR *v30; // [rsp+E8h] [rbp-60h] BYREF
  const WCHAR *v31; // [rsp+F0h] [rbp-58h] BYREF
  const WCHAR *v32; // [rsp+F8h] [rbp-50h] BYREF
  const struct _GUID *v33; // [rsp+100h] [rbp-48h] BYREF
  const struct _GUID *v34; // [rsp+108h] [rbp-40h] BYREF
  const WCHAR *v35; // [rsp+110h] [rbp-38h] BYREF
  const WCHAR *v36; // [rsp+118h] [rbp-30h] BYREF
  const WCHAR *v37; // [rsp+120h] [rbp-28h] BYREF
  char v38; // [rsp+138h] [rbp-10h] BYREF

  if ( (_DWORD)a1 )
  {
    if ( (unsigned int)dword_1402A9E78 > 5 )
    {
      v24 = a20;
      v25 = a19;
      v30 = a18;
      v31 = a17;
      v26 = a16;
      v27 = a15;
      v28 = a14;
      v32 = a13;
      v38 = a12;
      v20 = a11;
      v21 = a10;
      v33 = a9;
      v34 = a8;
      v35 = a7;
      v29 = a6;
      v36 = a5;
      v23[0] = a2;
      v37 = a4;
      v22 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        a1,
        (__int64)&unk_140283DF3,
        a3,
        (__int64)a4,
        (__int64)v23,
        (__int64)&v22,
        &v37,
        &v36,
        (__int64)&v29,
        &v35,
        (__int64 *)&v34,
        (__int64)&v33,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v38,
        (__int64)&v32,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v25,
        (__int64)&v24);
    }
  }
  else if ( (unsigned int)dword_1402A9E78 > 5 )
  {
    v29 = a20;
    v28 = a19;
    v37 = a18;
    v36 = a17;
    v27 = a16;
    v26 = a15;
    v25 = a14;
    v35 = a13;
    v38 = a12;
    v21 = a11;
    v20 = a10;
    v34 = a9;
    v33 = a8;
    v32 = a7;
    v24 = a6;
    v31 = a5;
    v22 = a2;
    v30 = a4;
    v23[0] = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      (__int64)&unk_140283F8B,
      a3,
      (__int64)a4,
      (__int64)&v22,
      (__int64)v23,
      &v30,
      &v31,
      (__int64)&v24,
      &v32,
      (__int64 *)&v33,
      (__int64)&v34,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v38,
      (__int64)&v35,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v27,
      (__int64)&v36,
      (__int64)&v37,
      (__int64)&v28,
      (__int64)&v29);
  }
}
