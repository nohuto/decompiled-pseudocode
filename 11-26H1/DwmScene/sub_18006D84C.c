/*
 * XREFs of sub_18006D84C @ 0x18006D84C
 * Callers:
 *     sub_180061720 @ 0x180061720 (sub_180061720.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_18006F16C @ 0x18006F16C (sub_18006F16C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006D84C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = sub_180012C40(v8, a2);
  sub_18006F16C(a1, v4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*a2 + 8LL))(
    *a2,
    *(_QWORD *)(a1 + 32),
    *(unsigned int *)(a1 + 8),
    *(unsigned int *)(a1 + 12),
    *(_DWORD *)(a1 + 20),
    *(_DWORD *)(a1 + 28));
  v5 = *(_QWORD **)(a1 + 48);
  if ( v5 == *(_QWORD **)(a1 + 56) )
  {
    result = sub_18006C90C((__int64 *)(a1 + 40), *(_QWORD *)(a1 + 48), a2);
  }
  else
  {
    result = sub_180013084(v5, a2);
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v7 = a2[1];
  if ( v7 )
    return (_QWORD *)sub_180010EC8(v7);
  return result;
}
