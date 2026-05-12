/*
 * XREFs of sub_14009EB0C @ 0x14009EB0C
 * Callers:
 *     sub_14017DB34 @ 0x14017DB34 (sub_14017DB34.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     sub_1400A1E68 @ 0x1400A1E68 (sub_1400A1E68.c)
 *     sub_1400A1EB8 @ 0x1400A1EB8 (sub_1400A1EB8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AD6C4 @ 0x1401AD6C4 (sub_1401AD6C4.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_14009EB0C(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // esi
  wchar_t *v5; // rbx
  char v6; // cl
  char v7; // al
  __int128 v8; // xmm0
  _QWORD *v9; // rax
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  char v12; // [rsp+38h] [rbp-40h]
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+50h] [rbp-28h]

  v4 = 0;
  v5 = (wchar_t *)sub_1400143E0(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( v5 )
  {
    if ( (*(_DWORD *)(a1 + 1952) & 0x20) != 0 )
    {
      v6 = *(_BYTE *)(a1 + 176);
      v7 = *(_BYTE *)(a1 + 193);
      v11 = *(_QWORD *)(a1 + 168);
      v8 = *(_OWORD *)(a1 + 177);
      v12 = v6;
      v14 = v7;
      v13 = v8;
      sub_14003BCD4(v5, 64LL, L"NVME\\%hs&Prod_%hs", "ZNSDisk", &v13);
    }
    else
    {
      sub_1400A1EB8(a1 + 112, &v11);
      sub_1400A1E68(a1 + 112, &v13);
      if ( (*(_DWORD *)(a1 + 1952) & 1) != 0 )
      {
        sub_14003BCD4(v5, 64LL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", &v11, &v13);
      }
      else
      {
        v9 = (_QWORD *)sub_1401AD6C4(**(_BYTE **)(a1 + 112) & 0x1F);
        sub_14003BCD4(v5, 64LL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *v9, &v11, &v13);
      }
    }
    sub_1401B1FF0(v5, 0LL, 64LL);
  }
  else
  {
    v4 = -1073741801;
  }
  *a2 = v5;
  return v4;
}
