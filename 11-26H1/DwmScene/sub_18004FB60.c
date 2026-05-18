/*
 * XREFs of sub_18004FB60 @ 0x18004FB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18004F2AC @ 0x18004F2AC (sub_18004F2AC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall sub_18004FB60(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  void (__fastcall *v11)(__int64, _QWORD *, __int64); // r9
  __int64 v12; // rcx
  __int128 v14; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-30h] BYREF

  v8 = sub_18001C514(552LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::LightProbe>::`vftable';
    sub_18004F2AC();
  }
  else
  {
    v9 = 0LL;
  }
  v14 = 0LL;
  sub_180013300(&v14, v9 + 16, v9);
  v10 = sub_180012C40(v15, &v14);
  v11(a1, v10, a3);
  *a2 = v14;
  v12 = *(_QWORD *)(a4 + 8);
  if ( v12 )
    sub_180010EC8(v12);
  return a2;
}
