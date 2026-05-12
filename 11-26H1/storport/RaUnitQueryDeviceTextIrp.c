/*
 * XREFs of RaUnitQueryDeviceTextIrp @ 0x1401898F0
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x1400470E4 (RtlStringCchPrintfW.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorGetIdentityProductId @ 0x1400AABC0 (StorGetIdentityProductId.c)
 *     StorGetIdentityVendorId @ 0x1400AAC10 (StorGetIdentityVendorId.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1401B5A5C (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryDeviceTextIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD *v3; // r13
  unsigned int v6; // r15d
  _DWORD *v7; // r13
  wchar_t *Pool; // rax
  wchar_t *v9; // rsi
  bool v10; // zf
  unsigned __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r14
  char v17; // r11
  char v18; // si
  char v19; // r10
  char v20; // r15
  int v21; // eax
  char *v22; // r15
  unsigned int v23; // r13d
  unsigned __int64 v24; // r12
  __int64 v25; // r8
  int v26; // ecx
  char v27; // r12
  int *v28; // rax
  const EVENT_DESCRIPTOR *v29; // rdx
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r10
  unsigned int v34; // eax
  unsigned int v35; // r13d
  unsigned __int64 v36; // r12
  __int64 v37; // r8
  int v38; // ecx
  int v40; // eax
  __int64 v41; // rax
  _BYTE *v42; // r9
  _BYTE *v43; // rax
  _BYTE *v44; // r9
  _QWORD *DeviceType; // rax
  unsigned int v46; // r13d
  unsigned __int64 v47; // r12
  int v48; // ecx
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  int *v51; // rax
  const EVENT_DESCRIPTOR *v52; // rdx
  __int64 v53; // rdx
  _BYTE *v54; // r9
  unsigned __int8 v55; // r14
  char v56; // r11
  char v57; // si
  char v58; // r10
  char v59; // r15
  char *v60; // r15
  unsigned int v61; // r13d
  unsigned __int64 v62; // r12
  __int64 v63; // r8
  int v64; // ecx
  char v65; // r12
  char v66; // cl
  char v67; // r8
  char v68; // al
  char *v69; // r10
  unsigned int v70; // eax
  __int64 v71; // [rsp+20h] [rbp-69h]
  int v72; // [rsp+20h] [rbp-69h]
  __int64 v73; // [rsp+28h] [rbp-61h]
  char v74; // [rsp+60h] [rbp-29h]
  char v75; // [rsp+60h] [rbp-29h]
  char v76; // [rsp+61h] [rbp-28h]
  char v77; // [rsp+61h] [rbp-28h]
  char v78; // [rsp+61h] [rbp-28h]
  char v79; // [rsp+61h] [rbp-28h]
  unsigned int v80; // [rsp+64h] [rbp-25h]
  unsigned int v81; // [rsp+68h] [rbp-21h]
  unsigned int v82; // [rsp+68h] [rbp-21h]
  unsigned int v83; // [rsp+68h] [rbp-21h]
  unsigned int v84; // [rsp+68h] [rbp-21h]
  GUID v85; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v86[16]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v87[24]; // [rsp+90h] [rbp+7h] BYREF

  v2 = 0;
  v3 = *(_DWORD **)(a1 + 24);
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *v3 == 1094997074 )
  {
    v7 = v3 + 94;
  }
  else
  {
    if ( *v3 != 1314275652 )
      goto LABEL_148;
    v7 = v3 + 42;
  }
  if ( !v7 )
  {
LABEL_148:
    v10 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v10 )
      goto LABEL_214;
    v85 = 0LL;
    IoGetActivityIdIrp(a2, &v85);
    v50 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v50 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v49 = *(unsigned int *)(a2 + 48);
        v52 = &EventNonReadWriteRequestComplete;
        v72 = *(_DWORD *)(a2 + 48);
        goto LABEL_213;
      }
LABEL_214:
      IofCompleteRequest((PIRP)a2, 0);
      return 3221225485LL;
    }
    if ( *(_BYTE *)v50 != 15 )
    {
      if ( *(_BYTE *)v50 == 27 )
      {
        if ( *(_BYTE *)(v50 + 1) == 7 && !*(_DWORD *)(v50 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v51 = *(int **)(a2 + 56);
            if ( v51 )
              v2 = *v51;
            McTemplateK0pqd_EtwWriteTransfer(v49, v50, &v85, a2, v2, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_214;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v52 = &EventPnpRequestComplete;
          v72 = *(_DWORD *)(a2 + 48);
LABEL_213:
          McTemplateK0pd_EtwWriteTransfer(v49, v52, &v85, a2, v72);
          goto LABEL_214;
        }
      }
      goto LABEL_214;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_214;
    v53 = *(_QWORD *)(v50 + 8);
    v54 = 0LL;
    v75 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    if ( *(_BYTE *)(v53 + 2) == 40 )
    {
      v60 = 0LL;
      v79 = 0;
      if ( *(_DWORD *)(v53 + 20) )
        goto LABEL_214;
      v61 = 0;
      v84 = *(_DWORD *)(v53 + 56);
      if ( !v84 )
        goto LABEL_214;
      do
      {
        v49 = *(unsigned int *)(v53 + 4LL * v61 + 120);
        if ( (unsigned int)v49 >= 0x80 )
        {
          v62 = *(unsigned int *)(v53 + 16);
          if ( (unsigned int)v49 < (unsigned int)v62 )
          {
            v63 = (unsigned int)v49;
            v64 = *(_DWORD *)(v49 + v53) - 64;
            if ( v64 )
            {
              v49 = (unsigned int)(v64 - 1);
              if ( (_DWORD)v49 )
              {
                if ( (_DWORD)v49 == 1 )
                {
                  v49 = v63 + 40;
                  if ( v63 + 40 <= v62 )
                  {
                    if ( *(_DWORD *)(v63 + v53 + 12) )
                      v60 = (char *)(v63 + v53 + 32);
                    v54 = *(_BYTE **)(v63 + v53 + 24);
LABEL_173:
                    v65 = *(_BYTE *)(v63 + v53 + 8);
                    v55 = *(_BYTE *)(v63 + v53 + 9);
                    goto LABEL_182;
                  }
                }
              }
              else
              {
                v49 = v63 + 56;
                if ( v63 + 56 <= v62 )
                {
                  v79 = 1;
                  if ( *(_BYTE *)(v63 + v53 + 10) )
                    v60 = (char *)(v63 + v53 + 24);
                  v54 = *(_BYTE **)(v63 + v53 + 16);
                  v55 = *(_BYTE *)(v63 + v53 + 9);
                  v75 = *(_BYTE *)(v63 + v53 + 8);
                }
              }
            }
            else
            {
              v49 = v63 + 40;
              if ( v63 + 40 <= v62 )
              {
                if ( *(_BYTE *)(v63 + v53 + 10) )
                  v60 = (char *)(v63 + v53 + 24);
                v54 = *(_BYTE **)(v63 + v53 + 16);
                goto LABEL_173;
              }
            }
            if ( v79 )
              break;
          }
        }
        ++v61;
      }
      while ( v61 < v84 );
      v65 = v75;
LABEL_182:
      if ( !v60 )
        goto LABEL_214;
      v66 = *v60;
      v59 = 0;
    }
    else
    {
      v66 = *(_BYTE *)(v53 + 72);
      v54 = *(_BYTE **)(v53 + 32);
      v55 = *(_BYTE *)(v53 + 11);
      v65 = *(_BYTE *)(v53 + 4);
      if ( *(_BYTE *)(v53 + 2) )
        goto LABEL_214;
    }
    LOBYTE(v49) = v66 - 8;
    if ( (v49 & 0x5D) != 0 )
      goto LABEL_214;
    v67 = *(_BYTE *)(v53 + 3);
    if ( v67 == 1 || !v54 || !v55 )
    {
LABEL_207:
      if ( byte_140173441 < 0 )
      {
        if ( !v59 )
        {
          v58 = 0;
          v57 = 0;
          v56 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v49, v53, &v85, a2, *(_DWORD *)(a2 + 48), v67, v65, v56, v57, v58, a2);
      }
      goto LABEL_214;
    }
    v68 = *v54 & 0x7F;
    if ( v68 == 114 || v68 == 115 )
    {
      v49 = (unsigned __int64)&v54[v55];
      LOBYTE(v53) = 0;
      if ( (unsigned __int64)(v54 + 8) > v49 )
        goto LABEL_205;
      v57 = v54[2];
      v56 = v54[1] & 0xF;
      v58 = v54[3];
    }
    else
    {
      v49 = (unsigned __int64)&v54[v55];
      LOBYTE(v53) = 0;
      if ( (unsigned __int64)(v54 + 8) > v49 )
        goto LABEL_205;
      v69 = v54 + 13;
      v56 = v54[2] & 0xF;
      v70 = v55;
      if ( (unsigned int)(unsigned __int8)v54[7] + 8 <= v55 )
        v70 = (unsigned __int8)v54[7] + 8;
      v49 = (unsigned __int64)&v54[v70];
      if ( (unsigned __int64)v69 <= v49 )
        v57 = v54[12];
      if ( (unsigned __int64)(v54 + 14) > v49 )
        v58 = 0;
      else
        v58 = *v69;
    }
    LOBYTE(v53) = 1;
LABEL_205:
    if ( (_BYTE)v53 )
      v59 = 1;
    goto LABEL_207;
  }
  Pool = (wchar_t *)RaidAllocatePool(256LL, 512LL, 1414619474LL, *(_QWORD *)(a1 + 8));
  v9 = Pool;
  if ( Pool )
  {
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        ExFreePoolWithTag(Pool, 0x54516152u);
        v40 = -1073741637;
        v9 = 0LL;
LABEL_120:
        v10 = StorEtwLoggingEnabled == 0;
        v80 = v40;
        *(_QWORD *)(a2 + 56) = v9;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = v40;
        if ( v10 )
          goto LABEL_100;
        v85 = 0LL;
        IoGetActivityIdIrp(a2, &v85);
        v12 = *(unsigned __int8 **)(a2 + 184);
        if ( *v12 == 14 )
        {
          if ( (byte_140173442 & 8) == 0 )
            goto LABEL_100;
          v11 = *(unsigned int *)(a2 + 48);
          v29 = &EventNonReadWriteRequestComplete;
          LODWORD(v71) = *(_DWORD *)(a2 + 48);
LABEL_99:
          McTemplateK0pd_EtwWriteTransfer(v11, v29, &v85, a2, v71);
          goto LABEL_100;
        }
        v13 = *v12 - 15;
        if ( *v12 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_100;
          v14 = *((_QWORD *)v12 + 1);
          v15 = 0LL;
          v74 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = *(unsigned __int8 *)(v14 + 2);
          if ( (_BYTE)v21 == 40 )
          {
            v22 = 0LL;
            v78 = 0;
            if ( *(_DWORD *)(v14 + 20) )
              goto LABEL_100;
            v46 = 0;
            v83 = *(_DWORD *)(v14 + 56);
            if ( !v83 )
              goto LABEL_100;
            while ( 1 )
            {
              v11 = *(unsigned int *)(v14 + 4LL * v46 + 120);
              if ( (unsigned int)v11 >= 0x80 )
              {
                v47 = *(unsigned int *)(v14 + 16);
                if ( (unsigned int)v11 < (unsigned int)v47 )
                {
                  v37 = (unsigned int)v11;
                  v48 = *(_DWORD *)(v14 + v11) - 64;
                  if ( v48 )
                  {
                    v11 = (unsigned int)(v48 - 1);
                    if ( (_DWORD)v11 )
                    {
                      if ( (_DWORD)v11 == 1 )
                      {
                        v11 = v37 + 40;
                        if ( v37 + 40 <= v47 )
                        {
LABEL_72:
                          if ( *(_DWORD *)(v14 + v37 + 12) )
                            v22 = (char *)(v37 + v14 + 32);
                          v15 = *(_BYTE **)(v14 + v37 + 24);
LABEL_75:
                          v27 = *(_BYTE *)(v14 + v37 + 8);
                          v16 = *(_BYTE *)(v14 + v37 + 9);
                          goto LABEL_39;
                        }
                      }
                    }
                    else
                    {
                      v11 = v37 + 56;
                      if ( v37 + 56 <= v47 )
                      {
                        v78 = 1;
                        if ( *(_BYTE *)(v14 + v37 + 10) )
                          v22 = (char *)(v37 + v14 + 24);
                        v15 = *(_BYTE **)(v14 + v37 + 16);
                        v16 = *(_BYTE *)(v14 + v37 + 9);
                        v74 = *(_BYTE *)(v14 + v37 + 8);
                      }
                    }
                  }
                  else
                  {
                    v11 = v37 + 40;
                    if ( v37 + 40 <= v47 )
                    {
LABEL_84:
                      if ( *(_BYTE *)(v14 + v37 + 10) )
                        v22 = (char *)(v37 + v14 + 24);
                      v15 = *(_BYTE **)(v14 + v37 + 16);
                      goto LABEL_75;
                    }
                  }
                  if ( v78 )
                    goto LABEL_38;
                }
              }
              if ( ++v46 >= v83 )
              {
LABEL_38:
                v27 = v74;
                goto LABEL_39;
              }
            }
          }
          goto LABEL_44;
        }
        goto LABEL_123;
      }
      RtlStringCchPrintfW(
        Pool,
        0x100uLL,
        L"Bus Number %d, Target Id %d, LUN %d",
        *(unsigned __int8 *)(a1 + 104),
        *(unsigned __int8 *)(a1 + 105),
        *(unsigned __int8 *)(a1 + 106));
LABEL_119:
      v40 = 0;
      goto LABEL_120;
    }
    if ( (*(_DWORD *)(a1 + 1952) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x100uLL, L"VM passthrough LUN device");
      goto LABEL_119;
    }
    StorGetIdentityVendorId((__int64 *)(a1 + 112), (__int64)v86);
    StorGetIdentityProductId(a1 + 112, (__int64)v87);
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 29) + 184LL) & 0x10) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 1952) & 0x20) != 0 )
      {
        RtlStringCchPrintfW(v9, 0x100uLL, L"NVMe %hs %hs Device", v87, "ZNSDisk");
      }
      else
      {
        DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 112) & 0x1F);
        RtlStringCchPrintfW(v9, 0x100uLL, L"%hs %hs SCSI %hs Device", v86, v87, *DeviceType);
      }
      goto LABEL_119;
    }
    v41 = *(_QWORD *)(a1 + 160);
    if ( v41 )
    {
      v42 = (_BYTE *)(v41 + 8);
      v43 = (_BYTE *)(v41 + 25);
      if ( *v42 )
      {
LABEL_110:
        RtlStringCchPrintfW(v9, 0x100uLL, L"%hs %hs", v42, v43);
        goto LABEL_119;
      }
      v44 = v43;
    }
    else
    {
      v44 = *(_BYTE **)(a1 + 152);
      if ( !v44 )
      {
        v43 = v87;
        v42 = v86;
        goto LABEL_110;
      }
    }
    RtlStringCchPrintfW(v9, 0x100uLL, L"%hs", v44);
    goto LABEL_119;
  }
  *(_BYTE *)(a2 + 141) = -84;
  if ( v6 <= 1 )
  {
    v10 = StorEtwLoggingEnabled == 0;
    v80 = -1073741801;
    *(_DWORD *)(a2 + 48) = -1073741801;
    if ( v10 )
      goto LABEL_100;
    v85 = 0LL;
    IoGetActivityIdIrp(a2, &v85);
    v12 = *(unsigned __int8 **)(a2 + 184);
    if ( *v12 != 14 )
    {
      v13 = *v12 - 15;
      if ( *v12 == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_100;
        v14 = *((_QWORD *)v12 + 1);
        v15 = 0LL;
        v74 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = *(unsigned __int8 *)(v14 + 2);
        if ( (_BYTE)v21 == 40 )
        {
          v22 = 0LL;
          v77 = 0;
          if ( *(_DWORD *)(v14 + 20) )
            goto LABEL_100;
          v35 = 0;
          v82 = *(_DWORD *)(v14 + 56);
          if ( !v82 )
            goto LABEL_100;
          while ( 1 )
          {
            v11 = *(unsigned int *)(v14 + 4LL * v35 + 120);
            if ( (unsigned int)v11 >= 0x80 )
            {
              v36 = *(unsigned int *)(v14 + 16);
              if ( (unsigned int)v11 < (unsigned int)v36 )
              {
                v37 = (unsigned int)v11;
                v38 = *(_DWORD *)(v14 + v11) - 64;
                if ( v38 )
                {
                  v11 = (unsigned int)(v38 - 1);
                  if ( (_DWORD)v11 )
                  {
                    if ( (_DWORD)v11 == 1 )
                    {
                      v11 = v37 + 40;
                      if ( v37 + 40 <= v36 )
                        goto LABEL_72;
                    }
                  }
                  else
                  {
                    v11 = v37 + 56;
                    if ( v37 + 56 <= v36 )
                    {
                      v77 = 1;
                      if ( *(_BYTE *)(v14 + v37 + 10) )
                        v22 = (char *)(v37 + v14 + 24);
                      v15 = *(_BYTE **)(v14 + v37 + 16);
                      v16 = *(_BYTE *)(v14 + v37 + 9);
                      v74 = *(_BYTE *)(v14 + v37 + 8);
                    }
                  }
                }
                else
                {
                  v11 = v37 + 40;
                  if ( v37 + 40 <= v36 )
                    goto LABEL_84;
                }
                if ( v77 )
                  goto LABEL_38;
              }
            }
            if ( ++v35 >= v82 )
              goto LABEL_38;
          }
        }
        goto LABEL_44;
      }
      goto LABEL_123;
    }
LABEL_96:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_100;
    v29 = &EventNonReadWriteRequestComplete;
LABEL_98:
    LODWORD(v71) = *(_DWORD *)(a2 + 48);
    goto LABEL_99;
  }
  v10 = StorEtwLoggingEnabled == 0;
  v80 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v10 )
    goto LABEL_100;
  v85 = 0LL;
  IoGetActivityIdIrp(a2, &v85);
  v12 = *(unsigned __int8 **)(a2 + 184);
  if ( *v12 == 14 )
    goto LABEL_96;
  v13 = *v12 - 15;
  if ( *v12 != 15 )
  {
LABEL_123:
    if ( v13 != 12 )
      goto LABEL_100;
    if ( v12[1] == 7 && !*((_DWORD *)v12 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v28 = *(int **)(a2 + 56);
        if ( v28 )
          v2 = *v28;
        LODWORD(v73) = *(_DWORD *)(a2 + 48);
        LODWORD(v71) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v11, (__int64)v12, &v85, a2, v71, v73);
      }
      goto LABEL_100;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_100;
    v29 = &EventPnpRequestComplete;
    goto LABEL_98;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_100;
  v14 = *((_QWORD *)v12 + 1);
  v15 = 0LL;
  v74 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = *(unsigned __int8 *)(v14 + 2);
  if ( (_BYTE)v21 == 40 )
  {
    v22 = 0LL;
    v76 = 0;
    if ( *(_DWORD *)(v14 + 20) )
      goto LABEL_100;
    v23 = 0;
    v81 = *(_DWORD *)(v14 + 56);
    if ( !v81 )
      goto LABEL_100;
    while ( 1 )
    {
      v11 = *(unsigned int *)(v14 + 4LL * v23 + 120);
      if ( (unsigned int)v11 >= 0x80 )
      {
        v24 = *(unsigned int *)(v14 + 16);
        if ( (unsigned int)v11 < (unsigned int)v24 )
        {
          v25 = (unsigned int)v11;
          v26 = *(_DWORD *)(v11 + v14) - 64;
          if ( v26 )
          {
            v11 = (unsigned int)(v26 - 1);
            if ( (_DWORD)v11 )
            {
              if ( (_DWORD)v11 == 1 )
              {
                v11 = v25 + 40;
                if ( v25 + 40 <= v24 )
                {
                  if ( *(_DWORD *)(v25 + v14 + 12) )
                    v22 = (char *)(v25 + v14 + 32);
                  v15 = *(_BYTE **)(v25 + v14 + 24);
                  goto LABEL_24;
                }
              }
            }
            else
            {
              v11 = v25 + 56;
              if ( v25 + 56 <= v24 )
              {
                v76 = 1;
                if ( *(_BYTE *)(v25 + v14 + 10) )
                  v22 = (char *)(v25 + v14 + 24);
                v15 = *(_BYTE **)(v25 + v14 + 16);
                v16 = *(_BYTE *)(v25 + v14 + 9);
                v74 = *(_BYTE *)(v25 + v14 + 8);
              }
            }
          }
          else
          {
            v11 = v25 + 40;
            if ( v25 + 40 <= v24 )
            {
              if ( *(_BYTE *)(v25 + v14 + 10) )
                v22 = (char *)(v25 + v14 + 24);
              v15 = *(_BYTE **)(v25 + v14 + 16);
LABEL_24:
              v27 = *(_BYTE *)(v25 + v14 + 8);
              v16 = *(_BYTE *)(v25 + v14 + 9);
LABEL_39:
              if ( v22 )
              {
                v30 = *v22;
                v20 = 0;
                goto LABEL_45;
              }
              goto LABEL_100;
            }
          }
          if ( v76 )
            goto LABEL_38;
        }
      }
      if ( ++v23 >= v81 )
        goto LABEL_38;
    }
  }
LABEL_44:
  v30 = *(_BYTE *)(v14 + 72);
  v15 = *(_BYTE **)(v14 + 32);
  v16 = *(_BYTE *)(v14 + 11);
  v27 = *(_BYTE *)(v14 + 4);
  if ( v21 )
    goto LABEL_100;
LABEL_45:
  LOBYTE(v11) = v30 - 8;
  if ( (v11 & 0x5D) == 0 )
  {
    v31 = *(_BYTE *)(v14 + 3);
    if ( v31 == 1 || !v15 || !v16 )
    {
LABEL_92:
      if ( byte_140173441 < 0 )
      {
        if ( !v20 )
        {
          v18 = 0;
          v17 = 0;
          v19 = 0;
        }
        LOBYTE(v73) = v31;
        LODWORD(v71) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v11, v14, &v85, a2, v71, v73, v27, v17, v18, v19, a2);
      }
      goto LABEL_100;
    }
    v32 = *v15 & 0x7F;
    if ( v32 == 114 || v32 == 115 )
    {
      v11 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v11 )
        goto LABEL_90;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v11 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v11 )
        goto LABEL_90;
      v33 = v15 + 13;
      v17 = v15[2] & 0xF;
      v34 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v34 = (unsigned __int8)v15[7] + 8;
      v11 = (unsigned __int64)&v15[v34];
      if ( (unsigned __int64)v33 <= v11 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v11 )
        v19 = 0;
      else
        v19 = *v33;
    }
    LOBYTE(v14) = 1;
LABEL_90:
    if ( (_BYTE)v14 )
      v20 = 1;
    goto LABEL_92;
  }
LABEL_100:
  IofCompleteRequest((PIRP)a2, 0);
  return v80;
}
