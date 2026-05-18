/*
 * XREFs of sub_1800180D0 @ 0x1800180D0
 * Callers:
 *     sub_180016F1C @ 0x180016F1C (sub_180016F1C.c)
 *     sub_180024B24 @ 0x180024B24 (sub_180024B24.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800162FC @ 0x1800162FC (sub_1800162FC.c)
 *     sub_180017A0C @ 0x180017A0C (sub_180017A0C.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800180D0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = sub_18001C514(184LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Texture>::`vftable';
    sub_180017A0C();
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3 + 16;
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v5 = *(_QWORD *)(v3 + 120);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v8 = v3 + 16;
      v9 = a1[1];
      v6 = v9;
      sub_1800162FC((_QWORD *)(v4 + 96), &v8);
      if ( v6 )
        sub_180010EC8(v6);
    }
  }
  return a1;
}
