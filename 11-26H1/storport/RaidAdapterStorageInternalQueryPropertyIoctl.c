/*
 * XREFs of RaidAdapterStorageInternalQueryPropertyIoctl @ 0x14006A3F0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorAdapterQueryAdapterObjectProperty @ 0x14006E19C (StorAdapterQueryAdapterObjectProperty.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorAdapterQueryIdentifyControllerProperty @ 0x140190858 (StorAdapterQueryIdentifyControllerProperty.c)
 *     StorQueryMFNDCapability @ 0x1401925B8 (StorQueryMFNDCapability.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x140192814 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x140192A90 (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x140192C54 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x1401932C0 (StorQueryMFNDChildPFQoSStatisticsLog.c)
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x1401935F4 (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1401937F8 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x140193BD4 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x140193EE4 (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1401940C4 (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x1401944CC (StorQueryMFNDOperationInfo.c)
 *     StorQueryDARTNVMeRegisters @ 0x140196450 (StorQueryDARTNVMeRegisters.c)
 *     StorQueryPciLinkInformation @ 0x1401B0DC8 (StorQueryPciLinkInformation.c)
 */

__int64 __fastcall RaidAdapterStorageInternalQueryPropertyIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  signed int *v5; // rdx
  int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // ecx
  signed int v10; // ecx
  int v11; // eax
  signed int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  bool v27; // zf
  unsigned __int64 v28; // rcx
  unsigned __int8 *v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  _BYTE *v32; // r9
  unsigned __int8 v33; // r15
  char v34; // r11
  char v35; // r14
  char v36; // r10
  char v37; // r12
  int v38; // eax
  char *v39; // r12
  unsigned int v40; // ecx
  __int64 v41; // rax
  unsigned __int64 v42; // r13
  __int64 v43; // r8
  int v44; // ecx
  char v45; // r13
  const EVENT_DESCRIPTOR *v46; // rdx
  char v47; // cl
  char v48; // r8
  char v49; // al
  char *v50; // r10
  unsigned int v51; // eax
  int *v52; // rax
  unsigned int v53; // ecx
  __int64 v54; // rax
  unsigned __int64 v55; // r13
  __int64 v56; // r8
  int v57; // ecx
  char v59; // [rsp+60h] [rbp-9h]
  char v60; // [rsp+61h] [rbp-8h]
  char v61; // [rsp+61h] [rbp-8h]
  __int64 v62; // [rsp+68h] [rbp-1h] BYREF
  int v63; // [rsp+70h] [rbp+7h]
  unsigned int v64; // [rsp+74h] [rbp+Bh]
  GUID v65; // [rsp+78h] [rbp+Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(signed int **)(a2 + 24);
  v7 = 0;
  v8 = -1073741811;
  v9 = *(_DWORD *)(v3 + 16);
  v62 = *(unsigned int *)(v3 + 8);
  if ( !v5 || v9 < 8 || (v10 = *v5, *v5 != 1) && ((unsigned int)v10 > 0x1E || (v11 = 1636286224, !_bittest(&v11, v10))) )
  {
    v27 = StorEtwLoggingEnabled == 0;
    v8 = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v27 )
      goto LABEL_139;
    v65 = 0LL;
    IoGetActivityIdIrp(a2, &v65);
    v29 = *(unsigned __int8 **)(a2 + 184);
    if ( *v29 != 14 )
    {
      v30 = *v29 - 15;
      if ( *v29 == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_139;
        v31 = *((_QWORD *)v29 + 1);
        v32 = 0LL;
        v59 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = *(unsigned __int8 *)(v31 + 2);
        if ( (_BYTE)v38 == 40 )
        {
          v39 = 0LL;
          v61 = 0;
          if ( *(_DWORD *)(v31 + 20) )
            goto LABEL_139;
          v53 = *(_DWORD *)(v31 + 56);
          v54 = 0LL;
          v63 = 0;
          v64 = v53;
          if ( !v53 )
            goto LABEL_139;
          while ( 1 )
          {
            v28 = *(unsigned int *)(v31 + 4 * v54 + 120);
            if ( (unsigned int)v28 >= 0x80 )
            {
              v55 = *(unsigned int *)(v31 + 16);
              if ( (unsigned int)v28 < (unsigned int)v55 )
              {
                v56 = (unsigned int)v28;
                v57 = *(_DWORD *)(v28 + v31) - 64;
                if ( v57 )
                {
                  v28 = (unsigned int)(v57 - 1);
                  if ( (_DWORD)v28 )
                  {
                    if ( (_DWORD)v28 == 1 )
                    {
                      v28 = v56 + 40;
                      if ( v56 + 40 <= v55 )
                      {
                        if ( *(_DWORD *)(v56 + v31 + 12) )
                          v39 = (char *)(v56 + v31 + 32);
                        v32 = *(_BYTE **)(v56 + v31 + 24);
LABEL_115:
                        v45 = *(_BYTE *)(v56 + v31 + 8);
                        v33 = *(_BYTE *)(v56 + v31 + 9);
                        goto LABEL_72;
                      }
                    }
                  }
                  else
                  {
                    v28 = v56 + 56;
                    if ( v56 + 56 <= v55 )
                    {
                      v61 = 1;
                      if ( *(_BYTE *)(v56 + v31 + 10) )
                        v39 = (char *)(v56 + v31 + 24);
                      v32 = *(_BYTE **)(v56 + v31 + 16);
                      v33 = *(_BYTE *)(v56 + v31 + 9);
                      v59 = *(_BYTE *)(v56 + v31 + 8);
                    }
                  }
                }
                else
                {
                  v28 = v56 + 40;
                  if ( v56 + 40 <= v55 )
                  {
                    if ( *(_BYTE *)(v56 + v31 + 10) )
                      v39 = (char *)(v56 + v31 + 24);
                    v32 = *(_BYTE **)(v56 + v31 + 16);
                    goto LABEL_115;
                  }
                }
                if ( v61 )
                  goto LABEL_71;
              }
            }
            v54 = (unsigned int)(v63 + 1);
            v63 = v54;
            if ( (unsigned int)v54 >= v64 )
            {
LABEL_71:
              v45 = v59;
              goto LABEL_72;
            }
          }
        }
LABEL_77:
        v45 = *(_BYTE *)(v31 + 4);
        v33 = *(_BYTE *)(v31 + 11);
        v32 = *(_BYTE **)(v31 + 32);
        v47 = *(_BYTE *)(v31 + 72);
        if ( v38 )
          goto LABEL_139;
LABEL_78:
        LOBYTE(v28) = v47 - 8;
        if ( (v28 & 0x5D) != 0 )
          goto LABEL_139;
        v48 = *(_BYTE *)(v31 + 3);
        if ( v48 == 1 || !v32 || !v33 )
          goto LABEL_132;
        v49 = *v32 & 0x7F;
        if ( v49 == 114 || v49 == 115 )
        {
          v28 = (unsigned __int64)&v32[v33];
          LOBYTE(v31) = 0;
          if ( (unsigned __int64)(v32 + 8) > v28 )
            goto LABEL_130;
          v36 = v32[3];
          v34 = v32[1] & 0xF;
          v35 = v32[2];
        }
        else
        {
          v28 = (unsigned __int64)&v32[v33];
          LOBYTE(v31) = 0;
          if ( (unsigned __int64)(v32 + 8) > v28 )
            goto LABEL_130;
          v50 = v32 + 13;
          v34 = v32[2] & 0xF;
          v51 = v33;
          if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
            v51 = (unsigned __int8)v32[7] + 8;
          v28 = (unsigned __int64)&v32[v51];
          if ( (unsigned __int64)v50 <= v28 )
            v35 = v32[12];
          if ( (unsigned __int64)(v32 + 14) > v28 )
            v36 = 0;
          else
            v36 = *v50;
        }
        LOBYTE(v31) = 1;
LABEL_130:
        if ( (_BYTE)v31 )
          v37 = 1;
LABEL_132:
        if ( byte_140173441 < 0 )
        {
          if ( !v37 )
          {
            v36 = 0;
            v34 = 0;
            v35 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v28, v31, &v65, a2, *(_DWORD *)(a2 + 48), v48, v45, v34, v35, v36, a2);
        }
        goto LABEL_139;
      }
      goto LABEL_95;
    }
