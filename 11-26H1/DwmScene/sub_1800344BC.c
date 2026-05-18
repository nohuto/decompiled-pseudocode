/*
 * XREFs of sub_1800344BC @ 0x1800344BC
 * Callers:
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_18008B370 @ 0x18008B370 (sub_18008B370.c)
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18002D748 @ 0x18002D748 (sub_18002D748.c)
 *     sub_18002DB58 @ 0x18002DB58 (sub_18002DB58.c)
 */

_QWORD *__fastcall sub_1800344BC(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax

  v4 = sub_18002D748(*a3, (__int64)a2);
  v5 = v4;
  if ( *(_QWORD *)(v4 + 8) )
  {
    v6 = (__int64 *)(v4 + 16);
  }
  else
  {
    v7 = sub_18001C514(168LL);
    v8 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 8) = 1;
      *(_DWORD *)(v7 + 12) = 1;
      *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::TweenManager>::`vftable';
      sub_18002DB58(v7 + 16);
    }
    else
    {
      v8 = 0LL;
    }
    v6 = (__int64 *)(v5 + 16);
    *(_QWORD *)(v5 + 8) = v8 + 16;
    v9 = *(_QWORD *)(v5 + 16);
    *(_QWORD *)(v5 + 16) = v8;
    if ( v9 )
      sub_180010EC8(v9);
  }
  v10 = *v6;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *a2 = *(_QWORD *)(v5 + 8);
  a2[1] = *v6;
  return a2;
}
