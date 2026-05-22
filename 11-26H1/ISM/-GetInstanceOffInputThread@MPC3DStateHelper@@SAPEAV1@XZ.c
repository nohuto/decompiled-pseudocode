/*
 * XREFs of ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800B11BC
 * Callers:
 *     ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x1800A1800 (-Register3DCompositor@@YAHPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@@YAHXZ @ 0x1800A1830 (-Unregister3DCompositor@@YAHXZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D14B4 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800B1680 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 */

struct MPC3DStateHelper *__fastcall MPC3DStateHelper::GetInstanceOffInputThread(
        __int64 a1,
        void *a2,
        unsigned int a3,
        int a4)
{
  const char *v4; // r9
  struct MPC3DStateHelper *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::handle_wait(MPC3DStateHelper::s_isInstanceCreatedEvent, a2, a3, a4);
  result = MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v4);
  return result;
}
