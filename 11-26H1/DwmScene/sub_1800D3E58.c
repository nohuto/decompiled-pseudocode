/*
 * XREFs of sub_1800D3E58 @ 0x1800D3E58
 * Callers:
 *     sub_1800D3E4C @ 0x1800D3E4C (sub_1800D3E4C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_18006BAD8 @ 0x18006BAD8 (sub_18006BAD8.c)
 *     sub_1800D4478 @ 0x1800D4478 (sub_1800D4478.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D3E58(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_18006BAD8((_DWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 80) = 0LL;
  sub_180025874(a1 + 88);
  *(_DWORD *)(a1 + 20) = _InterlockedIncrement(dword_1801C8F30);
  v2 = sub_18001C514(136LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
    sub_1800D4478(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)a1 = v3 + 16;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3;
  if ( v4 )
    sub_180010EC8(v4);
  return a1;
}
