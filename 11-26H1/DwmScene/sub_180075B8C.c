/*
 * XREFs of sub_180075B8C @ 0x180075B8C
 * Callers:
 *     sub_1800345EC @ 0x1800345EC (sub_1800345EC.c)
 *     sub_180075D94 @ 0x180075D94 (sub_180075D94.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180075534 @ 0x180075534 (sub_180075534.c)
 *     sub_180075670 @ 0x180075670 (sub_180075670.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180075B8C(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h]

  v13 = a2;
  if ( dword_1801CDAC0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CDAC0);
    if ( dword_1801CDAC0 == -1 )
    {
      v3 = sub_180011790(0x38uLL);
      *(_QWORD *)v3 = v3;
      *(_QWORD *)(v3 + 8) = v3;
      *(_QWORD *)(v3 + 16) = v3;
      *(_WORD *)(v3 + 24) = 257;
      qword_1801CDAC8 = v3;
      atexit(sub_1800EB8F0);
      sub_18000D4CC(&dword_1801CDAC0);
    }
  }
  v4 = sub_18001C514(48LL);
  v6 = v4;
  v14 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
    sub_180075534(v4 + 16, &v13);
  }
  else
  {
    v6 = 0LL;
  }
  v10 = v6 + 16;
  v11 = v6;
  sub_180075670(v5, (__int64)v12, &v13, (__int64)&v10);
  v7 = v12[0];
  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = *(_QWORD *)(v7 + 48);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *(_QWORD *)(v7 + 40);
  a1[1] = *(_QWORD *)(v7 + 48);
  if ( v11 )
    sub_180010EC8(v11);
  return a1;
}
