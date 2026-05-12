/*
 * XREFs of RaUnitPnpIrp @ 0x14003FBDC
 * Callers:
 *     RaDriverPnpIrp @ 0x140035490 (RaDriverPnpIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x14005D3D0 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqDD @ 0x14006F568 (WPP_SF_qqDD.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14009A788 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x14009DDB8 (RaUnitQueryInterfaceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x14009EC3C (RaUnitRemoveDeviceIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaUnitCancelStopDeviceIrp @ 0x140188C5C (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitDeviceEnumeratedIrp @ 0x140188FD4 (RaUnitDeviceEnumeratedIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x140189560 (RaUnitIgnorePnpIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1401898F0 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryIdIrp @ 0x14018A458 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x14018A83C (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x14018ABE0 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitStopDeviceIrp @ 0x14018AF74 (RaUnitStopDeviceIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x14018E7DC (RaUnitSucceedPnpIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018EB54 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1401B2E9C (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B4F4C (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1401B847C (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 */

__int64 __fastcall RaUnitPnpIrp(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // edx
  int v6; // r13d
  unsigned int v7; // r15d
  char v8; // r12
  PDEVICE_OBJECT v9; // rcx
  unsigned int DeviceTextIrp; // eax
  unsigned int v11; // r14d
  unsigned __int64 v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int v16; // ecx
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  void *v21; // rdx
  int *v22; // rax
  char v23; // al
  __int64 v24; // rdx
  char *v25; // r10
  char v26; // si
  unsigned int v27; // eax
  char v28; // r11
  char v29; // r10
  char v30; // r15
  _BYTE *v31; // r9
  unsigned __int8 v32; // r14
  char *v33; // r15
  unsigned int v34; // r13d
  unsigned __int64 v35; // r12
  __int64 v36; // r8
  int v37; // ecx
  char v38; // r12
  char v39; // cl
  char v40; // r8
  char v41; // [rsp+60h] [rbp-19h]
  char v42; // [rsp+61h] [rbp-18h]
  unsigned int v43; // [rsp+64h] [rbp-15h]
  unsigned int v44; // [rsp+68h] [rbp-11h]
  __int128 v45; // [rsp+70h] [rbp-9h] BYREF
  __int128 v46; // [rsp+80h] [rbp+7h] BYREF

  v46 = 0LL;
  LOBYTE(v4) = 0;
  v6 = RaUnitAcquireRemoveLock(a1, a2, 1);
  v43 = v6;
  v7 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v46);
    if ( v7 > 0x16 || (v17 = 4718720, !_bittest(&v17, v7)) )
    {
      if ( (byte_140173442 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v16, v5, (unsigned int)&v46, a2, v7, 0, *(_QWORD *)(a1 + 8));
    }
  }
  if ( v6 < 0 )
  {
    v18 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v6;
    if ( v18 )
      goto LABEL_31;
    v45 = 0LL;
    IoGetActivityIdIrp(a2, &v45);
    v20 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v20 )
    {
      case 0xE:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_31;
        v21 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140173441 >= 0 )
          goto LABEL_31;
        v24 = *(_QWORD *)(v20 + 8);
        v31 = 0LL;
        v41 = 0;
        v32 = 0;
        v26 = 0;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        if ( *(_BYTE *)(v24 + 2) == 40 )
        {
          v33 = 0LL;
          v42 = 0;
          if ( *(_DWORD *)(v24 + 20) )
            goto LABEL_31;
          v34 = 0;
          v44 = *(_DWORD *)(v24 + 56);
          if ( !v44 )
            goto LABEL_31;
          while ( 1 )
          {
            v19 = *(unsigned int *)(v24 + 4LL * v34 + 120);
            if ( (unsigned int)v19 >= 0x80 )
            {
              v35 = *(unsigned int *)(v24 + 16);
              if ( (unsigned int)v19 < (unsigned int)v35 )
              {
                v36 = (unsigned int)v19;
                v37 = *(_DWORD *)(v19 + v24) - 64;
                if ( v37 )
                {
                  LODWORD(v19) = v37 - 1;
                  if ( (_DWORD)v19 )
                  {
                    if ( (_DWORD)v19 == 1 )
                    {
                      LODWORD(v19) = v36 + 40;
                      if ( v36 + 40 <= v35 )
                      {
                        if ( *(_DWORD *)(v36 + v24 + 12) )
                          v33 = (char *)(v36 + v24 + 32);
                        v31 = *(_BYTE **)(v36 + v24 + 24);
                        goto LABEL_110;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v19) = v36 + 56;
                    if ( v36 + 56 <= v35 )
                    {
                      v42 = 1;
                      if ( *(_BYTE *)(v36 + v24 + 10) )
                        v33 = (char *)(v36 + v24 + 24);
                      v31 = *(_BYTE **)(v36 + v24 + 16);
                      v32 = *(_BYTE *)(v36 + v24 + 9);
                      v41 = *(_BYTE *)(v36 + v24 + 8);
                    }
                  }
                }
                else
                {
                  LODWORD(v19) = v36 + 40;
                  if ( v36 + 40 <= v35 )
                  {
                    if ( *(_BYTE *)(v36 + v24 + 10) )
                      v33 = (char *)(v36 + v24 + 24);
                    v31 = *(_BYTE **)(v36 + v24 + 16);
LABEL_110:
                    v38 = *(_BYTE *)(v36 + v24 + 8);
                    v32 = *(_BYTE *)(v36 + v24 + 9);
LABEL_104:
                    if ( v33 )
                    {
                      v39 = *v33;
                      v30 = 0;
                      goto LABEL_112;
                    }
                    goto LABEL_31;
                  }
                }
                if ( v42 )
                  goto LABEL_103;
              }
            }
            if ( ++v34 >= v44 )
            {
LABEL_103:
              v38 = v41;
              goto LABEL_104;
            }
          }
        }
        v39 = *(_BYTE *)(v24 + 72);
        v31 = *(_BYTE **)(v24 + 32);
        v32 = *(_BYTE *)(v24 + 11);
        v38 = *(_BYTE *)(v24 + 4);
        if ( *(_BYTE *)(v24 + 2) )
          goto LABEL_31;
LABEL_112:
        LOBYTE(v19) = v39 - 8;
        if ( (v19 & 0x5D) != 0 )
        {
LABEL_31:
          IofCompleteRequest((PIRP)a2, 0);
          return v43;
        }
        v40 = *(_BYTE *)(v24 + 3);
        if ( v40 == 1 || !v31 || !v32 )
        {
LABEL_59:
          if ( byte_140173441 < 0 )
          {
            if ( !v30 )
            {
              v29 = 0;
              v28 = 0;
              v26 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v19,
              v24,
              (unsigned int)&v45,
              a2,
              *(_DWORD *)(a2 + 48),
              v40,
              v38,
              v26,
              v28,
              v29,
              a2);
          }
          goto LABEL_31;
        }
        v23 = *v31 & 0x7F;
        if ( v23 == 114 || v23 == 115 )
        {
          v19 = (unsigned __int64)&v31[v32];
          LOBYTE(v24) = 0;
          if ( (unsigned __int64)(v31 + 8) > v19 )
          {
LABEL_57:
            if ( (_BYTE)v24 )
              v30 = 1;
            goto LABEL_59;
          }
          v28 = v31[2];
          v26 = v31[1] & 0xF;
          v29 = v31[3];
        }
        else
        {
          v19 = (unsigned __int64)&v31[v32];
          LOBYTE(v24) = 0;
          if ( (unsigned __int64)(v31 + 8) > v19 )
            goto LABEL_57;
          v25 = v31 + 13;
          v26 = v31[2] & 0xF;
          v27 = v32;
          if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
            v27 = (unsigned __int8)v31[7] + 8;
          v19 = (unsigned __int64)&v31[v27];
          if ( (unsigned __int64)v25 <= v19 )
            v28 = v31[12];
          if ( (unsigned __int64)(v31 + 14) > v19 )
            v29 = 0;
          else
            v29 = *v25;
        }
        LOBYTE(v24) = 1;
        goto LABEL_57;
      case 0x1B:
        if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v22 = *(int **)(a2 + 56);
            if ( v22 )
              v4 = *v22;
            McTemplateK0pqd_EtwWriteTransfer(v19, v20, (unsigned int)&v45, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_31;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_31;
        v21 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_31;
    }
    McTemplateK0pd_EtwWriteTransfer(v19, v21, &v45, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_31;
  }
  v8 = 1;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1, a2, v7);
  }
  if ( v7 <= 0xC )
  {
    if ( v7 == 12 )
    {
      DeviceTextIrp = RaUnitQueryDeviceTextIrp(a1, a2);
      goto LABEL_11;
    }
    if ( v7 > 6 )
    {
      switch ( v7 )
      {
        case 7u:
          if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
            McTemplateK0pddp_EtwWriteTransfer(
              *(_QWORD *)(a2 + 184),
              v5,
              (unsigned int)&v46,
              a2,
              7,
              *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
              *(_QWORD *)(a1 + 8));
          DeviceTextIrp = RaUnitQueryDeviceRelationsIrp(a1, a2);
          goto LABEL_11;
        case 8u:
          DeviceTextIrp = RaUnitQueryInterfaceIrp(a1, a2);
          goto LABEL_11;
        case 9u:
          DeviceTextIrp = RaUnitQueryCapabilitiesIrp(a1, a2);
          goto LABEL_11;
      }
      if ( v7 - 10 < 2 )
      {
        DeviceTextIrp = RaUnitSucceedPnpIrp(v9, a2);
        goto LABEL_11;
      }
      goto LABEL_139;
    }
    switch ( v7 )
    {
      case 6u:
LABEL_76:
        DeviceTextIrp = RaUnitCancelStopDeviceIrp(a1, a2);
        goto LABEL_11;
      case 0u:
        DeviceTextIrp = RaUnitStartDeviceIrp(a1, a2);
        goto LABEL_11;
      case 1u:
        DeviceTextIrp = RaUnitQueryRemoveDeviceIrp(a1, a2);
        goto LABEL_11;
    }
    if ( v7 != 2 )
    {
      if ( v7 != 3 )
      {
        if ( v7 == 4 )
          DeviceTextIrp = RaUnitStopDeviceIrp(a1, a2);
        else
          DeviceTextIrp = RaUnitQueryStopDeviceIrp(a1, a2);
        goto LABEL_11;
      }
      goto LABEL_76;
    }
    DeviceTextIrp = RaUnitRemoveDeviceIrp(a1, a2);
LABEL_120:
    v8 = 0;
    goto LABEL_11;
  }
  if ( v7 <= 0x13 )
  {
    if ( v7 == 19 )
    {
      if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(
          *(_QWORD *)(a2 + 184),
          v5,
          (unsigned int)&v46,
          a2,
          19,
          *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
          *(_QWORD *)(a1 + 8));
      DeviceTextIrp = RaUnitQueryIdIrp(a1, a2);
      goto LABEL_11;
    }
    goto LABEL_139;
  }
  if ( v7 != 20 )
  {
    if ( v7 != 21 )
    {
      if ( v7 == 22 )
      {
        if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            *(_QWORD *)(a2 + 184),
            v5,
            (unsigned int)&v46,
            a2,
            v7,
            *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL),
            *(_QWORD *)(a1 + 8));
        DeviceTextIrp = RaUnitDeviceUsageNotificationIrp(a1, a2);
        goto LABEL_11;
      }
      if ( v7 != 23 )
      {
        if ( v7 == 25 )
        {
          DeviceTextIrp = RaUnitDeviceEnumeratedIrp(a1, a2);
          goto LABEL_11;
        }
        goto LABEL_139;
      }
      DeviceTextIrp = RaUnitSurpriseRemovalIrp(a1, a2);
      goto LABEL_120;
    }
LABEL_139:
    DeviceTextIrp = RaUnitIgnorePnpIrp(v9, a2);
    goto LABEL_11;
  }
  DeviceTextIrp = RaUnitQueryPnpDeviceStateIrp(a1, a2);
LABEL_11:
  v11 = DeviceTextIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      a1,
      a2,
      v7,
      DeviceTextIrp);
  }
  if ( v8 )
  {
    v12 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v13 = *(_DWORD *)(v12 + *(_QWORD *)(a1 + 40));
    while ( (v13 & 1) == 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + *(_QWORD *)(a1 + 40)), v13 - 2, v13);
      if ( v14 == v13 )
        return v11;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
  }
  return v11;
}
