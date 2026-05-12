/*
 * XREFs of sub_14009E468 @ 0x14009E468
 * Callers:
 *     sub_14017DB34 @ 0x14017DB34 (sub_14017DB34.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003CEE0 @ 0x14003CEE0 (sub_14003CEE0.c)
 *     sub_140040228 @ 0x140040228 (sub_140040228.c)
 *     sub_140090DE4 @ 0x140090DE4 (sub_140090DE4.c)
 *     sub_14009E38C @ 0x14009E38C (sub_14009E38C.c)
 *     sub_1401AD6C4 @ 0x1401AD6C4 (sub_1401AD6C4.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_14009E468(__int64 a1, _QWORD *a2)
{
  int *v2; // rdi
  _WORD *v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r14d
  unsigned int v9; // eax
  const char *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r10
  const char *v13; // rdi
  int v14; // edi
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  _WORD *v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  _WORD *v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  _WORD *v25; // r14
  __int64 result; // rax
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v28; // [rsp+C0h] [rbp+50h] BYREF

  v2 = (int *)(a1 + 1952);
  v3 = 0LL;
  if ( !(unsigned int)sub_14003CEE0(a1) || (*v2 & 1) != 0 )
  {
    v15 = sub_1400143E0(256LL, 76LL, 1229218130LL, *(_QWORD *)(v6 + 8));
    v3 = (_WORD *)v15;
    if ( !v15 )
    {
      v14 = -1073741801;
      goto LABEL_28;
    }
    v27 = v15;
    v16 = *v2;
    v28 = 38LL;
    if ( (v16 & 1) != 0 )
    {
      v17 = sub_140040228(v3, 0x26uLL, &v27, &v28, 0, (const int *)L"SCSI\\VMLUN");
    }
    else if ( (v16 & 0x20) != 0 )
    {
      v14 = sub_140040228(v3, 0x26uLL, &v27, &v28, 0, (const int *)L"NVME\\%hs", "ZNSDisk");
      v19 = (_WORD *)(v27 + 2);
      v27 += 2LL;
      if ( v14 < 0 )
        goto LABEL_28;
      v17 = sub_140040228(v19, v28 - 1, &v27, &v28, 0, (const int *)L"NVME\\RAW");
    }
    else
    {
      v20 = (_QWORD *)sub_1401AD6C4(**(_BYTE **)(a1 + 112) & 0x1F);
      v14 = sub_140040228(v3, v21, &v27, &v28, 0, (const int *)L"SCSI\\%hs", *v20);
      v22 = (_WORD *)(v27 + 2);
      v23 = v28 - 1;
      v27 += 2LL;
      --v28;
      if ( v14 < 0 )
        goto LABEL_28;
      v14 = sub_140040228(v22, v23, &v27, &v28, 0, (const int *)L"SCSI\\RAW");
      v24 = v28;
      v25 = (_WORD *)(v27 + 2);
      v27 += 2LL;
      if ( v14 < 0 )
        goto LABEL_28;
      sub_14009E38C(a1);
      if ( (*(_BYTE *)(a1 + 136) & 1) == 0 )
      {
LABEL_26:
        *v25 = 0;
        LOBYTE(v18) = 1;
        sub_1401B1FF0(v3, v18, 38LL);
        goto LABEL_28;
      }
      v17 = sub_140040228(v25, v24 - 1, &v27, &v28, 0, (const int *)L"%hs", "Disk1667");
    }
    v14 = v17;
    v25 = (_WORD *)(v27 + 2);
    if ( v17 < 0 )
      goto LABEL_28;
    goto LABEL_26;
  }
  v7 = *(_QWORD *)(v6 + 24);
  v8 = *(_DWORD *)(v7 + 4664);
  if ( v8 > 1 )
  {
    v9 = *(_DWORD *)(v6 + 104);
    v10 = 0LL;
    v11 = *(_QWORD *)(v6 + 160);
    if ( v11 )
    {
      v10 = (const char *)(v11 + 90);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 && (*(_DWORD *)(*(_QWORD *)(v7 + 608) + 184LL) & 0x40) != 0 )
        v10 = (const char *)(v12 + 41);
    }
    if ( (byte_1401694F4 & 2) != 0 )
    {
      v13 = (const char *)&dword_140149108;
      if ( v10 )
        v13 = v10;
      sub_140090DE4(
        v9 >> 8,
        v7 + 5064,
        a1 + 242,
        *(const wchar_t **)(v7 + 4720),
        *(_DWORD *)(v7 + 56),
        v7 + 5064,
        v9,
        SBYTE1(v9),
        SBYTE2(v9),
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v13,
        v8);
    }
  }
  v14 = -1073741637;
LABEL_28:
  result = (unsigned int)v14;
  *a2 = v3;
  return result;
}
