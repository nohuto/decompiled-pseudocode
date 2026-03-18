/*
 * XREFs of _lambda_a565eb4f19e28a5292d2c438ee0d1898_::_lambda_a565eb4f19e28a5292d2c438ee0d1898_ @ 0x140081474
 * Callers:
 *     HOSTVMMONITORMAPPING_TriggerRemoteVsync @ 0x14003C5F0 (HOSTVMMONITORMAPPING_TriggerRemoteVsync.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x14003E84C (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 *     ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x14008B580 (-CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_a565eb4f19e28a5292d2c438ee0d1898_::_lambda_a565eb4f19e28a5292d2c438ee0d1898_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *result; // rax

  a1[3] = a5;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
