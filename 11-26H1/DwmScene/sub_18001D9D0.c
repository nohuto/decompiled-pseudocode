/*
 * XREFs of sub_18001D9D0 @ 0x18001D9D0
 * Callers:
 *     sub_18001DB38 @ 0x18001DB38 (sub_18001DB38.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_18001C9D0 @ 0x18001C9D0 (sub_18001C9D0.c)
 *     sub_18001C9FC @ 0x18001C9FC (sub_18001C9FC.c)
 *     sub_18001CB70 @ 0x18001CB70 (sub_18001CB70.c)
 *     sub_18001D430 @ 0x18001D430 (sub_18001D430.c)
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_18001D650 @ 0x18001D650 (sub_18001D650.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_18001E024 @ 0x18001E024 (sub_18001E024.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001D9D0(__int64 a1, int a2, __int64 a3)
{
  __int64 *v6; // rbx
  _DWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v11; // [rsp+30h] [rbp-69h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-61h] BYREF
  __int128 v13; // [rsp+40h] [rbp-59h] BYREF
  void *v14[2]; // [rsp+50h] [rbp-49h] BYREF
  __int128 *v15; // [rsp+60h] [rbp-39h] BYREF
  __int128 *v16; // [rsp+68h] [rbp-31h]
  int v17; // [rsp+70h] [rbp-29h] BYREF
  char v18[56]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+17h]

  sub_18001D430((__int64 *)v14);
  v12 = &unk_1801C7BE0;
  sub_180012AC4((__int64)&unk_1801C7BE0);
  v6 = sub_18001D7D4();
  v13 = 0LL;
  v15 = &v13;
  v16 = &v13;
  *(_QWORD *)&v13 = sub_18001C9D0();
  sub_18001C9FC(&v13, v6);
  v16 = 0LL;
  sub_18001D650((__int64)&v15);
  sub_18001E024(v14);
  sub_18001C9FC(v14, &v13);
  sub_18001CB70((void **)&v13, (__int64)&v13);
  Mtx_unlock((_Mtx_t)&unk_1801C7BE0);
  v7 = *(_DWORD **)v14[0];
  v12 = *(_DWORD **)v14[0];
  while ( !*((_BYTE *)v7 + 25) )
  {
    sub_18001D460(&v17, v7 + 8);
    v11 = a2;
    if ( !v19 )
    {
      std::_Xbad_function_call();
      return sub_18001CB70(v14, (__int64)v14);
    }
    (*(void (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v19 + 16LL))(v19, a1, &v11, a3);
    sub_180013494((__int64)v18, v8);
    sub_18001D6F4((__int64 *)&v12, v9);
    v7 = v12;
  }
  return sub_18001CB70(v14, (__int64)v14);
}
