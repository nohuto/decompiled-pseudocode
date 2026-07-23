/*
 * XREFs of ScpCfgHandleInvalidCallTarget_ES @ 0x18016C240
 * Callers:
 *     ScpCfgDispatchUserCallTarget_ES @ 0x18016C040 (ScpCfgDispatchUserCallTarget_ES.c)
 *     ScpCfgDispatchUserCallTargetES_ES @ 0x18016C0C0 (ScpCfgDispatchUserCallTargetES_ES.c)
 *     ScpCfgValidateUserCallTarget_ES @ 0x18016C140 (ScpCfgValidateUserCallTarget_ES.c)
 *     ScpCfgValidateUserCallTargetES_ES @ 0x18016C1C0 (ScpCfgValidateUserCallTargetES_ES.c)
 * Callees:
 *     <none>
 */

void ScpCfgHandleInvalidCallTarget_ES()
{
  JUMPOUT(0x123456789ABCDEFLL);
}
