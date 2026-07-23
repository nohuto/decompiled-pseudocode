/*
 * XREFs of PiDevCfgProcessDevice @ 0x140AE7A3C
 * Callers:
 *     PpDevCfgProcessDevice @ 0x140B466DC (PpDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObject @ 0x14048D5DC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404D9FFC (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407A76B0 (PnpUpdateRebootRequiredReason.c)
 *     PiDevCfgMigrateRootDevice @ 0x1407ACE1C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1407ADE78 (PiDevCfgRequestDriverConfigurations.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1407B8054 (PiAuditDeviceEnableDisableRequest.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x140A19290 (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFreeDriverNode @ 0x140AE6B84 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AE836C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetObjectProperty @ 0x140B0F6C0 (PiDevCfgSetObjectProperty.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, char *a2, char a3)
{
  int v5; // edi
  char v6; // r12
  bool v7; // bl
  int v8; // r15d
  __int64 v9; // r13
  int inited; // r14d
  char v11; // al
  char *v12; // r14
  int v13; // eax
  bool v14; // al
  int v15; // eax
  unsigned int v16; // eax
  char *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  const WCHAR *v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // edx
  char v33; // bl
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // r12
  __int64 v37; // r13
  const WCHAR *v38; // r15
  char v39; // di
  int v40; // ebx
  int v41; // ebx
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  int v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+6Ch] [rbp-94h] BYREF
  int v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  int v51; // [rsp+90h] [rbp-70h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v54[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+D0h] [rbp-30h] BYREF
  PCWSTR SourceString; // [rsp+D8h] [rbp-28h]
  __int64 v58; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v60; // [rsp+140h] [rbp+40h] BYREF
  int v61; // [rsp+148h] [rbp+48h]
  PVOID *v62; // [rsp+150h] [rbp+50h]
  int v63; // [rsp+15Ch] [rbp+5Ch]
  int v64; // [rsp+160h] [rbp+60h]
  __int64 *v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+170h] [rbp+70h]
  PVOID *v67; // [rsp+178h] [rbp+78h]
  int v68; // [rsp+184h] [rbp+84h]
  int v69; // [rsp+188h] [rbp+88h]
  char v70; // [rsp+1E0h] [rbp+E0h]
  char *v72; // [rsp+1E8h] [rbp+E8h]
  char v74; // [rsp+1F8h] [rbp+F8h]

  v55 = 0LL;
  memset_0(&v56, 0, 0x58uLL);
  P[0] = 0LL;
  v5 = 0;
  P[1] = 0LL;
  v6 = 0;
  v54[0] = 0LL;
  v7 = 0;
  v54[1] = 0LL;
  v8 = 0;
  v47 = 0LL;
  v42 = 0;
  v46 = 0;
  v70 = 0;
  v44 = 0;
  v50 = 0LL;
  v43 = 0;
  v53 = 0LL;
  v74 = 0;
  v9 = a1 + 40;
  v45 = 1;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_40;
  }
  v55 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, &v56);
  if ( inited >= 0 )
  {
    v11 = v56;
    if ( (a3 & 1) != 0 )
    {
      v11 = v56 | 1;
      v56 |= 1u;
    }
    v12 = a2;
    if ( !a2 )
      v12 = (char *)v58;
    v72 = v12;
    if ( (v11 & 1) != 0 || PnpBootMode )
      goto LABEL_8;
    memset_0(&v60, 0, 0x50uLL);
    v63 = 6;
    v61 = 8210;
    v60 = DEVPKEY_Device_PendingConfigurationIds;
    v66 = 8210;
    v26 = *(_QWORD *)(a1 + 48);
    v62 = P;
    v65 = DEVPKEY_Device_RequestConfigurationIds;
    v67 = v54;
    v68 = 6;
    inited = PiDevCfgQueryObjectProperties(6, v26, 1, (_DWORD)v12, (__int64)&v60, 2);
    if ( inited >= 0 )
    {
      if ( v64 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
      if ( v69 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)v54, 0LL);
      if ( P[1] && !*(_WORD *)P[1] )
      {
        v7 = 1;
        v8 = -1073740656;
        goto LABEL_15;
      }
LABEL_8:
      inited = PiDevCfgFindDeviceDriver((__int64)&v56, (wchar_t *)P[1], &v47);
      if ( inited >= 0 )
      {
        if ( v54[1] )
        {
          inited = PiDevCfgRequestDriverConfigurations((__int64)&v56, v47);
        }
        else
        {
          v13 = PiDevCfgConfigureDevice(a1, (__int64)&v56, v47, &v42, &v46);
          inited = v13;
          if ( v13 >= 0 )
            v5 = v42;
          v14 = v13 >= 0;
          v70 = v14;
          v6 = v14;
          if ( inited != -1073740653 )
          {
            v70 = v14;
            if ( inited != -1073740651 )
            {
              v74 = 1;
              v70 = v14;
            }
          }
        }
      }
LABEL_15:
      if ( P[1] && (v47 || v7) )
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)&v56, *(_QWORD *)(a1 + 48), 1, (__int64)v72);
      if ( v54[1] )
      {
        v17 = v72;
LABEL_33:
        if ( v74 )
        {
          v22 = *(_QWORD *)(v9 + 8);
          v43 = 8;
          if ( (int)PnpGetObjectProperty(
                      *(__int64 *)&PiPnpRtlCtx,
                      v22,
                      1,
                      v17,
                      0LL,
                      (__int64)DEVPKEY_Device_RebootRequiredReason,
                      &v45,
                      (__int64)&v50,
                      8u,
                      (__int64)&v43,
                      0) >= 0
            && v45 == 9
            && v43 == 8 )
          {
            v23 = v50;
          }
          else
          {
            v23 = 0LL;
            v50 = 0LL;
          }
          PiDevCfgLogDeviceConfigured(a1, (unsigned int)&v56, v47, v46, inited, v23, (__int64)&v53);
        }
        goto LABEL_34;
      }
      if ( !P[1] )
      {
        if ( v7 )
          goto LABEL_121;
        if ( v47 )
        {
          if ( *(int *)(v47 + 444) >= 0 )
            goto LABEL_21;
          v8 = *(_DWORD *)(v47 + 444);
LABEL_121:
          v35 = PiDevCfgConfigureDevice(a1, (__int64)&v56, 0LL, &v42, &v46);
          inited = v35;
          if ( v35 < 0 )
          {
            v70 = v6;
            if ( v35 == -1073740653 )
              goto LABEL_21;
            v70 = v6;
            if ( v35 == -1073740651 )
              goto LABEL_21;
          }
          else
          {
            v5 = v42;
            v70 = 1;
            switch ( v8 )
            {
              case -1073740656:
                v44 = -536870360;
                break;
              case -1073740655:
                v44 = -536870320;
                break;
              case -1073740654:
                v44 = -536870319;
                break;
              case -1073740653:
                v44 = -536870318;
                break;
              case -1073740652:
                v44 = -536870375;
                break;
            }
          }
          v74 = 1;
LABEL_21:
          if ( v70 )
          {
            if ( PnpBootMode || (a3 & 2) != 0 )
              v5 |= 0x40000u;
            v15 = *(_DWORD *)(a1 + 704);
            if ( (v5 & 0x40) != 0 )
              v16 = v15 & 0xFFFFFFFE;
            else
              v16 = v15 | 1;
            *(_DWORD *)(a1 + 704) = v16;
          }
          v17 = v72;
          v18 = *(_QWORD *)(a1 + 48);
          v43 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v18,
                      (__int64)v72,
                      0xBu,
                      (__int64)&v45,
                      (__int64)&v42,
                      (__int64)&v43,
                      0) < 0
            || v45 != 4
            || v43 != 4 )
          {
            v42 = 0;
          }
          v20 = *(_DWORD *)(a1 + 396) & 0x2000;
          if ( inited >= 0 )
          {
            v42 &= 0xFFF7FB9F;
            v5 &= ~0x20u;
            if ( v20 )
            {
              v28 = *(unsigned int *)(a1 + 404);
              if ( (_DWORD)v28 == 1 || (unsigned int)v28 <= 0x38 && (v29 = 0x100000010040000LL, _bittest64(&v29, v28)) )
                PipClearDevNodeProblem(a1);
            }
            v24 = *(_DWORD *)(a1 + 300);
            if ( v24 == 772 || v24 == 788 || v24 == 771 )
            {
              v25 = *(_DWORD *)(a1 + 396);
              if ( (v25 & 0x6000) != 0 )
              {
                if ( (v25 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v46 & 0x70) == 0 )
                {
                  PipClearDevNodeProblem(a1);
                  PipClearDevNodeUserFlags(a1, 4);
                }
              }
              else if ( (v46 & 0x70) == 0 || PnpBootMode )
              {
                if ( (v5 & 0x40) != 0 )
                  PipSetDevNodeProblem(a1, 28, v8);
              }
              else
              {
                v30 = 0LL;
                if ( (v46 & 0x10) != 0 )
                {
                  v30 = 128LL;
                  v31 = 128LL;
                  v50 = 128LL;
                }
                else
                {
                  v31 = v50;
                }
                if ( (v46 & 0x20) != 0 )
                {
                  v31 = v30 | 0x10;
                  v50 = v30 | 0x10;
                  v30 |= 0x10uLL;
                }
                if ( (v46 & 0x40) != 0 )
                {
                  v31 = v30 | 0x200;
                  v50 = v30 | 0x200;
                }
                PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v19, v31);
                PipSetDevNodeProblem(a1, 14, -1073741102);
                PipSetDevNodeUserFlags(a1, 4u);
              }
            }
            if ( v44 && (v5 & 0x40) != 0 || (v56 & 1) == 0 )
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)&v56, *(_QWORD *)(a1 + 48), 1, (__int64)v72);
          }
          else if ( v20 )
          {
            v32 = *(_DWORD *)(a1 + 404);
            if ( v32 == 1 || v32 == 18 )
              PipSetDevNodeProblem(a1, v32, inited);
          }
          if ( v70 || v5 )
          {
            v42 |= v5;
            v36 = *(_QWORD *)&PiPnpRtlCtx;
            v37 = v58;
            v38 = SourceString;
            v39 = 0;
            v40 = (v56 & 1) << 17;
            DestinationString = 0LL;
            v48 = 0;
            v51 = 0;
            v49 = 0;
            if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
            {
              v48 = 4;
              if ( (int)CmGetDeviceRegProp(v36, (__int64)v38, v37, 0xBu, (__int64)&v51, (__int64)&v49, (__int64)&v48, 0) < 0
                || v48 != 4
                || v51 != 4 )
              {
                v49 = 0;
              }
              v39 = v42;
            }
            v41 = CmSetDeviceRegProp(v36, (__int64)v38, v37, 0xBu, 4, (__int64)&v42, 4, v40);
            if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
            {
              RtlInitUnicodeString(&DestinationString, v38);
              PiAuditDeviceEnableDisableRequest((__int64)&DestinationString, v49, v39, v41 >= 0);
            }
            v9 = a1 + 40;
            v17 = v72;
            if ( v70 )
            {
              v27 = *(const WCHAR **)(a1 + 48);
              v53 = MEMORY[0xFFFFF78000000014];
              PiPnpRtlSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                v27,
                1,
                v72,
                0LL,
                &DEVPKEY_Device_InstallDate,
                16,
                (STRSAFE_PCNZWCH)&v53,
                8u,
                (v56 & 1) << 17);
              if ( (unsigned int)PnpGetObjectProperty(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   *(_QWORD *)(a1 + 48),
                                   1,
                                   v72,
                                   0LL,
                                   (__int64)&DEVPKEY_Device_FirstInstallDate,
                                   &v45,
                                   0LL,
                                   0,
                                   (__int64)&v43,
                                   0) != -1073741789
                || v43 != 8 )
              {
                PiPnpRtlSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(const WCHAR **)(a1 + 48),
                  1,
                  v72,
                  0LL,
                  &DEVPKEY_Device_FirstInstallDate,
                  16,
                  (STRSAFE_PCNZWCH)&v53,
                  8u,
                  (v56 & 1) << 17);
              }
            }
          }
          goto LABEL_33;
        }
        if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
          goto LABEL_21;
        if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          v33 = 0;
          if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
          {
            v34 = *(_QWORD *)(a1 + 48);
            v43 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v34,
                        (__int64)v72,
                        0xBu,
                        (__int64)&v45,
                        (__int64)&v42,
                        (__int64)&v43,
                        0) >= 0
              && v45 == 4
              && v43 == 4 )
            {
              v33 = v42;
            }
            else
            {
              v42 = 0;
            }
            v7 = (v33 & 0x20) != 0;
          }
          else
          {
            v7 = 1;
          }
        }
        else
        {
          v5 = 32;
        }
        if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
        {
          if ( (int)PiDevCfgMigrateRootDevice(a1, (__int64)&v56, (__int64)&v42) >= 0 )
          {
            v5 |= v42;
            if ( (v42 & 1) != 0 )
            {
              v7 = 0;
              v5 &= ~0x20u;
            }
          }
        }
        v8 = -1073740656;
      }
      if ( !v7 )
        goto LABEL_21;
      goto LABEL_121;
    }
  }
LABEL_34:
  if ( v47 )
    PiDevCfgFreeDriverNode(v47);
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v54[1] )
  {
    ExFreePool(v54[1]);
    *(_OWORD *)v54 = 0LL;
  }
LABEL_40:
  PiDevCfgFreeDeviceContext(&v56);
  if ( v55 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, v55, inited);
  return (unsigned int)inited;
}
