/*
 * XREFs of _CmUpdateDevicePanel @ 0x1409D97C8
 * Callers:
 *     PiUpdateDevicePanel @ 0x140908BF0 (PiUpdateDevicePanel.c)
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _CmAddPanelDevice @ 0x140899B94 (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x14089AD24 (_CmRemovePanelDevice.c)
 *     _CmIsRootDevice @ 0x140991F84 (_CmIsRootDevice.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140AF1950 (_CmQueryDevicePanelPldProperty.c)
 *     _CmCreateDevicePanel @ 0x140B2B37C (_CmCreateDevicePanel.c)
 *     _CmGetParentDeviceContainerId @ 0x140B2C028 (_CmGetParentDeviceContainerId.c)
 *     _CmBuildDevicePanelId @ 0x140B39C14 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x140B480C8 (_CmGetDevicePanelGroup.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanel(__int64 a1, const WCHAR *a2, char *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  wchar_t *v7; // r14
  char *v8; // r13
  int DevicePanelPldProperty; // eax
  int ParentDeviceContainerId; // ebx
  void *v11; // rax
  int v12; // eax
  const wchar_t *v13; // rax
  unsigned __int16 *v14; // rcx
  PVOID v15; // rbx
  _DWORD *v16; // rbx
  _DWORD *v17; // r12
  ULONG v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // ecx
  __int64 Pool2; // rax
  ULONG i; // ebx
  void *v28; // rax
  int ObjectProperty; // eax
  unsigned int v30; // eax
  int v31; // ecx
  __int64 v32; // rax
  unsigned int v33; // eax
  bool v34; // zf
  bool v35; // dl
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // r8
  int v39; // r8d
  int DevicePanel; // eax
  ULONG v41; // edx
  PVOID v42; // rax
  int v43; // eax
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  unsigned int v47; // ecx
  PVOID v48; // r9
  __int64 v49; // r8
  __int64 v50; // rax
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // edx
  unsigned int v54; // r8d
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // [rsp+60h] [rbp-A0h] BYREF
  char v59; // [rsp+64h] [rbp-9Ch]
  char v60; // [rsp+65h] [rbp-9Bh] BYREF
  char v61; // [rsp+66h] [rbp-9Ah]
  char v62; // [rsp+67h] [rbp-99h]
  unsigned int v63; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  char v65[8]; // [rsp+78h] [rbp-88h] BYREF
  PVOID v66; // [rsp+80h] [rbp-80h]
  PVOID v67; // [rsp+88h] [rbp-78h]
  int v68; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v69; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v70; // [rsp+98h] [rbp-68h]
  int v71; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int DevicePanelGroup; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v73; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v74; // [rsp+A8h] [rbp-58h]
  PVOID v75; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v76; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v77; // [rsp+BCh] [rbp-44h] BYREF
  PVOID v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h] BYREF
  char *v80; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v81; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v82; // [rsp+E8h] [rbp-18h] BYREF
  int v83; // [rsp+F8h] [rbp-8h]
  __int128 v84; // [rsp+100h] [rbp+0h] BYREF
  int v85; // [rsp+110h] [rbp+10h]

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  v4 = 0LL;
  v75 = 0LL;
  v69 = 0;
  v79 = 0LL;
  v71 = 0;
  v67 = 0LL;
  v68 = 1;
  v74 = 0;
  v66 = 0LL;
  v7 = 0LL;
  v81 = 0LL;
  v62 = 0;
  v8 = 0LL;
  DevicePanelGroup = 0;
  v73 = 0;
  P = 0LL;
  v78 = 0LL;
  v59 = 0;
  v82 = 0LL;
  v83 = 0;
  v84 = 0LL;
  v85 = 0;
  v80 = 0LL;
  v60 = 0;
  v58 = 0;
  v76 = 0;
  v77 = 0;
  v65[0] = 0;
  v63 = 0;
  if ( CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             (_DWORD)a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&v75,
                             (__int64)&v69,
                             (__int64)&v79,
                             (__int64)&v71);
  ParentDeviceContainerId = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
    goto LABEL_3;
  if ( DevicePanelPldProperty < 0 )
  {
LABEL_133:
    v17 = v75;
    goto LABEL_40;
  }
  v4 = v79;
  if ( v79 )
  {
    ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v81);
    if ( ParentDeviceContainerId >= 0 )
    {
      v62 = 1;
      DevicePanelGroup = CmGetDevicePanelGroup(v4, v23, 0LL);
      v25 = v24;
      if ( ((*(_DWORD *)(v4 + 8) >> 3) & 7) != 7 )
        v25 = dword_1400234C8[(*(_DWORD *)(v4 + 8) >> 3) & 7];
      v73 = v25;
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (wchar_t *)Pool2;
      if ( Pool2 )
      {
        ParentDeviceContainerId = CmBuildDevicePanelId(&v81, DevicePanelGroup, v73, Pool2);
        if ( ParentDeviceContainerId < 0 )
          goto LABEL_55;
        for ( i = 16; ; i = v63 )
        {
          v70 = i;
          v28 = (void *)ExAllocatePool2(0x100uLL);
          v66 = v28;
          if ( !v28 )
          {
            ParentDeviceContainerId = -1073741801;
            goto LABEL_55;
          }
          ObjectProperty = PnpGetObjectProperty(
                             v3,
                             (__int64)a2,
                             1,
                             a3,
                             0LL,
                             (__int64)DEVPKEY_Device_PhysicalDeviceLocationSpatial,
                             &v68,
                             (__int64)v28,
                             i,
                             (__int64)&v63,
                             0);
          ParentDeviceContainerId = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( v63 <= v70 )
          {
            ParentDeviceContainerId = -1073741823;
            goto LABEL_55;
          }
          ExFreePoolWithTag(v66, 0);
        }
        if ( ObjectProperty == -1073741275 )
          goto LABEL_68;
        if ( ObjectProperty < 0 )
          goto LABEL_55;
        if ( v68 != 4099 || v63 < 0x10 || (*(_BYTE *)v66 & 0x1F) == 0 )
        {
LABEL_68:
          ExFreePoolWithTag(v66, 0);
          v66 = 0LL;
        }
        goto LABEL_3;
      }
      ParentDeviceContainerId = -1073741801;
    }
    goto LABEL_133;
  }
LABEL_3:
  v11 = (void *)ExAllocatePool2(0x100uLL);
  P = v11;
  if ( !v11 )
  {
    ParentDeviceContainerId = -1073741801;
    goto LABEL_127;
  }
  v12 = PnpGetObjectProperty(
          v3,
          (__int64)a2,
          1,
          a3,
          0LL,
          (__int64)DEVPKEY_Device_PanelId,
          &v68,
          (__int64)v11,
          0x72u,
          (__int64)&v63,
          0);
  ParentDeviceContainerId = v12;
  if ( v12 == -1073741275 )
    goto LABEL_5;
  if ( v12 < 0 )
    goto LABEL_127;
  if ( v68 != 18 || v63 < 2 )
  {
LABEL_5:
    ExFreePoolWithTag(P, 0);
    v13 = 0LL;
    P = 0LL;
  }
  else
  {
    v13 = (const wchar_t *)P;
  }
  if ( v7 )
  {
    v35 = 1;
    if ( v13 )
    {
      v34 = wcsicmp(v13, v7) == 0;
      v13 = (const wchar_t *)P;
      if ( v34 )
        v35 = 0;
    }
    v59 = v35;
    if ( !v13 )
      goto LABEL_99;
    v59 = v35;
    if ( !v35 )
      goto LABEL_99;
  }
  else
  {
    if ( !v13 )
      goto LABEL_8;
    v59 = 1;
  }
  ParentDeviceContainerId = CmRemovePanelDevice(v3, (__int64)v13, (__int64)a2);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_127;
  v13 = (const wchar_t *)P;
  v35 = v59;
LABEL_99:
  v61 = v35;
  if ( !v7 )
  {
    if ( !v13 )
      goto LABEL_8;
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
LABEL_129:
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelWidth, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelHeight, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
    if ( !v7 )
    {
LABEL_116:
      v13 = (const wchar_t *)P;
      goto LABEL_8;
    }
    goto LABEL_112;
  }
  v36 = -1LL;
  do
    ++v36;
  while ( v7[v36] );
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              (_DWORD)a3,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelId,
                              18,
                              (__int64)v7,
                              2 * (int)v36 + 2,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_55;
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              (_DWORD)a3,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelGroup,
                              7,
                              (__int64)&DevicePanelGroup,
                              4,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_55;
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              (_DWORD)a3,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelSide,
                              7,
                              (__int64)&v73,
                              4,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_55;
  v59 = v61;
  if ( !v4 )
  {
    v13 = (const wchar_t *)P;
    if ( !P )
      goto LABEL_113;
    goto LABEL_129;
  }
  if ( v66 )
  {
    v58 = (unsigned __int16)*((_DWORD *)v66 + 1);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                (_DWORD)a3,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelWidth,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    v58 = *((unsigned __int16 *)v66 + 3);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                (_DWORD)a3,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelHeight,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    v58 = (unsigned __int16)*((_DWORD *)v66 + 2);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                (_DWORD)a3,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelLength,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
  }
  else
  {
    v58 = (unsigned __int16)*(_DWORD *)(v4 + 4);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                (_DWORD)a3,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelWidth,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    v58 = *(unsigned __int16 *)(v4 + 6);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                (_DWORD)a3,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelHeight,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    if ( P )
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
  }
  v59 = v61;
LABEL_112:
  v13 = (const wchar_t *)P;
LABEL_113:
  if ( v4 && *(_WORD *)(v4 + 18) != 0xFFFF )
  {
    if ( (unsigned __int16)*(_DWORD *)(v4 + 16) != 0xFFFF )
    {
      v14 = (unsigned __int16 *)v66;
LABEL_121:
      if ( v14 )
      {
        v58 = v14[5];
        ParentDeviceContainerId = PnpSetObjectProperty(
                                    v3,
                                    (_DWORD)a2,
                                    1,
                                    (_DWORD)a3,
                                    0LL,
                                    (__int64)DEVPKEY_Device_PanelPositionX,
                                    7,
                                    (__int64)&v58,
                                    4,
                                    0);
        if ( ParentDeviceContainerId >= 0 )
        {
          v58 = (unsigned __int16)*((_DWORD *)v66 + 3);
          ParentDeviceContainerId = PnpSetObjectProperty(
                                      v3,
                                      (_DWORD)a2,
                                      1,
                                      (_DWORD)a3,
                                      0LL,
                                      (__int64)DEVPKEY_Device_PanelPositionY,
                                      7,
                                      (__int64)&v58,
                                      4,
                                      0);
          if ( ParentDeviceContainerId >= 0 )
          {
            v58 = *((unsigned __int16 *)v66 + 7);
            ParentDeviceContainerId = PnpSetObjectProperty(
                                        v3,
                                        (_DWORD)a2,
                                        1,
                                        (_DWORD)a3,
                                        0LL,
                                        (__int64)DEVPKEY_Device_PanelPositionZ,
                                        7,
                                        (__int64)&v58,
                                        4,
                                        0);
            if ( ParentDeviceContainerId >= 0 )
              goto LABEL_12;
          }
        }
      }
      else
      {
        v58 = *(unsigned __int16 *)(v4 + 18);
        ParentDeviceContainerId = PnpSetObjectProperty(
                                    v3,
                                    (_DWORD)a2,
                                    1,
                                    (_DWORD)a3,
                                    0LL,
                                    (__int64)DEVPKEY_Device_PanelPositionX,
                                    7,
                                    (__int64)&v58,
                                    4,
                                    0);
        if ( ParentDeviceContainerId >= 0 )
        {
          v58 = (unsigned __int16)*(_DWORD *)(v4 + 16);
          ParentDeviceContainerId = PnpSetObjectProperty(
                                      v3,
                                      (_DWORD)a2,
                                      1,
                                      (_DWORD)a3,
                                      0LL,
                                      (__int64)DEVPKEY_Device_PanelPositionY,
                                      7,
                                      (__int64)&v58,
                                      4,
                                      0);
          if ( ParentDeviceContainerId >= 0 )
          {
            v13 = (const wchar_t *)P;
            if ( !P )
              goto LABEL_13;
            goto LABEL_11;
          }
        }
      }
LABEL_127:
      v17 = v75;
      goto LABEL_35;
    }
    goto LABEL_116;
  }
LABEL_8:
  v14 = (unsigned __int16 *)v66;
  if ( v66 )
    goto LABEL_121;
  if ( v13 )
  {
    PnpSetObjectProperty(
      v3,
      (_DWORD)a2,
      (_DWORD)v66 + 1,
      (_DWORD)a3,
      0LL,
      (__int64)DEVPKEY_Device_PanelPositionX,
      0,
      0LL,
      0,
      0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelPositionY, 0, 0LL, 0, 0);
LABEL_11:
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
LABEL_12:
    v13 = (const wchar_t *)P;
LABEL_13:
    v14 = (unsigned __int16 *)v66;
  }
  if ( v7 && v4 )
  {
    if ( v14 )
    {
      v58 = ((*(_DWORD *)v14 >> 5) & 0x1FFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  (_DWORD)a3,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationX,
                                  7,
                                  (__int64)&v58,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_55;
      v58 = ((*(_DWORD *)v66 >> 14) & 0x1FFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  (_DWORD)a3,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationY,
                                  7,
                                  (__int64)&v58,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_55;
      v58 = (*(_DWORD *)v66 >> 23) % 0x168u;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  (_DWORD)a3,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationZ,
                                  7,
                                  (__int64)&v58,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_55;
    }
    else
    {
      v58 = 45 * ((*(_DWORD *)(v4 + 12) >> 19) & 0xFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  (_DWORD)a3,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationZ,
                                  7,
                                  (__int64)&v58,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_55;
      if ( P )
      {
        PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
        PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
      }
    }
  }
  else
  {
    if ( v13 )
    {
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelRotationZ, 0, 0LL, 0, 0);
    }
    if ( !v7 )
      goto LABEL_18;
  }
  if ( v4 && (*(_DWORD *)v4 & 0x80u) == 0 )
  {
    v58 = (unsigned __int8)BYTE1(*(_DWORD *)v4) | (((*(unsigned __int8 *)(v4 + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)v4)) << 8) | 0xFF000000;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                (_DWORD)a3,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelColor,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    v15 = P;
    goto LABEL_75;
  }
LABEL_18:
  v15 = P;
  if ( P )
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelColor, 0, 0LL, 0, 0);
  if ( !v7 )
  {
LABEL_21:
    if ( v15 )
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelShape, 0, 0LL, 0, 0);
    if ( !v7 )
      goto LABEL_24;
    goto LABEL_80;
  }
LABEL_75:
  if ( !v4 )
    goto LABEL_21;
  v31 = 0;
  v32 = (*(_DWORD *)(v4 + 8) >> 10) & 0xF;
  if ( (unsigned int)v32 < 9 )
    v31 = dword_140043340[v32];
  v58 = v31;
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              (_DWORD)a3,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelShape,
                              7,
                              (__int64)&v58,
                              4,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_55;
  v15 = P;
LABEL_80:
  if ( v4 )
  {
    v65[0] = -((*(_BYTE *)(v4 + 8) & 1) != 0);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                (_DWORD)a3,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelVisible,
                                17,
                                (__int64)v65,
                                1,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    goto LABEL_82;
  }
LABEL_24:
  if ( v15 )
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, (_DWORD)a3, 0LL, (__int64)DEVPKEY_Device_PanelVisible, 0, 0LL, 0, 0);
  if ( !v7 )
    goto LABEL_27;
LABEL_82:
  if ( v59 )
  {
    ParentDeviceContainerId = CmAddPanelDevice(v3, (__int64)v7, (__int64)a2);
    if ( ParentDeviceContainerId < 0 )
    {
LABEL_55:
      v17 = v75;
LABEL_56:
      ExFreePoolWithTag(v7, 0);
      goto LABEL_36;
    }
  }
LABEL_27:
  v16 = 0LL;
  v17 = v75;
  v83 = 2;
  v82 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
  v85 = 2;
  v18 = v69;
  v70 = v69;
  v84 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
  while ( 1 )
  {
    v75 = v16;
    v71 = 0;
    v69 = 0;
    while ( 1 )
    {
      v19 = PnpGetObjectProperty(v3, (__int64)a2, 1, a3, 0LL, (__int64)&v82, &v71, (__int64)v17, v18, (__int64)&v69, 0);
      ParentDeviceContainerId = v19;
      if ( v19 != -1073741789 )
        break;
      v30 = v69;
      if ( v69 <= v70 )
        goto LABEL_128;
      if ( v17 )
      {
        ExFreePoolWithTag(v17, 0);
        v30 = v69;
      }
      v70 = v30;
      v17 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !v17 )
      {
LABEL_151:
        ParentDeviceContainerId = -1073741801;
        goto LABEL_33;
      }
      v18 = v70;
    }
    v21 = 0LL;
    if ( v19 < 0 )
      break;
    if ( v71 != 4099 || !v69 )
    {
LABEL_128:
      ParentDeviceContainerId = -1073741823;
      goto LABEL_33;
    }
    v33 = *v17 & 0x7F;
    if ( !v33 || v33 == 1 && v69 < 0x10 || v33 >= 2 && v69 < 0x14 || (v17[2] & 0x38u) >= 0x30 )
      goto LABEL_32;
    if ( !v62 )
    {
      ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v81);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_33;
      v62 = 1;
    }
    v37 = CmGetDevicePanelGroup(v17, v21, v20);
    DevicePanelGroup = v37;
    v38 = 0LL;
    if ( ((v17[2] >> 3) & 7) != 7 )
      v38 = (unsigned int)dword_1400234C8[(v17[2] >> 3) & 7];
    v73 = v38;
    if ( !v7 )
    {
      v7 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !v7 )
        goto LABEL_151;
      v37 = DevicePanelGroup;
      v38 = v73;
    }
    ParentDeviceContainerId = CmBuildDevicePanelId(&v81, v37, v38, v7);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    DevicePanel = CmCreateDevicePanel(v3, (_DWORD)v7, v39, (unsigned int)&v80, (__int64)&v60);
    v8 = v80;
    ParentDeviceContainerId = DevicePanel;
    if ( DevicePanel < 0 )
      goto LABEL_33;
    v58 = (unsigned __int16)v17[1];
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v80,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_Width,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v58 = *((unsigned __int16 *)v17 + 3);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_Height,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    if ( (*v17 & 0x80u) != 0 )
    {
      if ( !v60 )
        PnpSetObjectProperty(v3, (_DWORD)v7, 6, (_DWORD)v8, 0LL, (__int64)DEVPKEY_DevicePanel_Color, 0, 0LL, 0, 0);
    }
    else
    {
      v58 = (unsigned __int8)BYTE1(*v17) | (((*((unsigned __int8 *)v17 + 3) << 8) | (unsigned __int8)BYTE2(*v17)) << 8) | 0xFF000000;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v7,
                                  6,
                                  (_DWORD)v8,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_Color,
                                  7,
                                  (__int64)&v58,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_33;
    }
    v41 = v74;
    if ( !v67 )
      v41 = 16;
    v67 = v75;
    v74 = v41;
    v42 = v75;
    if ( !v75 )
    {
LABEL_190:
      v42 = (PVOID)ExAllocatePool2(0x100uLL);
      v67 = v42;
      if ( !v42 )
        goto LABEL_151;
      v41 = v74;
    }
    v43 = PnpGetObjectProperty(v3, (__int64)a2, 1, a3, 0LL, (__int64)&v84, &v68, (__int64)v42, v41, (__int64)&v63, 0);
    ParentDeviceContainerId = v43;
    if ( v43 == -1073741789 )
    {
      if ( v63 <= v74 )
        goto LABEL_128;
      ExFreePoolWithTag(v67, 0);
      v74 = v63;
      goto LABEL_190;
    }
    if ( v43 == -1073741275 )
    {
      v16 = v67;
      *(_DWORD *)v67 &= 0xFFFFFFE0;
    }
    else
    {
      if ( v43 < 0 )
        goto LABEL_33;
      if ( v68 == 4099 && v63 >= 0x10 )
      {
        v16 = v67;
      }
      else
      {
        v16 = v67;
        *(_DWORD *)v67 &= 0xFFFFFFE0;
      }
    }
    if ( (*v16 & 0x1F) == 0 )
    {
      if ( v60 )
        goto LABEL_252;
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, (_DWORD)v8, 0LL, (__int64)DEVPKEY_DevicePanel_JointType, 0, 0LL, 0, 0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetRotationX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetRotationY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
        0,
        0LL,
        0,
        0);
      goto LABEL_251;
    }
    v44 = 0;
    v45 = (*v16 >> 5) & 0xF;
    if ( v45 < 5 )
      v44 = dword_140043328[v45];
    v58 = v44;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointType,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v46 = 0;
    v47 = (*(_DWORD *)v67 >> 9) & 7;
    if ( v47 < 5 )
      v46 = dword_140043310[v47];
    v58 = v46;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v48 = v78;
    if ( !v78 )
    {
      v78 = (PVOID)ExAllocatePool2(0x100uLL);
      v48 = v78;
      if ( !v78 )
        goto LABEL_151;
    }
    v49 = 0LL;
    if ( ((*(_DWORD *)v67 >> 20) & 7) != 7 )
      v49 = (unsigned int)dword_1400234C8[(*(_DWORD *)v67 >> 20) & 7];
    v58 = v49;
    ParentDeviceContainerId = CmBuildDevicePanelId(&v81, (unsigned __int8)(*(_DWORD *)v67 >> 12), v49, v48);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v50 = -1LL;
    do
      ++v50;
    while ( *((_WORD *)v78 + v50) );
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
                                18,
                                (__int64)v78,
                                2 * (int)v50 + 2,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v51 = 0;
    v52 = (*(_DWORD *)v67 >> 23) & 7;
    if ( v52 < 5 )
      v51 = dword_140043310[v52];
    v58 = v51;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    if ( *((_WORD *)v17 + 9) == 0xFFFF || (unsigned __int16)v17[4] == 0xFFFF )
    {
      if ( !v60 )
      {
        PnpSetObjectProperty(
          v3,
          (_DWORD)v7,
          6,
          (_DWORD)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          v3,
          (_DWORD)v7,
          6,
          (_DWORD)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          v3,
          (_DWORD)v7,
          6,
          (_DWORD)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
          0,
          0LL,
          0,
          0);
      }
    }
    else
    {
      v58 = *((unsigned __int16 *)v17 + 9);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v7,
                                  6,
                                  (_DWORD)v8,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                                  7,
                                  (__int64)&v58,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_33;
      v58 = (unsigned __int16)v17[4];
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v7,
                                  6,
                                  (_DWORD)v8,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                                  7,
                                  (__int64)&v58,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_33;
      if ( !v60 )
        PnpSetObjectProperty(
          v3,
          (_DWORD)v7,
          6,
          (_DWORD)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
          0,
          0LL,
          0,
          0);
    }
    v58 = (unsigned __int16)*((_DWORD *)v67 + 2);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v58 = *((unsigned __int16 *)v67 + 5);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v58 = (unsigned __int16)*((_DWORD *)v67 + 3);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v53 = (1813430637 * (unsigned __int64)(*((_WORD *)v67 + 7) & 0x1FF)) >> 32;
    v58 = (*((_WORD *)v67 + 7) & 0x1FF) - 360 * ((v53 + (((*((_WORD *)v67 + 7) & 0x1FFu) - v53) >> 1)) >> 8);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v58 = dword_140043368[(unsigned __int64)*(unsigned int *)v67 >> 31];
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                (_DWORD)v8,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
                                7,
                                (__int64)&v58,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v16 = v67;
    if ( ((*(_DWORD *)v67 >> 5) & 0xF) == 0
      || ((*(_DWORD *)v67 >> 5) & 0xF) != 1
      && ((*(_DWORD *)v67 >> 5) & 0xF) != 2
      && ((*(_DWORD *)v67 >> 5) & 0xFu) - 3 > 1 )
    {
      if ( v60 )
        goto LABEL_252;
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
        0,
        0LL,
        0,
        0);
LABEL_251:
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        (_DWORD)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
        0,
        0LL,
        0,
        0);
      goto LABEL_252;
    }
    v58 = 0;
    if ( (int)PnpSetObjectProperty(
                v3,
                (_DWORD)v7,
                6,
                (_DWORD)v8,
                0LL,
                (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
                7,
                (__int64)&v58,
                4,
                0) >= 0 )
    {
      v54 = *((unsigned __int16 *)v16 + 3);
      v55 = (unsigned __int16)v16[1];
      v56 = (*v16 & 0x1E0) == 0x20 ? v54 + v55 : v54 % 0x168 + v55 % 0x168;
      v76 = v56;
      if ( (int)PnpSetObjectProperty(
                  v3,
                  (_DWORD)v7,
                  6,
                  (_DWORD)v8,
                  0LL,
                  (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
                  7,
                  (__int64)&v76,
                  4,
                  0) >= 0 )
      {
        v57 = *((unsigned __int16 *)v16 + 3);
        if ( (*v16 & 0x1E0) != 0x20 )
          v57 %= 0x168u;
        v77 = v57;
        if ( (int)PnpSetObjectProperty(
                    v3,
                    (_DWORD)v7,
                    6,
                    (_DWORD)v8,
                    0LL,
                    (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
                    7,
                    (__int64)&v77,
                    4,
                    0) >= 0
          && ((int)PnpGetObjectProperty(
                     v3,
                     (__int64)v7,
                     6,
                     v8,
                     0LL,
                     (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                     &v68,
                     (__int64)&v58,
                     4u,
                     (__int64)&v63,
                     0) < 0
           || v68 != 7
           || v63 != 4
           || v58 > v76) )
        {
          PnpSetObjectProperty(
            v3,
            (_DWORD)v7,
            6,
            (_DWORD)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
            7,
            (__int64)&v77,
            4,
            0);
        }
      }
    }
LABEL_252:
    ++v83;
    ++v85;
    v18 = v70;
  }
  if ( v19 == -1073741275 )
LABEL_32:
    ParentDeviceContainerId = 0;
LABEL_33:
  if ( v8 )
    ZwClose(v8);
LABEL_35:
  if ( v7 )
    goto LABEL_56;
LABEL_36:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v78 )
    ExFreePoolWithTag(v78, 0);
LABEL_40:
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v66 )
    ExFreePoolWithTag(v66, 0);
  if ( v67 )
    ExFreePoolWithTag(v67, 0);
  return (unsigned int)ParentDeviceContainerId;
}
