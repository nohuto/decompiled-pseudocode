/*
 * XREFs of sub_180046AD0 @ 0x180046AD0
 * Callers:
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800277FC @ 0x1800277FC (sub_1800277FC.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_180047350 @ 0x180047350 (sub_180047350.c)
 *     sub_1800473DC @ 0x1800473DC (sub_1800473DC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180046AD0(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebp
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[72]; // [rsp+40h] [rbp-58h] BYREF
  char v15; // [rsp+88h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+8h] BYREF

  sub_180029070(a1, (__int64)a2);
  v4 = *(_DWORD *)(*a2 + 244LL);
  v16 = v4;
  sub_1800277FC((__int64 *)(a1 + 128), (__int64)v13, &v16);
  v5 = sub_180012C40(v12, a2);
  v7 = *v5;
  *v5 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v7;
  v8 = v5[1];
  v5[1] = *(_QWORD *)(v6 + 48);
  v9 = v12[1];
  *(_QWORD *)(v6 + 48) = v8;
  if ( v9 )
    sub_180010EC8(v9);
  sub_1800473DC(a1, v14);
  v10 = v14;
  do
  {
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10, a2);
    v10 += 8;
  }
  while ( v10 != &v15 );
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 112) )
  {
    v16 = v4;
    *(_BYTE *)(*(_QWORD *)sub_180028BD0((__int64 *)(a1 + 80), (__int64)v13, &v16) + 32LL) = 1;
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
      return sub_180047350(a1, 0LL);
    result = *(_QWORD *)(a1 + 72);
    if ( (*(_BYTE *)(result + 768) & 8) != 0 )
      return sub_180047350(a1, 0LL);
  }
  return result;
}
