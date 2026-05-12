/*
 * XREFs of sub_140100070 @ 0x140100070
 * Callers:
 *     sub_14019D5FC @ 0x14019D5FC (sub_14019D5FC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140040228 @ 0x140040228 (sub_140040228.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_140100070(__int64 a1, _QWORD *a2)
{
  _WORD *v4; // rax
  _WORD *v5; // rbx
  bool v6; // zf
  int v7; // r10d
  int v8; // eax
  __int64 v9; // rdx
  _WORD *v10; // rcx
  unsigned __int64 v11; // r11
  _WORD *v13; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v4 = (_WORD *)sub_1400143E0(256LL, 76LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  v5 = v4;
  if ( !v4 )
  {
    v7 = -1073741801;
    goto LABEL_18;
  }
  v6 = (*(_BYTE *)(a1 + 112) & 4) == 0;
  v13 = v4;
  v14 = 38LL;
  if ( v6 )
  {
    v7 = sub_140040228(v4, 0x26uLL, &v13, &v14, 0, (const int *)L"NVME\\%hs", "Disk");
    if ( v7 < 0 || (++v13, --v14, v7 = sub_140040228(v13, v14, &v13, &v14, 0, (const int *)L"NVME\\%hs", "RAW"), v7 < 0) )
    {
      v10 = v13;
      v11 = v14;
    }
    else
    {
      v10 = ++v13;
      v11 = v14 - 1;
    }
    v9 = (unsigned int)v7;
    if ( (*(_BYTE *)(a1 + 200) & 1) != 0 )
    {
      if ( v7 >= 0 )
        goto LABEL_16;
      goto LABEL_18;
    }
    if ( v7 < 0 )
      goto LABEL_18;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 256LL) & 1) == 0 )
      goto LABEL_16;
    v8 = sub_140040228(v10, v11, &v13, &v14, 0, (const int *)L"%hs", "Disk1667");
  }
  else
  {
    v7 = sub_140040228(v4, 0x26uLL, &v13, &v14, 0, (const int *)L"SCSI\\%hs", "Disk");
    if ( v7 < 0 )
      goto LABEL_18;
    ++v13;
    v8 = sub_140040228(v13, v14 - 1, &v13, &v14, 0, (const int *)L"SCSI\\%hs", "RAW");
  }
  v7 = v8;
  if ( v8 >= 0 )
  {
    v10 = v13 + 1;
LABEL_16:
    *v10 = 0;
    LOBYTE(v9) = 1;
    sub_1401B1FF0(v5, v9, 38LL);
  }
LABEL_18:
  *a2 = v5;
  return (unsigned int)v7;
}
