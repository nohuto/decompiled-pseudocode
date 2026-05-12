/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1401BB140
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaidUnitGetInitialTimestamp @ 0x140049ED0 (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitGetPowerCycleCount @ 0x14004F750 (RaidUnitGetPowerCycleCount.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidUnlockDeviceQueue @ 0x140059A24 (RaidUnlockDeviceQueue.c)
 *     RaidIsDeviceQueueLocked @ 0x14005BB5C (RaidIsDeviceQueueLocked.c)
 *     RaidGetD3ColdCapability @ 0x14005C47C (RaidGetD3ColdCapability.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidGetD3ColdInterface @ 0x14007FA64 (RaidGetD3ColdInterface.c)
 *     RaidUnitConvertToNormalUnit @ 0x1400A709C (RaidUnitConvertToNormalUnit.c)
 *     RaidUnitRegisterInterfaces @ 0x1400A8BDC (RaidUnitRegisterInterfaces.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaUnitInitializeWMI @ 0x14018FB94 (RaUnitInitializeWMI.c)
 *     RaidUnitGetDeviceParameters @ 0x1401BB894 (RaidUnitGetDeviceParameters.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rcx
  char D3ColdCapability; // al
  char v7; // cl
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // cl
  _BYTE *v13; // rcx
  char v14; // al
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // rdx
  char v24; // r12
  _BYTE *v25; // r9
  unsigned __int8 v26; // r14
  char v27; // r10
  char v28; // di
  char v29; // r11
  char v30; // r15
  char *v31; // r15
  unsigned int v32; // ecx
  __int64 v33; // rax
  unsigned __int64 v34; // r13
  __int64 v35; // r8
  int v36; // ecx
  char v37; // cl
  char v38; // al
  char v39; // r8
  char *v40; // r11
  unsigned int v41; // eax
  __int64 v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+28h] [rbp-D8h]
  char v45; // [rsp+60h] [rbp-A0h] BYREF
  char v46; // [rsp+61h] [rbp-9Fh] BYREF
  char v47; // [rsp+62h] [rbp-9Eh] BYREF
  char v48; // [rsp+63h] [rbp-9Dh] BYREF
  char v49; // [rsp+64h] [rbp-9Ch] BYREF
  char v50; // [rsp+65h] [rbp-9Bh] BYREF
  char v51; // [rsp+66h] [rbp-9Ah] BYREF
  char v52; // [rsp+67h] [rbp-99h] BYREF
  int v53; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+6Ch] [rbp-94h] BYREF
  int v55; // [rsp+70h] [rbp-90h] BYREF
  int v56; // [rsp+74h] [rbp-8Ch] BYREF
  int v57; // [rsp+78h] [rbp-88h] BYREF
  int v58; // [rsp+7Ch] [rbp-84h] BYREF
  int v59; // [rsp+80h] [rbp-80h] BYREF
  GUID v60; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  int *v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  char *v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  char *v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  char *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  _BYTE v74[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v75[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v76[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v77[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v78[16]; // [rsp+160h] [rbp+60h] BYREF
  char *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  char *v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  char *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  char *v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  char *v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  GUID *v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  int *v91; // [rsp+1D0h] [rbp+D0h]
  __int64 v92; // [rsp+1D8h] [rbp+D8h]
  int *v93; // [rsp+1E0h] [rbp+E0h]
  __int64 v94; // [rsp+1E8h] [rbp+E8h]
  int *v95; // [rsp+1F0h] [rbp+F0h]
  __int64 v96; // [rsp+1F8h] [rbp+F8h]
  int *v97; // [rsp+200h] [rbp+100h]
  __int64 v98; // [rsp+208h] [rbp+108h]
  int *v99; // [rsp+210h] [rbp+110h]
  __int64 v100; // [rsp+218h] [rbp+118h]
  unsigned int *v101; // [rsp+220h] [rbp+120h]
  __int64 v102; // [rsp+228h] [rbp+128h]

  v2 = 0;
  if ( *(_DWORD *)(a1 + 56) != 1 )
  {
    RaUnitInitializeWMI(a1);
    RaidUnitRegisterInterfaces(a1);
    if ( (unsigned int)RaidIsDeviceQueueLocked(a1 + 720) )
    {
      RaidUnlockDeviceQueue(v5);
      RaUnitUnlockForwardIo(a1, 1);
      RaidUnitRestartQueue(a1, 0);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 56), 1);
    RaidUnitConvertToNormalUnit(a1);
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1880)) >= 0 && *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 1952) & 8) != 0
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1880)), v7 = 2, !D3ColdCapability) )
      {
        v7 = 0;
      }
      *(_BYTE *)(a1 + 505) = v7 | *(_BYTE *)(a1 + 505) & 0xFD;
    }
    else
    {
      *(_BYTE *)(a1 + 505) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v60 = 0LL;
      LOWORD(v60.Data1) = 1;
      HIWORD(v60.Data1) = *(_WORD *)(v8 + 56);
      *(_WORD *)v60.Data4 = *(_WORD *)(a1 + 104);
      v60.Data4[2] = *(_BYTE *)(a1 + 106);
      *(_DWORD *)&v60.Data2 = 4;
      if ( *(_DWORD *)v8 == 1094997074 )
      {
        v9 = v8 + 376;
      }
      else if ( *(_DWORD *)v8 == 1314275652 )
      {
        v9 = v8 + 168;
      }
      else
      {
        v9 = 0LL;
      }
      RaCallMiniportUnitControl(v9);
    }
    *(_BYTE *)(a1 + 505) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  *(_QWORD *)(a1 + 3416) = 0x10000000LL;
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  if ( *(_QWORD *)(a1 + 112) && (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v10, 0x400000000000LL) )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v63 = 16LL;
    v65 = 16LL;
    v62 = v11 + 5128;
    v64 = a1 + 2104;
    v53 = *(_DWORD *)(v11 + 56);
    v66 = &v53;
    v45 = *(_BYTE *)(a1 + 104);
    v68 = &v45;
    v47 = *(_BYTE *)(a1 + 105);
    v70 = &v47;
    v48 = *(_BYTE *)(a1 + 106);
    v72 = &v48;
    v67 = 4LL;
    v69 = 1LL;
    v71 = 1LL;
    v73 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v74, *(const wchar_t **)(v11 + 4784));
    tlgCreate1Sz_char((__int64)v75, (_BYTE *)(a1 + 168));
    tlgCreate1Sz_char((__int64)v76, (_BYTE *)(a1 + 177));
    tlgCreate1Sz_char((__int64)v77, (_BYTE *)(a1 + 498));
    tlgCreate1Sz_char((__int64)v78, (_BYTE *)(a1 + 242));
    v12 = *(_BYTE *)(a1 + 136);
    v79 = &v49;
    v49 = v12 & 1;
    v13 = *(_BYTE **)(a1 + 112);
    v80 = 1LL;
    v14 = *v13 & 0x1F;
    v82 = 1LL;
    v50 = v14;
    v81 = &v50;
    v51 = *v13 >> 5;
    v83 = &v51;
    v84 = 1LL;
    v15 = v13[1] & 0x7F;
    v86 = 1LL;
    v52 = v15;
    v85 = &v52;
    v46 = v13[1] >> 7;
    v87 = &v46;
    *(_QWORD *)&v60.Data1 = *(_QWORD *)(a1 + 3360);
    v89 = &v60;
    v55 = *(_DWORD *)(a1 + 3352);
    v88 = 1LL;
    v90 = 8LL;
    v91 = &v55;
    v56 = *(_DWORD *)(a1 + 1928);
    v93 = &v56;
    v57 = *(_DWORD *)(a1 + 1932);
    v95 = &v57;
    v58 = *(_DWORD *)(a1 + 1936);
    v97 = &v58;
    v59 = *(_DWORD *)(a1 + 1940);
    v99 = &v59;
    v54 = *(_DWORD *)(a1 + 1948);
    v101 = &v54;
    v92 = 4LL;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    v100 = 4LL;
    v102 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)v13, (unsigned __int8 *)dword_14016045F, v16, v17, 0x19u, &v61);
  }
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v18 )
    goto LABEL_89;
  v60 = 0LL;
  IoGetActivityIdIrp(a2, &v60);
  v20 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_89;
    v22 = &EventNonReadWriteRequestComplete;
    goto LABEL_88;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_89;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v21 = *(int **)(a2 + 56);
        if ( v21 )
          v2 = *v21;
        LODWORD(v44) = *(_DWORD *)(a2 + 48);
        LODWORD(v43) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v19, v20, &v60, a2, v43, v44);
      }
      goto LABEL_89;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_89;
    v22 = &EventPnpRequestComplete;
