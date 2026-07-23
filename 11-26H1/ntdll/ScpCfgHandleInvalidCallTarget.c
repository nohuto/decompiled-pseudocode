/*
 * XREFs of ScpCfgHandleInvalidCallTarget @ 0x180169240
 * Callers:
 *     ScpCfgDispatchUserCallTarget @ 0x180169040 (ScpCfgDispatchUserCallTarget.c)
 *     ScpCfgDispatchUserCallTargetES @ 0x1801690C0 (ScpCfgDispatchUserCallTargetES.c)
 *     ScpCfgValidateUserCallTarget @ 0x180169140 (ScpCfgValidateUserCallTarget.c)
 *     ScpCfgValidateUserCallTargetES @ 0x1801691C0 (ScpCfgValidateUserCallTargetES.c)
 * Callees:
 *     <none>
 */

void ScpCfgHandleInvalidCallTarget()
{
  JUMPOUT(0x123456789ABCDEFLL);
}
