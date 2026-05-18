/*
 * XREFs of sub_1800C6BF0 @ 0x1800C6BF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180052608 @ 0x180052608 (sub_180052608.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C6BF0(__int64 a1, __int64 *a2, unsigned int a3, __int128 *a4, unsigned __int8 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int128 v16; // [rsp+48h] [rbp-18h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( *a2 )
  {
    sub_180052608(*a2, &v14, *(_DWORD *)(a1 + 88));
    v11 = v14;
    v8 = *(_QWORD *)(v14 + 112);
    v13 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    sub_18000F938(&v13);
    v9 = *(_QWORD *)(v11 + 128);
    v13 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    sub_18000F938(&v13);
    v10 = *(_QWORD *)(v11 + 120);
    v13 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    sub_18000F938(&v13);
    if ( v15 )
      sub_180010EC8(v15);
  }
  v16 = *a4;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 344LL))(*(_QWORD *)(a1 + 144), v8);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 288LL))(*(_QWORD *)(a1 + 144), v9, a5);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(**(_QWORD **)(a1 + 144) + 280LL))(
             *(_QWORD *)(a1 + 144),
             v10,
             &v16,
             a3);
  _InterlockedIncrement64(qword_1801C8850);
  return result;
}
