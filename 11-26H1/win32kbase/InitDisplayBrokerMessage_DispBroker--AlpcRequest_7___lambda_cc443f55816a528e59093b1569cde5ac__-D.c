/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__&DrvSampleDisplayState_ @ 0x14018B3EC
 * Callers:
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14018B1F4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x14007EBD0 (DrvSampleDisplayState.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac___DrvSampleDisplayState_(
        _WORD *a1,
        const void *a2,
        unsigned int **a3,
        __int16 a4)
{
  __int64 result; // rax
  int v9; // edi

  memset(a1, 0, 0x60uLL);
  *((_DWORD *)a1 + 10) = 7;
  *((_DWORD *)a1 + 11) = 1;
  result = DrvSampleDisplayState((__int64)(a1 + 24));
  v9 = 0;
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 30, a2, 0x10uLL);
    a1[2] = 0x8000;
    a1[1] = a4 + 96;
    *a1 = a4 + 56;
    *((_DWORD *)a1 + 20) = **a3;
    *((_DWORD *)a1 + 21) = *a3[1];
    *((_DWORD *)a1 + 22) = *a3[2];
    LOBYTE(v9) = *(_BYTE *)a3[3] != 0;
    *((_DWORD *)a1 + 23) = v9;
    memmove(a1 + 48, *(const void **)a3[4], 216LL * **a3);
    return 0LL;
  }
  return result;
}
