/*
 * XREFs of sub_18004CCFC @ 0x18004CCFC
 * Callers:
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18004BD9C @ 0x18004BD9C (sub_18004BD9C.c)
 */

_QWORD *__fastcall sub_18004CCFC(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rcx

  v6 = sub_18001C514(1264LL);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPropertyLayout>::`vftable';
    sub_18004BD9C(v6 + 16, a2, a3);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (_QWORD *)(v7 + 16);
  a1[1] = v7;
  *a1 = v7 + 16;
  if ( v7 != -16 )
  {
    v9 = *(_QWORD *)(v7 + 24);
    if ( !v9 || !*(_DWORD *)(v9 + 8) )
    {
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v10 = a1[1];
      v11 = 0LL;
      v12 = 0LL;
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
        v11 = v8;
        v12 = v10;
      }
      *v8 = v11;
      v13 = (volatile signed __int32 *)v8[1];
      v8[1] = v12;
      if ( v13 )
        sub_180010F00(v13);
      if ( v10 )
        sub_180010EC8(v10);
    }
  }
  return a1;
}
