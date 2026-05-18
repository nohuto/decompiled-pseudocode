/*
 * XREFs of sub_18007A86C @ 0x18007A86C
 * Callers:
 *     sub_180049B60 @ 0x180049B60 (sub_180049B60.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007A86C(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rax
  void (__fastcall *v7)(__int64, _QWORD *); // r8
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h]

  v2 = sub_18007AB60(a1);
  sub_180036040(v2, &v13);
  v3 = 0;
  v4 = v13;
  if ( (v14 - v13) >> 4 )
  {
    v5 = 0LL;
    do
    {
      sub_180012C40(&v9, (_QWORD *)(v4 + 16 * v5));
      sub_180029C50(v9 + 24, (__int64)v12);
      v6 = sub_180012C40(&v11, &v9);
      v7(a1, v6);
      sub_180011E54((__int64)v12);
      if ( v10 )
        sub_180010EC8(v10);
      v5 = ++v3;
      v4 = v13;
    }
    while ( v3 < (unsigned __int64)((v14 - v13) >> 4) );
  }
  return sub_1800141F0((__int64)&v13);
}
