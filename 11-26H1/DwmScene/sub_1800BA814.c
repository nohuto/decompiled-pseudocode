/*
 * XREFs of sub_1800BA814 @ 0x1800BA814
 * Callers:
 *     sub_1800B99A4 @ 0x1800B99A4 (sub_1800B99A4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_1800BA2E0 @ 0x1800BA2E0 (sub_1800BA2E0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800BA814(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rcx

  v8 = sub_18001C514(1744LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::RenderOutputD3D11Gdi>::`vftable';
    sub_1800BA2E0(v8 + 16, a2, a3, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v9 + 16;
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v9 != -16 )
  {
    v11 = *(_QWORD *)(v9 + 88);
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
      *(_QWORD *)(v10 + 64) = v13;
      v15 = *(volatile signed __int32 **)(v10 + 72);
      *(_QWORD *)(v10 + 72) = v14;
      if ( v15 )
        sub_180010F00(v15);
      if ( v12 )
        sub_180010EC8(v12);
    }
  }
  return a1;
}
