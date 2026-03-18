/*
 * XREFs of ?LogPointerDeviceCreated@RimTelemetry@@CAXGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_STRING@@400AEBUtagRECT@@5@Z @ 0x14018E3B4
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140096FAC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@U2@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U7@U2@U2@U3@U3@U3@U3@U3@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@8875557755455AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@9445555557@Z @ 0x14017EE9C (--$Write@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U_ea_14017EE9C.c)
 */

void __fastcall RimTelemetry::LogPointerDeviceCreated(
        __int16 a1,
        __int16 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        int a5,
        const unsigned __int16 *a6,
        const struct _GUID *a7,
        unsigned __int64 a8,
        char a9,
        char a10,
        char a11,
        void *const a12,
        int a13,
        int a14,
        int a15,
        unsigned __int64 a16,
        unsigned __int64 a17,
        int a18,
        int a19,
        const unsigned __int16 *a20,
        unsigned int a21,
        int a22,
        struct _UNICODE_STRING *const a23,
        struct _UNICODE_STRING *const a24,
        const unsigned __int16 *a25,
        const unsigned __int16 *a26,
        const struct tagRECT *a27,
        const struct tagRECT *a28)
{
  char v28; // [rsp+130h] [rbp-80h] BYREF
  char v29; // [rsp+131h] [rbp-7Fh] BYREF
  char v30[2]; // [rsp+132h] [rbp-7Eh] BYREF
  __int16 v31; // [rsp+134h] [rbp-7Ch] BYREF
  __int16 v32; // [rsp+136h] [rbp-7Ah] BYREF
  LONG right; // [rsp+138h] [rbp-78h] BYREF
  LONG bottom; // [rsp+13Ch] [rbp-74h] BYREF
  LONG v35; // [rsp+140h] [rbp-70h] BYREF
  LONG v36; // [rsp+144h] [rbp-6Ch] BYREF
  LONG top; // [rsp+148h] [rbp-68h] BYREF
  LONG left; // [rsp+14Ch] [rbp-64h] BYREF
  int v39; // [rsp+150h] [rbp-60h] BYREF
  unsigned int v40; // [rsp+154h] [rbp-5Ch] BYREF
  int v41; // [rsp+158h] [rbp-58h] BYREF
  int v42; // [rsp+15Ch] [rbp-54h] BYREF
  int v43; // [rsp+160h] [rbp-50h] BYREF
  int v44; // [rsp+164h] [rbp-4Ch] BYREF
  int v45; // [rsp+168h] [rbp-48h] BYREF
  int v46; // [rsp+16Ch] [rbp-44h] BYREF
  __int64 v47; // [rsp+170h] [rbp-40h] BYREF
  const WCHAR *v48; // [rsp+178h] [rbp-38h] BYREF
  const WCHAR *v49; // [rsp+180h] [rbp-30h] BYREF
  struct _UNICODE_STRING *v50; // [rsp+188h] [rbp-28h] BYREF
  struct _UNICODE_STRING *v51; // [rsp+190h] [rbp-20h] BYREF
  const WCHAR *v52; // [rsp+198h] [rbp-18h] BYREF
  unsigned __int64 v53; // [rsp+1A0h] [rbp-10h] BYREF
  unsigned __int64 v54; // [rsp+1A8h] [rbp-8h] BYREF
  void *v55; // [rsp+1B0h] [rbp+0h] BYREF
  unsigned __int64 v56; // [rsp+1B8h] [rbp+8h] BYREF
  const struct _GUID *v57; // [rsp+1C0h] [rbp+10h] BYREF
  const WCHAR *v58; // [rsp+1C8h] [rbp+18h] BYREF
  const WCHAR *v59; // [rsp+1D0h] [rbp+20h] BYREF
  const WCHAR *v60; // [rsp+1D8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1402A9E78 > 5
    && (qword_1402A9E88 & 0x800000000000LL) != 0
    && (qword_1402A9E90 & 0x800000000000LL) == qword_1402A9E90 )
  {
    v47 = 2048LL;
    v59 = a4;
    v60 = a3;
    right = a28->right;
    bottom = a28->bottom;
    v31 = a2;
    v32 = a1;
    v35 = a27->bottom;
    v36 = a27->right;
    top = a27->top;
    left = a27->left;
    v48 = a26;
    v49 = a25;
    v50 = a24;
    v51 = a23;
    v39 = a22;
    v40 = a21;
    v52 = a20;
    v41 = a19;
    v42 = a18;
    v53 = a17;
    v54 = a16;
    v43 = a15;
    v44 = a14;
    v45 = a13;
    v55 = a12;
    v28 = a11;
    v29 = a10;
    v30[0] = a9;
    v56 = a8;
    v57 = a7;
    v58 = a6;
    v46 = a5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)a27,
      byte_1402841D3,
      (__int64)a3,
      (__int64)a4,
      (__int64)&v32,
      (__int64)&v31,
      &v60,
      &v59,
      (__int64)&v46,
      &v58,
      (__int64 *)&v57,
      (__int64)&v56,
      (__int64)v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v55,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v42,
      (__int64)&v41,
      &v52,
      (__int64)&v40,
      (__int64)&v39,
      (unsigned __int16 **)&v51,
      (unsigned __int16 **)&v50,
      &v49,
      &v48,
      (__int64)&left,
      (__int64)&top,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&bottom,
      (__int64)&right,
      (__int64)&v47);
  }
}
