/*
 * XREFs of sub_1800C5DF0 @ 0x1800C5DF0
 * Callers:
 *     sub_1800C5A00 @ 0x1800C5A00 (sub_1800C5A00.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180038C44 @ 0x180038C44 (sub_180038C44.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C52A0 @ 0x1800C52A0 (sub_1800C52A0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C5DF0(_QWORD **a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *, __int64 *); // rbx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+48h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  sub_180012A94((__int64)(a1 + 9), &v9);
  sub_1800C52A0(&v7, &v9);
  if ( v10 )
    sub_180010EC8(v10);
  v2 = sub_1800BC108(v7, &v11);
  v3 = *v2;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)*v2 + 192LL);
  sub_18000F938(&v12);
  LODWORD(v4) = v4(v3, &v13, &v12);
  sub_18000F938(&v11);
  if ( (int)v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1[18] + 224LL))(a1[18], v12);
    sub_180038C44(a1);
    LODWORD(v11) = 0;
    do
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *, __int64, _DWORD))(*a1[18] + 232LL))(
             a1[18],
             v12,
             &v11,
             4LL,
             0);
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          sub_1800BDDBC(v7, v5);
          break;
        }
        Thrd_yield();
      }
    }
    while ( !(_DWORD)v11 );
  }
  if ( v8 )
    sub_180010EC8(v8);
  return sub_18000F938(&v12);
}
