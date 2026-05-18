/*
 * XREFs of sub_18003F5D0 @ 0x18003F5D0
 * Callers:
 *     sub_18003F6D8 @ 0x18003F6D8 (sub_18003F6D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003F8DC @ 0x18003F8DC (sub_18003F8DC.c)
 *     sub_18004016C @ 0x18004016C (sub_18004016C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003F5D0(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD v14[4]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v15; // [rsp+50h] [rbp-71h] BYREF
  __int64 v16; // [rsp+58h] [rbp-69h]
  __int64 v17; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-51h] BYREF
  _QWORD v19[4]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-11h] BYREF

  v14[3] = a5;
  v8 = sub_180012C40(&v17, a5);
  sub_18004016C(a1, &v15, v8);
  if ( !v15 )
  {
    sub_180011CC4(v19, "Scene::AddNode() - Parent node could not be found.");
    v12 = sub_180011CC4(
            v18,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v12, v13, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = (unsigned int)sub_180012C40(v14, &v15);
  sub_18003F8DC(a1, a2, a3, v9, (__int64)a5);
  if ( v16 )
    sub_180010EC8(v16);
  v10 = a5[1];
  if ( v10 )
    sub_180010EC8(v10);
  return a2;
}
