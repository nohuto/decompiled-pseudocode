/*
 * XREFs of ScpCfgHandleInvalidCallTarget @ 0x18016A240
 * Callers:
 *     ScpCfgDispatchUserCallTarget @ 0x18016A040 (ScpCfgDispatchUserCallTarget.c)
 *     ScpCfgDispatchUserCallTargetES @ 0x18016A0C0 (ScpCfgDispatchUserCallTargetES.c)
 *     ScpCfgValidateUserCallTarget @ 0x18016A140 (ScpCfgValidateUserCallTarget.c)
 *     ScpCfgValidateUserCallTargetES @ 0x18016A1C0 (ScpCfgValidateUserCallTargetES.c)
 * Callees:
 *     <none>
 */

void ScpCfgHandleInvalidCallTarget()
{
  JUMPOUT(0x123456789ABCDEFLL);
}
