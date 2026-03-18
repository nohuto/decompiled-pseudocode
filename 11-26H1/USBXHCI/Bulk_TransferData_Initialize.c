/*
 * XREFs of Bulk_TransferData_Initialize @ 0x14000EB10
 * Callers:
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x140016C30 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_RetrieveNextStage @ 0x14003B040 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x14000EE70 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

NTSTATUS __fastcall Bulk_TransferData_Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  NTSTATUS result; // eax
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  _OWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]

  v13 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( !WdfClientVersionHigherThanFramework )
  {
    v6 = 40;
LABEL_3:
    LOWORD(v12[0]) = v6;
    goto LABEL_4;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v6 = -1;
    goto LABEL_3;
  }
  LOWORD(v12[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_4:
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
             WdfDriverGlobals,
             a3,
             v12);
  if ( !*(_BYTE *)(a2 + 16) )
  {
    v8 = *((_QWORD *)&v12[0] + 1);
    if ( *(_WORD *)(*((_QWORD *)&v12[0] + 1) + 2LL) == 56 )
    {
LABEL_6:
      v9 = 0LL;
    }
    else
    {
      switch ( *(_WORD *)(*((_QWORD *)&v12[0] + 1) + 2LL) )
      {
        case '9':
        case ':':
          v9 = 16LL;
          break;
        default:
          goto LABEL_6;
      }
    }
    *(_DWORD *)(a2 + 17) = 0;
    *(_WORD *)(a2 + 21) = 0;
    *(_BYTE *)(a2 + 23) = 0;
    *(_OWORD *)(a2 + 32) = 0LL;
    memset((void *)(a2 + 104), 0, 0xF8uLL);
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_BYTE *)(a2 + 16) = 1;
    *(_QWORD *)(a2 + 24) = a3;
    *(_QWORD *)(a2 + 48) = v8;
    *(_QWORD *)(a2 + 56) = a1;
    *(_QWORD *)(a2 + 72) = 259LL;
    result = *(_DWORD *)(v9 + v8 + 36);
    *(_QWORD *)(a2 + 108) = 0LL;
    *(_QWORD *)(a2 + 116) = 0LL;
    *(_DWORD *)(a2 + 104) = result;
    *(_WORD *)(a2 + 132) = 0;
    *(_BYTE *)(a2 + 134) = 0;
    *(_DWORD *)(a2 + 128) = 464;
    *(_DWORD *)(v9 + v8 + 36) = 0;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2280))(WdfDriverGlobals, a3);
      result = IoGetActivityIdIrp(v10, a2 + 32);
      if ( result < 0 )
        result = EtwActivityIdControl(3u, (LPGUID)(a2 + 32));
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        return McTemplateK0uqqq_EtwWriteTransfer(
                 *(_QWORD *)(a1 + 56),
                 v11,
                 a2 + 32,
                 *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                 *(_DWORD *)(a1 + 64),
                 *(_DWORD *)(a2 + 104));
    }
  }
  return result;
}
