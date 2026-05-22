/*
 * XREFs of ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x18010F5E8
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18006C950 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?IsXbox@GameInputModule@@CA_NXZ @ 0x18010ED18 (-IsXbox@GameInputModule@@CA_NXZ.c)
 */

bool __fastcall GameInputModule::ValidateModuleVersion(HINSTANCE a1, const struct GameInputVersion *a2)
{
  __int64 v4; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v5[3]; // [rsp+48h] [rbp-30h] BYREF

  if ( GameInputModule::IsXbox() )
    return 1;
  v4 = 0LL;
  v5[0] = 16LL;
  v5[1] = 1LL;
  v5[2] = 0LL;
  return (int)((__int64 (__fastcall *)(HINSTANCE, _QWORD *, __int64, __int64, __int64 *, _QWORD, _QWORD, _QWORD))LdrResSearchResource)(
                a1,
                v5,
                3LL,
                256LL,
                &v4,
                0LL,
                0LL,
                0LL) >= 0;
}
