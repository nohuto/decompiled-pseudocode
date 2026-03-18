/*
 * XREFs of Isoch_TransferData_Initialize @ 0x1400126B0
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x140010510 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x14000EE70 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Isoch_TransferData_Initialize(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // esi
  __int16 v7; // ax
  __int64 v8; // r14
  __int64 v9; // rdi
  ULONG v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  struct _MDL *Mdl; // rax
  __int64 v17; // rdx
  int v18; // eax
  PIRP Irp; // [rsp+20h] [rbp-88h]
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  _OWORD v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+60h] [rbp-48h]

  v3 = 0;
  v23 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( !WdfClientVersionHigherThanFramework )
  {
    v7 = 40;
LABEL_3:
    LOWORD(v22[0]) = v7;
    goto LABEL_4;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v7 = -1;
    goto LABEL_3;
  }
  LOWORD(v22[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v22);
  v8 = *((_QWORD *)&v22[0] + 1);
  if ( *(_WORD *)(*((_QWORD *)&v22[0] + 1) + 2LL) == 56 )
  {
LABEL_5:
    v9 = 36LL;
  }
  else
  {
    switch ( *(_WORD *)(*((_QWORD *)&v22[0] + 1) + 2LL) )
    {
      case '9':
      case ':':
        v9 = 52LL;
        break;
      default:
        goto LABEL_5;
    }
  }
  v10 = *(_DWORD *)(*((_QWORD *)&v22[0] + 1) + v9);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a2,
          off_14006AE88);
  *(_DWORD *)(v11 + 17) = 0;
  *(_WORD *)(v11 + 21) = 0;
  *(_BYTE *)(v11 + 23) = 0;
  *(_OWORD *)(v11 + 32) = 0LL;
  memset((void *)(v11 + 96), 0, 0x2A0uLL);
  *(_QWORD *)(v11 + 8) = v11;
  *(_QWORD *)v11 = v11;
  *(_BYTE *)(v11 + 16) = 1;
  *(_QWORD *)(v11 + 24) = a2;
  *(_QWORD *)(v11 + 48) = v8;
  *(_QWORD *)(v11 + 56) = a1;
  *(_DWORD *)(v11 + 68) = 259;
  *(_DWORD *)(v11 + 64) = 0;
  *(_QWORD *)(v11 + 72) = 0LL;
  *(_DWORD *)(v11 + 80) = v10;
  *(_QWORD *)(v11 + 84) = 0LL;
  *(_DWORD *)(v11 + 92) = 0;
  *(_DWORD *)(v11 + 96) = *(_DWORD *)(v8 + 132);
  *(_QWORD *)(v11 + 100) = 0LL;
  *(_QWORD *)(v11 + 108) = 0LL;
  *(_DWORD *)(v11 + 116) = 0;
  *(_DWORD *)(v11 + 128) = 976;
  *(_WORD *)(v11 + 132) = 0;
  *(_BYTE *)(v11 + 134) = 0;
  if ( *(_WORD *)(v8 + 2) != 56 )
  {
    switch ( *(_WORD *)(v8 + 2) )
    {
      case '9':
      case ':':
        goto LABEL_9;
      default:
        break;
    }
  }
  v12 = *(_QWORD *)(v8 + 48);
  if ( v12 )
  {
    *(_QWORD *)(v11 + 72) = v12;
    goto LABEL_9;
  }
  Mdl = IoAllocateMdl(*(PVOID *)(v8 + 40), v10, 0, 0, 0LL);
  *(_QWORD *)(v11 + 72) = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
LABEL_9:
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2280))(WdfDriverGlobals, a2);
      if ( (int)IoGetActivityIdIrp(v13, v11 + 32) < 0 )
        EtwActivityIdControl(3u, (LPGUID)(v11 + 32));
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 56);
        LODWORD(v21) = *(_DWORD *)(v11 + 80);
        LODWORD(v20) = *(_DWORD *)(a1 + 64);
        LODWORD(Irp) = *(_DWORD *)(v14 + 152);
        McTemplateK0uqqq_EtwWriteTransfer(
          (unsigned int)Irp,
          v14,
          v11 + 32,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          (__int64)Irp,
          v20,
          v21);
      }
    }
    goto LABEL_14;
  }
  v3 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(_QWORD *)(a1 + 56);
    v18 = *(_DWORD *)(v17 + 152);
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v17,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      15,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      v18,
      a2);
  }
LABEL_14:
  result = v3;
  *a3 = v11;
  return result;
}
