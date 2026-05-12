/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1401B69C8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x140046660 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x14006C6B0 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x14006C8EC (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x14006CC04 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterSelfEncryptionProperty @ 0x14006CC88 (RaidGetStorageAdapterSelfEncryptionProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x14006CDA4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x140186900 (RaidGetStorageAdapterFruIdProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x140186A24 (RaidGetStorageMiniportProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1401B49C4 (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1401B5A80 (RaidGetStorageAdapterSerialNumberProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int *v4; // r9
  unsigned int StorageAdapterTemperatureProperty; // r14d
  unsigned __int64 v7; // rdx
  int v8; // r8d
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int8 *v14; // rdx
  int v15; // eax
  int v17; // ecx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // r15
  char v21; // r11
  char v22; // si
  char v23; // r10
  char v24; // r12
  char *v25; // r12
  int v26; // ecx
  __int64 v27; // rax
  unsigned int StorageAdapterPhysicalTopologyProperty; // eax
  const EVENT_DESCRIPTOR *v29; // rdx
  int *v30; // rax
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  char v34; // al
  char v35; // r8
  char *v36; // r10
  char v37; // r11
  unsigned int v38; // eax
  char v39; // si
  char v40; // r10
  char v41; // r12
  _BYTE *v42; // r9
  unsigned __int8 v43; // r15
  char *v44; // r12
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r13
  __int64 v49; // r8
  int v50; // ecx
  char v51; // r13
  char v52; // cl
  char v53; // r8
  unsigned __int64 v54; // r13
  __int64 v55; // r8
  int v56; // ecx
  char v57; // r13
  char v58; // cl
  char v59; // [rsp+28h] [rbp-41h]
  char v60; // [rsp+30h] [rbp-39h]
  char v61; // [rsp+38h] [rbp-31h]
  char v62; // [rsp+40h] [rbp-29h]
  char v63; // [rsp+48h] [rbp-21h]
  __int64 v64; // [rsp+50h] [rbp-19h]
  char v65; // [rsp+60h] [rbp-9h]
  char v66; // [rsp+60h] [rbp-9h]
  char v67; // [rsp+61h] [rbp-8h]
  char v68; // [rsp+61h] [rbp-8h]
  unsigned __int64 v69; // [rsp+68h] [rbp-1h] BYREF
  int v70; // [rsp+70h] [rbp+7h]
  GUID v71; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(int **)(a2 + 24);
  StorageAdapterTemperatureProperty = -1073741811;
  v7 = *(unsigned int *)(v2 + 8);
  v69 = v7;
  if ( *(_DWORD *)(v2 + 16) >= 8u )
  {
    if ( (v8 = *v4, *v4 == 1)
      || (v9 = (unsigned int)(v8 - 5), (unsigned int)v9 <= 0x3E) && (v10 = 0x7811500000001801LL, _bittest64(&v10, v9))
      || v8 == 69 )
    {
      v17 = v4[1];
      v11 = 0;
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          StorageAdapterTemperatureProperty = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 56) = 0LL;
          StorageAdapterTemperatureProperty = -1073741808;
        }
        goto LABEL_21;
      }
      if ( v8 <= 53 )
      {
        switch ( v8 )
        {
          case 53:
            StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterPhysicalTopologyProperty(
                                                       (__int64)a1,
                                                       (IRP *)a2,
                                                       &v69);
            goto LABEL_108;
          case 1:
            StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProperty(
                                                       (__int64)a1,
                                                       (__int64)v4,
                                                       (__int64 *)&v69);
            goto LABEL_108;
          case 5:
            StorageAdapterPhysicalTopologyProperty = RaidGetStorageMiniportProperty((__int64)a1, v4, &v69);
            goto LABEL_108;
          case 16:
            StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterRpmbProperty(a1, a2, &v69);
            goto LABEL_108;
        }
        if ( v8 != 17 )
        {
          if ( v8 != 49 )
          {
            if ( v8 == 51 )
            {
              StorageAdapterTemperatureProperty = RaidGetStorageAdapterTemperatureProperty((__int64)a1, (IRP *)a2, &v69);
              *(_QWORD *)(a2 + 56) = v69;
            }
LABEL_21:
            v12 = StorEtwLoggingEnabled == 0;
            *(_BYTE *)(a2 + 141) = -84;
            *(_DWORD *)(a2 + 48) = StorageAdapterTemperatureProperty;
            if ( v12 )
              goto LABEL_10;
            v71 = 0LL;
            IoGetActivityIdIrp(a2, &v71);
            v14 = *(unsigned __int8 **)(a2 + 184);
            if ( *v14 != 14 )
            {
              v15 = *v14 - 15;
              if ( *v14 == 15 )
              {
                if ( byte_140173441 >= 0 )
                  goto LABEL_10;
                v18 = *((_QWORD *)v14 + 1);
                v19 = 0LL;
                v65 = 0;
                v20 = 0;
                v21 = 0;
                v22 = 0;
                v23 = 0;
                v24 = 0;
                if ( *(_BYTE *)(v18 + 2) != 40 )
                {
                  v52 = *(_BYTE *)(v18 + 72);
                  v19 = *(_BYTE **)(v18 + 32);
                  v20 = *(_BYTE *)(v18 + 11);
                  v51 = *(_BYTE *)(v18 + 4);
                  if ( *(_BYTE *)(v18 + 2) )
                    goto LABEL_10;
                  goto LABEL_134;
                }
                v25 = 0LL;
                v67 = 0;
                if ( *(_DWORD *)(v18 + 20) )
                  goto LABEL_10;
                v26 = *(_DWORD *)(v18 + 56);
                v27 = 0LL;
                v70 = 0;
                LODWORD(v69) = v26;
                if ( !v26 )
                  goto LABEL_10;
                while ( 1 )
                {
                  v13 = *(unsigned int *)(v18 + 4 * v27 + 120);
                  if ( (unsigned int)v13 >= 0x80 )
                  {
                    v48 = *(unsigned int *)(v18 + 16);
                    if ( (unsigned int)v13 < (unsigned int)v48 )
                    {
                      v49 = (unsigned int)v13;
                      v50 = *(_DWORD *)(v18 + v13) - 64;
                      if ( v50 )
                      {
                        v13 = (unsigned int)(v50 - 1);
                        if ( (_DWORD)v13 )
                        {
                          if ( (_DWORD)v13 == 1 )
                          {
                            v13 = v49 + 40;
                            if ( v49 + 40 <= v48 )
                            {
                              if ( *(_DWORD *)(v18 + v49 + 12) )
                                v25 = (char *)(v49 + v18 + 32);
                              v19 = *(_BYTE **)(v18 + v49 + 24);
                              goto LABEL_132;
                            }
                          }
                        }
                        else
                        {
                          v13 = v49 + 56;
                          if ( v49 + 56 <= v48 )
                          {
                            v67 = 1;
                            if ( *(_BYTE *)(v18 + v49 + 10) )
                              v25 = (char *)(v49 + v18 + 24);
                            v19 = *(_BYTE **)(v18 + v49 + 16);
                            v20 = *(_BYTE *)(v18 + v49 + 9);
                            v65 = *(_BYTE *)(v18 + v49 + 8);
                          }
                        }
                      }
                      else
                      {
                        v13 = v49 + 40;
                        if ( v49 + 40 <= v48 )
                        {
                          if ( *(_BYTE *)(v18 + v49 + 10) )
                            v25 = (char *)(v49 + v18 + 24);
                          v19 = *(_BYTE **)(v18 + v49 + 16);
LABEL_132:
                          v51 = *(_BYTE *)(v18 + v49 + 8);
                          v20 = *(_BYTE *)(v18 + v49 + 9);
LABEL_126:
                          if ( !v25 )
                            goto LABEL_10;
                          v52 = *v25;
                          v24 = 0;
LABEL_134:
                          LOBYTE(v13) = v52 - 8;
                          if ( (v13 & 0x5D) != 0 )
                            goto LABEL_10;
                          v53 = *(_BYTE *)(v18 + 3);
                          if ( v53 != 1 && v19 && v20 )
                          {
                            v31 = *v19 & 0x7F;
                            if ( v31 == 114 || v31 == 115 )
                            {
                              v13 = (unsigned __int64)&v19[v20];
                              LOBYTE(v18) = 0;
                              if ( (unsigned __int64)(v19 + 8) <= v13 )
                              {
                                v22 = v19[2];
                                v21 = v19[1] & 0xF;
                                v23 = v19[3];
                                goto LABEL_58;
                              }
                            }
                            else
                            {
                              v13 = (unsigned __int64)&v19[v20];
                              LOBYTE(v18) = 0;
                              if ( (unsigned __int64)(v19 + 8) <= v13 )
                              {
                                v32 = v19 + 13;
                                v21 = v19[2] & 0xF;
                                v33 = v20;
                                if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
                                  v33 = (unsigned __int8)v19[7] + 8;
                                v13 = (unsigned __int64)&v19[v33];
                                if ( (unsigned __int64)v32 <= v13 )
                                  v22 = v19[12];
                                if ( (unsigned __int64)(v19 + 14) > v13 )
                                  v23 = 0;
                                else
                                  v23 = *v32;
LABEL_58:
                                LOBYTE(v18) = 1;
                              }
                            }
                            if ( (_BYTE)v18 )
                              v24 = 1;
                          }
                          if ( byte_140173441 >= 0 )
                            goto LABEL_10;
                          if ( !v24 )
                          {
                            v23 = 0;
                            v22 = 0;
                            v21 = 0;
                          }
                          v64 = a2;
                          v63 = v23;
                          v62 = v22;
                          v61 = v21;
                          v60 = v51;
                          v59 = v53;
LABEL_167:
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v13,
                            v18,
                            &v71,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v59,
                            v60,
                            v61,
                            v62,
                            v63,
                            v64);
                          goto LABEL_10;
                        }
                      }
                      if ( v67 )
                        goto LABEL_125;
                    }
                  }
                  v27 = (unsigned int)(v70 + 1);
                  v70 = v27;
                  if ( (unsigned int)v27 >= (unsigned int)v69 )
                  {
LABEL_125:
                    v51 = v65;
                    goto LABEL_126;
                  }
                }
              }
              goto LABEL_39;
            }
LABEL_36:
            if ( (byte_140173442 & 8) == 0 )
              goto LABEL_10;
            v29 = &EventNonReadWriteRequestComplete;
            goto LABEL_38;
          }
          goto LABEL_87;
        }
LABEL_35:
        StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterCryptoProperty((__int64)a1, a2, &v69, v8 == 69);
LABEL_108:
        StorageAdapterTemperatureProperty = StorageAdapterPhysicalTopologyProperty;
        v47 = v69;
        goto LABEL_109;
      }
      switch ( v8 )
      {
        case '9':
          StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterSerialNumberProperty((__int64)a1, v4, &v69);
          goto LABEL_108;
        case '@':
          StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterSelfEncryptionProperty((__int64)a1, v4, &v69);
          goto LABEL_108;
        case 'A':
          StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterFruIdProperty((__int64)a1, v4, &v69);
          goto LABEL_108;
      }
      if ( v8 != 66 )
      {
        if ( v8 == 67 )
        {
LABEL_87:
          StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProtocolSpecificProperty(
                                                     (__int64)a1,
                                                     (IRP *)a2,
                                                     (__int64 *)&v69);
          goto LABEL_108;
        }
        if ( v8 != 69 )
          goto LABEL_21;
        goto LABEL_35;
      }
      if ( v7 >= 8 )
      {
        *v4 = 12;
        StorageAdapterTemperatureProperty = 0;
        v4[1] = 12;
        if ( v7 < 0xC )
        {
          v47 = 8LL;
LABEL_109:
          *(_QWORD *)(a2 + 56) = v47;
          goto LABEL_21;
        }
        v4[2] = 1;
      }
      else
      {
        StorageAdapterTemperatureProperty = -1073741789;
      }
      v47 = 12LL;
      goto LABEL_109;
    }
  }
  v11 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v12 = StorEtwLoggingEnabled == 0;
  StorageAdapterTemperatureProperty = -1073741808;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(a2 + 48) = -1073741808;
  if ( v12 )
    goto LABEL_10;
  v71 = 0LL;
  IoGetActivityIdIrp(a2, &v71);
  v14 = *(unsigned __int8 **)(a2 + 184);
  if ( *v14 == 14 )
    goto LABEL_36;
  v15 = *v14 - 15;
  if ( *v14 != 15 )
  {
LABEL_39:
    if ( v15 != 12 )
      goto LABEL_10;
    if ( v14[1] == 7 && !*((_DWORD *)v14 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v30 = *(int **)(a2 + 56);
        if ( v30 )
          v11 = *v30;
        McTemplateK0pqd_EtwWriteTransfer(v13, (__int64)v14, &v71, a2, v11, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_10;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_10;
    v29 = &EventPnpRequestComplete;
LABEL_38:
    McTemplateK0pd_EtwWriteTransfer(v13, v29, &v71, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_10;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_10;
  v18 = *((_QWORD *)v14 + 1);
  v42 = 0LL;
  v66 = 0;
  v43 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v58 = *(_BYTE *)(v18 + 72);
    v42 = *(_BYTE **)(v18 + 32);
    v43 = *(_BYTE *)(v18 + 11);
    v57 = *(_BYTE *)(v18 + 4);
    if ( *(_BYTE *)(v18 + 2) )
      goto LABEL_10;
LABEL_163:
    LOBYTE(v13) = v58 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_10;
    if ( *(_BYTE *)(v18 + 3) == 1 || !v42 || !v43 )
      goto LABEL_78;
    v34 = *v42 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v13 = (unsigned __int64)&v42[v43];
      v35 = 0;
      if ( (unsigned __int64)(v42 + 8) > v13 )
      {
LABEL_76:
        if ( v35 )
          v41 = 1;
LABEL_78:
        if ( byte_140173441 >= 0 )
          goto LABEL_10;
        if ( !v41 )
        {
          v40 = 0;
          v39 = 0;
          v37 = 0;
        }
        v64 = a2;
        v63 = v40;
        v62 = v39;
        v61 = v37;
        v60 = v57;
        v59 = *(_BYTE *)(v18 + 3);
        goto LABEL_167;
      }
      v39 = v42[2];
      v37 = v42[1] & 0xF;
      v40 = v42[3];
    }
    else
    {
      v13 = (unsigned __int64)&v42[v43];
      v35 = 0;
      if ( (unsigned __int64)(v42 + 8) > v13 )
        goto LABEL_76;
      v36 = v42 + 13;
      v37 = v42[2] & 0xF;
      v38 = v43;
      if ( (unsigned int)(unsigned __int8)v42[7] + 8 <= v43 )
        v38 = (unsigned __int8)v42[7] + 8;
      v13 = (unsigned __int64)&v42[v38];
      if ( (unsigned __int64)v36 <= v13 )
        v39 = v42[12];
      if ( (unsigned __int64)(v42 + 14) > v13 )
        v40 = 0;
      else
        v40 = *v36;
    }
    v35 = 1;
    goto LABEL_76;
  }
  v44 = 0LL;
  v68 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_10;
  v45 = *(_DWORD *)(v18 + 56);
  v46 = 0LL;
  v70 = 0;
  LODWORD(v69) = v45;
  if ( !v45 )
    goto LABEL_10;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v18 + 4 * v46 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v54 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v13 < (unsigned int)v54 )
        break;
    }
LABEL_153:
    v46 = (unsigned int)(v70 + 1);
    v70 = v46;
    if ( (unsigned int)v46 >= (unsigned int)v69 )
    {
LABEL_154:
      v57 = v66;
      goto LABEL_155;
    }
  }
  v55 = (unsigned int)v13;
  v56 = *(_DWORD *)(v13 + v18) - 64;
  if ( v56 )
  {
    v13 = (unsigned int)(v56 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v13 = v55 + 40;
        if ( v55 + 40 <= v54 )
        {
          if ( *(_DWORD *)(v55 + v18 + 12) )
            v44 = (char *)(v55 + v18 + 32);
          v42 = *(_BYTE **)(v55 + v18 + 24);
          goto LABEL_161;
        }
      }
    }
    else
    {
      v13 = v55 + 56;
      if ( v55 + 56 <= v54 )
      {
        v68 = 1;
        if ( *(_BYTE *)(v55 + v18 + 10) )
          v44 = (char *)(v55 + v18 + 24);
        v42 = *(_BYTE **)(v55 + v18 + 16);
        v43 = *(_BYTE *)(v55 + v18 + 9);
        v66 = *(_BYTE *)(v55 + v18 + 8);
      }
    }
    goto LABEL_152;
  }
  v13 = v55 + 40;
  if ( v55 + 40 > v54 )
  {
LABEL_152:
    if ( v68 )
      goto LABEL_154;
    goto LABEL_153;
  }
  if ( *(_BYTE *)(v55 + v18 + 10) )
    v44 = (char *)(v55 + v18 + 24);
  v42 = *(_BYTE **)(v55 + v18 + 16);
LABEL_161:
  v57 = *(_BYTE *)(v55 + v18 + 8);
  v43 = *(_BYTE *)(v55 + v18 + 9);
LABEL_155:
  if ( v44 )
  {
    v58 = *v44;
    v41 = 0;
    goto LABEL_163;
  }
LABEL_10:
  IofCompleteRequest((PIRP)a2, 0);
  return StorageAdapterTemperatureProperty;
}
