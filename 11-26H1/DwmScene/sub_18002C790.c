/*
 * XREFs of sub_18002C790 @ 0x18002C790
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18002053C @ 0x18002053C (sub_18002053C.c)
 *     sub_18002BB80 @ 0x18002BB80 (sub_18002BB80.c)
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 *     sub_18002CDF4 @ 0x18002CDF4 (sub_18002CDF4.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     sub_18006F7C0 @ 0x18006F7C0 (sub_18006F7C0.c)
 *     sub_180098BB8 @ 0x180098BB8 (sub_180098BB8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002C790(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *v8; // r15
  _QWORD *v9; // rcx
  char v10; // di
  bool v11; // bp
  char v12; // r14
  char v13; // r15
  char v14; // r14
  __int64 *v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-40h]
  _QWORD v21[4]; // [rsp+40h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 376LL))(a1, &v19);
  result = sub_180012A94(v4, &v17);
  if ( v20 )
    result = sub_180010F00(v20);
  v6 = v17;
  if ( v17 )
  {
    v7 = sub_180033D14(*(_QWORD *)(v17 + 3984), a2);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 184LL))(a1);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 5LL);
    if ( (_BYTE)result )
    {
      v9 = (_QWORD *)a1[48];
      v10 = 1;
      v11 = v9 && (unsigned __int8)sub_18002053C(v9);
      v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C96F8, 0LL);
      result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9718, 0LL);
      *(_BYTE *)(*v8 + 184LL) = v12;
      if ( (_BYTE)result || v11 || *((_BYTE *)a1 + 400) )
        v10 = 0;
      *(_BYTE *)(*v8 + 185LL) = v10;
      if ( v12 )
      {
        sub_180098BB8(*v8);
        v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C97F8, 0LL);
        v14 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9818, 0LL);
        v15 = sub_18002BB80(a1, v21);
        v16 = a1 + 52;
        if ( a1 + 52 != v15 )
        {
          sub_18002CDF4(a1 + 52);
          *v16 = *v15;
          a1[53] = v15[1];
          a1[54] = v15[2];
          *v15 = 0LL;
          v15[1] = 0LL;
          v15[2] = 0LL;
        }
        result = sub_18002CDF4(v21);
        if ( v13 )
        {
          if ( v14 )
          {
            result = *v16;
            if ( a1[53] != a1[52] )
              sub_180034428();
          }
          else
          {
            result = sub_18006F7C0(a1[57], a1 + 52);
          }
        }
        if ( v11 )
          result = sub_18002C03C((__int64)a1);
      }
    }
  }
  if ( v18 )
    return sub_180010EC8(v18);
  return result;
}
