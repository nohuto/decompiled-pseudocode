/*
 * XREFs of sub_1401B0FDC @ 0x1401B0FDC
 * Callers:
 *     sub_14017F944 @ 0x14017F944 (sub_14017F944.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14009E340 @ 0x14009E340 (sub_14009E340.c)
 *     sub_1401B10C4 @ 0x1401B10C4 (sub_1401B10C4.c)
 */

__int64 __fastcall sub_1401B0FDC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  PVOID v4; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  int v10; // esi
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  PVOID v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  *a3 = 0LL;
  LODWORD(v13) = 0;
  P = 0LL;
  v7 = (_QWORD *)sub_1400143E0(64LL, 72LL, 1145266514LL, v3);
  v14 = v7;
  v8 = v7;
  if ( v7 )
  {
    v9 = v7 + 1;
    v9[1] = v9;
    *v9 = v9;
    *(_DWORD *)v8 = 72;
    *(_OWORD *)(v8 + 3) = *(_OWORD *)(a1 + 2104);
    v10 = sub_1401B10C4(a1, &P, &v13);
    if ( v10 >= 0 )
    {
      v14 = 0LL;
      *((_DWORD *)v8 + 11) = v13;
      v8[6] = P;
      *a3 = v8;
      v8 = 0LL;
    }
    else
    {
      v4 = P;
    }
  }
  else
  {
    v10 = -1073741670;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44436152u);
  if ( v8 )
    sub_14009E340(&v14);
  return (unsigned int)v10;
}
