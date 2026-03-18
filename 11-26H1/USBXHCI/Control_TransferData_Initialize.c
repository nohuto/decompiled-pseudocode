/*
 * XREFs of Control_TransferData_Initialize @ 0x14000DF30
 * Callers:
 *     Control_WdfEvtIoCanceledOnQueue @ 0x14004C540 (Control_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x14000EE70 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

NTSTATUS __fastcall Control_TransferData_Initialize(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rdx

  memset(a4, 0, 0xF8uLL);
  a4[1] = a4;
  *a4 = a4;
  *((_DWORD *)a4 + 16) = 0;
  a4[9] = 0LL;
  a4[10] = 0LL;
  a4[11] = 0LL;
  a4[12] = 0LL;
  *((_BYTE *)a4 + 16) = 1;
  a4[3] = a2;
  a4[6] = a3;
  a4[7] = a1;
  *((_DWORD *)a4 + 26) = *(_DWORD *)(a3 + 36);
  *(_QWORD *)((char *)a4 + 108) = 0LL;
  *((_DWORD *)a4 + 29) = 0;
  a4[15] = 259LL;
  a4[17] = *(_QWORD *)(a1 + 176);
  *((_DWORD *)a4 + 36) = *(_DWORD *)(a1 + 192);
  a4[19] = *(_QWORD *)(a1 + 176);
  result = *(_DWORD *)(a1 + 192);
  *((_DWORD *)a4 + 40) = result;
  *((_DWORD *)a4 + 50) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  if ( *(_BYTE *)(a1 + 288) )
  {
    result = (_DWORD)a4 + 208;
    a4[28] = 0LL;
    *((_DWORD *)a4 + 52) = 1;
    a4[12] = a4 + 26;
    *((_DWORD *)a4 + 58) = 0;
  }
  *(_OWORD *)(a4 + 21) = 0LL;
  *(_OWORD *)(a4 + 23) = 0LL;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2280))(WdfDriverGlobals, a2);
    result = IoGetActivityIdIrp(v9, a4 + 4);
    if ( result < 0 )
      result = EtwActivityIdControl(3u, (LPGUID)a4 + 2);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      return McTemplateK0uqqq_EtwWriteTransfer(
               *(_QWORD *)(a1 + 56),
               v10,
               a4 + 4,
               *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
               *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
               0,
               *((_DWORD *)a4 + 26));
  }
  return result;
}
