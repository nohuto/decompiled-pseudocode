/*
 * XREFs of sub_18002FE8C @ 0x18002FE8C
 * Callers:
 *     sub_180032F74 @ 0x180032F74 (sub_180032F74.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18002DA20 @ 0x18002DA20 (sub_18002DA20.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002FE8C(_QWORD *a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rcx

  v8 = sub_18001C514(496LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::Display>::`vftable';
    sub_18002DA20(v8 + 16, a2, a3, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (_QWORD *)(v9 + 16);
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v9 != -16 )
  {
    v11 = *(_QWORD *)(v9 + 24);
    if ( !v11 || !*(_DWORD *)(v11 + 8) )
    {
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v12 = a1[1];
      v13 = 0LL;
      v14 = 0LL;
      if ( v12 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
        v13 = v10;
        v14 = v12;
      }
      *v10 = v13;
      v15 = (volatile signed __int32 *)v10[1];
      v10[1] = v14;
      if ( v15 )
        sub_180010F00(v15);
      if ( v12 )
        sub_180010EC8(v12);
    }
  }
  return a1;
}
