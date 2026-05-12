/*
 * XREFs of sub_140100548 @ 0x140100548
 * Callers:
 *     sub_14019D5FC @ 0x14019D5FC (sub_14019D5FC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140040228 @ 0x140040228 (sub_140040228.c)
 *     sub_1400A1DE8 @ 0x1400A1DE8 (sub_1400A1DE8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_140100548(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned __int16 *v5; // rsi
  __int64 v6; // r9
  _WORD *v7; // rax
  _WORD *v8; // rdi
  unsigned __int64 v9; // rdx
  int v10; // r10d
  const char *v11; // rax
  __int64 v12; // rdx
  _WORD *v14; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-61h] BYREF
  __int128 v16; // [rsp+60h] [rbp-59h] BYREF
  char v17; // [rsp+70h] [rbp-49h]
  __int128 v18; // [rsp+78h] [rbp-41h] BYREF
  char v19; // [rsp+88h] [rbp-31h]
  _OWORD Dst[2]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-9h]

  v19 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v18 = 0LL;
  v5 = *(unsigned __int16 **)(v3 + 592);
  memset_0(Dst, 0, 0x41uLL);
  v6 = *(_QWORD *)(a1 + 8);
  v17 = 0;
  v16 = 0LL;
  v7 = (_WORD *)sub_1400143E0(256LL, 718LL, 1229218130LL, v6);
  v8 = v7;
  if ( !v7 )
  {
    v10 = -1073741801;
    goto LABEL_16;
  }
  v9 = *v5;
  v14 = v7;
  v15 = 359LL;
  BYTE3(v16) = a0123456789abcd[v9 & 0xF];
  BYTE2(v16) = a0123456789abcd[(unsigned __int8)v9 >> 4];
  BYTE1(v16) = a0123456789abcd[((unsigned int)v9 >> 8) & 0xF];
  LOBYTE(v16) = a0123456789abcd[v9 >> 12];
  Dst[0] = *(_OWORD *)(v5 + 12);
  Dst[1] = *(_OWORD *)(v5 + 20);
  v21 = *((_QWORD *)v5 + 7);
  sub_1400A1DE8((__int64)v5, (__int64)&v18, 0x11u);
  if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
  {
    v10 = sub_140040228(
            v8,
            0x167uLL,
            &v14,
            &v15,
            0,
            (const int *)L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
            "Disk",
            "NVMe",
            Dst,
            &v18);
    if ( v10 < 0 )
      goto LABEL_16;
    ++v14;
    --v15;
    v10 = sub_140040228(v14, v15, &v14, &v15, 0, (const int *)L"SCSI\\%hs%8.8hs%40.40hs", "Disk", "NVMe", Dst);
    if ( v10 < 0 )
      goto LABEL_16;
    ++v14;
    --v15;
    v10 = sub_140040228(v14, v15, &v14, &v15, 0, (const int *)L"SCSI\\%hs%8.8hs", "Disk", "NVMe");
    if ( v10 < 0 )
      goto LABEL_16;
    ++v14;
    --v15;
    v10 = sub_140040228(v14, v15, &v14, &v15, 0, (const int *)L"SCSI\\%8.8hs%40.40hs%8.8hs", "NVMe", Dst, &v18);
    if ( v10 < 0 )
      goto LABEL_16;
    ++v14;
    --v15;
    v10 = sub_140040228(v14, v15, &v14, &v15, 0, (const int *)L"%8.8hs%40.40hs%8.8hs", "NVMe", Dst, &v18);
    if ( v10 < 0 )
      goto LABEL_16;
    v11 = "GenDisk";
  }
  else
  {
    v10 = sub_140040228(
            v8,
            0x167uLL,
            &v14,
            &v15,
            0,
            (const int *)L"NVME\\%hs%8.8hs%40.40hs%8.8hs",
            "Disk",
            &v16,
            Dst,
            &v18);
    if ( v10 < 0 )
      goto LABEL_16;
    ++v14;
    --v15;
    v10 = sub_140040228(v14, v15, &v14, &v15, 0, (const int *)L"NVME\\%hs%8.8hs%40.40hs", "Disk", &v16, Dst);
    if ( v10 < 0 )
      goto LABEL_16;
    ++v14;
    --v15;
    v10 = sub_140040228(v14, v15, &v14, &v15, 0, (const int *)L"NVME\\%hs%8.8hs", "Disk", &v16);
    if ( v10 < 0 )
      goto LABEL_16;
    v11 = "NVMeDisk";
  }
  ++v14;
  v10 = sub_140040228(v14, v15 - 1, &v14, &v15, 0, (const int *)L"%hs", v11);
  if ( v10 >= 0 )
  {
    LOBYTE(v12) = 1;
    v14[1] = 0;
    sub_1401B1FF0(v8, v12, 359LL);
  }
LABEL_16:
  *a2 = v8;
  return (unsigned int)v10;
}
