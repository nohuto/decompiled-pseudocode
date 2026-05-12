/*
 * XREFs of sub_14009EC74 @ 0x14009EC74
 * Callers:
 *     sub_14017DB34 @ 0x14017DB34 (sub_14017DB34.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003CEE0 @ 0x14003CEE0 (sub_14003CEE0.c)
 *     sub_140040228 @ 0x140040228 (sub_140040228.c)
 *     sub_1400A1DE8 @ 0x1400A1DE8 (sub_1400A1DE8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401AD6C4 @ 0x1401AD6C4 (sub_1401AD6C4.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_14009EC74(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  _WORD *v4; // rax
  _WORD *v5; // rsi
  _WORD *v6; // r10
  int v7; // eax
  int v8; // ebx
  _WORD *v9; // r10
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned __int16 *v12; // rbx
  unsigned __int64 v13; // rcx
  _BYTE *v14; // r15
  _QWORD *v15; // r14
  __int64 v16; // rax
  _BYTE *v17; // r13
  _BYTE *v18; // r12
  _BYTE *v19; // r15
  int v20; // eax
  __int16 v21; // r8
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _BYTE *v26; // [rsp+40h] [rbp-99h]
  _BYTE *v27; // [rsp+48h] [rbp-91h]
  _WORD *v28; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-81h] BYREF
  _QWORD *v30; // [rsp+60h] [rbp-79h]
  __int128 v31; // [rsp+68h] [rbp-71h] BYREF
  char v32; // [rsp+78h] [rbp-61h]
  __int128 v33; // [rsp+80h] [rbp-59h] BYREF
  char v34; // [rsp+90h] [rbp-49h]
  _OWORD Dst[4]; // [rsp+A0h] [rbp-39h] BYREF
  char v36; // [rsp+E0h] [rbp+7h]

  v2 = *(_QWORD *)(a1 + 8);
  v30 = a2;
  v4 = (_WORD *)sub_1400143E0(256LL, 718LL, 1229218130LL, v2);
  v5 = v4;
  v29 = 359LL;
  if ( !v4 )
  {
    v8 = -1073741801;
    goto LABEL_27;
  }
  v6 = v4;
  v28 = v4;
  v7 = *(_DWORD *)(a1 + 1952);
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x20) != 0 )
    {
      v12 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 24) + 6000LL);
      v31 = 0LL;
      v32 = 0;
      memset_0(Dst, 0, 0x41uLL);
      v34 = 0;
      v33 = 0LL;
      v13 = *v12;
      BYTE3(v31) = a0123456789abcd[*v12 & 0xF];
      BYTE2(v31) = a0123456789abcd[(unsigned __int8)v13 >> 4];
      BYTE1(v31) = a0123456789abcd[((unsigned int)v13 >> 8) & 0xF];
      LOBYTE(v31) = a0123456789abcd[v13 >> 12];
      Dst[0] = *(_OWORD *)(v12 + 12);
      Dst[1] = *(_OWORD *)(v12 + 20);
      Dst[2] = *(_OWORD *)(v12 + 28);
      Dst[3] = *(_OWORD *)(v12 + 36);
      v36 = *((_BYTE *)v12 + 88);
      sub_1400A1DE8(v12, &v33, 17LL);
      v8 = sub_140040228(
             v5,
             0x167uLL,
             &v28,
             &v29,
             0,
             (const int *)L"NVME\\%hs_%8.8hs%40.40hs%8.8hs",
             "ZNSDisk",
             &v31,
             Dst,
             &v33);
      v9 = v28 + 1;
      v10 = v29 - 1;
      ++v28;
      --v29;
      if ( v8 < 0 )
        goto LABEL_24;
      v8 = sub_140040228(v9, v10, &v28, &v29, 0, (const int *)L"NVME\\%hs_%8.8hs%40.40hs", "ZNSDisk", &v31, Dst);
      v9 = v28 + 1;
      v10 = v29 - 1;
      ++v28;
      --v29;
      if ( v8 < 0 )
        goto LABEL_24;
      v8 = sub_140040228(v9, v10, &v28, &v29, 0, (const int *)L"NVME\\%hs_%8.8hs", "ZNSDisk", &v31);
      if ( v8 >= 0 )
      {
        ++v28;
        v11 = sub_140040228(v28, v29 - 1, &v28, &v29, 0, (const int *)L"%hs", "GenNvmeDisk");
        goto LABEL_5;
      }
    }
    else
    {
      v14 = *(_BYTE **)(a1 + 112);
      v15 = (_QWORD *)sub_1401AD6C4(*v14 & 0x1F);
      if ( *(_DWORD *)(a1 + 3432) == 17 )
      {
        v16 = *(_QWORD *)(a1 + 160);
        if ( v16 )
        {
          v8 = sub_140040228(
                 v5,
                 v10,
                 &v28,
                 &v29,
                 0,
                 (const int *)L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
                 *v15,
                 v14 + 8,
                 v16 + 25,
                 v16 + 90);
          v9 = v28 + 1;
          v10 = v29 - 1;
          ++v28;
          --v29;
          if ( v8 < 0 )
            goto LABEL_24;
          v8 = sub_140040228(
                 v9,
                 v10,
                 &v28,
                 &v29,
                 0,
                 (const int *)L"SCSI\\%hs%8.8hs%40.40hs",
                 *v15,
                 v14 + 8,
                 *(_QWORD *)(a1 + 160) + 25LL);
          v9 = v28 + 1;
          v10 = v29 - 1;
          ++v28;
          --v29;
          if ( v8 < 0 )
            goto LABEL_24;
        }
      }
      v17 = v14 + 32;
      v27 = v14 + 32;
      v18 = v14 + 16;
      v26 = v14 + 16;
      v19 = v14 + 8;
      v20 = sub_140040228(v9, v10, &v28, &v29, 0, (const int *)L"SCSI\\%hs%8.8hs%16.16hs%4.4hs", *v15, v19, v26, v27);
      v21 = 0;
      v9 = v28 + 1;
      v10 = v29 - 1;
      ++v28;
      --v29;
      v8 = v20;
      if ( v20 < 0 )
        goto LABEL_25;
      v22 = sub_140040228(v9, v10, &v28, &v29, 0, (const int *)L"SCSI\\%hs%8.8hs%16.16hs", *v15, v19, v18);
      v21 = 0;
      v9 = v28 + 1;
      v10 = v29 - 1;
      ++v28;
      --v29;
      v8 = v22;
      if ( v22 < 0 )
        goto LABEL_25;
      v8 = sub_140040228(v9, v10, &v28, &v29, 0, (const int *)L"SCSI\\%hs%8.8hs", *v15, v19);
      if ( v8 >= 0 )
      {
        ++v28;
        --v29;
        v23 = sub_140040228(v28, v29, &v28, &v29, 0, (const int *)L"SCSI\\%8.8hs%16.16hs%1.1hs", v19, v18, v17);
        v21 = 0;
        v9 = v28 + 1;
        v10 = v29 - 1;
        ++v28;
        --v29;
        v8 = v23;
        if ( v23 < 0 )
          goto LABEL_25;
        v24 = sub_140040228(v9, v10, &v28, &v29, 0, (const int *)L"%8.8hs%16.16hs%1.1hs", v19, v18, v17);
        v21 = 0;
        v9 = v28 + 1;
        v10 = v29 - 1;
        ++v28;
        v8 = v24;
        if ( v24 < 0 || (unsigned int)sub_14003CEE0(a1) )
          goto LABEL_25;
        v11 = sub_140040228(v9, v10, &v28, &v29, 0, (const int *)L"%hs", v15[1]);
        goto LABEL_5;
      }
    }
    v9 = v28;
    goto LABEL_24;
  }
  v8 = sub_140040228(
         v6,
         0x167uLL,
         &v28,
         &v29,
         0,
         (const int *)L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
         *(_QWORD *)(a1 + 112) + 8LL,
         *(_QWORD *)(a1 + 112) + 16LL,
         *(_QWORD *)(a1 + 112) + 32LL);
  v9 = v28 + 1;
  v10 = v29 - 1;
  ++v28;
  if ( v8 >= 0 )
  {
    v11 = sub_140040228(v9, v10, &v28, &v29, 0, (const int *)L"SCSI\\VMLUN");
LABEL_5:
    v8 = v11;
    v9 = v28 + 1;
  }
LABEL_24:
  v21 = 0;
LABEL_25:
  *v9 = v21;
  LOBYTE(v10) = 1;
  sub_1401B1FF0(v5, v10, 359LL);
LABEL_27:
  *v30 = v5;
  return (unsigned int)v8;
}
