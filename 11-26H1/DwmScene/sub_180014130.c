/*
 * XREFs of sub_180014130 @ 0x180014130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012D9C @ 0x180012D9C (sub_180012D9C.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180014130(__int64 a1, __int64 *a2)
{
  _QWORD *result; // rax
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  result = sub_180012D9C(*a2, &v7);
  if ( v7 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(v4 + 8);
    if ( v5 == *(_QWORD **)(v4 + 16) )
    {
      result = sub_18001310C(*(_QWORD **)(a1 + 8), *(_QWORD *)(v4 + 8), &v7);
    }
    else
    {
      result = sub_180013084(v5, &v7);
      *(_QWORD *)(v6 + 8) += 16LL;
    }
  }
  if ( v8 )
    return (_QWORD *)sub_180010EC8(v8);
  return result;
}
