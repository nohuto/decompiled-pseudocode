/*
 * XREFs of sub_1800817A0 @ 0x1800817A0
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_1800815C4 @ 0x1800815C4 (sub_1800815C4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800817A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  _BYTE v19[16]; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+88h] [rbp+38h] BYREF
  int v21; // [rsp+90h] [rbp+40h]

  v21 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = *(_DWORD *)(*a2 + 244LL);
    v20 = v5;
    result = sub_180042544(a1 + 128, (__int64)&v20);
    if ( result == *(_QWORD *)(a1 + 128) )
    {
      sub_180029070(a1, (__int64)a2);
      v6 = *a2;
      sub_1800815C4((__int64 *)(v6 + 496), (__int64 *)&v17);
      v21 = 1;
      v7 = (__int64)v17;
      v8 = (_QWORD *)sub_180012BF8(v6 + 8, &v16);
      sub_1800291F0(v7, v8);
      if ( *((_QWORD *)&v16 + 1) )
        sub_180010EC8(*((__int64 *)&v16 + 1));
      v9 = v17;
      v10 = *v17;
      v16 = 0LL;
      v11 = *(_QWORD *)(a1 + 120);
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v16 = *(_OWORD *)(a1 + 112);
      (*(void (__fastcall **)(_QWORD *, __int128 *))(v10 + 40))(v9, &v16);
      v20 = v5;
      sub_180051E20((__int64 *)(a1 + 128), (__int64)v19, &v20);
      v12 = sub_180012C40(&v16, &v17);
      v13 = *v12;
      *v12 = *(_QWORD *)(v14 + 40);
      *(_QWORD *)(v14 + 40) = v13;
      v15 = v12[1];
      v12[1] = *(_QWORD *)(v14 + 48);
      *(_QWORD *)(v14 + 48) = v15;
      if ( *((_QWORD *)&v16 + 1) )
        sub_180010EC8(*((__int64 *)&v16 + 1));
      v20 = v5;
      result = sub_180028BD0((__int64 *)(a1 + 80), (__int64)v19, &v20);
      *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
      if ( v18 )
        return sub_180010EC8(v18);
    }
  }
  return result;
}
