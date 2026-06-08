/*
 * XREFs of InitAcpiCpc @ 0x14002DDA0
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     ReadGenAddrMaybeHiddenEx @ 0x140001C64 (ReadGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     CpcRegisterIsSupportedEx @ 0x1400057A0 (CpcRegisterIsSupportedEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1400087B0 (WriteGenAddrMaybeHiddenEx.c)
 *     EnableCpcResourcePriorityRegisters @ 0x140008BE4 (EnableCpcResourcePriorityRegisters.c)
 *     GetCpcRegisterDefinitionTable @ 0x140008C78 (GetCpcRegisterDefinitionTable.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     StartPccCommand @ 0x14002989C (StartPccCommand.c)
 *     ExecutePccCommand @ 0x14002A0F0 (ExecutePccCommand.c)
 *     CpcInitRegisterAddresses @ 0x14002DBE4 (CpcInitRegisterAddresses.c)
 *     AcpiEval_CPC @ 0x14002E460 (AcpiEval_CPC.c)
 *     Display_CPC @ 0x140031398 (Display_CPC.c)
 *     ValidateAcpiCPC @ 0x140033F74 (ValidateAcpiCPC.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rdx
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  int v5; // eax
  int inited; // ebx
  _QWORD *v7; // rdx
  unsigned __int16 v8; // r9
  __int64 v9; // rsi
  unsigned __int16 v10; // r9
  unsigned int i; // ebp
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // xmm1_8
  char v15; // bp
  char *v16; // rcx
  unsigned int *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v22; // [rsp+28h] [rbp-30h]
  int v23; // [rsp+28h] [rbp-30h]
  char v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF

  v1 = (_QWORD *)(a1 + 208);
  v2 = *(_QWORD *)(a1 + 208);
  v26 = 0LL;
  v4 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v25 = 0;
  v4(WdfDriverGlobals, v2, 0LL);
  v5 = AcpiEval_CPC(a1, a1 + 592);
  inited = v5;
  if ( v5 >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 592);
    inited = ValidateAcpiCPC(v9, *(_QWORD *)(a1 + 64));
    if ( inited < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
      v7 = v1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v8 = 12;
LABEL_8:
      v22 = inited;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        v8,
        (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
        v22);
      goto LABEL_5;
    }
    Display_CPC(v9);
    GetCpcRegisterDefinitionTable(v9, &v26, &v25);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400191A8,
      0LL);
    v24 = 0;
    inited = CpcInitRegisterAddresses(a1, v9, v26, v25, &v24);
    if ( inited >= 0 )
    {
      if ( *(_QWORD *)(v9 + 536) )
      {
        for ( i = 0; ; ++i )
        {
          v12 = *(unsigned int **)(v9 + 536);
          if ( i >= *v12 )
            break;
          inited = CpcInitRegisterAddresses(
                     a1,
                     (__int64)&v12[26 * i + 2],
                     (__int64)&CpcResourcePrioritiesRegisterTable,
                     4u,
                     &v24);
          if ( inited < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_46;
            v10 = 14;
            goto LABEL_15;
          }
        }
      }
      if ( !CpcRegisterIsSupportedEx(v9 + 440) || *(_BYTE *)v13 == 126 && !*(_QWORD *)(v9 + 444) )
      {
        v14 = *(_QWORD *)(v9 + 48);
        *(_OWORD *)v13 = *(_OWORD *)(v9 + 32);
        *(_QWORD *)(v13 + 16) = v14;
      }
      v15 = v24;
      if ( v24 )
      {
        inited = StartPccCommand(*(_QWORD *)(a1 + 256));
        if ( inited < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_46;
          v10 = 15;
          goto LABEL_15;
        }
      }
      if ( CpcRegisterIsSupportedEx(v9 + 344) )
        WriteGenAddrMaybeHiddenEx(a1, v16, 1LL);
      v17 = *(unsigned int **)(v9 + 536);
      if ( v17 )
        EnableCpcResourcePriorityRegisters(a1, v17);
      if ( !v15 )
        goto LABEL_41;
      v18 = ExecutePccCommand(*(_QWORD *)(a1 + 256));
      inited = 0;
      if ( v18 != -1073741435 )
        inited = v18;
      if ( inited >= 0 )
      {
LABEL_41:
        *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHiddenEx(a1, v9 + 8);
        *(_QWORD *)(a1 + 392) = ReadGenAddrMaybeHiddenEx(a1, v9 + 32);
        *(_QWORD *)(a1 + 400) = ReadGenAddrMaybeHiddenEx(a1, v9 + 56);
        if ( CpcRegisterIsSupportedEx(v9 + 488) )
          *(_QWORD *)(a1 + 416) = ReadGenAddrMaybeHiddenEx(a1, v19);
        v20 = *(_QWORD *)(a1 + 392);
        if ( *(_QWORD *)(a1 + 400) > v20 )
          *(_QWORD *)(a1 + 400) = v20;
        *(_QWORD *)(a1 + 408) = ReadGenAddrMaybeHiddenEx(a1, v9 + 80);
        goto LABEL_46;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 16;
        goto LABEL_15;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 13;
LABEL_15:
      v23 = inited;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        v10,
        (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
        v23);
    }
LABEL_46:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400191A8);
    v7 = (_QWORD *)(a1 + 208);
    goto LABEL_47;
  }
  if ( v5 != -1073741772 )
  {
    v7 = v1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v8 = 11;
    goto LABEL_8;
  }
  v7 = v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      2,
      10,
      (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids);
LABEL_5:
    v7 = v1;
  }
LABEL_47:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, *v7);
  return (unsigned int)inited;
}
