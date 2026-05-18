/*
 * XREFs of sub_18003ADE8 @ 0x18003ADE8
 * Callers:
 *     sub_180012C78 @ 0x180012C78 (sub_180012C78.c)
 *     sub_180014BBC @ 0x180014BBC (sub_180014BBC.c)
 *     sub_180014CE0 @ 0x180014CE0 (sub_180014CE0.c)
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_18005E70C @ 0x18005E70C (sub_18005E70C.c)
 *     sub_18005E830 @ 0x18005E830 (sub_18005E830.c)
 *     sub_18005E954 @ 0x18005E954 (sub_18005E954.c)
 *     sub_18005EA78 @ 0x18005EA78 (sub_18005EA78.c)
 *     sub_18005EB9C @ 0x18005EB9C (sub_18005EB9C.c)
 *     sub_18006C68C @ 0x18006C68C (sub_18006C68C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_180039B18 @ 0x180039B18 (sub_180039B18.c)
 *     sub_18003D1BC @ 0x18003D1BC (sub_18003D1BC.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18003ADE8(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r15
  __int64 *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  void (__fastcall *v15)(__int64, _QWORD *); // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]

  sub_18003D758();
  sub_180012C40(&v18, a2);
  v4 = *(_QWORD **)(a1 + 376);
  v5 = *(_QWORD **)(a1 + 384);
  while ( v4 != v5 )
  {
    v6 = sub_180012C40(v21, v4);
    v7 = *v6;
    v8 = v6[1];
    if ( v8 )
      sub_180010EC8(v8);
    if ( v18 == v7 )
      break;
    v4 += 2;
  }
  if ( v19 )
    sub_180010EC8(v19);
  v9 = *(_QWORD **)(a1 + 384);
  if ( v4 != v9 )
    return 0;
  if ( v9 == *(_QWORD **)(a1 + 392) )
  {
    sub_180039B18((__int64 *)(a1 + 376), *(_QWORD *)(a1 + 384), a2);
  }
  else
  {
    sub_180013084(v9, a2);
    *(_QWORD *)(a1 + 384) += 16LL;
  }
  sub_18003D1BC(a1);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 104LL))(*a2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    sub_180036040(v10, &v22);
    v11 = 0;
    v12 = v22;
    if ( (v23 - v22) >> 4 )
    {
      v13 = 0LL;
      do
      {
        sub_180012C40(&v18, (_QWORD *)(v12 + 16 * v13));
        sub_180029C50(v18 + 24, (__int64)v21);
        v14 = sub_180012C40(&v20, &v18);
        v15(v16, v14);
        sub_180011E54((__int64)v21);
        if ( v19 )
          sub_180010EC8(v19);
        v13 = ++v11;
        v12 = v22;
      }
      while ( v11 < (unsigned __int64)((v23 - v22) >> 4) );
    }
    sub_1800141F0((__int64)&v22);
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 120LL))(*a2);
  return 1;
}
