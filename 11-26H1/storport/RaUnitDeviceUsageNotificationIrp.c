/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x14009A788
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     StorUpdateCrashDumpPowerReady @ 0x140019D70 (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidSecondaryDumpDeregister @ 0x1400C49D4 (RaidSecondaryDumpDeregister.c)
 *     RaidNotifyPoAboutSpecialDevice @ 0x1400C54E8 (RaidNotifyPoAboutSpecialDevice.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // ebx
  __int64 v5; // r15
  volatile signed __int32 *v7; // rsi
  int v8; // eax
  _BYTE **v9; // r12
  __int64 v10; // r14
  __int64 v11; // rcx
  char v12; // al
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int Status; // r14d
  IRP *v18; // rax
  _IO_STACK_LOCATION *v19; // rdx
  PIRP v20; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 v22; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int16 v25; // cx
  int IsEnabledDeviceUsageNoInline; // eax
  int *v27; // rcx
  int v28; // edx
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  __int64 v34; // rcx
  int v35; // eax
  bool v36; // zf
  unsigned __int64 v37; // rcx
  _BYTE *v38; // rdx
  int *v39; // rax
  const EVENT_DESCRIPTOR *v40; // rdx
  __int64 v41; // rdx
  _BYTE *v42; // r9
  unsigned __int8 v43; // si
  char v44; // r10
  char v45; // di
  char v46; // r11
  char v47; // r12
  char *v48; // r12
  unsigned int v49; // ecx
  __int64 v50; // rax
  unsigned __int64 v51; // r13
  __int64 v52; // r8
  int v53; // ecx
  char v54; // r13
  char v55; // cl
  char v56; // r8
  char v57; // al
  char *v58; // r11
  unsigned int v59; // eax
  __int64 v61; // [rsp+20h] [rbp-E0h]
  __int64 v62; // [rsp+28h] [rbp-D8h]
  char v63; // [rsp+60h] [rbp-A0h] BYREF
  char v64; // [rsp+61h] [rbp-9Fh]
  char v65; // [rsp+62h] [rbp-9Eh] BYREF
  int v66; // [rsp+64h] [rbp-9Ch]
  char v67; // [rsp+68h] [rbp-98h] BYREF
  char v68; // [rsp+69h] [rbp-97h] BYREF
  unsigned int v69; // [rsp+6Ch] [rbp-94h] BYREF
  PIRP Irp; // [rsp+70h] [rbp-90h]
  __int128 v71; // [rsp+78h] [rbp-88h]
  GUID v72; // [rsp+88h] [rbp-78h] BYREF
  __int128 v73; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  unsigned int *v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  char *v81; // [rsp+100h] [rbp+0h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  char *v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  char *v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+128h] [rbp+28h]
  _BYTE v87[16]; // [rsp+130h] [rbp+30h] BYREF
  char *v88; // [rsp+140h] [rbp+40h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  _BYTE v90[16]; // [rsp+150h] [rbp+50h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v63 = 0;
  v5 = a2;
  v7 = 0LL;
  v71 = 0LL;
  v73 = 0LL;
  if ( v3 )
  {
    v8 = *(_DWORD *)(a1 + 56);
    if ( v8 )
    {
      if ( (unsigned int)(v8 - 5) > 1 )
      {
        v9 = (_BYTE **)(a2 + 184);
        v10 = *(_QWORD *)(a2 + 184);
        *(_QWORD *)&v72.Data1 = v10;
        LOBYTE(a2) = *(_BYTE *)(v10 + 8);
        v66 = *(_DWORD *)(v10 + 16);
        v64 = a2;
        switch ( v66 )
        {
          case 1:
            v7 = (volatile signed __int32 *)(a1 + 1036);
            break;
          case 2:
            v7 = (volatile signed __int32 *)(a1 + 1044);
            break;
          case 3:
            v7 = (volatile signed __int32 *)(a1 + 1040);
            break;
          default:
            v11 = (unsigned int)(v66 - 4);
            if ( v66 == 4 )
            {
              v12 = *(_BYTE *)(a1 + 506);
              if ( (_BYTE)a2 )
              {
                *(_BYTE *)(a1 + 506) = v12 | 1;
                *(_BYTE *)(v3 + 104) |= 0x80u;
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4996LL) )
                {
                  if ( !SecondaryDumpCallbackRegistered )
                  {
                    unk_14017334C = 0;
                    if ( KeRegisterBugCheckReasonCallback(
                           (PKBUGCHECK_REASON_CALLBACK_RECORD)&WPP_MAIN_CB.Reserved,
                           RaidStandardSecondaryDumpCallback,
                           KbCallbackSecondaryDumpData,
                           (PUCHAR)"PortDriverStandard") == 1 )
                    {
                      SecondaryDumpCallbackRegistered = 1;
                      BootDriveExtension = a1;
                    }
                  }
                }
                if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v11, 0x400000000000LL) )
                {
                  v13 = *(const wchar_t **)(v3 + 4784);
                  v75 = v3 + 5128;
                  v76 = 16LL;
                  v77 = a1 + 2104;
                  v69 = *(_DWORD *)(v3 + 56);
                  v79 = &v69;
                  v63 = *(_BYTE *)(a1 + 104);
                  v81 = &v63;
                  v67 = *(_BYTE *)(a1 + 105);
                  v83 = &v67;
                  v68 = *(_BYTE *)(a1 + 106);
                  v85 = &v68;
                  v78 = 16LL;
                  v80 = 4LL;
                  v82 = 1LL;
                  v84 = 1LL;
                  v86 = 1LL;
                  tlgCreate1Sz_wchar_t((__int64)v87, v13);
                  v14 = *(const wchar_t **)(v3 + 4792);
                  v65 = *(_BYTE *)(a1 + 3432);
                  v88 = &v65;
                  v89 = 1LL;
                  tlgCreate1Sz_wchar_t((__int64)v90, v14);
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)v74,
                    (unsigned __int8 *)dword_140160802,
                    v15,
                    v16,
                    0xBu,
                    v74);
                }
              }
              else
              {
                *(_BYTE *)(a1 + 506) = v12 & 0xFE;
                *(_BYTE *)(v3 + 104) &= ~0x80u;
                RaidSecondaryDumpDeregister(v11, a2, a3, 1LL);
              }
              v63 = 1;
              goto LABEL_29;
            }
            if ( v66 != 7
              || !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
            {
              goto LABEL_29;
            }
            v7 = (volatile signed __int32 *)(a1 + 1048);
            v63 = 1;
LABEL_25:
            if ( v7 && !*v7 && !*(_BYTE *)(v10 + 8) )
            {
              Status = -1073741823;
              goto LABEL_88;
            }
LABEL_29:
            v18 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v3 + 8) + 76LL) + 3, 0);
            Irp = v18;
            if ( !v18 )
            {
              Status = -1073741801;
              goto LABEL_88;
            }
            Status = RaUnitAcquireRemoveLock(a1, (__int64)v18, 1);
            if ( Status < 0 )
              goto LABEL_86;
            v19 = *(_IO_STACK_LOCATION **)&v72.Data1;
            v20 = Irp;
            Irp->Tail.Overlay.Thread = *(_ETHREAD **)(v5 + 152);
            CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
            v20->IoStatus.Status = -1073741637;
            CurrentStackLocation[-1] = *v19;
            Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v3 + 8), v20);
            if ( Status < 0 || (Status = Irp->IoStatus.Status, Status < 0) )
            {
              if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
              {
                if ( Status != -1073741637 || v66 != 4 && v66 != 7 )
                  goto LABEL_65;
              }
              else if ( Status != -1073741637 || v66 != 4 )
              {
                v22 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
                v23 = *(_DWORD *)(v22 + *(_QWORD *)(a1 + 40));
                while ( (v23 & 1) == 0 )
                {
                  v24 = v23;
                  v23 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)(v22 + *(_QWORD *)(a1 + 40)),
                          v23 - 2,
                          v23);
                  if ( v24 == v23 )
                    goto LABEL_86;
                }
