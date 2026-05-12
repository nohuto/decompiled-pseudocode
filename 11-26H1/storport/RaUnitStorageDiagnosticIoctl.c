/*
 * XREFs of RaUnitStorageDiagnosticIoctl @ 0x14018BB30
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidDiagnosticIoctlStatusToNtStatus @ 0x14006C660 (RaidDiagnosticIoctlStatusToNtStatus.c)
 *     RaBuildDiagnosticBufferForMiniport @ 0x140090C3C (RaBuildDiagnosticBufferForMiniport.c)
 *     RaidCallerIsAdmin @ 0x1400931F8 (RaidCallerIsAdmin.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

NTSTATUS __fastcall RaUnitStorageDiagnosticIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  char *v6; // r15
  size_t v7; // r13
  _DWORD *v8; // r14
  int v9; // esi
  int v10; // ecx
  int v12; // eax
  int v13; // ecx
  __int128 v14; // xmm0
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // rdx
  _BYTE *v24; // r9
  unsigned __int8 v25; // r15
  char v26; // r11
  char v27; // r14
  char v28; // r10
  char v29; // r12
  char *v30; // r12
  int v31; // ecx
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r13
  char v37; // cl
  char v38; // r8
  char v39; // al
  char *v40; // r10
  unsigned int v41; // eax
  __int64 v42; // [rsp+20h] [rbp-49h]
  __int64 v43; // [rsp+28h] [rbp-41h]
  __int64 v44; // [rsp+30h] [rbp-39h]
  char v45; // [rsp+60h] [rbp-9h]
  char v46; // [rsp+61h] [rbp-8h]
  int v47; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  GUID v49; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  P = 0LL;
  v47 = 0;
  v6 = 0LL;
  v7 = *(unsigned int *)(v2 + 8);
  if ( RaidCallerIsAdmin() && *(struct _KTHREAD **)(a2 + 152) == KeGetCurrentThread() )
  {
    v8 = *(_DWORD **)(a2 + 24);
    if ( !v8 )
      goto LABEL_4;
    if ( *(_DWORD *)(v2 + 16) < 0x14u || (unsigned int)v7 < 0x24 )
    {
      v9 = -1073741820;
      goto LABEL_35;
    }
    if ( *v8 != 20 || v8[1] != 20 || (v10 = v8[3]) == 0 || v10 >= 4 || (int)v8[4] >= 1 )
    {
LABEL_4:
      v9 = -1073741811;
LABEL_35:
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_36;
    }
    if ( (v8[2] & 1) != 0 )
    {
      ++*(_BYTE *)(a2 + 67);
      *(_QWORD *)(a2 + 184) += 72LL;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
    }
    if ( v10 != 2 )
    {
      v17 = -1073741637;
      if ( v10 == 3 )
        v17 = -1073741811;
      v9 = v17;
      goto LABEL_35;
    }
    v12 = RaBuildDiagnosticBufferForMiniport(*(_QWORD *)(a1 + 8), a2, v7, &P, &v47);
    v6 = (char *)P;
    v9 = v12;
    if ( v12 >= 0 )
    {
      v9 = RaidUnitSendSrbIoControlSynchronously(a1, a2, (__int64)P, v47, 0LL, 0, 128);
      if ( v9 < 0 )
      {
        v16 = 0LL;
      }
      else
      {
        memset_0(v8, 0, v7);
        v13 = *((_DWORD *)v6 + 5);
        if ( v13 == 6 )
        {
          *v8 = 36;
          v9 = -2147483643;
          v8[6] = *((_DWORD *)v6 + 15);
          v14 = *(_OWORD *)(v6 + 44);
          v8[1] = 36;
          *(_OWORD *)(v8 + 2) = v14;
          *(_QWORD *)(a2 + 56) = 36LL;
          goto LABEL_31;
        }
        if ( v13 )
        {
          v9 = RaidDiagnosticIoctlStatusToNtStatus(v13);
          *(_QWORD *)(a2 + 56) = 0LL;
          goto LABEL_31;
        }
        *v8 = 36;
        v15 = *((_DWORD *)v6 + 15);
        if ( v15 >= (int)v7 - 32 )
          v15 = v7 - 32;
        v8[1] = v15 + 32;
        v8[6] = v15;
        *(_OWORD *)(v8 + 2) = *(_OWORD *)(v6 + 44);
        memmove(v8 + 8, v6 + 68, v15);
        v16 = (unsigned int)v8[1];
      }
      *(_QWORD *)(a2 + 56) = v16;
    }
  }
  else
  {
    v9 = -1073741790;
  }
LABEL_31:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72536152u);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147483643 )
    goto LABEL_35;
LABEL_36:
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v18 )
    goto LABEL_102;
  v49 = 0LL;
  IoGetActivityIdIrp(a2, &v49);
  v20 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v20 != 14 )
  {
    if ( *(_BYTE *)v20 != 15 )
    {
      if ( *(_BYTE *)v20 == 27 )
      {
        if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v21 = *(int **)(a2 + 56);
            if ( v21 )
              v3 = *v21;
            LODWORD(v43) = *(_DWORD *)(a2 + 48);
            LODWORD(v42) = v3;
            McTemplateK0pqd_EtwWriteTransfer(v19, v20, &v49, a2, v42, v43);
          }
          goto LABEL_102;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v22 = &EventPnpRequestComplete;
LABEL_101:
          LODWORD(v42) = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v19, v22, &v49, a2, v42);
          goto LABEL_102;
        }
      }
      goto LABEL_102;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_102;
    v23 = *(_QWORD *)(v20 + 8);
    v24 = 0LL;
    v45 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    if ( *(_BYTE *)(v23 + 2) == 40 )
    {
      v30 = 0LL;
      v46 = 0;
      if ( *(_DWORD *)(v23 + 20) )
        goto LABEL_102;
      v31 = *(_DWORD *)(v23 + 56);
      v32 = 0LL;
      v47 = 0;
      LODWORD(P) = v31;
      if ( !v31 )
        goto LABEL_102;
      do
      {
        v19 = *(unsigned int *)(v23 + 4 * v32 + 120);
        if ( (unsigned int)v19 >= 0x80 )
        {
          v33 = *(unsigned int *)(v23 + 16);
          if ( (unsigned int)v19 < (unsigned int)v33 )
          {
            v34 = (unsigned int)v19;
            v35 = *(_DWORD *)(v19 + v23) - 64;
            if ( v35 )
            {
              v19 = (unsigned int)(v35 - 1);
              if ( (_DWORD)v19 )
              {
                if ( (_DWORD)v19 == 1 )
                {
                  v19 = v34 + 40;
                  if ( v34 + 40 <= v33 )
                  {
                    if ( *(_DWORD *)(v34 + v23 + 12) )
                      v30 = (char *)(v34 + v23 + 32);
                    v24 = *(_BYTE **)(v34 + v23 + 24);
LABEL_61:
                    v36 = *(_BYTE *)(v34 + v23 + 8);
                    v25 = *(_BYTE *)(v34 + v23 + 9);
                    goto LABEL_70;
                  }
                }
              }
              else
              {
                v19 = v34 + 56;
                if ( v34 + 56 <= v33 )
                {
                  v46 = 1;
                  if ( *(_BYTE *)(v34 + v23 + 10) )
                    v30 = (char *)(v34 + v23 + 24);
                  v24 = *(_BYTE **)(v34 + v23 + 16);
                  v25 = *(_BYTE *)(v34 + v23 + 9);
                  v45 = *(_BYTE *)(v34 + v23 + 8);
                }
              }
            }
            else
            {
              v19 = v34 + 40;
              if ( v34 + 40 <= v33 )
              {
                if ( *(_BYTE *)(v34 + v23 + 10) )
                  v30 = (char *)(v34 + v23 + 24);
                v24 = *(_BYTE **)(v34 + v23 + 16);
                goto LABEL_61;
              }
            }
            if ( v46 )
              break;
          }
        }
        v32 = (unsigned int)(v47 + 1);
        v47 = v32;
      }
      while ( (unsigned int)v32 < (unsigned int)P );
      v36 = v45;
LABEL_70:
      if ( !v30 )
        goto LABEL_102;
      v37 = *v30;
      v29 = 0;
    }
    else
    {
      v37 = *(_BYTE *)(v23 + 72);
      v24 = *(_BYTE **)(v23 + 32);
      v25 = *(_BYTE *)(v23 + 11);
      v36 = *(_BYTE *)(v23 + 4);
      if ( *(_BYTE *)(v23 + 2) )
        goto LABEL_102;
    }
    LOBYTE(v19) = v37 - 8;
    if ( (v19 & 0x5D) != 0 )
      goto LABEL_102;
    v38 = *(_BYTE *)(v23 + 3);
    if ( v38 == 1 || !v24 || !v25 )
    {
LABEL_95:
      if ( byte_140173441 < 0 )
      {
        if ( !v29 )
        {
          v28 = 0;
          v27 = 0;
          v26 = 0;
        }
        LOBYTE(v44) = v36;
        LOBYTE(v43) = v38;
        LODWORD(v42) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v19, v23, &v49, a2, v42, v43, v44, v26, v27, v28, a2);
      }
      goto LABEL_102;
    }
    v39 = *v24 & 0x7F;
    if ( v39 == 114 || v39 == 115 )
    {
      v19 = (unsigned __int64)&v24[v25];
      LOBYTE(v23) = 0;
      if ( (unsigned __int64)(v24 + 8) > v19 )
        goto LABEL_93;
      v27 = v24[2];
      v26 = v24[1] & 0xF;
      v28 = v24[3];
    }
    else
    {
      v19 = (unsigned __int64)&v24[v25];
      LOBYTE(v23) = 0;
      if ( (unsigned __int64)(v24 + 8) > v19 )
        goto LABEL_93;
      v40 = v24 + 13;
      v26 = v24[2] & 0xF;
      v41 = v25;
      if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
        v41 = (unsigned __int8)v24[7] + 8;
      v19 = (unsigned __int64)&v24[v41];
      if ( (unsigned __int64)v40 <= v19 )
        v27 = v24[12];
      if ( (unsigned __int64)(v24 + 14) > v19 )
        v28 = 0;
      else
        v28 = *v40;
    }
    LOBYTE(v23) = 1;
LABEL_93:
    if ( (_BYTE)v23 )
      v29 = 1;
    goto LABEL_95;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v22 = &EventNonReadWriteRequestComplete;
    goto LABEL_101;
  }
LABEL_102:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
