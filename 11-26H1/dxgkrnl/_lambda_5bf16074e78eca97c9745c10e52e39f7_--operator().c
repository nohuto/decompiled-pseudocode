/*
 * XREFs of _lambda_5bf16074e78eca97c9745c10e52e39f7_::operator() @ 0x14008A5AC
 * Callers:
 *     _DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A298 (_DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x14008A910 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z @ 0x14008F3FC (-SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1403F2C40 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall lambda_5bf16074e78eca97c9745c10e52e39f7_::operator()(unsigned int **a1)
{
  _DWORD *v2; // rbx
  _OWORD *v3; // rcx
  _OWORD *v4; // rdx
  __int64 result; // rax

  DISPLAY_MUX_MGR::SetDisableProcessingDisplayBatchesStatus(qword_140169448, 0);
  v2 = *a1;
  *v2 = DpiGdiAsyncDisplayCallout(0x200000000LL);
  CheckFailed(**a1, 1043LL, a1[1] + 23, 585LL);
  v3 = a1[1] + 37;
  v4 = *(_OWORD **)a1[2];
  result = 128LL;
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  v4[4] = v3[4];
  v4[5] = v3[5];
  v4[6] = v3[6];
  v4[7] = v3[7];
  v4[8] = v3[8];
  v4[9] = v3[9];
  return result;
}
