/*
 * XREFs of CrmLogSrvActivityStartStop @ 0x180022140
 * Callers:
 *     CrmRpcSrvActivityStart @ 0x1800216B0 (CrmRpcSrvActivityStart.c)
 *     CrmSrvActivityStart @ 0x180021C10 (CrmSrvActivityStart.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x18001CCD0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogSrvActivityStartStop(
        __int64 a1,
        int a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned __int16 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  __int64 result; // rax
  int v14; // eax
  const wchar_t *v15; // r11
  unsigned __int16 v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[32]; // [rsp+70h] [rbp-90h] BYREF
  UUID *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  int *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  _BYTE v38[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v39[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  __int64 v44; // [rsp+120h] [rbp+20h]
  int v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  __int64 *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int64 *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  __int64 *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  int *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]

  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 )
  {
    result = qword_1800E1300 & 1;
    if ( result == qword_1800E1300 )
    {
      v18 = a2;
      v27 = &Uuid;
      v17 = *(_DWORD *)(a1 + 24);
      v29 = &v17;
      v31 = a1 + 72;
      v14 = *(unsigned __int8 *)(a1 + 73);
      v28 = 16LL;
      v30 = 4LL;
      v33 = 0;
      v35 = 4LL;
      v32 = 4 * v14 + 8;
      v34 = &v18;
      v36 = &v21;
      v21 = a3;
      v37 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v38, a4);
      tlgCreate1Sz_wchar_t((__int64)v39, v15);
      v40 = &v19;
      v19 = a6;
      v42 = &v16;
      v44 = a7;
      v22 = a9;
      v47 = &v22;
      v23 = a10;
      v49 = &v23;
      v24 = a11;
      v51 = &v24;
      v25 = a12;
      v53 = &v25;
      v20 = a13;
      v16 = a8;
      v55 = &v20;
      v45 = 4 * a8;
      v41 = 4LL;
      v43 = 2LL;
      v46 = 0;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 4LL;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CBBED, 0LL, 0LL, 17, v26);
    }
  }
  return result;
}