LABEL_136:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_139;
    v46 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_138;
  }
  v12 = v5[1];
  if ( !v12 )
  {
    if ( v10 > 15 )
    {
      v21 = v10 - 16;
      if ( !v21 )
      {
        v20 = StorQueryMFNDMigrationQoS(a1, a2, &v62);
        goto LABEL_44;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
        v20 = StorQueryMFNDNamespacePageMap(a1, a2, &v62);
        goto LABEL_44;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        v20 = StorQueryMFNDChildPFQueuesState(a1, a2, &v62);
        goto LABEL_44;
      }
      v24 = v23 - 5;
      if ( !v24 )
      {
        v20 = StorQueryMFNDChildPFQoSStatisticsProperty(a1, a2, &v62);
        goto LABEL_44;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        v20 = StorQueryMFNDChildPFQoSStatisticsLog(a1, a2, &v62);
        goto LABEL_44;
      }
      v26 = v25 - 5;
      if ( !v26 )
      {
        v20 = StorQueryDARTNVMeRegisters(a1, a2, &v62);
        goto LABEL_44;
      }
      if ( v26 == 1 )
      {
        v20 = StorQueryPciLinkInformation(a1, a2, &v62);
        goto LABEL_44;
      }
    }
    else
    {
      if ( v10 == 15 )
      {
        v20 = StorQueryMFNDChildPFCommandPermission(a1, a2, &v62);
        goto LABEL_44;
      }
      v13 = v10 - 1;
      if ( !v13 )
      {
        v20 = StorAdapterQueryIdentifyControllerProperty(a1, a2, &v62);
        goto LABEL_44;
      }
      v14 = v13 - 3;
      if ( v14 )
      {
        v15 = v14 - 4;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 1 )
                  {
                    v8 = StorQueryMFNDChildPFSettings(a1, a2, &v62);
                    *(_QWORD *)(a2 + 56) = v62;
                    goto LABEL_45;
                  }
                  goto LABEL_27;
                }
                v20 = StorQueryMFNDChildPFGlobalProperty(a1, a2, &v62);
              }
              else
              {
                v20 = StorQueryMFNDOperationInfo(a1, a2, &v62);
              }
            }
            else
            {
              v20 = StorQueryMFNDCapability(a1, a2, &v62);
            }
          }
          else
          {
            v20 = StorQueryMFNDChildPFList(a1, a2, &v62);
          }
        }
        else
        {
          v20 = StorAdapterQueryAdapterObjectProperty(a1, a2, &v62, a3);
        }
