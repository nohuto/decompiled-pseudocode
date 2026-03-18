/*
 * XREFs of ConvertDmmToDisplayConfigRotation @ 0x14034023C
 * Callers:
 *     _lambda_e321288189de26641183b6e313240338_::operator() @ 0x1401C6E5C (_lambda_e321288189de26641183b6e313240338_--operator().c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x14033E1B0 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigRotation(enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1)
{
  __int64 result; // rax

  result = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1);
  if ( (_DWORD)result != 1 && (_DWORD)result != 2 && (unsigned int)(result - 3) >= 2 )
    return 1LL;
  return result;
}
