/*
 * XREFs of sub_18006D3DC @ 0x18006D3DC
 * Callers:
 *     sub_18006C68C @ 0x18006C68C (sub_18006C68C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18006C900 @ 0x18006C900 (sub_18006C900.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006D3DC(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx

  v2 = sub_18001C514(1784LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingCamera>::`vftable';
    sub_18006C900();
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
    v5 = *(_QWORD *)(v3 + 32);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v6 = a1[1];
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
        v7 = v4;
        v8 = v6;
      }
      *(_QWORD *)(v4 + 8) = v7;
      v9 = *(volatile signed __int32 **)(v4 + 16);
      *(_QWORD *)(v4 + 16) = v8;
      if ( v9 )
        sub_180010F00(v9);
      if ( v6 )
        sub_180010EC8(v6);
    }
  }
  return a1;
}
