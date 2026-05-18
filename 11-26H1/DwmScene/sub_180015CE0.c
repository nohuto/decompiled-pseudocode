/*
 * XREFs of sub_180015CE0 @ 0x180015CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180040D64 @ 0x180040D64 (sub_180040D64.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180015CE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( a2 )
  {
    sub_18001367C(*(_QWORD *)(a1 + 32), &v5);
    v3 = v5;
    sub_180029C50(v5 + 16, v8);
    v4 = sub_180012C40(&v7, (_QWORD *)(a2 + 32));
    sub_180040D64(v3, v4);
    sub_180011E54((__int64)v8);
    if ( v6 )
      sub_180010EC8(v6);
  }
}