LABEL_44:
        v8 = v20;
        *(_QWORD *)(a2 + 56) = v62;
        goto LABEL_45;
      }
      v8 = -1073741808;
    }
LABEL_27:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_45;
  }
  if ( v12 == 1 )
  {
    v8 = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    v8 = -1073741808;
  }
LABEL_45:
  v27 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v27 )
    goto LABEL_139;
  v65 = 0LL;
  IoGetActivityIdIrp(a2, &v65);
  v29 = *(unsigned __int8 **)(a2 + 184);
  if ( *v29 == 14 )
    goto LABEL_136;
  v30 = *v29 - 15;
  if ( *v29 != 15 )
  {
LABEL_95:
    if ( v30 != 12 )
      goto LABEL_139;
    if ( v29[1] == 7 && !*((_DWORD *)v29 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v52 = *(int **)(a2 + 56);
        if ( v52 )
          v7 = *v52;
        McTemplateK0pqd_EtwWriteTransfer(v28, (__int64)v29, &v65, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_139;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_139;
    v46 = &EventPnpRequestComplete;
LABEL_138:
    McTemplateK0pd_EtwWriteTransfer(v28, v46, &v65, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_139;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_139;
  v31 = *((_QWORD *)v29 + 1);
  v32 = 0LL;
  v59 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = *(unsigned __int8 *)(v31 + 2);
  if ( (_BYTE)v38 != 40 )
    goto LABEL_77;
  v39 = 0LL;
  v60 = 0;
  if ( *(_DWORD *)(v31 + 20) )
    goto LABEL_139;
  v40 = *(_DWORD *)(v31 + 56);
  v41 = 0LL;
  v63 = 0;
  v64 = v40;
  if ( !v40 )
    goto LABEL_139;
  while ( 1 )
  {
    v28 = *(unsigned int *)(v31 + 4 * v41 + 120);
    if ( (unsigned int)v28 >= 0x80 )
    {
      v42 = *(unsigned int *)(v31 + 16);
      if ( (unsigned int)v28 < (unsigned int)v42 )
        break;
    }
LABEL_70:
    v41 = (unsigned int)(v63 + 1);
    v63 = v41;
    if ( (unsigned int)v41 >= v64 )
      goto LABEL_71;
  }
  v43 = (unsigned int)v28;
  v44 = *(_DWORD *)(v31 + v28) - 64;
  if ( v44 )
  {
    v28 = (unsigned int)(v44 - 1);
    if ( (_DWORD)v28 )
    {
      if ( (_DWORD)v28 == 1 )
      {
        v28 = v43 + 40;
        if ( v43 + 40 <= v42 )
        {
          if ( *(_DWORD *)(v31 + v43 + 12) )
            v39 = (char *)(v43 + v31 + 32);
          v32 = *(_BYTE **)(v31 + v43 + 24);
          goto LABEL_61;
        }
      }
    }
    else
    {
      v28 = v43 + 56;
      if ( v43 + 56 <= v42 )
      {
        v60 = 1;
        if ( *(_BYTE *)(v31 + v43 + 10) )
          v39 = (char *)(v43 + v31 + 24);
        v32 = *(_BYTE **)(v31 + v43 + 16);
        v33 = *(_BYTE *)(v31 + v43 + 9);
        v59 = *(_BYTE *)(v31 + v43 + 8);
      }
    }
    goto LABEL_69;
  }
  v28 = v43 + 40;
  if ( v43 + 40 > v42 )
  {
LABEL_69:
    if ( v60 )
      goto LABEL_71;
    goto LABEL_70;
  }
  if ( *(_BYTE *)(v31 + v43 + 10) )
    v39 = (char *)(v43 + v31 + 24);
  v32 = *(_BYTE **)(v31 + v43 + 16);
LABEL_61:
  v45 = *(_BYTE *)(v31 + v43 + 8);
  v33 = *(_BYTE *)(v31 + v43 + 9);
LABEL_72:
  if ( v39 )
  {
    v47 = *v39;
    v37 = 0;
    goto LABEL_78;
  }
LABEL_139:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
