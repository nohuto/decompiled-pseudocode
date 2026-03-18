/*
 * XREFs of Control_WdfEvtIoDefault @ 0x14000E0E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDqDq @ 0x14000DDA0 (WPP_RECORDER_SF_DDqDq.c)
 *     Control_MapTransfer @ 0x14000E500 (Control_MapTransfer.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x14000EE70 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Control_Transfer_CompleteCancelable @ 0x140020920 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // r14
  __int16 v5; // ax
  __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  KIRQL v13; // al
  __int64 v14; // rdx
  int v15; // eax
  KIRQL v16; // dl
  __int64 v17; // rdx
  char v18; // r8
  int v19; // [rsp+20h] [rbp-88h]
  _OWORD v20[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B1F0);
  v4 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v3 + 40));
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x33 )
      v5 = -1;
    else
      v5 = *(_WORD *)(WdfStructures + 408);
  }
  else
  {
    v5 = 40;
  }
  LOWORD(v20[0]) = v5;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v20);
  v6 = *((_QWORD *)&v20[0] + 1);
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_14006AE88);
  v10 = (_DWORD *)(v6 + 36);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqDq(
      *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 143LL),
      v8,
      v9,
      v19);
  memset(v7, 0, 0xF8uLL);
  v7[1] = v7;
  *v7 = v7;
  v7[6] = v6;
  *((_DWORD *)v7 + 16) = 0;
  v7[9] = 0LL;
  v7[10] = 0LL;
  v7[11] = 0LL;
  v7[12] = 0LL;
  *((_BYTE *)v7 + 16) = 1;
  v7[3] = a2;
  v7[7] = v3;
  *((_DWORD *)v7 + 26) = *v10;
  *(_QWORD *)((char *)v7 + 108) = 0LL;
  *((_DWORD *)v7 + 29) = 0;
  v7[15] = 259LL;
  v7[17] = *(_QWORD *)(v3 + 176);
  *((_DWORD *)v7 + 36) = *(_DWORD *)(v3 + 192);
  v7[19] = *(_QWORD *)(v3 + 176);
  *((_DWORD *)v7 + 40) = *(_DWORD *)(v3 + 192);
  *((_DWORD *)v7 + 50) = 0;
  *v10 = 0;
  if ( *(_BYTE *)(v3 + 288) )
  {
    v7[28] = 0LL;
    *((_DWORD *)v7 + 52) = 1;
    v7[12] = v7 + 26;
    *((_DWORD *)v7 + 58) = 0;
  }
  *(_OWORD *)(v7 + 21) = 0LL;
  *(_OWORD *)(v7 + 23) = 0LL;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2280))(WdfDriverGlobals, a2);
    if ( (int)IoGetActivityIdIrp(v11, v7 + 4) < 0 )
      EtwActivityIdControl(3u, (LPGUID)v7 + 2);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0uqqq_EtwWriteTransfer(
        *(_QWORD *)(v3 + 56),
        v12,
        v7 + 4,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
        0,
        *((_DWORD *)v7 + 26));
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 360) = v7;
  *(_BYTE *)(v3 + 104) = v13;
  v14 = v7[3];
  v7[16] = 0LL;
  *((_DWORD *)v7 + 28) = 1;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(WdfFunctions_01033 + 3144))(
          WdfDriverGlobals,
          v14,
          Control_WdfEvtRequestCancel);
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = *(_QWORD *)(v3 + 48);
      v18 = *(_BYTE *)(v17 + 143);
      LOBYTE(v17) = 3;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        v17,
        14,
        39,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        v18,
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
        v15);
    }
    *((_DWORD *)v7 + 28) = 3;
    Control_Transfer_CompleteCancelable(v3);
    v16 = *(_BYTE *)(v3 + 104);
  }
  else
  {
    v16 = *(_BYTE *)(v3 + 104);
    if ( *(_DWORD *)(v3 + 108) == 2 )
    {
      *(_DWORD *)(v3 + 108) = 3;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v16);
      Control_MapTransfer(v3);
      goto LABEL_17;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v16);
LABEL_17:
  if ( v4 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(v3 + 40));
  }
}
