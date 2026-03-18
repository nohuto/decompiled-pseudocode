/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__&DrvSampleDisplayState_ @ 0x1401B8E54
 * Callers:
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1401981C0 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x14007EBD0 (DrvSampleDisplayState.c)
 *     _lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator() @ 0x1401CE4B4 (_lambda_7dc7c0424fbefd701d9ba3d1e39eb072_--operator().c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072___DrvSampleDisplayState_(
        _DWORD *a1,
        const void *a2,
        __int64 a3)
{
  __int64 result; // rax

  memset(a1, 0, 0x140uLL);
  a1[10] = 6;
  a1[11] = 1;
  result = DrvSampleDisplayState((__int64)(a1 + 12));
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 15, a2, 0x10uLL);
    *a1 = 20971800;
    *((_WORD *)a1 + 2) = 0x8000;
    return lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator()(a3, a1);
  }
  return result;
}
