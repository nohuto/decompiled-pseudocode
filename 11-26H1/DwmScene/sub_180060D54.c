/*
 * XREFs of sub_180060D54 @ 0x180060D54
 * Callers:
 *     sub_180061690 @ 0x180061690 (sub_180061690.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18003F2F4 @ 0x18003F2F4 (sub_18003F2F4.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180060D54(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void **result; // rax

  v2 = *(_QWORD *)(a1 + 320);
  if ( v2 )
    sub_180010EC8(v2);
  v3 = *(_QWORD *)(a1 + 304);
  if ( v3 )
    sub_180010EC8(v3);
  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
    sub_180010EC8(v4);
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
    sub_180010EC8(v5);
  v6 = *(_QWORD *)(a1 + 256);
  if ( v6 )
    sub_180010EC8(v6);
  v7 = *(_QWORD *)(a1 + 240);
  if ( v7 )
    sub_180010EC8(v7);
  v8 = *(_QWORD *)(a1 + 224);
  if ( v8 )
    sub_180010EC8(v8);
  v9 = *(_QWORD *)(a1 + 208);
  if ( v9 )
    sub_180010EC8(v9);
  v10 = *(_QWORD *)(a1 + 192);
  if ( v10 )
    sub_180010EC8(v10);
  sub_18000BFA4(a1 + 136, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v11 = *(_QWORD *)(a1 + 128);
  if ( v11 )
    sub_180010EC8(v11);
  sub_18003F2F4((void **)(a1 + 104));
  sub_18000BFA4(a1 + 56, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000BFA4(a1 + 8, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  result = &Spectre::Engine::SceneCustomData::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