LABEL_84:
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
                  KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_86:
                IoFreeIrp(Irp);
                goto LABEL_88;
              }
              Status = 0;
            }
            if ( v7 )
            {
              if ( v64 )
                _InterlockedAdd(v7, 1u);
              else
                _InterlockedDecrement(v7);
              IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
              if ( v66 == 1 )
                RaidNotifyPoAboutSpecialDevice(*(_QWORD *)(a1 + 8), *(unsigned int *)v7);
            }
            if ( v63 && RaidIsUnitControlSupported(a1, 1) )
            {
              LOWORD(v73) = 1;
              v25 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
              WORD4(v73) = *(_WORD *)(a1 + 104);
              BYTE10(v73) = *(_BYTE *)(a1 + 106);
              *(_QWORD *)&v71 = &v73;
              DWORD2(v71) = v66;
              BYTE12(v71) = v64;
              WORD1(v73) = v25;
              DWORD1(v73) = 4;
              IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
              v27 = *(int **)(a1 + 24);
              v28 = *v27;
              if ( IsEnabledDeviceUsageNoInline )
              {
                if ( v28 == 1094997074 )
                {
                  v29 = (__int64)(v27 + 94);
                }
                else if ( v28 == 1314275652 )
                {
                  v29 = (__int64)(v27 + 42);
                }
                else
                {
                  v29 = 0LL;
                }
                Status = RaCallMiniportUnitControl(v29);
                v30 = v66;
                if ( Status < 0 )
                {
                  if ( v66 == 7 )
                  {
                    if ( v7 )
                    {
                      if ( v64 )
                        _InterlockedDecrement(v7);
                      else
                        _InterlockedAdd(v7, 1u);
                    }
LABEL_65:
                    v31 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
                    v32 = *(_DWORD *)(v31 + *(_QWORD *)(a1 + 40));
                    while ( (v32 & 1) == 0 )
                    {
                      v33 = v32;
                      v32 = _InterlockedCompareExchange(
                              (volatile signed __int32 *)(v31 + *(_QWORD *)(a1 + 40)),
                              v32 - 2,
                              v32);
                      if ( v33 == v32 )
                        goto LABEL_86;
                    }
                    goto LABEL_84;
                  }
                  Status = 0;
                }
LABEL_77:
                if ( v30 == 3 )
                {
                  v35 = *(_DWORD *)(a1 + 1040);
                  if ( v35 == 1 )
                  {
                    if ( !*(_QWORD *)(v3 + 5080) )
                    {
                      *(_QWORD *)(v3 + 5080) = a1;
                      StorUpdateCrashDumpPowerReady(v3);
                    }
                  }
                  else if ( !v35 && a1 == *(_QWORD *)(v3 + 5080) )
                  {
                    *(_QWORD *)(v3 + 5080) = 0LL;
                  }
                }
                goto LABEL_65;
              }
              if ( v28 == 1094997074 )
              {
                v34 = (__int64)(v27 + 94);
              }
              else if ( v28 == 1314275652 )
              {
                v34 = (__int64)(v27 + 42);
              }
              else
              {
                v34 = 0LL;
              }
              RaCallMiniportUnitControl(v34);
            }
            v30 = v66;
            goto LABEL_77;
        }
        v63 = 1;
        goto LABEL_25;
      }
    }
  }
  Status = -1073741810;
  v9 = (_BYTE **)(a2 + 184);
