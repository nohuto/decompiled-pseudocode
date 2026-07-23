/*
 * XREFs of PnpTraceDeviceConfig @ 0x140B31F6C
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpTraceDeviceConfig(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        const WCHAR *a6,
        const WCHAR *a7,
        const WCHAR *a8,
        const WCHAR *a9,
        const WCHAR *a10,
        const WCHAR *a11,
        const WCHAR *a12,
        const WCHAR *a13,
        const WCHAR *a14,
        const WCHAR *a15,
        const WCHAR *a16,
        const WCHAR *a17,
        char a18,
        const WCHAR *a19,
        const WCHAR *a20,
        char a21,
        char a22,
        unsigned __int16 *a23,
        char a24,
        char a25,
        const WCHAR *a26,
        int a27,
        NTSTATUS *a28)
{
  NTSTATUS result; // eax
  const WCHAR *v29; // r10
  const WCHAR *v30; // r11
  char v31; // [rsp+30h] [rbp-D0h] BYREF
  char v32; // [rsp+31h] [rbp-CFh] BYREF
  char v33; // [rsp+32h] [rbp-CEh] BYREF
  char v34; // [rsp+33h] [rbp-CDh] BYREF
  char v35; // [rsp+34h] [rbp-CCh] BYREF
  int v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  const WCHAR *v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  const WCHAR *v41; // [rsp+60h] [rbp-A0h]
  const WCHAR *v42; // [rsp+68h] [rbp-98h]
  const WCHAR *v43; // [rsp+70h] [rbp-90h]
  const WCHAR *v44; // [rsp+78h] [rbp-88h]
  const WCHAR *v45; // [rsp+80h] [rbp-80h]
  const WCHAR *v46; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  int *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  _DWORD *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  __int64 v54; // [rsp+E0h] [rbp-20h]
  _DWORD v55[2]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  __int64 v58; // [rsp+100h] [rbp+0h]
  _DWORD v59[2]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  _DWORD v63[2]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v64[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v65[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v66[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v67[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v68[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v69[16]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v70[16]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v71[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v72[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v73[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v74[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v75[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v76[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v77[16]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v78[16]; // [rsp+210h] [rbp+110h] BYREF
  char *v79; // [rsp+220h] [rbp+120h]
  __int64 v80; // [rsp+228h] [rbp+128h]
  _BYTE v81[16]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v82[16]; // [rsp+240h] [rbp+140h] BYREF
  char *v83; // [rsp+250h] [rbp+150h]
  __int64 v84; // [rsp+258h] [rbp+158h]
  char *v85; // [rsp+260h] [rbp+160h]
  __int64 v86; // [rsp+268h] [rbp+168h]
  char *v87; // [rsp+270h] [rbp+170h]
  __int64 v88; // [rsp+278h] [rbp+178h]
  char *v89; // [rsp+280h] [rbp+180h]
  __int64 v90; // [rsp+288h] [rbp+188h]
  const WCHAR **v91; // [rsp+290h] [rbp+190h]
  __int64 v92; // [rsp+298h] [rbp+198h]
  __int64 *v93; // [rsp+2A0h] [rbp+1A0h]
  __int64 v94; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v95; // [rsp+2B0h] [rbp+1B0h]
  __int64 v96; // [rsp+2B8h] [rbp+1B8h]

  v41 = a13;
  v42 = a14;
  v43 = a15;
  v44 = a16;
  v45 = a17;
  v46 = a19;
  result = (int)a20;
  v39 = a20;
  v38 = 0LL;
  if ( a28 )
  {
    HIDWORD(v38) = a28[1];
    result = *a28;
    LODWORD(v38) = *a28;
  }
  if ( (unsigned int)dword_140E06EB8 > 5 )
  {
    result = 0;
    v37 = 0x800000000000LL;
    if ( (qword_140E06EC8 & 0x800000000000LL) != 0 )
    {
      result = v37 & qword_140E06ED0;
      if ( (v37 & qword_140E06ED0) == qword_140E06ED0 )
      {
        v40 = 2048LL;
        v36 = 0;
        v48 = &v40;
        v50 = &v36;
        v52 = v55;
        v54 = *((_QWORD *)a1 + 1);
        v55[0] = *a1;
        v56 = v59;
        v58 = *((_QWORD *)a2 + 1);
        v59[0] = *a2;
        v60 = v63;
        v62 = *((_QWORD *)a23 + 1);
        v63[0] = *a23;
        v49 = 8LL;
        v51 = 4LL;
        v53 = 2LL;
        v55[1] = 0;
        v57 = 2LL;
        v59[1] = 0;
        v61 = 2LL;
        v63[1] = 0;
        tlgCreate1Sz_wchar_t((__int64)v64, a3);
        tlgCreate1Sz_wchar_t((__int64)v65, v29);
        tlgCreate1Sz_wchar_t((__int64)v66, v30);
        tlgCreate1Sz_wchar_t((__int64)v67, a6);
        tlgCreate1Sz_wchar_t((__int64)v68, a7);
        tlgCreate1Sz_wchar_t((__int64)v69, a8);
        tlgCreate1Sz_wchar_t((__int64)v70, a9);
        tlgCreate1Sz_wchar_t((__int64)v71, a10);
        tlgCreate1Sz_wchar_t((__int64)v72, a11);
        tlgCreate1Sz_wchar_t((__int64)v73, a12);
        tlgCreate1Sz_wchar_t((__int64)v74, v41);
        tlgCreate1Sz_wchar_t((__int64)v75, v42);
        tlgCreate1Sz_wchar_t((__int64)v76, v43);
        tlgCreate1Sz_wchar_t((__int64)v77, v44);
        tlgCreate1Sz_wchar_t((__int64)v78, v45);
        v31 = a18;
        v79 = &v31;
        v80 = 1LL;
        tlgCreate1Sz_wchar_t((__int64)v81, v46);
        tlgCreate1Sz_wchar_t((__int64)v82, v39);
        v83 = &v32;
        v33 = a22;
        v32 = a21;
        v85 = &v33;
        v34 = a24;
        v87 = &v34;
        v35 = a25;
        v89 = &v35;
        v39 = a26;
        v91 = &v39;
        LODWORD(v37) = a27;
        v93 = &v37;
        v95 = &v38;
        v84 = 1LL;
        v86 = 1LL;
        v88 = 1LL;
        v90 = 1LL;
        v92 = 8LL;
        v94 = 4LL;
        v96 = 8LL;
        return tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E06EB8,
                 (unsigned __int8 *)byte_140048B35,
                 0LL,
                 0LL,
                 0x23u,
                 &v47);
      }
    }
  }
  return result;
}
