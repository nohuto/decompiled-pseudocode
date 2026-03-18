/*
 * XREFs of _DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A2FC
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     ?SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z @ 0x14008F4B0 (-SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z.c)
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
    return DISPLAY_MUX_MGR::SetDisableQueryConnectionDdiStatus(
             qword_140169448,
             *(struct _LUID *)(*(_QWORD *)a1 + 68LL),
             0);
  return result;
}