LABEL_88:
  v36 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v5 + 141) = -84;
  *(_DWORD *)(v5 + 48) = Status;
  if ( v36 )
    goto LABEL_154;
  v72 = 0LL;
  IoGetActivityIdIrp(v5, &v72);
  v38 = *v9;
  if ( **v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_154;
    v40 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_153;
  }
  if ( **v9 != 15 )
  {
    if ( **v9 != 27 )
      goto LABEL_154;
    if ( v38[1] == 7 && !*((_DWORD *)v38 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v39 = *(int **)(v5 + 56);
        if ( v39 )
          v4 = *v39;
        LODWORD(v62) = *(_DWORD *)(v5 + 48);
        LODWORD(v61) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v37, (__int64)v38, &v72, v5, v61, v62);
      }
      goto LABEL_154;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_154;
    v40 = &EventPnpRequestComplete;
LABEL_153:
    LODWORD(v61) = *(_DWORD *)(v5 + 48);
    McTemplateK0pd_EtwWriteTransfer(v37, v40, &v72, v5, v61);
    goto LABEL_154;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_154;
  v41 = *((_QWORD *)v38 + 1);
  v42 = 0LL;
  v64 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( *(_BYTE *)(v41 + 2) != 40 )
  {
    v55 = *(_BYTE *)(v41 + 72);
    v42 = *(_BYTE **)(v41 + 32);
    v43 = *(_BYTE *)(v41 + 11);
    v54 = *(_BYTE *)(v41 + 4);
    if ( *(_BYTE *)(v41 + 2) )
      goto LABEL_154;
LABEL_128:
    LOBYTE(v37) = v55 - 8;
    if ( (v37 & 0x5D) != 0 )
      goto LABEL_154;
    v56 = *(_BYTE *)(v41 + 3);
    if ( v56 == 1 || !v42 || !v43 )
      goto LABEL_147;
    v57 = *v42 & 0x7F;
    if ( v57 == 114 || v57 == 115 )
    {
      v37 = (unsigned __int64)&v42[v43];
      LOBYTE(v41) = 0;
      if ( (unsigned __int64)(v42 + 8) > v37 )
        goto LABEL_145;
      v45 = v42[2];
      v44 = v42[1] & 0xF;
      v46 = v42[3];
    }
    else
    {
      v37 = (unsigned __int64)&v42[v43];
      LOBYTE(v41) = 0;
      if ( (unsigned __int64)(v42 + 8) > v37 )
        goto LABEL_145;
      v58 = v42 + 13;
      v44 = v42[2] & 0xF;
      v59 = v43;
      if ( (unsigned int)(unsigned __int8)v42[7] + 8 <= v43 )
        v59 = (unsigned __int8)v42[7] + 8;
      v37 = (unsigned __int64)&v42[v59];
      if ( (unsigned __int64)v58 <= v37 )
        v45 = v42[12];
      if ( (unsigned __int64)(v42 + 14) > v37 )
        v46 = 0;
      else
        v46 = *v58;
    }
    v41 = 1LL;
LABEL_145:
    if ( (_BYTE)v41 )
      v47 = 1;
LABEL_147:
    if ( byte_140173441 < 0 )
    {
      if ( !v47 )
      {
        v46 = 0;
        v45 = 0;
        v44 = 0;
      }
      LOBYTE(v62) = v56;
      LODWORD(v61) = *(_DWORD *)(v5 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v37, v41, &v72, v5, v61, v62, v54, v44, v45, v46, v5);
    }
    goto LABEL_154;
  }
  v48 = 0LL;
  v63 = 0;
  if ( !*(_DWORD *)(v41 + 20) )
  {
    v49 = *(_DWORD *)(v41 + 56);
    v50 = 0LL;
    v66 = 0;
    v69 = v49;
    if ( v49 )
    {
      do
      {
        v37 = *(unsigned int *)(v41 + 4 * v50 + 120);
        if ( (unsigned int)v37 >= 0x80 )
        {
          v51 = *(unsigned int *)(v41 + 16);
          if ( (unsigned int)v37 < (unsigned int)v51 )
          {
            v52 = (unsigned int)v37;
            v53 = *(_DWORD *)(v37 + v41) - 64;
            if ( v53 )
            {
              v37 = (unsigned int)(v53 - 1);
              if ( (_DWORD)v37 )
              {
                if ( (_DWORD)v37 == 1 )
                {
                  v37 = v52 + 40;
                  if ( v52 + 40 <= v51 )
                  {
                    if ( *(_DWORD *)(v52 + v41 + 12) )
                      v48 = (char *)(v52 + v41 + 32);
                    v42 = *(_BYTE **)(v52 + v41 + 24);
LABEL_113:
                    v54 = *(_BYTE *)(v52 + v41 + 8);
                    v43 = *(_BYTE *)(v52 + v41 + 9);
                    goto LABEL_122;
                  }
                }
              }
              else
              {
                v37 = v52 + 56;
                if ( v52 + 56 <= v51 )
                {
                  v63 = 1;
                  if ( *(_BYTE *)(v52 + v41 + 10) )
                    v48 = (char *)(v52 + v41 + 24);
                  v42 = *(_BYTE **)(v52 + v41 + 16);
                  v43 = *(_BYTE *)(v52 + v41 + 9);
                  v64 = *(_BYTE *)(v52 + v41 + 8);
                }
              }
            }
            else
            {
              v37 = v52 + 40;
              if ( v52 + 40 <= v51 )
              {
                if ( *(_BYTE *)(v52 + v41 + 10) )
                  v48 = (char *)(v52 + v41 + 24);
                v42 = *(_BYTE **)(v52 + v41 + 16);
                goto LABEL_113;
              }
            }
            if ( v63 )
              break;
          }
        }
        v50 = (unsigned int)(v66 + 1);
        v66 = v50;
      }
      while ( (unsigned int)v50 < v69 );
      v54 = v64;
LABEL_122:
      if ( v48 )
      {
        v55 = *v48;
        v47 = 0;
        goto LABEL_128;
      }
    }
  }
LABEL_154:
  IofCompleteRequest((PIRP)v5, 0);
  return (unsigned int)Status;
}
