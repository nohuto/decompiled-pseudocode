/*
 * XREFs of MiLogPeriodicTelemetryForSlabAllocator @ 0x140450F70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPeriodicTelemetryForSlabAllocator(unsigned __int16 *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+98h] [rbp-68h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int64 *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int64 *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  __int64 *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  __int64 *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  __int64 *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  __int64 *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  __int64 *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  __int64 *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  __int64 *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  __int64 *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  int *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  int *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  int *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  __int64 *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (*((_QWORD *)stru_140E366D8.FirstArgument + 2) & 0x400000000400LL) != 0 )
  {
    v3 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
    if ( (v3 & 0x400000000400LL) == v3 )
    {
      v13 = *(_QWORD *)(a2 + 120);
      v29 = &v13;
      v14 = *(_QWORD *)(a2 + 120);
      v31 = &v14;
      v15 = *(_QWORD *)(a2 + 96);
      v33 = &v15;
      v16 = *(_QWORD *)(a2 + 96);
      v35 = &v16;
      v17 = *(_QWORD *)(a2 + 112);
      v37 = &v17;
      v18 = *(_QWORD *)(a2 + 112);
      v39 = &v18;
      v4 = *(_QWORD *)(a2 + 80);
      v30 = 8LL;
      v32 = 8LL;
      v34 = 8LL;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 8LL;
      v5 = *(_QWORD *)(v4 + 16);
      v41 = &v19;
      v6 = *(_QWORD *)(a2 + 80);
      v19 = v5;
      v42 = 8LL;
      v7 = *(_QWORD *)(v6 + 16);
      v43 = &v20;
      v21 = *(unsigned int *)(a2 + 144);
      v45 = &v21;
      v22 = *(unsigned int *)(a2 + 148);
      v47 = &v22;
      v23 = *(unsigned int *)(a2 + 152);
      v49 = &v23;
      v24 = *(unsigned int *)(a2 + 156);
      v51 = &v24;
      v25 = *(unsigned int *)(a2 + 160);
      v53 = &v25;
      v26 = *(unsigned int *)(a2 + 164);
      v55 = &v26;
      v9 = *(_DWORD *)(a2 + 128);
      v57 = &v9;
      v10 = *(_DWORD *)(a2 + 132);
      v59 = &v10;
      v20 = v7;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 4LL;
      v11 = *a1;
      v60 = 4LL;
      v61 = &v11;
      LODWORD(v6) = *(unsigned __int16 *)(a2 + 136);
      v62 = 4LL;
      v12 = ((unsigned int)v6 >> 3) & 3;
      v63 = &v12;
      v65 = &v27;
      v64 = 4LL;
      v27 = 0x1000000LL;
      v66 = 8LL;
      tlgWriteAgg((int)stru_140E366D8.FirstArgument, (int)&word_14005A7BA, v3, 21, &v28);
    }
  }
  return 0LL;
}
