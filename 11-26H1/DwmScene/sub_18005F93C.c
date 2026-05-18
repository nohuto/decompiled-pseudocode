/*
 * XREFs of sub_18005F93C @ 0x18005F93C
 * Callers:
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_180063910 @ 0x180063910 (sub_180063910.c)
 *     sub_180063990 @ 0x180063990 (sub_180063990.c)
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 *     sub_1800647C4 @ 0x1800647C4 (sub_1800647C4.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_1800675A0 @ 0x1800675A0 (sub_1800675A0.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_180069C74 @ 0x180069C74 (sub_180069C74.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001E5F8 @ 0x18001E5F8 (sub_18001E5F8.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18002E584 @ 0x18002E584 (sub_18002E584.c)
 */

__int64 __fastcall sub_18005F93C(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void *v5; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  sub_180029EF8(a1 + 16, a2);
  v5 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v3 = sub_18002E584(a1 + 200, (__int64)&v5);
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
