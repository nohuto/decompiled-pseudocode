/*
 * XREFs of StorDrainPendingIoGatewayItems @ 0x1400AEED4
 * Callers:
 *     RaidUnitCancelPendingRequests @ 0x1400A6F5C (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorDrainPendingIoGatewayItems(__int64 a1, KSPIN_LOCK *a2)
{
  KSPIN_LOCK *v2; // r12
  __int64 v3; // r14
  KSPIN_LOCK *v4; // rcx
  KSPIN_LOCK *v5; // rbx
  KSPIN_LOCK v6; // rax
  IRP *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  const EVENT_DESCRIPTOR *v20; // rdx
  unsigned __int64 v21; // rdx
  _BYTE *v22; // r9
  unsigned __int8 v23; // r11
  char v24; // r10
  char v25; // r13
  char v26; // r15
  char v27; // bl
  char *v28; // rbx
  char v29; // r14
  unsigned int v30; // r12d
  __int64 v31; // rdi
  unsigned __int64 v32; // r10
  __int64 v33; // r8
  int v34; // ecx
  char v35; // di
  char v36; // cl
  char v37; // r8
  char v38; // al
  unsigned int v39; // eax
  KSPIN_LOCK *v40; // rcx
  KSPIN_LOCK *v41; // rbx
  KSPIN_LOCK v42; // rax
  IRP *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  unsigned __int64 v49; // r8
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  unsigned __int64 v52; // rcx
  __int64 CurrentStackLocation; // rdx
  __int64 Information; // rcx
  const EVENT_DESCRIPTOR *v55; // rdx
  unsigned __int64 v56; // rdx
  _BYTE *v57; // r9
  unsigned __int8 v58; // r11
  char v59; // r10
  char v60; // r13
  char v61; // r14
  char v62; // bl
  char *v63; // rbx
  char v64; // r15
  unsigned int v65; // r12d
  __int64 v66; // rsi
  unsigned __int64 v67; // r10
  __int64 v68; // r8
  int v69; // ecx
  char v70; // si
  char v71; // cl
  char v72; // r8
  char v73; // al
  unsigned int v74; // eax
  __int64 v76; // [rsp+20h] [rbp-79h]
  __int64 v77; // [rsp+28h] [rbp-71h]
  __int64 v78; // [rsp+30h] [rbp-69h]
  __int64 v79; // [rsp+38h] [rbp-61h]
  __int64 v80; // [rsp+40h] [rbp-59h]
  __int64 v81; // [rsp+48h] [rbp-51h]
  char v82; // [rsp+60h] [rbp-39h]
  char v83; // [rsp+60h] [rbp-39h]
  KSPIN_LOCK *v86; // [rsp+80h] [rbp-19h]
  KSPIN_LOCK *i; // [rsp+80h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-11h] BYREF
  GUID v89; // [rsp+A0h] [rbp+7h] BYREF

  v2 = a2;
  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a2, &LockHandle);
  if ( !FeatureFixKcsanRacyAccessV2 )
  {
    if ( !*((_DWORD *)v2 + 6) )
      goto LABEL_170;
    v40 = v2 + 1;
    for ( i = v2 + 1; ; v40 = i )
    {
      v41 = (KSPIN_LOCK *)*v40;
      if ( *(KSPIN_LOCK **)(*v40 + 8) != v40 || (v42 = *v41, *(KSPIN_LOCK **)(*v41 + 8) != v41) )
LABEL_169:
        __fastfail(3u);
      *v40 = v42;
      v43 = (IRP *)(v41 - 15);
      *(_QWORD *)(v42 + 8) = v40;
      --*((_DWORD *)v2 + 6);
      if ( (*((_BYTE *)v41 + 22) & 0x20) != 0 )
      {
        v44 = *(_QWORD *)(v41[8] + 8);
        v45 = 96LL;
        if ( *(_BYTE *)(v44 + 2) != 40 )
          v45 = 48LL;
        v46 = (_QWORD *)(*(_QWORD *)(v45 + v44) + 24LL);
        v47 = *v46;
        if ( *(_QWORD **)(*v46 + 8LL) != v46 )
          goto LABEL_169;
        v48 = (_QWORD *)v46[1];
        if ( (_QWORD *)*v48 != v46 )
          goto LABEL_169;
        *v48 = v47;
        *(_QWORD *)(v47 + 8) = v48;
      }
      *(_BYTE *)(v43->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 8;
      v43->IoStatus.Status = RaidSrbStatusToNtStatus(8);
      v43->IoStatus.Information = 0LL;
      v49 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v50 = *(_DWORD *)(v49 + *(_QWORD *)(v3 + 40));
      while ( (v50 & 1) == 0 )
      {
        v51 = v50;
        v50 = _InterlockedCompareExchange((volatile signed __int32 *)(v49 + *(_QWORD *)(v3 + 40)), v50 - 2, v50);
        if ( v51 == v50 )
          goto LABEL_100;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
LABEL_100:
      v16 = StorEtwLoggingEnabled == 0;
      *((_BYTE *)v41 + 21) = -84;
      if ( !v16 )
      {
        v89 = 0LL;
        IoGetActivityIdIrp(v41 - 15, &v89);
        CurrentStackLocation = (__int64)v43->Tail.Overlay.CurrentStackLocation;
        switch ( *(_BYTE *)CurrentStackLocation )
        {
          case 0xE:
            if ( (byte_140173442 & 8) != 0 )
            {
              v55 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
LABEL_112:
              LODWORD(v76) = v43->IoStatus.Status;
              McTemplateK0pd_EtwWriteTransfer(v52, v55, &v89, v41 - 15, v76);
            }
            break;
          case 0xF:
            if ( byte_140173441 >= 0 )
              break;
            v56 = *(_QWORD *)(CurrentStackLocation + 8);
            v83 = 0;
            v57 = 0LL;
            v58 = 0;
            v59 = 0;
            v60 = 0;
            v61 = 0;
            v62 = 0;
            if ( *(_BYTE *)(v56 + 2) == 40 )
            {
              v63 = 0LL;
              v64 = 0;
              if ( !*(_DWORD *)(v56 + 20) )
              {
                v65 = *(_DWORD *)(v56 + 56);
                v66 = 0LL;
                if ( v65 )
                {
                  do
                  {
                    v52 = *(unsigned int *)(v56 + 4 * v66 + 120);
                    if ( (unsigned int)v52 >= 0x80 )
                    {
                      v67 = *(unsigned int *)(v56 + 16);
                      if ( (unsigned int)v52 < (unsigned int)v67 )
                      {
                        v68 = (unsigned int)v52;
                        v69 = *(_DWORD *)(v52 + v56) - 64;
                        if ( v69 )
                        {
                          v52 = (unsigned int)(v69 - 1);
                          if ( (_DWORD)v52 )
                          {
                            if ( (_DWORD)v52 == 1 )
                            {
                              v52 = v68 + 40;
                              if ( v68 + 40 <= v67 )
                              {
                                if ( *(_DWORD *)(v68 + v56 + 12) )
                                  v63 = (char *)(v68 + v56 + 32);
                                v57 = *(_BYTE **)(v68 + v56 + 24);
LABEL_126:
                                v70 = *(_BYTE *)(v68 + v56 + 8);
                                v58 = *(_BYTE *)(v68 + v56 + 9);
                                goto LABEL_135;
                              }
                            }
                          }
                          else
                          {
                            v52 = v68 + 56;
                            if ( v68 + 56 <= v67 )
                            {
                              v64 = 1;
                              if ( *(_BYTE *)(v68 + v56 + 10) )
                                v63 = (char *)(v68 + v56 + 24);
                              v57 = *(_BYTE **)(v68 + v56 + 16);
                              v58 = *(_BYTE *)(v68 + v56 + 9);
                              v83 = *(_BYTE *)(v68 + v56 + 8);
                            }
                          }
                        }
                        else
                        {
                          v52 = v68 + 40;
                          if ( v68 + 40 <= v67 )
                          {
                            if ( *(_BYTE *)(v68 + v56 + 10) )
                              v63 = (char *)(v68 + v56 + 24);
                            v57 = *(_BYTE **)(v68 + v56 + 16);
                            goto LABEL_126;
                          }
                        }
                        if ( v64 )
                          break;
                      }
                    }
                    v66 = (unsigned int)(v66 + 1);
                  }
                  while ( (unsigned int)v66 < v65 );
                  v70 = v83;
LABEL_135:
                  v2 = a2;
                  if ( v63 )
                  {
                    v71 = *v63;
                    v59 = 0;
                    v62 = 0;
                    goto LABEL_141;
                  }
                }
                else
                {
                  v2 = a2;
                }
              }
LABEL_166:
              v3 = a1;
              break;
            }
            v71 = *(_BYTE *)(v56 + 72);
            v57 = *(_BYTE **)(v56 + 32);
            v58 = *(_BYTE *)(v56 + 11);
            v70 = *(_BYTE *)(v56 + 4);
            if ( *(_BYTE *)(v56 + 2) )
              goto LABEL_166;
LABEL_141:
            LOBYTE(v52) = v71 - 8;
            if ( (v52 & 0x5D) != 0 )
              goto LABEL_166;
            v72 = *(_BYTE *)(v56 + 3);
            if ( v72 != 1 && v57 && v58 )
            {
              v73 = *v57 & 0x7F;
              if ( v73 == 114 || v73 == 115 )
              {
                v52 = (unsigned __int64)&v57[v58];
                LOBYTE(v56) = 0;
                if ( (unsigned __int64)(v57 + 8) <= v52 )
                {
                  v60 = v57[2];
                  v59 = v57[1] & 0xF;
                  v61 = v57[3];
                  goto LABEL_156;
                }
              }
              else
              {
                v52 = (unsigned __int64)&v57[v58];
                LOBYTE(v56) = 0;
                if ( (unsigned __int64)(v57 + 8) <= v52 )
                {
                  v56 = (unsigned __int64)(v57 + 13);
                  v59 = v57[2] & 0xF;
                  v74 = v58;
                  if ( (unsigned int)(unsigned __int8)v57[7] + 8 <= v58 )
                    v74 = (unsigned __int8)v57[7] + 8;
                  v52 = (unsigned __int64)&v57[v74];
                  if ( v56 <= v52 )
                    v60 = v57[12];
                  if ( (unsigned __int64)(v57 + 14) <= v52 )
                    v61 = *(_BYTE *)v56;
LABEL_156:
                  LOBYTE(v56) = 1;
                }
              }
              if ( (_BYTE)v56 )
                v62 = 1;
            }
            if ( byte_140173441 < 0 )
            {
              if ( !v62 )
              {
                v61 = 0;
                v60 = 0;
                v59 = 0;
              }
              LOBYTE(v81) = v61;
              LOBYTE(v80) = v60;
              LOBYTE(v79) = v59;
              LOBYTE(v78) = v70;
              LOBYTE(v77) = v72;
              LODWORD(v76) = v43->IoStatus.Status;
              McTemplateK0pduuuuup_EtwWriteTransfer(v52, v56, &v89, v43, v76, v77, v78, v79, v80, v81, v43);
            }
            goto LABEL_166;
          case 0x1B:
            if ( *(_BYTE *)(CurrentStackLocation + 1) != 7 || *(_DWORD *)(CurrentStackLocation + 8) )
            {
              if ( (byte_140173442 & 0x20) == 0 )
                break;
              v55 = &EventPnpRequestComplete;
              goto LABEL_112;
            }
            if ( (byte_140173442 & 0x40) != 0 )
            {
              Information = v43->IoStatus.Information;
              if ( Information )
                Information = *(unsigned int *)Information;
              LODWORD(v77) = v43->IoStatus.Status;
              LODWORD(v76) = Information;
              McTemplateK0pqd_EtwWriteTransfer(Information, CurrentStackLocation, &v89, v41 - 15, v76, v77);
            }
            break;
          default:
            break;
        }
      }
      IofCompleteRequest(v43, 0);
      if ( !*((_DWORD *)v2 + 6) )
        goto LABEL_170;
    }
  }
  if ( *((_DWORD *)v2 + 6) )
  {
    v4 = v2 + 1;
    v86 = v2 + 1;
    while ( 1 )
    {
      v5 = (KSPIN_LOCK *)*v4;
      if ( *(KSPIN_LOCK **)(*v4 + 8) != v4 )
        goto LABEL_169;
      v6 = *v5;
      if ( *(KSPIN_LOCK **)(*v5 + 8) != v5 )
        goto LABEL_169;
      *v4 = v6;
      v7 = (IRP *)(v5 - 15);
      *(_QWORD *)(v6 + 8) = v4;
      _InterlockedDecrement((volatile signed __int32 *)v2 + 6);
      if ( (*((_BYTE *)v5 + 22) & 0x20) != 0 )
      {
        v8 = *(_QWORD *)(v5[8] + 8);
        v9 = 96LL;
        if ( *(_BYTE *)(v8 + 2) != 40 )
          v9 = 48LL;
        v10 = (_QWORD *)(*(_QWORD *)(v9 + v8) + 24LL);
        v11 = *v10;
        if ( *(_QWORD **)(*v10 + 8LL) != v10 )
          goto LABEL_169;
        v12 = (_QWORD *)v10[1];
        if ( (_QWORD *)*v12 != v10 )
          goto LABEL_169;
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
      }
      *(_BYTE *)(v7->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 8;
      v7->IoStatus.Status = RaidSrbStatusToNtStatus(8);
      v7->IoStatus.Information = 0LL;
      v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v14 = *(_DWORD *)(v13 + *(_QWORD *)(v3 + 40));
      while ( (v14 & 1) == 0 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(_QWORD *)(v3 + 40)), v14 - 2, v14);
        if ( v15 == v14 )
          goto LABEL_17;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
LABEL_17:
      v16 = StorEtwLoggingEnabled == 0;
      *((_BYTE *)v5 + 21) = -84;
      if ( !v16 )
      {
        v89 = 0LL;
        IoGetActivityIdIrp(v5 - 15, &v89);
        v18 = (__int64)v7->Tail.Overlay.CurrentStackLocation;
        switch ( *(_BYTE *)v18 )
        {
          case 0xE:
            if ( (byte_140173442 & 8) != 0 )
            {
              v20 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
LABEL_29:
              LODWORD(v76) = v7->IoStatus.Status;
              McTemplateK0pd_EtwWriteTransfer(v17, v20, &v89, v5 - 15, v76);
            }
            break;
          case 0xF:
            if ( byte_140173441 >= 0 )
              break;
            v21 = *(_QWORD *)(v18 + 8);
            v82 = 0;
            v22 = 0LL;
            v23 = 0;
            v24 = 0;
            v25 = 0;
            v26 = 0;
            v27 = 0;
            if ( *(_BYTE *)(v21 + 2) != 40 )
            {
              v36 = *(_BYTE *)(v21 + 72);
              v22 = *(_BYTE **)(v21 + 32);
              v23 = *(_BYTE *)(v21 + 11);
              v35 = *(_BYTE *)(v21 + 4);
              if ( *(_BYTE *)(v21 + 2) )
                break;
LABEL_58:
              LOBYTE(v17) = v36 - 8;
              if ( (v17 & 0x5D) != 0 )
                break;
              v37 = *(_BYTE *)(v21 + 3);
              if ( v37 != 1 && v22 && v23 )
              {
                v38 = *v22 & 0x7F;
                if ( v38 == 114 || v38 == 115 )
                {
                  v17 = (unsigned __int64)&v22[v23];
                  LOBYTE(v21) = 0;
                  if ( (unsigned __int64)(v22 + 8) <= v17 )
                  {
                    v25 = v22[2];
                    v24 = v22[1] & 0xF;
                    v26 = v22[3];
                    goto LABEL_73;
                  }
                }
                else
                {
                  v17 = (unsigned __int64)&v22[v23];
                  LOBYTE(v21) = 0;
                  if ( (unsigned __int64)(v22 + 8) <= v17 )
                  {
                    v21 = (unsigned __int64)(v22 + 13);
                    v24 = v22[2] & 0xF;
                    v39 = v23;
                    if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
                      v39 = (unsigned __int8)v22[7] + 8;
                    v17 = (unsigned __int64)&v22[v39];
                    if ( v21 <= v17 )
                      v25 = v22[12];
                    if ( (unsigned __int64)(v22 + 14) <= v17 )
                      v26 = *(_BYTE *)v21;
LABEL_73:
                    LOBYTE(v21) = 1;
                  }
                }
                if ( (_BYTE)v21 )
                  v27 = 1;
              }
              if ( byte_140173441 < 0 )
              {
                if ( !v27 )
                {
                  v26 = 0;
                  v25 = 0;
                  v24 = 0;
                }
                LOBYTE(v81) = v26;
                LOBYTE(v80) = v25;
                LOBYTE(v79) = v24;
                LOBYTE(v78) = v35;
                LOBYTE(v77) = v37;
                LODWORD(v76) = v7->IoStatus.Status;
                McTemplateK0pduuuuup_EtwWriteTransfer(v17, v21, &v89, v7, v76, v77, v78, v79, v80, v81, v7);
              }
              break;
            }
            v28 = 0LL;
            v29 = 0;
            if ( *(_DWORD *)(v21 + 20) )
              break;
            v30 = *(_DWORD *)(v21 + 56);
            v31 = 0LL;
            if ( !v30 )
            {
              v2 = a2;
              break;
            }
            do
            {
              v17 = *(unsigned int *)(v21 + 4 * v31 + 120);
              if ( (unsigned int)v17 >= 0x80 )
              {
                v32 = *(unsigned int *)(v21 + 16);
                if ( (unsigned int)v17 < (unsigned int)v32 )
                {
                  v33 = (unsigned int)v17;
                  v34 = *(_DWORD *)(v17 + v21) - 64;
                  if ( v34 )
                  {
                    v17 = (unsigned int)(v34 - 1);
                    if ( (_DWORD)v17 )
                    {
                      if ( (_DWORD)v17 == 1 )
                      {
                        v17 = v33 + 40;
                        if ( v33 + 40 <= v32 )
                        {
                          if ( *(_DWORD *)(v33 + v21 + 12) )
                            v28 = (char *)(v33 + v21 + 32);
                          v22 = *(_BYTE **)(v33 + v21 + 24);
LABEL_43:
                          v35 = *(_BYTE *)(v33 + v21 + 8);
                          v23 = *(_BYTE *)(v33 + v21 + 9);
                          goto LABEL_52;
                        }
                      }
                    }
                    else
                    {
                      v17 = v33 + 56;
                      if ( v33 + 56 <= v32 )
                      {
                        v29 = 1;
                        if ( *(_BYTE *)(v33 + v21 + 10) )
                          v28 = (char *)(v33 + v21 + 24);
                        v22 = *(_BYTE **)(v33 + v21 + 16);
                        v23 = *(_BYTE *)(v33 + v21 + 9);
                        v82 = *(_BYTE *)(v33 + v21 + 8);
                      }
                    }
                  }
                  else
                  {
                    v17 = v33 + 40;
                    if ( v33 + 40 <= v32 )
                    {
                      if ( *(_BYTE *)(v33 + v21 + 10) )
                        v28 = (char *)(v33 + v21 + 24);
                      v22 = *(_BYTE **)(v33 + v21 + 16);
                      goto LABEL_43;
                    }
                  }
                  if ( v29 )
                    break;
                }
              }
              v31 = (unsigned int)(v31 + 1);
            }
            while ( (unsigned int)v31 < v30 );
            v35 = v82;
LABEL_52:
            v2 = a2;
            if ( v28 )
            {
              v36 = *v28;
              v24 = 0;
              v27 = 0;
              goto LABEL_58;
            }
            break;
          case 0x1B:
            if ( *(_BYTE *)(v18 + 1) != 7 || *(_DWORD *)(v18 + 8) )
            {
              if ( (byte_140173442 & 0x20) == 0 )
                break;
              v20 = &EventPnpRequestComplete;
              goto LABEL_29;
            }
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v19 = v7->IoStatus.Information;
              if ( v19 )
                v19 = *(unsigned int *)v19;
              LODWORD(v77) = v7->IoStatus.Status;
              LODWORD(v76) = v19;
              McTemplateK0pqd_EtwWriteTransfer(v19, v18, &v89, v5 - 15, v76, v77);
            }
            break;
          default:
            break;
        }
      }
      IofCompleteRequest(v7, 0);
      if ( !*((_DWORD *)v2 + 6) )
        break;
      v4 = v86;
      v3 = a1;
    }
  }
LABEL_170:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
