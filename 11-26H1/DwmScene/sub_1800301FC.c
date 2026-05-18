/*
 * XREFs of sub_1800301FC @ 0x1800301FC
 * Callers:
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18002DAF0 @ 0x18002DAF0 (sub_18002DAF0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800301FC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx

  v4 = sub_18001C514(18712LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ShaderManager>::`vftable';
    sub_18002DAF0(v4 + 16, a2);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = (_QWORD *)(v5 + 16);
  *a1 = v5 + 16;
  a1[1] = v5;
  if ( v5 != -16 )
  {
    v7 = *(_QWORD *)(v5 + 24);
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
      *v6 = v9;
      v11 = (volatile signed __int32 *)v6[1];
      v6[1] = v10;
      if ( v11 )
        sub_180010F00(v11);
      if ( v8 )
        sub_180010EC8(v8);
    }
  }
  return a1;
}
