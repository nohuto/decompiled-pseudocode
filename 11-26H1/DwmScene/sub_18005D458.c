/*
 * XREFs of sub_18005D458 @ 0x18005D458
 * Callers:
 *     sub_18005D420 @ 0x18005D420 (sub_18005D420.c)
 *     sub_18005D540 @ 0x18005D540 (sub_18005D540.c)
 *     sub_18007661C @ 0x18007661C (sub_18007661C.c)
 *     sub_180076D44 @ 0x180076D44 (sub_180076D44.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 * Callees:
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_18005C1B8 @ 0x18005C1B8 (sub_18005C1B8.c)
 *     sub_18005C4F0 @ 0x18005C4F0 (sub_18005C4F0.c)
 *     sub_18005C864 @ 0x18005C864 (sub_18005C864.c)
 *     sub_18007FA6C @ 0x18007FA6C (sub_18007FA6C.c)
 *     sub_18007FA94 @ 0x18007FA94 (sub_18007FA94.c)
 *     sub_180080E98 @ 0x180080E98 (sub_180080E98.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005D458(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD v15[4]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF
  _QWORD *v17; // [rsp+88h] [rbp+38h]

  v17 = a2;
  sub_18005C864(a2);
  v15[0] = a3;
  v15[1] = a4;
  v9 = *a2 + 24LL;
  v10 = *(_QWORD *)(*a2 + 32LL);
  if ( v10 == *(_QWORD *)(*a2 + 40LL) )
    sub_18007FA94(v9, v10, v15);
  else
    sub_18007FA6C(v9, v15);
  if ( a5 )
  {
    v11 = *a2;
    v12 = sub_180011CC4(v15, byte_1800F9DE0);
    sub_180080E98(v11, v12);
  }
  v16 = *(_DWORD *)(a1 + 552);
  if ( !v16 )
    sub_18001DCFC(&qword_1801BD448, 2);
  v13 = sub_18005C4F0((__int64 *)(a1 + 416), (__int64)v15, &v16);
  sub_18005C1B8(*(_QWORD *)v13 + 40LL, *(_QWORD *)(*(_QWORD *)v13 + 40LL), a2);
  return a2;
}
