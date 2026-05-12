/*
 * XREFs of sub_140100258 @ 0x140100258
 * Callers:
 *     sub_14019D5FC @ 0x14019D5FC (sub_14019D5FC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140036A1C @ 0x140036A1C (sub_140036A1C.c)
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_140100258(__int64 a1, wchar_t **a2)
{
  wchar_t *v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // r10d
  _OWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]

  v4 = (wchar_t *)sub_1400143E0(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL);
    v8[0] = *(_OWORD *)(v5 + 24);
    v8[1] = *(_OWORD *)(v5 + 40);
    v9 = *(_QWORD *)(v5 + 56);
    sub_140036A1C((__int64)v8, 41);
    sub_14003BCD4(v4, 64LL, L"NVME\\%hs&Prod_%hs", "Disk", v8);
    sub_1401B1FF0(v4, 0LL, 64LL);
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v4;
  return v6;
}
