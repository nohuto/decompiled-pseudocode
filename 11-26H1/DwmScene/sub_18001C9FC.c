/*
 * XREFs of sub_18001C9FC @ 0x18001C9FC
 * Callers:
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 * Callees:
 *     sub_18001CA80 @ 0x18001CA80 (sub_18001CA80.c)
 *     sub_18001DEF0 @ 0x18001DEF0 (sub_18001DEF0.c)
 */

__int64 __fastcall sub_18001C9FC(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rax
  char v6; // r9
  __int64 *v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax

  *(_QWORD *)(*a1 + 8LL) = sub_18001CA80(a1, *(_QWORD *)(*a2 + 8LL), *a1);
  v4 = (_QWORD *)*a1;
  a1[1] = a2[1];
  if ( *(_BYTE *)(v4[1] + 25LL) )
  {
    *v4 = v4;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v5 = sub_18001DEF0();
    *v7 = v5;
    v8 = *(_QWORD *)(*a1 + 8LL);
    for ( result = *(_QWORD *)(v8 + 16); *(_BYTE *)(result + 25) == v6; result = *(_QWORD *)(result + 16) )
      v8 = result;
    *(_QWORD *)(*a1 + 16LL) = v8;
  }
  return result;
}
