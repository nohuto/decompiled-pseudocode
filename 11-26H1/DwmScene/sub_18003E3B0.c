/*
 * XREFs of sub_18003E3B0 @ 0x18003E3B0
 * Callers:
 *     sub_18003FF30 @ 0x18003FF30 (sub_18003FF30.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180018460 @ 0x180018460 (sub_180018460.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18002A0A4 @ 0x18002A0A4 (sub_18002A0A4.c)
 */

_QWORD *__fastcall sub_18003E3B0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  __int64 (__fastcall ***v11)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001C514(24LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::SceneNode>::`vftable';
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)(v4 + 16) = a2;
  }
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v5 = (__int64 *)(a2 + 8);
    v6 = *(_QWORD *)(a2 + 16);
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
      v9 = a2;
      v10 = a1[1];
      v7 = v10;
      sub_18002A0A4(v5, &v9);
      if ( v7 )
        sub_180010EC8(v7);
    }
  }
  v11 = 0LL;
  sub_180018460(&v11);
  return a1;
}
