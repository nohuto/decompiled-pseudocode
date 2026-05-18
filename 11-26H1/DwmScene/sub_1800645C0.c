/*
 * XREFs of sub_1800645C0 @ 0x1800645C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_180038048 @ 0x180038048 (sub_180038048.c)
 *     sub_18004ED7C @ 0x18004ED7C (sub_18004ED7C.c)
 *     sub_18004EDB4 @ 0x18004EDB4 (sub_18004EDB4.c)
 *     sub_180054534 @ 0x180054534 (sub_180054534.c)
 *     sub_180054A54 @ 0x180054A54 (sub_180054A54.c)
 *     sub_18005E588 @ 0x18005E588 (sub_18005E588.c)
 *     sub_18005F864 @ 0x18005F864 (sub_18005F864.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_180060724 @ 0x180060724 (sub_180060724.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800645C0(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int128 v15; // [rsp+38h] [rbp-31h] BYREF
  _QWORD *v16; // [rsp+48h] [rbp-21h]
  __int128 v17; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v18; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v19; // [rsp+68h] [rbp-1h]
  __int64 *v20[3]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v21[3]; // [rsp+90h] [rbp+27h] BYREF

  result = a3[1];
  if ( *a3 != result )
  {
    sub_180054A54(v20, (__int64)a3);
    sub_180060724(v20[0], v20[1]);
    sub_18005F864(*a2, &v18);
    sub_180060724(v18, v19);
    v15 = 0LL;
    v16 = 0LL;
    v10 = v18;
    v11 = v19;
    if ( v18 != v19 )
    {
      v12 = (_QWORD *)*((_QWORD *)&v15 + 1);
      do
      {
        if ( (*(_DWORD *)(*v10 + 440) & 0x200) != 0 )
        {
          if ( v12 == v16 )
          {
            sub_180054534((__int64 *)&v15, (__int64)v12, v10);
            v12 = (_QWORD *)*((_QWORD *)&v15 + 1);
          }
          else
          {
            sub_180013084(v12, v10);
            v12 = (_QWORD *)(*((_QWORD *)&v15 + 1) + 16LL);
            *((_QWORD *)&v15 + 1) += 16LL;
          }
        }
        v10 += 2;
      }
      while ( v10 != v11 );
    }
    v13 = sub_18005F93C(*a2, v9);
    sub_18005E588(v21, v13 + 136, v13 + 184);
    v14 = a1[64];
    v17 = 0LL;
    sub_18004ED7C(v14, (__int64)&unk_1801CC9B8, &v17);
    v17 = 0LL;
    sub_18004EDB4(v14, (__int64)&unk_1801CC9B8, &v17);
    (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 112LL))(a1, a2, a4, a5);
    (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 160LL))(a1, v21, a4, a5);
    (*(void (__fastcall **)(_QWORD *, __int128 *, __int64, __int64))(*a1 + 160LL))(a1, &v15, a4, a5);
    (*(void (__fastcall **)(_QWORD *, __int64 **, __int64, __int64))(*a1 + 160LL))(a1, v20, a4, a5);
    (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 136LL))(a1, a2, a4, a5);
    sub_180038048((__int64)v21);
    sub_180038048((__int64)&v15);
    sub_180038048((__int64)&v18);
    return sub_180038048((__int64)v20);
  }
  return result;
}
