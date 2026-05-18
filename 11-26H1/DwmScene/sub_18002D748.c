/*
 * XREFs of sub_18002D748 @ 0x18002D748
 * Callers:
 *     sub_1800344BC @ 0x1800344BC (sub_1800344BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001E5F8 @ 0x18001E5F8 (sub_18001E5F8.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18002E584 @ 0x18002E584 (sub_18002E584.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D748(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void *v5; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  sub_180029EF8(a1 + 16, a2);
  v5 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v3 = sub_18002E584(a1 + 200, &v5);
  if ( v3 == *(_QWORD *)(a1 + 200) )
  {
    sub_180011CC4(
      v6,
      "Scene::GetCustomData() -- could not find custom data of this type -- AddCustomData<T>() must be called before GetCustomData<T>()");
    sub_18001E5F8(pExceptionObject, (__int64)v6);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v3 + 40);
}
