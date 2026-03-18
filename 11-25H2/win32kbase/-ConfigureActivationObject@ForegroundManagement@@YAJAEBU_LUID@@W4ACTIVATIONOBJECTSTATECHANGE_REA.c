/*
 * XREFs of ?ConfigureActivationObject@ForegroundManagement@@YAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E397C
 * Callers:
 *     NtUserConfigureActivationObject @ 0x14013ABD0 (NtUserConfigureActivationObject.c)
 * Callees:
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E39E4 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 */

__int64 __fastcall ForegroundManagement::ConfigureActivationObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5)
{
  unsigned int v7; // esi
  __int64 UserSessionState; // rax

  v7 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CActivationObjectManager::ConfigureActivationObject(*(_QWORD *)(UserSessionState + 18864), a1, v7, a3, a4, a5);
}
