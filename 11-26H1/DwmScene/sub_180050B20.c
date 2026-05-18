/*
 * XREFs of sub_180050B20 @ 0x180050B20
 * Callers:
 *     sub_1800168F8 @ 0x1800168F8 (sub_1800168F8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001E908 @ 0x18001E908 (sub_18001E908.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180051250 @ 0x180051250 (sub_180051250.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180050B20(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rax
  const void *v6; // rdx
  unsigned __int64 v7; // rax
  const void *v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = *a3;
  v11[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_1800254C0(a1, a2, v11);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  v5 = sub_18001E908((__int64)L"RenderDeviceGeneric");
  sub_18001F9C0(a1 + 112, v6, v5);
  v7 = sub_18001E908((__int64)L"Universal");
  sub_18001F9C0(a1 + 80, v8, v7);
  sub_180051250(a1);
  v9 = a3[1];
  if ( v9 )
    sub_180010EC8(v9);
  return a1;
}
