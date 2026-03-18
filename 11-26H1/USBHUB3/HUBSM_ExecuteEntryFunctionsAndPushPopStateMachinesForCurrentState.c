/*
 * XREFs of HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x14000AEB8
 * Callers:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBSM_EvtSmWorkItem @ 0x14000AD70 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_RunStateMachine @ 0x14000BED4 (HUBSM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x14000C5B8 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLLL @ 0x14000C764 (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(__int64 a1)
{
  __int64 v1; // r12
  bool *v2; // r14
  int v3; // r13d
  __int64 v5; // rbp
  __int64 v6; // r15
  int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _DWORD *v11; // rdx
  int v12; // edx
  int v13; // ecx
  KIRQL v14; // bp
  int v15; // r8d
  __int64 v16; // r13
  unsigned int *v17; // rax
  char v18; // r9
  unsigned int v19; // ebx
  unsigned __int8 v20; // cl
  char v21; // al
  __int64 v22; // rax
  int v23; // ebx
  int v24; // eax
  int v25; // r9d
  int v26; // eax
  __int64 v27; // rax
  int v28; // edx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rbp
  int v36; // eax
  int v37; // ebx
  int v38; // r9d
  __int64 v39; // rbp
  KIRQL v40; // bl
  __int64 v41; // rax
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  __int64 v46; // rax
  unsigned int v47; // edi
  int v49; // [rsp+20h] [rbp-78h]
  int v50; // [rsp+A0h] [rbp+8h]
  int v51; // [rsp+A8h] [rbp+10h]
  int v52; // [rsp+B0h] [rbp+18h]
  __int64 v53; // [rsp+B8h] [rbp+20h]

  v1 = *(unsigned int *)(a1 + 880);
  v2 = (bool *)(a1 + 1050);
  v3 = *(_DWORD *)(a1 + 984);
  v5 = *(_QWORD *)(a1 + 976);
  v53 = v5;
  v52 = v3;
  v50 = *(_DWORD *)(a1 + 880);
  v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v1 + 852) - v3));
  if ( (*(_DWORD *)(v6 + 16) & 0x80u) != 0 )
    *v2 = !*v2;
  if ( *v2 || (*(_DWORD *)(v6 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
  {
LABEL_96:
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000)
                                                                                           + 520LL))(
      *(_QWORD *)(a1 + 992),
      HUBSM_EvtSmWorkItem,
      a1,
      (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
    return 1003;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(v6 + 8))(a1);
  v8 = *(_DWORD **)(v6 + 24);
  v51 = v7;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      if ( v8[1] == 1002 )
        goto LABEL_11;
      v10 = 0LL;
      v11 = v8;
      while ( (*v11 & *(_DWORD *)(a1 + 952)) != *(_DWORD *)(a1 + 952) )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 = (unsigned int)v9;
        v11 = &v8[2 * v9];
        if ( v11[1] == 1002 )
          goto LABEL_11;
      }
      v23 = v8[2 * v10 + 1];
      if ( v23 == 1002 )
      {
LABEL_11:
        v51 = 1001;
        goto LABEL_12;
      }
      v1 = (unsigned int)(v1 + 1);
      v50 = v1;
      *(_DWORD *)(a1 + 4 * v1 + 852) = v23;
      v24 = *(_DWORD *)(a1 + 984);
      *(_DWORD *)(a1 + 880) = v1;
      if ( v24 == 2000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v25 = 16;
        goto LABEL_32;
      }
      if ( v24 == 3000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v25 = 17;
        goto LABEL_32;
      }
      if ( v24 == 4000 )
        break;
      if ( v24 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = 18;
LABEL_32:
        WPP_RECORDER_SF_qLLL(
          (_DWORD)v8,
          (_DWORD)v11,
          v9,
          v25,
          v49,
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
          232,
          v23);
      }
LABEL_33:
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v23;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v1;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      if ( byte_140070D49 < 0 )
        McTemplateK0ppqqqq_EtwWriteTransfer(
          v23 - *(_DWORD *)(a1 + 984),
          (unsigned int)&USBHUB3_ETW_EVENT_STATE_MACHINE,
          a1 + 1012,
          *(_QWORD *)(a1 + 1032),
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 984),
          **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v23 - *(_DWORD *)(a1 + 984))),
          232,
          v1);
      v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v23 - v3));
      if ( (*(_DWORD *)(v6 + 16) & 0x80u) != 0 )
        *v2 = !*v2;
      if ( *v2 || (*(_DWORD *)(v6 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
        goto LABEL_96;
      v26 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(v6 + 8))(a1, v11, v9);
      v8 = *(_DWORD **)(v6 + 24);
      v51 = v26;
      if ( !v8 )
        goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v25 = 15;
    goto LABEL_32;
  }
LABEL_12:
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  while ( 2 )
  {
    LODWORD(v16) = 0;
    if ( *(_DWORD *)(v6 + 32) == 1000 )
      goto LABEL_63;
    v17 = (unsigned int *)(v6 + 32);
    while ( v17[1] == 1000 )
    {
      LOBYTE(v12) = *(_BYTE *)(a1 + 948);
      v18 = 0;
      v19 = *v17;
      v20 = v12;
      v21 = *(_BYTE *)(a1 + 949);
      if ( (_BYTE)v12 != v21 )
      {
        do
        {
          v15 = *(_DWORD *)(a1 + 4LL * v20 + 884);
          if ( v15 == v19 )
          {
            v18 = 1;
          }
          else
          {
            v22 = (unsigned __int8)v12;
            LOBYTE(v12) = (v12 + 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v22 + 884) = v15;
          }
          v21 = *(_BYTE *)(a1 + 949);
          v20 = (v20 + 1) & 0xF;
        }
        while ( v20 != v21 );
      }
      LOBYTE(v13) = v12;
      if ( (_BYTE)v12 != v21 )
      {
        do
        {
          v27 = v13 & 0xF;
          LOBYTE(v13) = (v13 + 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v27 + 884) = 1000;
        }
        while ( (_BYTE)v13 != *(_BYTE *)(a1 + 949) );
      }
      *(_BYTE *)(a1 + 949) = v12;
      if ( !v18 )
        goto LABEL_61;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v14);
      if ( v19 <= 0xFC7 )
      {
        if ( v19 != 4039 )
        {
          v29 = v19 - 3006;
          if ( !v29 )
          {
            v39 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v39 + 1336) & 2) != 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v39 + 1328) + 1644LL) & 0x400) != 0 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v28) = 4;
                  WPP_RECORDER_SF_(
                    *(_QWORD *)(v39 + 1432),
                    v28,
                    5,
                    14,
                    (__int64)&WPP_0cc843adf6153b7d46bf14e0910357bd_Traceguids);
                }
                _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v39 + 1328) + 1644LL), 0xFFFFFBFF);
              }
            }
            else
            {
              v40 = KfRaiseIrql(2u);
              v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v39 + 1328));
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v41);
              KeLowerIrql(v40);
              *(_QWORD *)(v39 + 1328) = 0LL;
            }
            _InterlockedAnd((volatile signed __int32 *)(v39 + 1336), 0xFFFFFFFE);
            if ( *(_DWORD *)(v39 + 1424) != 4 )
              *(_DWORD *)(v39 + 1424) = 0;
            goto LABEL_60;
          }
          v30 = v29 - 1017;
          if ( v30 )
          {
            v31 = v30 - 4;
            if ( v31 )
            {
              v32 = v31 - 4;
              if ( v32 )
              {
                if ( v32 != 4 )
                  goto LABEL_60;
              }
            }
          }
        }
LABEL_54:
        v33 = *(_QWORD *)(a1 + 960);
        v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                WdfDriverGlobals,
                *(_QWORD *)(v33 + 464));
        v35 = a1 + 1012;
        if ( g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(v34, a1 + 1012) >= 0 )
          goto LABEL_56;
        goto LABEL_60;
      }
      v42 = v19 - 4043;
      if ( !v42 )
        goto LABEL_54;
      v43 = v42 - 4;
      if ( !v43 )
        goto LABEL_54;
      v44 = v43 - 20;
      if ( !v44 || (v45 = v44 - 4) == 0 || v45 == 28 )
      {
        v33 = *(_QWORD *)(a1 + 960);
        if ( (*(_DWORD *)(v33 + 1644) & 0x80u) != 0 )
        {
          v35 = a1 + 1012;
          *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v33 + 2184);
LABEL_56:
          if ( g_IoSetActivityIdIrp )
          {
            g_IoSetActivityIdIrp(*(_QWORD *)(v33 + 272), v35);
            if ( g_IoSetActivityIdIrp )
              g_IoSetActivityIdIrp(*(_QWORD *)(v33 + 432), v35);
          }
          _InterlockedOr((volatile signed __int32 *)(v33 + 1644), 0x40u);
        }
      }
LABEL_60:
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
LABEL_61:
      v16 = (unsigned int)(v16 + 1);
      v17 = (unsigned int *)(v6 + 32 + 8 * v16);
      if ( *v17 == 1000 )
        break;
    }
    LODWORD(v1) = v50;
LABEL_63:
    if ( (*(_DWORD *)(v6 + 16) & 8) != 0 )
    {
      v36 = *(_DWORD *)(a1 + 984);
      v1 = (unsigned int)(v1 - 1);
      v50 = v1;
      v37 = *(_DWORD *)(a1 + 4 * v1 + 852);
      switch ( v36 )
      {
        case 2000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_92;
          v38 = 16;
          break;
        case 3000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_92;
          v38 = 17;
          break;
        case 4000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_92;
          v38 = 15;
          break;
        default:
          if ( v36 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v38 = 18;
            break;
          }
LABEL_92:
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v37;
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v1;
          v46 = *(unsigned __int8 *)(a1 + 832);
          *(_DWORD *)(a1 + 12 * v46) = 1000;
          *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
          if ( byte_140070D49 < 0 )
            McTemplateK0ppqqqq_EtwWriteTransfer(
              3 * v46,
              (unsigned int)&USBHUB3_ETW_EVENT_STATE_MACHINE,
              a1 + 1012,
              *(_QWORD *)(a1 + 1032),
              *(_QWORD *)(a1 + 960),
              *(_DWORD *)(a1 + 984),
              **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v37 - *(_DWORD *)(a1 + 984))),
              232,
              v1);
          v13 = v53;
          v6 = *(_QWORD *)(v53 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v1 + 852) - v52));
          continue;
      }
      WPP_RECORDER_SF_qLLL(
        v13,
        v12,
        v15,
        v38,
        v49,
        *(_QWORD *)(a1 + 960),
        *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
        232,
        *(_DWORD *)(a1 + 4 * v1 + 852));
      goto LABEL_92;
    }
    break;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v14);
  v47 = v51;
  *(_DWORD *)(a1 + 880) = v1;
  return v47;
}
