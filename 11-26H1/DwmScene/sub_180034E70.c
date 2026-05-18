/*
 * XREFs of sub_180034E70 @ 0x180034E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18002AEFC @ 0x18002AEFC (sub_18002AEFC.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 *     sub_180035694 @ 0x180035694 (sub_180035694.c)
 *     sub_18003809C @ 0x18003809C (sub_18003809C.c)
 *     sub_180038220 @ 0x180038220 (sub_180038220.c)
 *     sub_18004EB3C @ 0x18004EB3C (sub_18004EB3C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180034E70(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_180029EF8(a1 + 8, a2);
  while ( (unsigned int)sub_180033EEC(a1) )
  {
    v3 = sub_180033EEC(a1);
    sub_180033E4C(a1, v9, v3 - 1);
    sub_180033140((_QWORD *)a1, v9);
    if ( v9[1] )
      sub_180010EC8(v9[1]);
  }
  sub_18004EB3C(*(_QWORD *)(a1 + 512));
  *(_OWORD *)v9 = 0LL;
  sub_180011F5C((_QWORD *)(a1 + 512), v9);
  if ( v9[1] )
    sub_180010EC8(v9[1]);
  sub_180029C50(a1 + 312, (__int64)v9);
  sub_180035694(a1);
  if ( *(_QWORD *)(a1 + 288) != *(_QWORD *)(a1 + 296) )
    sub_18001DCFC(&qword_1801BD288, 5);
  sub_180011E54((__int64)v9);
  result = sub_18003809C(a1 + 728);
  *(_QWORD *)(a1 + 480) = 0LL;
  v5 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 488) = 0LL;
  if ( v5 )
    result = sub_180010EC8(v5);
  *(_QWORD *)(a1 + 496) = 0LL;
  v6 = *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a1 + 504) = 0LL;
  if ( v6 )
    result = sub_180010EC8(v6);
  v7 = *(_QWORD *)(a1 + 712);
  v8 = *(_QWORD *)(a1 + 704);
  if ( v8 != v7 )
  {
    sub_1800130CC(v8, v7);
    result = *(_QWORD *)(a1 + 704);
    *(_QWORD *)(a1 + 712) = result;
  }
  if ( *(_DWORD *)(a1 + 1192) )
  {
    sub_18002AEFC((__int64)v9, a1 + 1280);
    *(_BYTE *)(a1 + 1360) = 1;
    Cnd_signal((_Cnd_t)(a1 + 1208));
    sub_18002B3C4((__int64)v9);
    return sub_180038220(a1 + 1184);
  }
  return result;
}
