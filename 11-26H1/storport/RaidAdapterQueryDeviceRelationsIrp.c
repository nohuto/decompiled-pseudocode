/*
 * XREFs of RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     RaidAdapterAcquireStartIoLock @ 0x14000ECB0 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterReleaseStartIoLock @ 0x14000ECF0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidpBuildAdapterBusRelations @ 0x140036A00 (RaidpBuildAdapterBusRelations.c)
 *     RaidAdapterRescanBus @ 0x140036EE4 (RaidAdapterRescanBus.c)
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B5E24 (StorAdapterNVMeEnumerateZNS.c)
 */

__int64 __fastcall RaidAdapterQueryDeviceRelationsIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r13d
  NTSTATUS v10; // r14d
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rcx
  void *v19; // rdx
  int *v20; // rax
  char v21; // al
  __int64 v22; // rdx
  char *v23; // r11
  char v24; // r14
  unsigned int v25; // eax
  char v26; // r15
  char v27; // r11
  char v28; // r12
  __int64 v29; // rcx
  unsigned __int16 *v30; // r14
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char *v33; // r12
  int v34; // ecx
  __int64 v35; // rax
  void (__fastcall *v36)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r12
  int v37; // eax
  unsigned __int64 v38; // r13
  __int64 v39; // r8
  int v40; // ecx
  char v41; // r13
  char v42; // cl
  char v43; // r8
  signed __int32 v44[8]; // [rsp+0h] [rbp-89h] BYREF
  char v45; // [rsp+60h] [rbp-29h] BYREF
  char v46; // [rsp+61h] [rbp-28h]
  unsigned __int16 v47; // [rsp+62h] [rbp-27h]
  int v48; // [rsp+64h] [rbp-25h]
  int v49; // [rsp+68h] [rbp-21h] BYREF
  __int64 v50; // [rsp+70h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+78h] [rbp-11h] BYREF
  __int128 v52; // [rsp+90h] [rbp+7h] BYREF

  LOBYTE(v2) = 0;
  v49 = 0;
  v47 = 0;
  memset(&v51, 0, sizeof(v51));
  v45 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, a1, a2);
  }
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0LL;
  v50 = 0LL;
  if ( !*(_DWORD *)(v5 + 8) )
  {
    if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0
      && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4328)) > 300000000 )
    {
      *(_BYTE *)(a1 + 106) = 1;
    }
    v7 = a1;
    if ( *(int *)(*(_QWORD *)(a1 + 608) + 184LL) < 0 )
    {
      v17 = StorAdapterNVMeEnumerateZNS(a1);
      if ( StorEtwLoggingEnabled )
      {
        v52 = 0LL;
        IoGetActivityIdIrp(a2, &v52);
        if ( (byte_140173443 & 0x40) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v18, &EventNVMeEnumerate, &v52, a2, v17);
      }
      if ( v17 >= 0 )
        goto LABEL_6;
      v7 = a1;
    }
    v48 = RaidAdapterRescanBus(v7, &v49, &v45);
    if ( v48 < 0 )
    {
      v9 = v49;
LABEL_7:
      if ( v45 )
      {
        v30 = *(unsigned __int16 **)(a1 + 4904);
        *(_BYTE *)(a1 + 104) &= ~0x40u;
        *(_QWORD *)(a1 + 4904) = 0LL;
        if ( v30 )
          v47 = *v30;
        v36 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4912);
        v50 = *(_QWORD *)(a1 + 4920);
        *(_QWORD *)(a1 + 4920) = 0LL;
        *(_QWORD *)(a1 + 4912) = 0LL;
        *(_QWORD *)(a1 + 4892) = 0LL;
        _InterlockedOr(v44, 0);
        _InterlockedExchange((volatile __int32 *)(a1 + 4888), 0);
        if ( v36 )
        {
          RaidAdapterAcquireStartIoLock(a1, &v51);
          v37 = RaidNtStatusToStorStatus(v9);
          v36(*(_QWORD *)(a1 + 616) + 16LL, v50, v47, v30, v37);
          RaidAdapterReleaseStartIoLock(a1, &v51);
        }
      }
      v10 = v48;
      *(_QWORD *)(a2 + 56) = v6;
      *(_DWORD *)(a2 + 48) = v10;
      if ( v10 >= 0 )
      {
        if ( StorEtwLoggingEnabled )
        {
          v52 = 0LL;
          IoGetActivityIdIrp(a2, &v52);
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v15, &EventPnpRequestComplete, &v52, a2, v10);
        }
        v16 = *(_QWORD *)(a2 + 184);
        *(_OWORD *)(v16 - 72) = *(_OWORD *)v16;
        *(_OWORD *)(v16 - 56) = *(_OWORD *)(v16 + 16);
        *(_OWORD *)(v16 - 40) = *(_OWORD *)(v16 + 32);
        *(_QWORD *)(v16 - 24) = *(_QWORD *)(v16 + 48);
        *(_BYTE *)(v16 - 69) = 0;
        v10 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
        goto LABEL_14;
      }
      v11 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      if ( !v11 )
      {
        v52 = 0LL;
        IoGetActivityIdIrp(a2, &v52);
        v13 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v13 )
        {
          case 0xE:
            if ( (byte_140173442 & 8) == 0 )
              break;
            v19 = &EventNonReadWriteRequestComplete;
LABEL_34:
            McTemplateK0pd_EtwWriteTransfer(v12, v19, &v52, a2, *(_DWORD *)(a2 + 48));
            break;
          case 0xF:
            if ( byte_140173441 >= 0 )
              break;
            v22 = *(_QWORD *)(v13 + 8);
            v31 = 0LL;
            v45 = 0;
            v32 = 0;
            v24 = 0;
            v26 = 0;
            v27 = 0;
            v28 = 0;
            if ( *(_BYTE *)(v22 + 2) == 40 )
            {
              v33 = 0LL;
              v46 = 0;
              if ( *(_DWORD *)(v22 + 20) )
                goto LABEL_106;
              v34 = *(_DWORD *)(v22 + 56);
              v35 = 0LL;
              v49 = 0;
              LODWORD(v50) = v34;
              if ( !v34 )
                goto LABEL_106;
              while ( 1 )
              {
                v12 = *(unsigned int *)(v22 + 4 * v35 + 120);
                if ( (unsigned int)v12 >= 0x80 )
                {
                  v38 = *(unsigned int *)(v22 + 16);
                  if ( (unsigned int)v12 < (unsigned int)v38 )
                  {
                    v39 = (unsigned int)v12;
                    v40 = *(_DWORD *)(v12 + v22) - 64;
                    if ( v40 )
                    {
                      LODWORD(v12) = v40 - 1;
                      if ( (_DWORD)v12 )
                      {
                        if ( (_DWORD)v12 == 1 )
                        {
                          LODWORD(v12) = v39 + 40;
                          if ( v39 + 40 <= v38 )
                          {
                            if ( *(_DWORD *)(v39 + v22 + 12) )
                              v33 = (char *)(v39 + v22 + 32);
                            v31 = *(_BYTE **)(v39 + v22 + 24);
                            goto LABEL_100;
                          }
                        }
                      }
                      else
                      {
                        LODWORD(v12) = v39 + 56;
                        if ( v39 + 56 <= v38 )
                        {
                          v46 = 1;
                          if ( *(_BYTE *)(v39 + v22 + 10) )
                            v33 = (char *)(v39 + v22 + 24);
                          v31 = *(_BYTE **)(v39 + v22 + 16);
                          v32 = *(_BYTE *)(v39 + v22 + 9);
                          v45 = *(_BYTE *)(v39 + v22 + 8);
                        }
                      }
                    }
                    else
                    {
                      LODWORD(v12) = v39 + 40;
                      if ( v39 + 40 <= v38 )
                      {
                        if ( *(_BYTE *)(v39 + v22 + 10) )
                          v33 = (char *)(v39 + v22 + 24);
                        v31 = *(_BYTE **)(v39 + v22 + 16);
LABEL_100:
                        v41 = *(_BYTE *)(v39 + v22 + 8);
                        v32 = *(_BYTE *)(v39 + v22 + 9);
LABEL_94:
                        if ( v33 )
                        {
                          v42 = *v33;
                          v28 = 0;
                          goto LABEL_102;
                        }
                        goto LABEL_106;
                      }
                    }
                    if ( v46 )
                      goto LABEL_93;
                  }
                }
                v35 = (unsigned int)(v49 + 1);
                v49 = v35;
                if ( (unsigned int)v35 >= (unsigned int)v50 )
                {
LABEL_93:
                  v41 = v45;
                  goto LABEL_94;
                }
              }
            }
            v42 = *(_BYTE *)(v22 + 72);
            v31 = *(_BYTE **)(v22 + 32);
            v32 = *(_BYTE *)(v22 + 11);
            v41 = *(_BYTE *)(v22 + 4);
            if ( *(_BYTE *)(v22 + 2) )
              goto LABEL_106;
LABEL_102:
            LOBYTE(v12) = v42 - 8;
            if ( (v12 & 0x5D) != 0 )
            {
LABEL_106:
              v10 = v48;
              break;
            }
            v43 = *(_BYTE *)(v22 + 3);
            if ( v43 == 1 || !v31 || !v32 )
            {
LABEL_57:
              if ( byte_140173441 < 0 )
              {
                if ( !v28 )
                {
                  v27 = 0;
                  v26 = 0;
                  v24 = 0;
                }
                McTemplateK0pduuuuup_EtwWriteTransfer(
                  v12,
                  v22,
                  (unsigned int)&v52,
                  a2,
                  *(_DWORD *)(a2 + 48),
                  v43,
                  v41,
                  v24,
                  v26,
                  v27,
                  a2);
              }
              goto LABEL_106;
            }
            v21 = *v31 & 0x7F;
            if ( v21 == 114 || v21 == 115 )
            {
              v12 = (unsigned __int64)&v31[v32];
              LOBYTE(v22) = 0;
              if ( (unsigned __int64)(v31 + 8) > v12 )
              {
LABEL_55:
                if ( (_BYTE)v22 )
                  v28 = 1;
                goto LABEL_57;
              }
              v26 = v31[2];
              v24 = v31[1] & 0xF;
              v27 = v31[3];
            }
            else
            {
              v12 = (unsigned __int64)&v31[v32];
              LOBYTE(v22) = 0;
              if ( (unsigned __int64)(v31 + 8) > v12 )
                goto LABEL_55;
              v23 = v31 + 13;
              v24 = v31[2] & 0xF;
              v25 = v32;
              if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
                v25 = (unsigned __int8)v31[7] + 8;
              v12 = (unsigned __int64)&v31[v25];
              if ( (unsigned __int64)v23 <= v12 )
                v26 = v31[12];
              if ( (unsigned __int64)(v31 + 14) > v12 )
                v27 = 0;
              else
                v27 = *v23;
            }
            LOBYTE(v22) = 1;
            goto LABEL_55;
          case 0x1B:
            if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
            {
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v20 = *(int **)(a2 + 56);
                if ( v20 )
                  v2 = *v20;
                McTemplateK0pqd_EtwWriteTransfer(v12, v13, (unsigned int)&v52, a2, v2, *(_DWORD *)(a2 + 48));
              }
              break;
            }
            if ( (byte_140173442 & 0x20) != 0 )
            {
              v19 = &EventPnpRequestComplete;
              goto LABEL_34;
            }
            break;
        }
      }
      IofCompleteRequest((PIRP)a2, 0);
LABEL_14:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqD(
          WPP_GLOBAL_Control->AttachedDevice,
          15LL,
          &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
          a1,
          a2,
          v10);
      }
      return (unsigned int)v10;
    }
LABEL_6:
    v8 = RaidpBuildAdapterBusRelations(a1, &v50);
    v6 = v50;
    v9 = v8;
    v48 = v8;
    goto LABEL_7;
  }
  if ( StorEtwLoggingEnabled )
  {
    v52 = 0LL;
    IoGetActivityIdIrp(a2, &v52);
    if ( (byte_140173442 & 0x20) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v29, &EventPnpRequestComplete, &v52, a2, *(_DWORD *)(a2 + 48));
  }
  return RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
}
