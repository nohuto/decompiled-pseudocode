/*
 * XREFs of sub_1800C0910 @ 0x1800C0910
 * Callers:
 *     sub_1800C0B90 @ 0x1800C0B90 (sub_1800C0B90.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_1800275DC @ 0x1800275DC (sub_1800275DC.c)
 *     sub_180027670 @ 0x180027670 (sub_180027670.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 *     sub_1800C0838 @ 0x1800C0838 (sub_1800C0838.c)
 *     sub_1800C0B9C @ 0x1800C0B9C (sub_1800C0B9C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C0910(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // ebx
  __int64 v12; // rax
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int64 v15; // xmm0_8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-48h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER v24[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+60h] [rbp-18h]
  char v26; // [rsp+C0h] [rbp+48h]
  char v27; // [rsp+C8h] [rbp+50h]
  __int64 v28; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+60h] BYREF

  v27 = *(_BYTE *)(a2 + 8);
  if ( v27 )
    sub_180027670((__int64 *)a2);
  v8 = *(_BYTE *)(a3 + 8);
  if ( v8 )
    sub_180027670((__int64 *)a3);
  v26 = *(_BYTE *)(a4 + 8);
  if ( v26 )
    sub_180027670((__int64 *)a4);
  v9 = *((_DWORD *)a1 + 128);
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 312LL))(a1);
  *((_QWORD *)&v22 + 1) = __PAIR64__(v9, v10);
  PerformanceCount[0].LowPart = 0;
  LOBYTE(v25) = 0;
  *(_QWORD *)&v22 = a1[60];
  sub_180012B20(&v28);
  QueryPerformanceCounter(&PerformanceCount[1]);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 320LL))(a1, &v20);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[63] + 64LL))(a1[63], v10, v9);
  sub_18002B3C4((__int64)&v20);
  sub_180012B20(&v29);
  QueryPerformanceCounter(v24);
  if ( v11 < 0 )
    sub_18001DCFC(&qword_1801BD4E8, 3);
  sub_1800C05D4((__int64)a1, &v20);
  if ( v20 )
    sub_1800BDDBC(v20, v11);
  if ( v21 )
    sub_180010EC8(v21);
  (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(*(_QWORD *)a1[63] + 136LL))(a1[63], PerformanceCount);
  v12 = (*((_DWORD *)a1 + 411) + 1) % 0x14u;
  *((_DWORD *)a1 + 411) = v12;
  v13 = *(_OWORD *)&PerformanceCount[0].LowPart;
  v14 = *(_OWORD *)&v24[0].LowPart;
  v15 = v25;
  v12 *= 56LL;
  *(_OWORD *)((char *)a1 + v12 + 520) = v22;
  *(_OWORD *)((char *)a1 + v12 + 536) = v13;
  *(_OWORD *)((char *)a1 + v12 + 552) = v14;
  *(_QWORD *)((char *)a1 + v12 + 568) = v15;
  v16 = *((_DWORD *)a1 + 410) + 1;
  if ( v16 > 0x14 )
    v16 = 20;
  *((_DWORD *)a1 + 410) = v16;
  sub_1800C0838(a1);
  sub_1800C0B9C(a1);
  if ( v26 )
    sub_1800275DC((__int64 *)a4);
  if ( v8 )
    sub_1800275DC((__int64 *)a3);
  if ( v27 )
    sub_1800275DC((__int64 *)a2);
  v17 = v28;
  a1[34] = v28;
  v18 = v29;
  a1[35] = v29;
  result = v18 - v17;
  a1[36] = result;
  return result;
}
