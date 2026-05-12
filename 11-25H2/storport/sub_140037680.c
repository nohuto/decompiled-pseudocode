/*
 * XREFs of sub_140037680 @ 0x140037680
 * Callers:
 *     sub_140051C30 @ 0x140051C30 (sub_140051C30.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_140038378 @ 0x140038378 (sub_140038378.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_140037680(__int64 a1)
{
  char v1; // al
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r10
  _DWORD *v7; // r9
  __int64 v8; // rdx
  unsigned __int64 *v9; // r10
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  char v17; // [rsp+33h] [rbp-CDh] BYREF
  __int16 v18; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v33[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v34[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v35[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  char *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  __int64 *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  int *v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]
  int *v44; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h]
  int *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  int *v48; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h]
  int *v50; // [rsp+1B0h] [rbp+B0h]
  __int64 v51; // [rsp+1B8h] [rbp+B8h]
  __int64 *v52; // [rsp+1C0h] [rbp+C0h]
  __int64 v53; // [rsp+1C8h] [rbp+C8h]
  __int64 *v54; // [rsp+1D0h] [rbp+D0h]
  __int64 v55; // [rsp+1D8h] [rbp+D8h]
  const wchar_t *v56; // [rsp+1E0h] [rbp+E0h]
  __int64 v57; // [rsp+1E8h] [rbp+E8h]
  __int16 *v58; // [rsp+1F0h] [rbp+F0h]
  __int64 v59; // [rsp+1F8h] [rbp+F8h]
  __int64 v60; // [rsp+200h] [rbp+100h]
  int v61; // [rsp+208h] [rbp+108h]
  int v62; // [rsp+20Ch] [rbp+10Ch]
  _BYTE v63[16]; // [rsp+210h] [rbp+110h] BYREF
  const wchar_t *v64; // [rsp+220h] [rbp+120h]
  __int64 v65; // [rsp+228h] [rbp+128h]
  const wchar_t *v66; // [rsp+230h] [rbp+130h]
  __int64 v67; // [rsp+238h] [rbp+138h]
  unsigned __int64 *v68; // [rsp+240h] [rbp+140h]
  __int64 v69; // [rsp+248h] [rbp+148h]
  __int16 *v70; // [rsp+250h] [rbp+150h]
  __int64 v71; // [rsp+258h] [rbp+158h]
  unsigned __int64 v72; // [rsp+260h] [rbp+160h]
  int v73; // [rsp+268h] [rbp+168h]
  int v74; // [rsp+26Ch] [rbp+16Ch]

  if ( (unsigned int)dword_140168178 > 5 )
  {
    if ( (qword_140168188 & 0x400000000000LL) == 0 || (v1 = 1, (qword_140168190 & 0x400000000000LL) != qword_140168190) )
      v1 = 0;
    if ( v1 )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v31[5] = 16LL;
      v31[7] = 16LL;
      v31[4] = v2 + 5064;
      v31[6] = a1 + 2104;
      v20 = *(_DWORD *)(v2 + 56);
      v31[8] = (__int64)&v20;
      v14 = *(_BYTE *)(a1 + 104);
      v31[10] = (__int64)&v14;
      v15 = *(_BYTE *)(a1 + 105);
      v31[12] = (__int64)&v15;
      v16 = *(_BYTE *)(a1 + 106);
      v31[14] = (__int64)&v16;
      v31[9] = 4LL;
      v31[11] = 1LL;
      v31[13] = 1LL;
      v31[15] = 1LL;
      sub_140037B0C(v32, *(_QWORD *)(v2 + 4720));
      sub_140038378(v33, v3 + 168);
      sub_140038378(v34, v4 + 177);
      sub_140038378(v35, v5 + 242);
      v36 = &v26;
      v17 = *(_BYTE *)(v6 + 8);
      v38 = &v17;
      v27 = *(_QWORD *)(v6 + 360);
      v40 = &v27;
      v21 = v7[225];
      v42 = &v21;
      v22 = v7[226];
      v44 = &v22;
      v23 = *(_DWORD *)(v6 + 376);
      v46 = &v23;
      v24 = v7[614];
      v48 = &v24;
      v25 = v7[616];
      v50 = &v25;
      v28 = *(_QWORD *)(v6 + 384);
      v26 = *(_QWORD *)&qword_140168DC8;
      v37 = 8LL;
      v39 = 1LL;
      v41 = 8LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v8 = *(_QWORD *)(v6 + 16);
      v52 = &v28;
      v29 = *(_QWORD *)(v6 + 392);
      v54 = &v29;
      v56 = L"Read, Write";
      v58 = &v18;
      v60 = (__int64)*(&xmmword_1401690E8 + 1);
      v18 = WORD1(qword_1401690E0);
      v61 = 8 * WORD1(qword_1401690E0);
      v53 = 8LL;
      v55 = 8LL;
      v57 = 24LL;
      v59 = 2LL;
      v62 = 0;
      sub_140037B0C(v63, v8);
      v65 = 26LL;
      v66 = L"64ms, 256ms, 1024ms, 5120ms, 5120+ms";
      v64 = L"Flush, Unmap";
      v10 = *v9;
      v67 = 74LL;
      v68 = &v30;
      v30 = v10 / 0x2710;
      v69 = 8LL;
      v71 = 2LL;
      v70 = &v19;
      v11 = v9[46];
      v19 = 3 * qword_140169170;
      v72 = v11;
      v73 = 8 * (unsigned __int16)(3 * qword_140169170);
      v74 = 0;
      sub_140037A5C(3 * qword_140169170, (int)&dword_14015796D, v12, v13, 0x1Fu, (__int64)v31);
    }
  }
}
