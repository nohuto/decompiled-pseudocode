/*
 * XREFs of NvmeAdapterFilterResourceRequirementsIrp @ 0x140199CA8
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrpSynchronous @ 0x1400372E8 (RaForwardIrpSynchronous.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeCallMiniportAdapterControl @ 0x140078740 (NvmeCallMiniportAdapterControl.c)
 *     NvmeIsAdapterControlSupported @ 0x1400787E0 (NvmeIsAdapterControlSupported.c)
 *     RaidMachineRequireIoPortResource @ 0x1400C53EC (RaidMachineRequireIoPortResource.c)
 *     NvmeControllerFilterResourceRequirements @ 0x1400F34FC (NvmeControllerFilterResourceRequirements.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterFilterResourceRequirementsIrp(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  int v5; // ebx
  int v6; // r13d
  unsigned int *v7; // rsi
  unsigned int *v8; // rcx
  unsigned int v9; // r15d
  unsigned int *v10; // r8
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  unsigned int *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rax
  unsigned int *v16; // rdx
  unsigned int *v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 v25; // rdx
  _BYTE *v26; // r9
  unsigned __int8 v27; // r14
  char v28; // r11
  char v29; // si
  char v30; // r10
  char v31; // r15
  char *v32; // r15
  unsigned int v33; // r13d
  unsigned __int64 v34; // r12
  __int64 v35; // r8
  int v36; // ecx
  char v37; // r12
  char v38; // cl
  char v39; // r8
  char v40; // al
  char *v41; // r10
  unsigned int v42; // eax
  __int64 v44; // [rsp+20h] [rbp-69h]
  char v45; // [rsp+60h] [rbp-29h]
  char v46; // [rsp+61h] [rbp-28h]
  int v47; // [rsp+64h] [rbp-25h]
  unsigned int v48; // [rsp+68h] [rbp-21h]
  GUID v49; // [rsp+80h] [rbp-9h] BYREF
  GUID v50; // [rsp+90h] [rbp+7h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  v50 = 0LL;
  v5 = 0;
  v47 = RaForwardIrpSynchronous(v3, (IRP *)a2);
  v6 = v47;
  if ( v47 >= 0 )
  {
    v7 = *(unsigned int **)(a2 + 56);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 584) = v7[2];
      *(_DWORD *)(a1 + 588) = v7[3];
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x200) != 0
        && !(unsigned __int8)RaidMachineRequireIoPortResource() )
      {
        v8 = v7 + 8;
        v9 = 0;
        v10 = v7 + 8;
        if ( v7[7] )
        {
          while ( 1 )
          {
            v11 = 0;
            v12 = v8[1];
            *(_WORD *)v10 = *(_WORD *)v8;
            *((_WORD *)v10 + 1) = *((_WORD *)v8 + 1);
            if ( v12 )
              break;
LABEL_13:
            v10[1] = v11;
            if ( v12 )
              v16 = &v8[8 * v12 - 8];
            else
              v16 = v8;
            v8 = v16 + 10;
            if ( v11 )
              v17 = &v10[8 * v11 - 8];
            else
              v17 = v10;
            ++v9;
            v10 = v17 + 10;
            if ( v9 >= v7[7] )
              goto LABEL_20;
          }
          v13 = v8 + 2;
          v14 = v12;
          while ( 1 )
          {
            if ( *((_BYTE *)v13 + 1) != 1 )
              goto LABEL_11;
            if ( (*(_BYTE *)v13 & 8) == 0 )
              break;
LABEL_12:
            v13 += 8;
            if ( !--v14 )
              goto LABEL_13;
          }
          *((_BYTE *)v13 + 1) = 0;
LABEL_11:
          v15 = 8LL * v11++;
          *(_OWORD *)&v10[v15 + 2] = *(_OWORD *)v13;
          *(_OWORD *)&v10[v15 + 6] = *((_OWORD *)v13 + 1);
          goto LABEL_12;
        }
      }
LABEL_20:
      v18 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL);
      if ( (v18 & 0x40000000) != 0 )
      {
        v6 = NvmeControllerFilterResourceRequirements(*(_QWORD *)(a1 + 8), v7);
        v47 = v6;
      }
      else if ( (v18 & 0x100) != 0 && NvmeIsAdapterControlSupported(a1 + 168, 13) )
      {
        v6 = NvmeCallMiniportAdapterControl(a1 + 168);
        if ( v6 < 0 )
          v6 = 0;
        v47 = v6;
      }
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v50);
    if ( (byte_140173442 & 0x20) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v19, &EventPnpRequestComplete, &v50, a2, *(_DWORD *)(a2 + 48));
  }
  v20 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( !v20 )
  {
    v49 = 0LL;
    IoGetActivityIdIrp(a2, &v49);
    v22 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v22 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_96;
      v24 = &EventNonReadWriteRequestComplete;
      goto LABEL_95;
    }
    if ( *(_BYTE *)v22 != 15 )
    {
      if ( *(_BYTE *)v22 != 27 )
        goto LABEL_96;
      if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v23 = *(int **)(a2 + 56);
          if ( v23 )
            v5 = *v23;
          LODWORD(v44) = v5;
          McTemplateK0pqd_EtwWriteTransfer(v21, v22, &v49, a2, v44, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_96;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_96;
      v24 = &EventPnpRequestComplete;
LABEL_95:
      LODWORD(v44) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v21, v24, &v49, a2, v44);
      goto LABEL_96;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_96;
    v25 = *(_QWORD *)(v22 + 8);
    v26 = 0LL;
    v45 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    if ( *(_BYTE *)(v25 + 2) != 40 )
    {
      v38 = *(_BYTE *)(v25 + 72);
      v26 = *(_BYTE **)(v25 + 32);
      v27 = *(_BYTE *)(v25 + 11);
      v37 = *(_BYTE *)(v25 + 4);
      if ( *(_BYTE *)(v25 + 2) )
        goto LABEL_96;
LABEL_70:
      LOBYTE(v21) = v38 - 8;
      if ( (v21 & 0x5D) != 0 )
        goto LABEL_96;
      v39 = *(_BYTE *)(v25 + 3);
      if ( v39 == 1 || !v26 || !v27 )
        goto LABEL_89;
      v40 = *v26 & 0x7F;
      if ( v40 == 114 || v40 == 115 )
      {
        v21 = (unsigned __int64)&v26[v27];
        LOBYTE(v25) = 0;
        if ( (unsigned __int64)(v26 + 8) > v21 )
          goto LABEL_87;
        v29 = v26[2];
        v28 = v26[1] & 0xF;
        v30 = v26[3];
      }
      else
      {
        v21 = (unsigned __int64)&v26[v27];
        LOBYTE(v25) = 0;
        if ( (unsigned __int64)(v26 + 8) > v21 )
          goto LABEL_87;
        v41 = v26 + 13;
        v28 = v26[2] & 0xF;
        v42 = v27;
        if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
          v42 = (unsigned __int8)v26[7] + 8;
        v21 = (unsigned __int64)&v26[v42];
        if ( (unsigned __int64)v41 <= v21 )
          v29 = v26[12];
        if ( (unsigned __int64)(v26 + 14) > v21 )
          v30 = 0;
        else
          v30 = *v41;
      }
      LOBYTE(v25) = 1;
LABEL_87:
      if ( (_BYTE)v25 )
        v31 = 1;
LABEL_89:
      if ( byte_140173441 < 0 )
      {
        if ( !v31 )
        {
          v30 = 0;
          v29 = 0;
          v28 = 0;
        }
        LODWORD(v44) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v21, v25, &v49, a2, v44, v39, v37, v28, v29, v30, a2);
      }
      goto LABEL_96;
    }
    v32 = 0LL;
    v46 = 0;
    if ( !*(_DWORD *)(v25 + 20) )
    {
      v33 = 0;
      v48 = *(_DWORD *)(v25 + 56);
      if ( v48 )
      {
        do
        {
          v21 = *(unsigned int *)(v25 + 4LL * v33 + 120);
          if ( (unsigned int)v21 >= 0x80 )
          {
            v34 = *(unsigned int *)(v25 + 16);
            if ( (unsigned int)v21 < (unsigned int)v34 )
            {
              v35 = (unsigned int)v21;
              v36 = *(_DWORD *)(v21 + v25) - 64;
              if ( v36 )
              {
                v21 = (unsigned int)(v36 - 1);
                if ( (_DWORD)v21 )
                {
                  if ( (_DWORD)v21 == 1 )
                  {
                    v21 = v35 + 40;
                    if ( v35 + 40 <= v34 )
                    {
                      if ( *(_DWORD *)(v35 + v25 + 12) )
                        v32 = (char *)(v35 + v25 + 32);
                      v26 = *(_BYTE **)(v35 + v25 + 24);
LABEL_55:
                      v37 = *(_BYTE *)(v35 + v25 + 8);
                      v27 = *(_BYTE *)(v35 + v25 + 9);
                      goto LABEL_64;
                    }
                  }
                }
                else
                {
                  v21 = v35 + 56;
                  if ( v35 + 56 <= v34 )
                  {
                    v46 = 1;
                    if ( *(_BYTE *)(v35 + v25 + 10) )
                      v32 = (char *)(v35 + v25 + 24);
                    v26 = *(_BYTE **)(v35 + v25 + 16);
                    v27 = *(_BYTE *)(v35 + v25 + 9);
                    v45 = *(_BYTE *)(v35 + v25 + 8);
                  }
                }
              }
              else
              {
                v21 = v35 + 40;
                if ( v35 + 40 <= v34 )
                {
                  if ( *(_BYTE *)(v35 + v25 + 10) )
                    v32 = (char *)(v35 + v25 + 24);
                  v26 = *(_BYTE **)(v35 + v25 + 16);
                  goto LABEL_55;
                }
              }
              if ( v46 )
                break;
            }
          }
          ++v33;
        }
        while ( v33 < v48 );
        v37 = v45;
LABEL_64:
        if ( v32 )
        {
          v38 = *v32;
          v31 = 0;
          goto LABEL_70;
        }
      }
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v47;
}
