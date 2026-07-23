/*
 * XREFs of KiTraceLogControlCallback @ 0x140B5ACB0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiTraceLogHeteroRundown @ 0x140453274 (KiTraceLogHeteroRundown.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int __fastcall KiTraceLogControlCallback(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, _DWORD *a7)
{
  _UNKNOWN **v7; // rax
  char v9; // [rsp+38h] [rbp-D0h] BYREF
  char v10; // [rsp+39h] [rbp-CFh] BYREF
  char v11; // [rsp+3Ah] [rbp-CEh] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+44h] [rbp-C4h] BYREF
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  int v17; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+78h] [rbp-90h] BYREF
  int *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  int *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  __int64 *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  int *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  int *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  char *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  char *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  __int64 *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  char *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  int *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  int *v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+168h] [rbp+60h] BYREF
  char *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  char *v52; // [rsp+198h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+98h]
  char *v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]
  int *v56; // [rsp+1B8h] [rbp+B0h]
  __int64 v57; // [rsp+1C0h] [rbp+B8h]
  int *v58; // [rsp+1C8h] [rbp+C0h]
  __int64 v59; // [rsp+1D0h] [rbp+C8h]
  _UNKNOWN *retaddr; // [rsp+1F0h] [rbp+E8h] BYREF

  v7 = &retaddr;
  if ( a2 == 1 )
  {
    LODWORD(v7) = KiTraceLogHeteroRundown(a7);
    if ( *a7 > 5u )
    {
      v14 = KiHgsPlusConfiguration;
      v24 = 4LL;
      v23 = &v14;
      v15 = dword_140FBF3F4;
      v25 = &v15;
      v20 = qword_140FBF3F8;
      v27 = &v20;
      v16 = dword_140FBF400;
      v29 = &v16;
      v21 = qword_140FBF408;
      v31 = &v21;
      v17 = dword_140FBF410;
      v33 = &v17;
      v18 = dword_140FBF414;
      v35 = &v18;
      v9 = dword_140FBF418;
      v37 = &v9;
      v10 = byte_140FBF45C;
      v39 = &v10;
      v19 = qword_140FBF41C;
      v41 = &v19;
      v43 = (char *)&v19 + 4;
      v12 = dword_140FBF424;
      v45 = &v12;
      v13 = dword_140FBF428;
      v47 = &v13;
      v26 = 4LL;
      v28 = 8LL;
      v30 = 4LL;
      v32 = 8LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 1LL;
      v40 = 1LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      LODWORD(v7) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)a7,
                      (unsigned __int8 *)word_140048D8A,
                      0LL,
                      0LL,
                      0xFu,
                      &v22);
      if ( *a7 > 5u )
      {
        v10 = KiForceParkingConfiguration;
        v51 = 1LL;
        v50 = &v10;
        v9 = dword_140FBF1E4;
        v52 = &v9;
        v11 = dword_140FBF1E8;
        v54 = &v11;
        v13 = dword_140FBF1EC;
        v56 = &v13;
        v12 = dword_140FBF1F0;
        v58 = &v12;
        v53 = 1LL;
        v55 = 1LL;
        v57 = 4LL;
        v59 = 4LL;
        LODWORD(v7) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)a7,
                        (unsigned __int8 *)&word_140048F3E,
                        0LL,
                        0LL,
                        7u,
                        &v49);
      }
    }
  }
  return (int)v7;
}
