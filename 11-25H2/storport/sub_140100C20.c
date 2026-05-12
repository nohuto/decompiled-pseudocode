/*
 * XREFs of sub_140100C20 @ 0x140100C20
 * Callers:
 *     sub_14019D5FC @ 0x14019D5FC (sub_14019D5FC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     sub_14008EEFC @ 0x14008EEFC (sub_14008EEFC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_140100C20(__int64 a1, wchar_t **a2)
{
  wchar_t *v4; // rbx
  unsigned int v5; // r10d
  _BYTE Dst[128]; // [rsp+20h] [rbp-98h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  v4 = (wchar_t *)sub_1400143E0(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( v4 )
  {
    if ( (unsigned int)sub_14008EEFC(a1, 0x80u, (__int64)Dst) )
      sub_14003BCD4(v4, 64LL, L"%hs", Dst);
    sub_1401B1FF0(v4, 0LL, 64LL);
  }
  else
  {
    v5 = -1073741801;
  }
  *a2 = v4;
  return v5;
}
