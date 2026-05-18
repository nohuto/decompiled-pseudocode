/*
 * XREFs of sub_18005ECC0 @ 0x18005ECC0
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001E5F8 @ 0x18001E5F8 (sub_18001E5F8.c)
 *     sub_18002F3F4 @ 0x18002F3F4 (sub_18002F3F4.c)
 *     sub_1800380E0 @ 0x1800380E0 (sub_1800380E0.c)
 *     sub_180060570 @ 0x180060570 (sub_180060570.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005ECC0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  void *v7; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h] BYREF
  __int64 v9; // [rsp+30h] [rbp-78h]
  _QWORD v10[4]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-50h] BYREF

  v7 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v1 = (__int64 *)(a1 + 200);
  if ( sub_1800380E0(a1 + 200, &v7) )
  {
    sub_180011CC4(
      v10,
      "Scene::AddCustomData() -- cannot add custom data of this type because an instance of the same type already exists");
    sub_18001E5F8(pExceptionObject, (__int64)v10);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  sub_180060570(&v8);
  v2 = *(_QWORD *)sub_18002F3F4(v1, (__int64)v10, &v7);
  v3 = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v4 = v8;
  *(_QWORD *)(v2 + 40) = v8;
  v5 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 48) = v3;
  if ( v5 )
    sub_180010EC8(v5);
  if ( v3 )
    sub_180010EC8(v3);
  return v4;
}
