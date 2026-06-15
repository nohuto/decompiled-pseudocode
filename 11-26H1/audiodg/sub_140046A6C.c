/*
 * XREFs of sub_140046A6C @ 0x140046A6C
 * Callers:
 *     sub_1400469CC @ 0x1400469CC (sub_1400469CC.c)
 * Callees:
 *     sub_140051EB0 @ 0x140051EB0 (sub_140051EB0.c)
 *     sub_140052E8C @ 0x140052E8C (sub_140052E8C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_140046A6C(union _RTL_RUN_ONCE *a1, __int64 *a2)
{
  int result; // eax
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  union _RTL_RUN_ONCE *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  fPending = 0;
  result = InitOnceBeginInitialize(a1, 0, &fPending, 0LL);
  if ( !result )
  {
    result = o_abort();
    __debugbreak();
  }
  if ( fPending )
  {
    v10 = a1;
    v12 = 0;
    v5 = (__int64 *)sub_140051EB0(&v14);
    v6 = *a2;
    v7 = *v5;
    *v5 = 0LL;
    v8 = *(_QWORD *)(v6 + 296);
    *(_QWORD *)(v6 + 296) = v7;
    if ( v8 )
      sub_1400B6010(v8);
    v9 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      sub_1400B6010(v9);
    }
    v11 = 0;
    return sub_140052E8C(&v10);
  }
  return result;
}
