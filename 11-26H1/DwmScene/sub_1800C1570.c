/*
 * XREFs of sub_1800C1570 @ 0x1800C1570
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_18002CAA0 @ 0x18002CAA0 (sub_18002CAA0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C1570(float *a1, float a2, float a3, float a4, float a5)
{
  float (__fastcall *v6)(float *); // rbx
  double v7; // xmm0_8
  void (__fastcall *v8)(float *, __int64 *); // rbx
  __int64 v9; // rdx
  __int64 v11; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v12[16]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v13[72]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v14; // [rsp+E0h] [rbp+8h] BYREF

  sub_180029C50((__int64)(a1 + 2), (__int64)v13);
  (*(void (__fastcall **)(float *, _BYTE *))(*(_QWORD *)a1 + 320LL))(a1, v12);
  sub_18002CAA0(a1, a2, a3, a4, a5);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 336LL))(a1);
  (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
  (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
  (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 104LL))(a1);
  (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 96LL))(a1);
  (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 144LL))(a1);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 80LL))(a1);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 368LL))(a1);
  sub_18001DCFC(&qword_1801BD4E8, 3);
  v6 = *(float (__fastcall **)(float *))(*(_QWORD *)a1 + 120LL);
  v7 = (*(double (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
  if ( *(float *)&v7 != v6(a1) )
  {
    (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 120LL))(a1);
    (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
    sub_18001DCFC(&qword_1801BD4E8, 3);
  }
  (*(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 400LL))(a1, &v11);
  v8 = *(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 384LL);
  v14 = v11;
  sub_180012440(&v14);
  v8(a1, &v14);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 392LL))(a1);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 360LL))(a1, v9);
  sub_18000F938(&v11);
  sub_18002B3C4((__int64)v12);
  return sub_180011E54((__int64)v13);
}
