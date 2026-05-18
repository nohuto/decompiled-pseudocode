/*
 * XREFs of sub_180092860 @ 0x180092860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180014288 @ 0x180014288 (sub_180014288.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800431E4 @ 0x1800431E4 (sub_1800431E4.c)
 *     sub_180043264 @ 0x180043264 (sub_180043264.c)
 *     sub_18007EAEC @ 0x18007EAEC (sub_18007EAEC.c)
 *     sub_18007EE1C @ 0x18007EE1C (sub_18007EE1C.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180092860(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  void *v11; // rax
  __int64 v12; // r8
  _OWORD v14[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-30h] BYREF

  v7 = sub_180043264(a2);
  sub_1800181BC(v15, v7);
  v8 = sub_180012C40(v14, a3);
  sub_18007EE1C(v9, a4, v8);
  if ( a4 == (unsigned __int16)sub_1800431E4(a2, (__int64)&unk_1801CBE58, v10)
    && *(_BYTE *)(a2 + 184)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 188) = 1;
  }
  v11 = sub_180014288(v14, (__int64)v15, (__int64)&unk_1801CBD78);
  sub_18007EAEC(*(_QWORD *)(a2 + 120), (__int64)v11, 1);
  sub_1800129D0((__int64)v14);
  if ( a4 == (unsigned __int16)sub_1800431E4(a2, (__int64)&unk_1801CBE98, v12) )
  {
    v14[0] = 0LL;
    if ( *a3 )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
      {
        LODWORD(v14[0]) = 1065353216;
        HIDWORD(v14[0]) = 1065353216;
      }
      else
      {
        DWORD2(v14[0]) = 1051372203;
      }
    }
    sub_18007F1B0(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBFB8, v14);
  }
  return sub_1800129D0((__int64)v15);
}
