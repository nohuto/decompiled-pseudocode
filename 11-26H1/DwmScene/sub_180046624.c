/*
 * XREFs of sub_180046624 @ 0x180046624
 * Callers:
 *     sub_180045FCC @ 0x180045FCC (sub_180045FCC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180046548 @ 0x180046548 (sub_180046548.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180046624(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx

  v4 = sub_18001C514(168LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::VertexBuffer>::`vftable';
    sub_180046548(v4 + 16, a2);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 + 16;
  *a1 = v5 + 16;
  a1[1] = v5;
  if ( v5 != -16 )
  {
    v7 = *(_QWORD *)(v5 + 120);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v8 = a1[1];
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
        v9 = v6;
        v10 = v8;
      }
      *(_QWORD *)(v6 + 96) = v9;
      v11 = *(volatile signed __int32 **)(v6 + 104);
      *(_QWORD *)(v6 + 104) = v10;
      if ( v11 )
        sub_180010F00(v11);
      if ( v8 )
        sub_180010EC8(v8);
    }
  }
  return a1;
}
