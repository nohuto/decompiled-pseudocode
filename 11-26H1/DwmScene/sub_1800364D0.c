/*
 * XREFs of sub_1800364D0 @ 0x1800364D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002AEFC @ 0x18002AEFC (sub_18002AEFC.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_1800305DC @ 0x1800305DC (sub_1800305DC.c)
 *     sub_180036410 @ 0x180036410 (sub_180036410.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800364D0(__int64 a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  sub_18002AEFC((__int64)v3, a1 + 1280);
  while ( 1 )
  {
    v4 = *(int *)(a1 + 1200);
    sub_1800305DC(a1 + 1208, (__int64)v3, &v4);
    if ( *(_BYTE *)(a1 + 1360) )
      break;
    sub_180036410(a1);
  }
  return sub_18002B3C4((__int64)v3);
}
