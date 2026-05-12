/*
 * XREFs of RaUnitSetQOSIoctl @ 0x1400A0538
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterEnableQosWaitTimeoutCheck @ 0x140061100 (RaidAdapterEnableQosWaitTimeoutCheck.c)
 *     StorEnableSortedEventQueue @ 0x140073DA0 (StorEnableSortedEventQueue.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x140098274 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1400A710C (RaidUnitDisableWaitCheckTimer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1400BD3A0 (StorpTelemetryMarkUnitResponsive.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitSetQOSIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  int v5; // r14d
  int v7; // ebx
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  _BYTE *v10; // rax
  char v11; // al
  unsigned int *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rax
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  PDEVICE_OBJECT v21; // rcx
  unsigned __int16 v22; // dx
  unsigned int v23; // ecx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // rax
  bool v32; // zf
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  int *v35; // rax
  const EVENT_DESCRIPTOR *v36; // rdx
  __int64 v37; // rdx
  _BYTE *v38; // r9
  unsigned __int8 v39; // si
  char v40; // r11
  char v41; // di
  char v42; // r10
  char v43; // r15
  char *v44; // r15
  __int64 v45; // rax
  unsigned __int64 v46; // r12
  __int64 v47; // r8
  int v48; // ecx
  char v49; // r12
  char v50; // cl
  char v51; // al
  char v52; // r8
  char *v53; // r10
  unsigned int v54; // eax
  __int64 v56; // [rsp+20h] [rbp-89h]
  __int64 v57; // [rsp+28h] [rbp-81h]
  __int64 v58; // [rsp+30h] [rbp-79h]
  __int64 v59; // [rsp+38h] [rbp-71h]
  __int64 v60; // [rsp+40h] [rbp-69h]
  __int64 v61; // [rsp+48h] [rbp-61h]
  char v62; // [rsp+70h] [rbp-39h]
  char v63; // [rsp+71h] [rbp-38h]
  int v64; // [rsp+74h] [rbp-35h]
  unsigned int v65; // [rsp+78h] [rbp-31h]
  GUID v66; // [rsp+B8h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 1036) || *(_DWORD *)(a1 + 1044) || *(_DWORD *)(a1 + 1040) || (*(_BYTE *)(a1 + 506) & 1) != 0 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_104;
    }
    v9 = 40;
    goto LABEL_103;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 112LL) & 2) != 0 && !RaidIsUnitControlSupported(a1, 31) )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_104;
    }
    v9 = 41;
LABEL_103:
    WPP_SF_q((__int64)v8->AttachedDevice, v9, (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1);
LABEL_104:
    v7 = -1073741637;
    goto LABEL_105;
  }
  v10 = *(_BYTE **)(a1 + 112);
  if ( v10 )
  {
    v11 = *v10 & 0x1F;
    if ( v11 )
    {
      if ( v11 != 20 )
      {
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          goto LABEL_104;
        }
        v9 = 42;
        goto LABEL_103;
      }
    }
  }
  if ( *(_DWORD *)(v2 + 16) < 0x24u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Bu,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        a1);
    }
    v7 = -1073741820;
    goto LABEL_105;
  }
  if ( *(_DWORD *)v3 != 36 || *(_DWORD *)(v3 + 4) != 36 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_98;
    }
    v22 = 44;
    goto LABEL_97;
  }
  if ( !*(_BYTE *)(v3 + 8) )
  {
    if ( *(_BYTE *)(a1 + 3368) )
    {
      v12 = *(unsigned int **)(a1 + 560);
      v13 = *v12 & 0xFFFFFFFD;
      *v12 = v13;
      if ( (v13 & 4) == 0 )
        *v12 = v13 & 0xFFFFFFFE;
      v14 = *(_QWORD *)(a1 + 24);
      *(_BYTE *)(a1 + 3368) = 0;
      *(_QWORD *)(a1 + 3380) = 0LL;
      *(_QWORD *)(a1 + 3388) = 0LL;
      *(_DWORD *)(a1 + 3376) = 0;
      *(_QWORD *)(a1 + 3408) = -1LL;
      if ( (*(_BYTE *)(v14 + 112) & 2) == 0
        || ((Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(),
             v15 = *(_DWORD **)(a1 + 24),
             *v15 != 1094997074)
          ? (*v15 != 1314275652
           ? (v16 = 0LL)
           : (v16 = (__int64)(v15 + 42)))
          : (v16 = (__int64)(v15 + 94)),
            v7 = RaCallMiniportUnitControl(v16),
            v7 >= 0) )
      {
        if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
        {
          if ( (byte_140173444 & 4) != 0 )
          {
            v17 = *(_DWORD *)(a1 + 104);
            McTemplateK0zqjuuujsssq_EtwWriteTransfer(
              v17 >> 8,
              &EventUnitResponsive,
              a1 + 242,
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4784LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_QWORD *)(a1 + 24) + 5128LL,
              v17,
              SBYTE1(v17),
              SBYTE2(v17),
              a1 + 2104,
              (const char *)(a1 + 168),
              (const char *)(a1 + 177),
              (const char *)(a1 + 242),
              3);
          }
          StorpTelemetryMarkUnitResponsive(a1);
          *(_BYTE *)(a1 + 506) &= ~2u;
        }
        RaidUnitDisableWaitCheckTimer(a1);
        *(_BYTE *)(a1 + 3396) = 1;
        v7 = 0;
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Du,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        a1);
    }
    goto LABEL_105;
  }
  v18 = *(_DWORD *)(v3 + 20);
  if ( v18 < 0x3E8 || v18 != 1000 * (v18 / 0x3E8) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_98;
    }
    v22 = 46;
    goto LABEL_97;
  }
  v19 = *(_DWORD *)(v3 + 24);
  if ( v19 < 0x3E8 || v19 != 1000 * (v19 / 0x3E8) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_98;
    }
    v22 = 47;
    goto LABEL_97;
  }
  v20 = *(_DWORD *)(v3 + 16);
  if ( v20 != -1 && v20 != 500 * (v20 / 0x1F4) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_98;
    }
    v22 = 48;
LABEL_97:
    WPP_SF_q((__int64)v21->AttachedDevice, v22, (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1);
LABEL_98:
    v7 = -1073741811;
    goto LABEL_105;
  }
  v23 = *(_DWORD *)(v3 + 28);
  if ( v23 != -1 && v23 != 500 * (v23 / 0x1F4) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_98;
    }
    v22 = 49;
    goto LABEL_97;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 112LL) & 2) == 0
    || ((Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(),
         v24 = *(_DWORD **)(a1 + 24),
         *v24 != 1094997074)
      ? (*v24 != 1314275652
       ? (v25 = 0LL)
       : (v25 = (__int64)(v24 + 42)))
      : (v25 = (__int64)(v24 + 94)),
        v7 = RaCallMiniportUnitControl(v25),
        v7 >= 0) )
  {
    *(_DWORD *)(a1 + 3372) = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(a1 + 3384) = *(_DWORD *)(v3 + 20) / 0x3E8u;
    v26 = *(_DWORD *)(v3 + 16);
    if ( v26 == -1 )
      v27 = -1;
    else
      v27 = v26 / 0x1F4;
    *(_DWORD *)(a1 + 3392) = v27;
    *(_DWORD *)(a1 + 3388) = *(_DWORD *)(v3 + 24) / 0x3E8u;
    v28 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(a1 + 3380) = v28;
    v29 = *(_DWORD *)(v3 + 28);
    if ( v29 == -1 )
      v30 = -1;
    else
      v30 = v29 / 0x1F4;
    *(_DWORD *)(a1 + 3376) = v30;
    if ( v27 == -1 && !v28 && v30 == -1 )
    {
      RaidUnitDisableWaitCheckTimer(a1);
    }
    else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3400), 1, 0) )
    {
      RaidAdapterEnableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
    }
    v31 = 10000000
        * (*(_DWORD *)(a1 + 3384) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 3376) + *(_DWORD *)(a1 + 3392)) >> 1));
    if ( (unsigned int)v31 > 0x11E1A300 )
      v31 = 300000000LL;
    *(_QWORD *)(a1 + 3408) = v31;
    if ( !*(_BYTE *)(a1 + 3368) )
    {
      StorEnableSortedEventQueue(*(int **)(a1 + 560), 1);
      *(_BYTE *)(a1 + 3368) = 1;
      *(_BYTE *)(a1 + 3396) = 1;
    }
  }
LABEL_105:
  v32 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v32 )
    goto LABEL_171;
  v66 = 0LL;
  IoGetActivityIdIrp(a2, &v66);
  v34 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v34 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_171;
    v36 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_170;
  }
  if ( *(_BYTE *)v34 != 15 )
  {
    if ( *(_BYTE *)v34 != 27 )
      goto LABEL_171;
    if ( *(_BYTE *)(v34 + 1) == 7 && !*(_DWORD *)(v34 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v35 = *(int **)(a2 + 56);
        if ( v35 )
          v5 = *v35;
        LODWORD(v57) = *(_DWORD *)(a2 + 48);
        LODWORD(v56) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v33, v34, &v66, a2, v56, v57);
      }
      goto LABEL_171;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_171;
    v36 = &EventPnpRequestComplete;
LABEL_170:
    LODWORD(v56) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v33, v36, &v66, a2, v56);
    goto LABEL_171;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_171;
  v37 = *(_QWORD *)(v34 + 8);
  v38 = 0LL;
  v62 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( *(_BYTE *)(v37 + 2) != 40 )
  {
    v50 = *(_BYTE *)(v37 + 72);
    v38 = *(_BYTE **)(v37 + 32);
    v39 = *(_BYTE *)(v37 + 11);
    v49 = *(_BYTE *)(v37 + 4);
    if ( *(_BYTE *)(v37 + 2) )
      goto LABEL_171;
LABEL_145:
    LOBYTE(v33) = v50 - 8;
    if ( (v33 & 0x5D) != 0 )
      goto LABEL_171;
    if ( *(_BYTE *)(v37 + 3) == 1 || !v38 || !v39 )
      goto LABEL_164;
    v51 = *v38 & 0x7F;
    if ( v51 == 114 || v51 == 115 )
    {
      v33 = (unsigned __int64)&v38[v39];
      v52 = 0;
      if ( (unsigned __int64)(v38 + 8) > v33 )
        goto LABEL_162;
      v41 = v38[2];
      v40 = v38[1] & 0xF;
      v42 = v38[3];
    }
    else
    {
      v33 = (unsigned __int64)&v38[v39];
      v52 = 0;
      if ( (unsigned __int64)(v38 + 8) > v33 )
        goto LABEL_162;
      v53 = v38 + 13;
      v40 = v38[2] & 0xF;
      v54 = v39;
      if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
        v54 = (unsigned __int8)v38[7] + 8;
      v33 = (unsigned __int64)&v38[v54];
      if ( (unsigned __int64)v53 <= v33 )
        v41 = v38[12];
      if ( (unsigned __int64)(v38 + 14) > v33 )
        v42 = 0;
      else
        v42 = *v53;
    }
    v52 = 1;
LABEL_162:
    if ( v52 )
      v43 = 1;
LABEL_164:
    if ( byte_140173441 < 0 )
    {
      if ( !v43 )
      {
        v42 = 0;
        v41 = 0;
        v40 = 0;
      }
      LOBYTE(v61) = v42;
      LOBYTE(v60) = v41;
      LOBYTE(v59) = v40;
      LOBYTE(v58) = v49;
      LOBYTE(v57) = *(_BYTE *)(v37 + 3);
      LODWORD(v56) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v33, v37, &v66, a2, v56, v57, v58, v59, v60, v61, a2);
    }
    goto LABEL_171;
  }
  v44 = 0LL;
  v63 = 0;
  if ( !*(_DWORD *)(v37 + 20) )
  {
    v45 = 0LL;
    v64 = 0;
    v65 = *(_DWORD *)(v37 + 56);
    if ( v65 )
    {
      do
      {
        v33 = *(unsigned int *)(v37 + 4 * v45 + 120);
        if ( (unsigned int)v33 >= 0x80 )
        {
          v46 = *(unsigned int *)(v37 + 16);
          if ( (unsigned int)v33 < (unsigned int)v46 )
          {
            v47 = (unsigned int)v33;
            v48 = *(_DWORD *)(v37 + v33) - 64;
            if ( v48 )
            {
              v33 = (unsigned int)(v48 - 1);
              if ( (_DWORD)v33 )
              {
                if ( (_DWORD)v33 == 1 )
                {
                  v33 = v47 + 40;
                  if ( v47 + 40 <= v46 )
                  {
                    if ( *(_DWORD *)(v37 + v47 + 12) )
                      v44 = (char *)(v47 + v37 + 32);
                    v38 = *(_BYTE **)(v37 + v47 + 24);
LABEL_130:
                    v49 = *(_BYTE *)(v37 + v47 + 8);
                    v39 = *(_BYTE *)(v37 + v47 + 9);
                    goto LABEL_139;
                  }
                }
              }
              else
              {
                v33 = v47 + 56;
                if ( v47 + 56 <= v46 )
                {
                  v63 = 1;
                  if ( *(_BYTE *)(v37 + v47 + 10) )
                    v44 = (char *)(v47 + v37 + 24);
                  v38 = *(_BYTE **)(v37 + v47 + 16);
                  v39 = *(_BYTE *)(v37 + v47 + 9);
                  v62 = *(_BYTE *)(v37 + v47 + 8);
                }
              }
            }
            else
            {
              v33 = v47 + 40;
              if ( v47 + 40 <= v46 )
              {
                if ( *(_BYTE *)(v37 + v47 + 10) )
                  v44 = (char *)(v47 + v37 + 24);
                v38 = *(_BYTE **)(v37 + v47 + 16);
                goto LABEL_130;
              }
            }
            if ( v63 )
              break;
          }
        }
        v45 = (unsigned int)(v64 + 1);
        v64 = v45;
      }
      while ( (unsigned int)v45 < v65 );
      v49 = v62;
LABEL_139:
      if ( v44 )
      {
        v50 = *v44;
        v43 = 0;
        goto LABEL_145;
      }
    }
  }
LABEL_171:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
