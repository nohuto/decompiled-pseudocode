/*
 * XREFs of StorpTelemetryMiniportLogError @ 0x14004DE50
 * Callers:
 *     StorEtwMiniportLogError @ 0x140052C80 (StorEtwMiniportLogError.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14003F1BC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMiniportLogError(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const wchar_t *a7,
        _BYTE *a8,
        _BYTE *a9,
        _BYTE *a10,
        int a11,
        __int64 a12,
        int a13,
        const wchar_t *a14)
{
  _UNKNOWN **v14; // rax
  int v17; // ecx
  char v18; // r9
  int v19; // r11d
  unsigned __int16 v20; // r10
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+30h] [rbp-D8h]
  char v26; // [rsp+48h] [rbp-C0h] BYREF
  char v27; // [rsp+49h] [rbp-BFh] BYREF
  char v28; // [rsp+4Ah] [rbp-BEh] BYREF
  char v29; // [rsp+4Bh] [rbp-BDh] BYREF
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  int v31; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  char *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  int *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  char *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  char *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  char *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  __int64 v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  __int64 v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  _BYTE v51[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v52[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v53[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v54[16]; // [rsp+138h] [rbp+30h] BYREF
  int *v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+150h] [rbp+48h]
  _DWORD *v57; // [rsp+158h] [rbp+50h]
  __int64 v58; // [rsp+160h] [rbp+58h]
  __int64 v59; // [rsp+168h] [rbp+60h]
  _DWORD v60[2]; // [rsp+170h] [rbp+68h] BYREF
  int *v61; // [rsp+178h] [rbp+70h]
  __int64 v62; // [rsp+180h] [rbp+78h]
  _BYTE v63[16]; // [rsp+188h] [rbp+80h] BYREF
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

  v14 = &retaddr;
  if ( (unsigned int)dword_140172178 > 5 )
  {
    LOBYTE(v14) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v14 )
    {
      v30 = v17;
      v26 = 1;
      v35 = &v33;
      v38 = 1LL;
      v37 = &v26;
      v39 = &v30;
      v41 = &v27;
      v43 = &v28;
      v45 = &v29;
      v47 = a5;
      v42 = 1LL;
      v44 = 1LL;
      v46 = 1LL;
      v49 = a6;
      v33 = 0x1000000LL;
      v36 = 8LL;
      v40 = 4LL;
      v27 = a2;
      v28 = a3;
      v29 = v18;
      v48 = 16LL;
      v50 = 16LL;
      tlgCreate1Sz_wchar_t((__int64)v51, a7);
      tlgCreate1Sz_char((__int64)v52, a8);
      tlgCreate1Sz_char((__int64)v53, a9);
      tlgCreate1Sz_char((__int64)v54, a10);
      v31 = v19;
      v55 = &v31;
      v56 = 4LL;
      v57 = v60;
      v58 = 2LL;
      v60[0] = v20;
      v32 = a13;
      v59 = a12 & -(__int64)(v20 != 0);
      v61 = &v32;
      v60[1] = 0;
      v62 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v63, a14);
      LOBYTE(v14) = tlgWriteEx_EtwWriteEx(
                      (__int64)v34,
                      (unsigned __int8 *)dword_140161614,
                      v21,
                      v22,
                      v24,
                      v25,
                      0x13u,
                      v34);
    }
  }
  return (char)v14;
}
