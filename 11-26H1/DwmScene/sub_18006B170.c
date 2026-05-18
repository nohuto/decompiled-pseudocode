/*
 * XREFs of sub_18006B170 @ 0x18006B170
 * Callers:
 *     sub_18006B3AC @ 0x18006B3AC (sub_18006B3AC.c)
 *     sub_18006E278 @ 0x18006E278 (sub_18006E278.c)
 *     sub_18006E9F0 @ 0x18006E9F0 (sub_18006E9F0.c)
 *     sub_180087164 @ 0x180087164 (sub_180087164.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_18006A92C @ 0x18006A92C (sub_18006A92C.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_18006B46C @ 0x18006B46C (sub_18006B46C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18006B170(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 result; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h]
  __int64 v25; // [rsp+58h] [rbp-29h] BYREF
  __int64 v26; // [rsp+60h] [rbp-21h]
  __int64 v27; // [rsp+68h] [rbp-19h] BYREF
  __int64 v28; // [rsp+70h] [rbp-11h]
  _QWORD v29[4]; // [rsp+88h] [rbp+7h] BYREF

  if ( a6 )
    sub_180029310((__int64)a1, 1, 1);
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v11 = (__int64 *)sub_18006B46C((unsigned int)&v25, v10, a2, a3, a4, 0, a5);
  result = (__int64)sub_180011F5C(a1 + 14, v11);
  if ( v26 )
    result = sub_180010EC8(v26);
  if ( (a1[5] & 1) != 0 )
  {
    if ( a6 )
    {
      sub_18006A92C(a6, &v23);
      v13 = v23;
      v14 = sub_18002912C((__int64)a1, &v27);
      sub_1800292C4(v13, (__int64)v14);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v23 + 40LL))(v23, a2, a3, a4, a5);
      sub_18006AD9C(a1, &v23);
      sub_180029310((__int64)a1, 2, 0);
      result = sub_180029310(v16, v15 + 4, v15);
      if ( v24 )
        return sub_180010EC8(v24);
    }
    else
    {
      sub_180036040(v10, &v27);
      v17 = 0;
      v18 = v27;
      if ( (v28 - v27) >> 4 )
      {
        v19 = 0LL;
        do
        {
          sub_180012C40(&v25, (_QWORD *)(v18 + 16 * v19));
          v20 = v25;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25) )
          {
            sub_18006A92C(v20, &v23);
            v21 = v23;
            v22 = sub_18002912C((__int64)a1, v29);
            sub_1800292C4(v21, (__int64)v22);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v23 + 40LL))(v23, a2, a3, a4, a5);
            sub_18006AD9C(a1, &v23);
            if ( v24 )
              sub_180010EC8(v24);
          }
          if ( v26 )
            sub_180010EC8(v26);
          v19 = ++v17;
          v18 = v27;
        }
        while ( v17 < (unsigned __int64)((v28 - v27) >> 4) );
      }
      return sub_1800141F0((__int64)&v27);
    }
  }
  return result;
}
