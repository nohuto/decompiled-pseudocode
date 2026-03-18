/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x14003A000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x140035E5C (McTemplateK0pjqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400384B8 (WPP_RECORDER_SF__guid_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  int v8; // r13d
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  unsigned int v16; // ebx
  int v17; // r9d
  int v18; // r9d
  __int64 v20; // [rsp+28h] [rbp-40h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  *a5 = 0;
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CHAINED_MDLS, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 736) & 0x80u) != 0LL )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 196;
LABEL_38:
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v13, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        goto LABEL_39;
      }
      goto LABEL_39;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 197;
LABEL_30:
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v14, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SECURE_TRANSFERS, 0x10uLL) == 16 )
  {
    if ( !*(_BYTE *)(v9 + 1001) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 198;
        goto LABEL_38;
      }
LABEL_39:
      v16 = -1073741637;
      goto LABEL_85;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 199;
      goto LABEL_30;
    }
LABEL_31:
    v16 = 0;
    goto LABEL_85;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 200, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    *a5 = 2;
    if ( a3 >= 2 )
    {
      if ( a4 )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 116LL);
        *a4 = v8;
        goto LABEL_31;
      }
      goto LABEL_52;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v15 = 201;
    LOBYTE(v10) = 4;
    goto LABEL_70;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 202;
      goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 203;
      goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_TIME_SYNC, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 204;
      goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    if ( !_bittest64((const signed __int64 *)(v9 + 736), 0x20u) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 206;
        goto LABEL_38;
      }
      goto LABEL_39;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 205;
      goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    *a5 = 4;
    if ( a3 >= 4 )
    {
      if ( a4 )
      {
        v11 = *(unsigned int *)(*(_QWORD *)(v9 + 88) + 108LL);
        if ( (v11 & 0x10) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_39;
          v13 = 208;
          goto LABEL_38;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 207, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        }
        v11 = *(_BYTE *)(v9 + 1005) != 0 ? 32 : 4;
        *(_DWORD *)a4 = v11;
        goto LABEL_31;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      v17 = 209;
LABEL_51:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v17, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
LABEL_52:
      v16 = -1073741811;
      goto LABEL_85;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 210;
LABEL_69:
      LOBYTE(v10) = 2;
LABEL_70:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v9 + 72),
        v10,
        4,
        v15,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        a3);
      goto LABEL_71;
    }
    goto LABEL_71;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 211, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    *a5 = 4;
    if ( a3 >= 4 )
    {
      if ( a4 )
      {
        v11 = *(unsigned int *)(v9 + 1036);
        if ( !(_DWORD)v11 )
          goto LABEL_39;
        v11 = (unsigned int)(v11 - 1);
        if ( (_DWORD)v11 )
        {
          if ( (_DWORD)v11 != 1 )
            goto LABEL_39;
          *(_DWORD *)a4 = 2;
        }
        else
        {
          *(_DWORD *)a4 = 1;
        }
        goto LABEL_31;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      v17 = 212;
      goto LABEL_51;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 213;
      goto LABEL_69;
    }
LABEL_71:
    v16 = -1073741789;
    goto LABEL_85;
  }
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v11, v10) )
  {
    if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CONTROLLER_EUSB2_DOUBLE_ISOCH_COMPATIBLE, 0x10uLL) == 16 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 88) + 108LL) & 0x800) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_39;
        v13 = 215;
        goto LABEL_38;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 214;
        goto LABEL_30;
      }
      goto LABEL_31;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_84;
    v18 = 216;
    goto LABEL_83;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 217;
LABEL_83:
    HIDWORD(v20) = HIDWORD(a2);
    WPP_RECORDER_SF__guid_(*(_QWORD *)(v9 + 72), v10, v12, v18);
  }
LABEL_84:
  v16 = -1073741822;
LABEL_85:
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
  {
    LODWORD(v20) = v16;
    McTemplateK0pjqq_EtwWriteTransfer(v11, v10, v12, a1, a2, v20, v8);
  }
  return v16;
}
