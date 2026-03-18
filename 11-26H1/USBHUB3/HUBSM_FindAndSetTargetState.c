/*
 * XREFs of HUBSM_FindAndSetTargetState @ 0x14000B6B4
 * Callers:
 *     HUBSM_RunStateMachine @ 0x14000BED4 (HUBSM_RunStateMachine.c)
 * Callees:
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1400032F8 (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     HUBSM_LogUnhandledEvent @ 0x14000BCC4 (HUBSM_LogUnhandledEvent.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x14000C5B8 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLLL @ 0x14000C764 (WPP_RECORDER_SF_qLLL.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x14000CE30 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_DbgBreak @ 0x14002FC80 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

char __fastcall HUBSM_FindAndSetTargetState(__int64 a1, unsigned int a2, _BYTE *a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rcx
  unsigned int v6; // edi
  _BYTE *v7; // r10
  int v8; // edx
  unsigned int v9; // r12d
  char v10; // bp
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  struct _KEVENT *v21; // rcx
  unsigned int v22; // edx
  _UNKNOWN **v23; // rdx
  _QWORD *v24; // r15
  int v25; // esi
  int v26; // eax
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rbx
  int v35; // [rsp+20h] [rbp-78h]
  int v36; // [rsp+A0h] [rbp+8h]
  __int64 v39; // [rsp+B8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 880);
  v5 = *(_QWORD *)(a1 + 976);
  v6 = a2;
  *a3 = 0;
  v7 = a3;
  v39 = v5;
  v8 = *(_DWORD *)(a1 + 984);
  v9 = v3;
  v36 = v8;
  v10 = 1;
  while ( 1 )
  {
    v11 = v9;
    v12 = 1002;
    v13 = (unsigned int)(*(_DWORD *)(a1 + 4LL * v9 + 852) - v8);
    LODWORD(v14) = 0;
    v15 = *(_QWORD *)(v5 + 8 * v13);
    v16 = *(_DWORD *)(v15 + 32);
    if ( v16 == 1000 )
      goto LABEL_9;
    v5 = 0LL;
    while ( v6 != v16 )
    {
      v14 = (unsigned int)(v14 + 1);
      v5 = (unsigned int)v14;
      v16 = *(_DWORD *)(v15 + 8 * v14 + 32);
      if ( v16 == 1000 )
        goto LABEL_8;
    }
    v12 = *(_DWORD *)(v15 + 8 * v5 + 36);
    if ( v12 != 1002 )
      break;
LABEL_8:
    v5 = v39;
LABEL_9:
    if ( !v9 )
      goto LABEL_27;
    v8 = *(_DWORD *)(a1 + 984);
    --v9;
  }
  if ( v12 > 0x3EE )
  {
    if ( v12 == 1007 )
    {
      v22 = -1073741630;
    }
    else
    {
      if ( v12 != 1008 )
      {
        switch ( v12 )
        {
          case 0x3F1u:
            v21 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1616LL);
            break;
          case 0x3F2u:
            v21 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1592LL);
            break;
          case 0x3F3u:
            v20 = 3027LL;
LABEL_20:
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
              v20);
            return 0;
          default:
            goto LABEL_32;
        }
LABEL_22:
        KeSetEvent(v21, 0, 0);
        return 0;
      }
      v22 = -1073741810;
    }
    HUBHTX_CompleteGetPortStatusWithFailedStatus(*(_QWORD *)(a1 + 960), v22);
    return 0;
  }
  if ( v12 == 1006 )
  {
    v17 = *(_QWORD **)(a1 + 960);
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
            WdfDriverGlobals,
            v17[63]);
    memset((void *)(*(_QWORD *)(v18 + 184) - 72LL), 0, 0x48uLL);
    *(_DWORD *)(v18 + 48) = -1073741823;
    HUBFDO_CompleteGetDescriptorRequest(*v17, *(unsigned __int16 *)(v17[1] + 200LL), v17[63], -1073741823, 0);
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v17);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v19,
      "User Mode FDO Request",
      583LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
    return 0;
  }
LABEL_27:
  switch ( v12 )
  {
    case 0x3E8u:
      return 0;
    case 0x3EAu:
      HUBSM_LogUnhandledEvent(a1, v6);
      return 0;
    case 0x3EBu:
      v33 = *(_QWORD *)(a1 + 960);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2104))(
        WdfDriverGlobals,
        *(_QWORD *)(v33 + 464),
        3221225473LL);
      if ( (*(_DWORD *)(v33 + 1644) & 0x40) != 0 )
      {
        *(_OWORD *)(a1 + 1012) = 0LL;
        _InterlockedAnd((volatile signed __int32 *)(v33 + 1644), 0xFFFFFFBF);
      }
      return 0;
    case 0x3ECu:
      v20 = 3011LL;
      goto LABEL_20;
    case 0x3EDu:
      v21 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 480LL);
      goto LABEL_22;
  }
LABEL_32:
  v23 = &WPP_RECORDER_INITIALIZED;
  if ( v9 >= v3 )
    goto LABEL_52;
  v24 = (_QWORD *)(a1 + 960);
  while ( 2 )
  {
    v25 = *(_DWORD *)(a1 + 4LL * (v3 - 1) + 852);
    v26 = *(_DWORD *)(a1 + 984);
    switch ( v26 )
    {
      case 2000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          break;
        v27 = 16;
        goto LABEL_46;
      case 3000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          break;
        v24 = (_QWORD *)(a1 + 960);
        v27 = 17;
        goto LABEL_46;
      case 4000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          break;
        v24 = (_QWORD *)(a1 + 960);
        v27 = 15;
LABEL_46:
        WPP_RECORDER_SF_qLLL(
          v5,
          (_DWORD)v23,
          v15,
          v27,
          v35,
          *v24,
          *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
          232,
          *(_DWORD *)(a1 + 4LL * (v3 - 1) + 852));
        break;
      case 5000:
        v24 = (_QWORD *)(a1 + 960);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 18;
          goto LABEL_46;
        }
        break;
    }
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v25;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3 - 1;
    v28 = *(unsigned __int8 *)(a1 + 832);
    LODWORD(v5) = 3 * v28;
    *(_DWORD *)(a1 + 12 * v28) = 1000;
    *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    if ( byte_140070D49 >= 0 )
      v24 = (_QWORD *)(a1 + 960);
    else
      McTemplateK0ppqqqq_EtwWriteTransfer(
        v5,
        (unsigned int)&USBHUB3_ETW_EVENT_STATE_MACHINE,
        a1 + 1012,
        *(_QWORD *)(a1 + 1032),
        *v24,
        *(_DWORD *)(a1 + 984),
        **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v25 - *(_DWORD *)(a1 + 984))),
        232,
        v3 - 1);
    if ( --v3 > v9 )
      continue;
    break;
  }
  v6 = a2;
  v23 = &WPP_RECORDER_INITIALIZED;
  v7 = a3;
  v11 = v9;
LABEL_52:
  v29 = *(_QWORD *)(v39 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v11 + 852) - v36));
  if ( (*(_DWORD *)(v29 + 16) & 0x40) != 0 )
    *v7 = 1;
  *(_DWORD *)(a1 + 4 * v11 + 852) = v12;
  v30 = *(_DWORD *)(a1 + 984);
  *(_DWORD *)(a1 + 880) = v9;
  switch ( v30 )
  {
    case 2000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v31 = 16;
      goto LABEL_66;
    case 3000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v31 = 17;
      goto LABEL_66;
    case 4000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v31 = 15;
LABEL_66:
      WPP_RECORDER_SF_qLLL(
        v29,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v15,
        v31,
        v35,
        *(_QWORD *)(a1 + 960),
        *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
        v6,
        v12);
      goto LABEL_67;
  }
  if ( v30 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = 18;
    goto LABEL_66;
  }
LABEL_67:
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v12;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v9;
  v32 = *(unsigned __int8 *)(a1 + 832);
  *(_DWORD *)(a1 + 12 * v32) = v6;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  if ( byte_140070D49 < 0 )
    McTemplateK0ppqqqq_EtwWriteTransfer(
      3 * v32,
      (unsigned int)&USBHUB3_ETW_EVENT_STATE_MACHINE,
      a1 + 1012,
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 984),
      **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (v12 - *(_DWORD *)(a1 + 984))),
      v6,
      v9);
  if ( *(_BYTE *)(a1 + 1049) )
    HUBMISC_DbgBreak("Break On State Transition", v23);
  return v10;
}