LABEL_88:
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v19, v22, &v60, a2, v43);
    goto LABEL_89;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_89;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = 0;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( *(_BYTE *)(v23 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v23 + 72);
    v25 = *(_BYTE **)(v23 + 32);
    v26 = *(_BYTE *)(v23 + 11);
    v24 = *(_BYTE *)(v23 + 4);
    if ( *(_BYTE *)(v23 + 2) )
      goto LABEL_89;
LABEL_63:
    LOBYTE(v19) = v37 - 8;
    if ( (v19 & 0x5D) != 0 )
      goto LABEL_89;
    if ( *(_BYTE *)(v23 + 3) == 1 || !v25 || !v26 )
      goto LABEL_82;
    v38 = *v25 & 0x7F;
    if ( v38 == 114 || v38 == 115 )
    {
      v19 = (unsigned __int64)&v25[v26];
      v39 = 0;
      if ( (unsigned __int64)(v25 + 8) > v19 )
        goto LABEL_80;
      v28 = v25[2];
      v27 = v25[1] & 0xF;
      v29 = v25[3];
    }
    else
    {
      v19 = (unsigned __int64)&v25[v26];
      v39 = 0;
      if ( (unsigned __int64)(v25 + 8) > v19 )
        goto LABEL_80;
      v40 = v25 + 13;
      v27 = v25[2] & 0xF;
      v41 = v26;
      if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
        v41 = (unsigned __int8)v25[7] + 8;
      v19 = (unsigned __int64)&v25[v41];
      if ( (unsigned __int64)v40 <= v19 )
        v28 = v25[12];
      if ( (unsigned __int64)(v25 + 14) > v19 )
        v29 = 0;
      else
        v29 = *v40;
    }
    v39 = 1;
LABEL_80:
    if ( v39 )
      v30 = 1;
LABEL_82:
    if ( byte_140173441 < 0 )
    {
      if ( !v30 )
      {
        v29 = 0;
        v28 = 0;
        v27 = 0;
      }
      LOBYTE(v44) = *(_BYTE *)(v23 + 3);
      LODWORD(v43) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v19, v23, &v60, a2, v43, v44, v24, v27, v28, v29, a2);
    }
    goto LABEL_89;
  }
  v31 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v23 + 20) )
    goto LABEL_89;
  v32 = *(_DWORD *)(v23 + 56);
  v33 = 0LL;
  v53 = 0;
  v54 = v32;
  if ( !v32 )
    goto LABEL_89;
  while ( 1 )
  {
    v19 = *(unsigned int *)(v23 + 4 * v33 + 120);
    if ( (unsigned int)v19 >= 0x80 )
    {
      v34 = *(unsigned int *)(v23 + 16);
      if ( (unsigned int)v19 < (unsigned int)v34 )
        break;
    }
LABEL_54:
    v33 = (unsigned int)(v53 + 1);
    v53 = v33;
    if ( (unsigned int)v33 >= v54 )
      goto LABEL_60;
  }
  v35 = (unsigned int)v19;
  v36 = *(_DWORD *)(v19 + v23) - 64;
  if ( v36 )
  {
    v19 = (unsigned int)(v36 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 == 1 )
      {
        v19 = v35 + 40;
        if ( v35 + 40 <= v34 )
        {
          if ( *(_DWORD *)(v35 + v23 + 12) )
            v31 = (char *)(v35 + v23 + 32);
          v25 = *(_BYTE **)(v35 + v23 + 24);
          goto LABEL_59;
        }
      }
    }
    else
    {
      v19 = v35 + 56;
      if ( v35 + 56 <= v34 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v35 + v23 + 10) )
          v31 = (char *)(v35 + v23 + 24);
        v24 = *(_BYTE *)(v35 + v23 + 8);
        v25 = *(_BYTE **)(v35 + v23 + 16);
        v26 = *(_BYTE *)(v35 + v23 + 9);
      }
    }
    goto LABEL_53;
  }
  v19 = v35 + 40;
  if ( v35 + 40 > v34 )
  {
LABEL_53:
    if ( v45 )
      goto LABEL_60;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v35 + v23 + 10) )
    v31 = (char *)(v35 + v23 + 24);
  v25 = *(_BYTE **)(v35 + v23 + 16);
LABEL_59:
  v26 = *(_BYTE *)(v35 + v23 + 9);
  v24 = *(_BYTE *)(v35 + v23 + 8);
LABEL_60:
  if ( v31 )
  {
    v37 = *v31;
    v30 = 0;
    goto LABEL_63;
  }
LABEL_89:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
