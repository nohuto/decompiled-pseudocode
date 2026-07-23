/*
 * XREFs of _CmUpdateDevicePanel @ 0x140A16A1C
 * Callers:
 *     PiUpdateDevicePanel @ 0x1409ABC40 (PiUpdateDevicePanel.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmAddPanelDevice @ 0x14089FF94 (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x1408A1124 (_CmRemovePanelDevice.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140A156F0 (_CmQueryDevicePanelPldProperty.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     _CmCreateDevicePanel @ 0x140B2D3FC (_CmCreateDevicePanel.c)
 *     _CmGetParentDeviceContainerId @ 0x140B2E0A8 (_CmGetParentDeviceContainerId.c)
 *     _CmBuildDevicePanelId @ 0x140B3BE24 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x140B49E58 (_CmGetDevicePanelGroup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanel(__int64 a1, const WCHAR *a2, char *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  wchar_t *v7; // r14
  char *v8; // r13
  int v9; // eax
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
  int v21; // r8d
  int v22; // ecx
  __int64 Pool2; // rax
  ULONG i; // ebx
  void *v25; // rax
  int ObjectProperty; // eax
  ULONG v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // eax
  bool v31; // zf
  bool v32; // dl
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // r8
  int v36; // r8d
  int DevicePanel; // eax
  ULONG v38; // edx
  PVOID v39; // rax
  int v40; // eax
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  PVOID v45; // r9
  __int64 v46; // r8
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // edx
  unsigned int v51; // r8d
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // [rsp+60h] [rbp-A0h] BYREF
  char v56; // [rsp+64h] [rbp-9Ch]
  char v57; // [rsp+65h] [rbp-9Bh] BYREF
  char v58; // [rsp+66h] [rbp-9Ah]
  char v59; // [rsp+67h] [rbp-99h]
  unsigned int v60; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  char v62[8]; // [rsp+78h] [rbp-88h] BYREF
  PVOID v63; // [rsp+80h] [rbp-80h]
  PVOID v64; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+90h] [rbp-70h] BYREF
  ULONG v66; // [rsp+94h] [rbp-6Ch] BYREF
  ULONG v67; // [rsp+98h] [rbp-68h]
  unsigned int v68; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int DevicePanelGroup; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v70; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v71; // [rsp+A8h] [rbp-58h]
  PVOID v72; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v73; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v74; // [rsp+BCh] [rbp-44h] BYREF
  PVOID v75; // [rsp+C0h] [rbp-40h]
  __int64 v76; // [rsp+C8h] [rbp-38h] BYREF
  char *v77; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v78; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v79; // [rsp+E8h] [rbp-18h] BYREF
  int v80; // [rsp+F8h] [rbp-8h]
  __int128 v81; // [rsp+100h] [rbp+0h] BYREF
  int v82; // [rsp+110h] [rbp+10h]

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  v4 = 0LL;
  v72 = 0LL;
  v66 = 0;
  v76 = 0LL;
  v68 = 0;
  v64 = 0LL;
  v65 = 1;
  v71 = 0;
  v63 = 0LL;
  v7 = 0LL;
  v78 = 0LL;
  v59 = 0;
  v8 = 0LL;
  DevicePanelGroup = 0;
  v70 = 0;
  P = 0LL;
  v75 = 0LL;
  v56 = 0;
  v79 = 0LL;
  v80 = 0;
  v81 = 0LL;
  v82 = 0;
  v77 = 0LL;
  v57 = 0;
  v55 = 0;
  v73 = 0;
  v74 = 0;
  v62[0] = 0;
  v60 = 0;
  if ( CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  v9 = CmQueryDevicePanelPldProperty(
         v3,
         (__int64)a2,
         1,
         a3,
         (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
         (__int64 *)&v72,
         &v66,
         &v76,
         &v68);
  ParentDeviceContainerId = v9;
  if ( v9 == -1073741275 )
    goto LABEL_3;
  if ( v9 < 0 )
  {
LABEL_133:
    v17 = v72;
    goto LABEL_40;
  }
  v4 = v76;
  if ( v76 )
  {
    ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v78);
    if ( ParentDeviceContainerId >= 0 )
    {
      v59 = 1;
      DevicePanelGroup = CmGetDevicePanelGroup(v4);
      v22 = v21;
      if ( ((*(_DWORD *)(v4 + 8) >> 3) & 7) != 7 )
        v22 = dword_140022D28[(*(_DWORD *)(v4 + 8) >> 3) & 7];
      v70 = v22;
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (wchar_t *)Pool2;
      if ( Pool2 )
      {
        ParentDeviceContainerId = CmBuildDevicePanelId(&v78, DevicePanelGroup, v70, Pool2);
        if ( ParentDeviceContainerId < 0 )
          goto LABEL_55;
        for ( i = 16; ; i = v60 )
        {
          v67 = i;
          v25 = (void *)ExAllocatePool2(0x100uLL);
          v63 = v25;
          if ( !v25 )
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
                             &v65,
                             (__int64)v25,
                             i,
                             (__int64)&v60,
                             0);
          ParentDeviceContainerId = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( v60 <= v67 )
          {
            ParentDeviceContainerId = -1073741823;
            goto LABEL_55;
          }
          ExFreePoolWithTag(v63, 0);
        }
        if ( ObjectProperty == -1073741275 )
          goto LABEL_68;
        if ( ObjectProperty < 0 )
          goto LABEL_55;
        if ( v65 != 4099 || v60 < 0x10 || (*(_BYTE *)v63 & 0x1F) == 0 )
        {
LABEL_68:
          ExFreePoolWithTag(v63, 0);
          v63 = 0LL;
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
          &v65,
          (__int64)v11,
          0x72u,
          (__int64)&v60,
          0);
  ParentDeviceContainerId = v12;
  if ( v12 == -1073741275 )
    goto LABEL_5;
  if ( v12 < 0 )
    goto LABEL_127;
  if ( v65 != 18 || v60 < 2 )
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
    v32 = 1;
    if ( v13 )
    {
      v31 = wcsicmp(v13, v7) == 0;
      v13 = (const wchar_t *)P;
      if ( v31 )
        v32 = 0;
    }
    v56 = v32;
    if ( !v13 )
      goto LABEL_99;
    v56 = v32;
    if ( !v32 )
      goto LABEL_99;
  }
  else
  {
    if ( !v13 )
      goto LABEL_8;
    v56 = 1;
  }
  ParentDeviceContainerId = CmRemovePanelDevice(v3, (__int64)v13, (__int64)a2);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_127;
  v13 = (const wchar_t *)P;
  v32 = v56;
LABEL_99:
  v58 = v32;
  if ( !v7 )
  {
    if ( !v13 )
      goto LABEL_8;
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
LABEL_129:
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelWidth, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelHeight, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
    if ( !v7 )
    {
LABEL_116:
      v13 = (const wchar_t *)P;
      goto LABEL_8;
    }
    goto LABEL_112;
  }
  v33 = -1LL;
  do
    ++v33;
  while ( v7[v33] );
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelId,
                              18,
                              (__int64)v7,
                              2 * (int)v33 + 2,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_55;
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
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
                              0LL,
                              (__int64)DEVPKEY_Device_PanelSide,
                              7,
                              (__int64)&v70,
                              4,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_55;
  v56 = v58;
  if ( !v4 )
  {
    v13 = (const wchar_t *)P;
    if ( !P )
      goto LABEL_113;
    goto LABEL_129;
  }
  if ( v63 )
  {
    v55 = (unsigned __int16)*((_DWORD *)v63 + 1);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelWidth,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    v55 = *((unsigned __int16 *)v63 + 3);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelHeight,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    v55 = (unsigned __int16)*((_DWORD *)v63 + 2);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelLength,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
  }
  else
  {
    v55 = (unsigned __int16)*(_DWORD *)(v4 + 4);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelWidth,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    v55 = *(unsigned __int16 *)(v4 + 6);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelHeight,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    if ( P )
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
  }
  v56 = v58;
LABEL_112:
  v13 = (const wchar_t *)P;
LABEL_113:
  if ( v4 && *(_WORD *)(v4 + 18) != 0xFFFF )
  {
    if ( (unsigned __int16)*(_DWORD *)(v4 + 16) != 0xFFFF )
    {
      v14 = (unsigned __int16 *)v63;
LABEL_121:
      if ( v14 )
      {
        v55 = v14[5];
        ParentDeviceContainerId = PnpSetObjectProperty(
                                    v3,
                                    (_DWORD)a2,
                                    1,
                                    0LL,
                                    (__int64)DEVPKEY_Device_PanelPositionX,
                                    7,
                                    (__int64)&v55,
                                    4,
                                    0);
        if ( ParentDeviceContainerId >= 0 )
        {
          v55 = (unsigned __int16)*((_DWORD *)v63 + 3);
          ParentDeviceContainerId = PnpSetObjectProperty(
                                      v3,
                                      (_DWORD)a2,
                                      1,
                                      0LL,
                                      (__int64)DEVPKEY_Device_PanelPositionY,
                                      7,
                                      (__int64)&v55,
                                      4,
                                      0);
          if ( ParentDeviceContainerId >= 0 )
          {
            v55 = *((unsigned __int16 *)v63 + 7);
            ParentDeviceContainerId = PnpSetObjectProperty(
                                        v3,
                                        (_DWORD)a2,
                                        1,
                                        0LL,
                                        (__int64)DEVPKEY_Device_PanelPositionZ,
                                        7,
                                        (__int64)&v55,
                                        4,
                                        0);
            if ( ParentDeviceContainerId >= 0 )
              goto LABEL_12;
          }
        }
      }
      else
      {
        v55 = *(unsigned __int16 *)(v4 + 18);
        ParentDeviceContainerId = PnpSetObjectProperty(
                                    v3,
                                    (_DWORD)a2,
                                    1,
                                    0LL,
                                    (__int64)DEVPKEY_Device_PanelPositionX,
                                    7,
                                    (__int64)&v55,
                                    4,
                                    0);
        if ( ParentDeviceContainerId >= 0 )
        {
          v55 = (unsigned __int16)*(_DWORD *)(v4 + 16);
          ParentDeviceContainerId = PnpSetObjectProperty(
                                      v3,
                                      (_DWORD)a2,
                                      1,
                                      0LL,
                                      (__int64)DEVPKEY_Device_PanelPositionY,
                                      7,
                                      (__int64)&v55,
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
      v17 = v72;
      goto LABEL_35;
    }
    goto LABEL_116;
  }
LABEL_8:
  v14 = (unsigned __int16 *)v63;
  if ( v63 )
    goto LABEL_121;
  if ( v13 )
  {
    PnpSetObjectProperty(v3, (_DWORD)a2, (_DWORD)v63 + 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionX, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionY, 0, 0LL, 0, 0);
LABEL_11:
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
LABEL_12:
    v13 = (const wchar_t *)P;
LABEL_13:
    v14 = (unsigned __int16 *)v63;
  }
  if ( v7 && v4 )
  {
    if ( v14 )
    {
      v55 = ((*(_DWORD *)v14 >> 5) & 0x1FFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationX,
                                  7,
                                  (__int64)&v55,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_55;
      v55 = ((*(_DWORD *)v63 >> 14) & 0x1FFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationY,
                                  7,
                                  (__int64)&v55,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_55;
      v55 = (*(_DWORD *)v63 >> 23) % 0x168u;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationZ,
                                  7,
                                  (__int64)&v55,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_55;
    }
    else
    {
      v55 = 45 * ((*(_DWORD *)(v4 + 12) >> 19) & 0xFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationZ,
                                  7,
                                  (__int64)&v55,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_55;
      if ( P )
      {
        PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
        PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
      }
    }
  }
  else
  {
    if ( v13 )
    {
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationZ, 0, 0LL, 0, 0);
    }
    if ( !v7 )
      goto LABEL_18;
  }
  if ( v4 && (*(_DWORD *)v4 & 0x80u) == 0 )
  {
    v55 = (unsigned __int8)BYTE1(*(_DWORD *)v4) | (((*(unsigned __int8 *)(v4 + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)v4)) << 8) | 0xFF000000;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelColor,
                                7,
                                (__int64)&v55,
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
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelColor, 0, 0LL, 0, 0);
  if ( !v7 )
  {
LABEL_21:
    if ( v15 )
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelShape, 0, 0LL, 0, 0);
    if ( !v7 )
      goto LABEL_24;
    goto LABEL_80;
  }
LABEL_75:
  if ( !v4 )
    goto LABEL_21;
  v28 = 0;
  v29 = (*(_DWORD *)(v4 + 8) >> 10) & 0xF;
  if ( (unsigned int)v29 < 9 )
    v28 = dword_1400438D8[v29];
  v55 = v28;
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelShape,
                              7,
                              (__int64)&v55,
                              4,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_55;
  v15 = P;
LABEL_80:
  if ( v4 )
  {
    v62[0] = -((*(_BYTE *)(v4 + 8) & 1) != 0);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelVisible,
                                17,
                                (__int64)v62,
                                1,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_55;
    goto LABEL_82;
  }
LABEL_24:
  if ( v15 )
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelVisible, 0, 0LL, 0, 0);
  if ( !v7 )
    goto LABEL_27;
LABEL_82:
  if ( v56 )
  {
    ParentDeviceContainerId = CmAddPanelDevice(v3, (__int64)v7, (__int64)a2);
    if ( ParentDeviceContainerId < 0 )
    {
LABEL_55:
      v17 = v72;
LABEL_56:
      ExFreePoolWithTag(v7, 0);
      goto LABEL_36;
    }
  }
LABEL_27:
  v16 = 0LL;
  v17 = v72;
  v80 = 2;
  v79 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
  v82 = 2;
  v18 = v66;
  v67 = v66;
  v81 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
  while ( 1 )
  {
    v72 = v16;
    v68 = 0;
    v66 = 0;
    while ( 1 )
    {
      v19 = PnpGetObjectProperty(v3, (__int64)a2, 1, a3, 0LL, (__int64)&v79, &v68, (__int64)v17, v18, (__int64)&v66, 0);
      ParentDeviceContainerId = v19;
      if ( v19 != -1073741789 )
        break;
      v27 = v66;
      if ( v66 <= v67 )
        goto LABEL_128;
      if ( v17 )
      {
        ExFreePoolWithTag(v17, 0);
        v27 = v66;
      }
      v67 = v27;
      v17 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !v17 )
      {
LABEL_151:
        ParentDeviceContainerId = -1073741801;
        goto LABEL_33;
      }
      v18 = v67;
    }
    if ( v19 < 0 )
      break;
    if ( v68 != 4099 || !v66 )
    {
LABEL_128:
      ParentDeviceContainerId = -1073741823;
      goto LABEL_33;
    }
    v30 = *v17 & 0x7F;
    if ( !v30 || v30 == 1 && v66 < 0x10 || v30 >= 2 && v66 < 0x14 || (v17[2] & 0x38u) >= 0x30 )
      goto LABEL_32;
    if ( !v59 )
    {
      ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v78);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_33;
      v59 = 1;
    }
    v34 = CmGetDevicePanelGroup(v17);
    DevicePanelGroup = v34;
    v35 = 0LL;
    if ( ((v17[2] >> 3) & 7) != 7 )
      v35 = (unsigned int)dword_140022D28[(v17[2] >> 3) & 7];
    v70 = v35;
    if ( !v7 )
    {
      v7 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !v7 )
        goto LABEL_151;
      v34 = DevicePanelGroup;
      v35 = v70;
    }
    ParentDeviceContainerId = CmBuildDevicePanelId(&v78, v34, v35, v7);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    DevicePanel = CmCreateDevicePanel(v3, (_DWORD)v7, v36, (unsigned int)&v77, (__int64)&v57);
    v8 = v77;
    ParentDeviceContainerId = DevicePanel;
    if ( DevicePanel < 0 )
      goto LABEL_33;
    v55 = (unsigned __int16)v17[1];
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_Width,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v55 = *((unsigned __int16 *)v17 + 3);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_Height,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    if ( (*v17 & 0x80u) != 0 )
    {
      if ( !v57 )
        PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_Color, 0, 0LL, 0, 0);
    }
    else
    {
      v55 = (unsigned __int8)BYTE1(*v17) | (((*((unsigned __int8 *)v17 + 3) << 8) | (unsigned __int8)BYTE2(*v17)) << 8) | 0xFF000000;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v7,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_Color,
                                  7,
                                  (__int64)&v55,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_33;
    }
    v38 = v71;
    if ( !v64 )
      v38 = 16;
    v64 = v72;
    v71 = v38;
    v39 = v72;
    if ( !v72 )
    {
LABEL_190:
      v39 = (PVOID)ExAllocatePool2(0x100uLL);
      v64 = v39;
      if ( !v39 )
        goto LABEL_151;
      v38 = v71;
    }
    v40 = PnpGetObjectProperty(v3, (__int64)a2, 1, a3, 0LL, (__int64)&v81, &v65, (__int64)v39, v38, (__int64)&v60, 0);
    ParentDeviceContainerId = v40;
    if ( v40 == -1073741789 )
    {
      if ( v60 <= v71 )
        goto LABEL_128;
      ExFreePoolWithTag(v64, 0);
      v71 = v60;
      goto LABEL_190;
    }
    if ( v40 == -1073741275 )
    {
      v16 = v64;
      *(_DWORD *)v64 &= 0xFFFFFFE0;
    }
    else
    {
      if ( v40 < 0 )
        goto LABEL_33;
      if ( v65 == 4099 && v60 >= 0x10 )
      {
        v16 = v64;
      }
      else
      {
        v16 = v64;
        *(_DWORD *)v64 &= 0xFFFFFFE0;
      }
    }
    if ( (*v16 & 0x1F) == 0 )
    {
      if ( v57 )
        goto LABEL_252;
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointType, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPanelId, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPositionX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPositionY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetRotationX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetRotationY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementOrientation, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin, 0, 0LL, 0, 0);
      goto LABEL_251;
    }
    v41 = 0;
    v42 = (*v16 >> 5) & 0xF;
    if ( v42 < 5 )
      v41 = dword_140043908[v42];
    v55 = v41;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointType,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v43 = 0;
    v44 = (*(_DWORD *)v64 >> 9) & 7;
    if ( v44 < 5 )
      v43 = dword_140043920[v44];
    v55 = v43;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v45 = v75;
    if ( !v75 )
    {
      v75 = (PVOID)ExAllocatePool2(0x100uLL);
      v45 = v75;
      if ( !v75 )
        goto LABEL_151;
    }
    v46 = 0LL;
    if ( ((*(_DWORD *)v64 >> 20) & 7) != 7 )
      v46 = (unsigned int)dword_140022D28[(*(_DWORD *)v64 >> 20) & 7];
    v55 = v46;
    ParentDeviceContainerId = CmBuildDevicePanelId(&v78, (unsigned __int8)(*(_DWORD *)v64 >> 12), v46, v45);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v47 = -1LL;
    do
      ++v47;
    while ( *((_WORD *)v75 + v47) );
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
                                18,
                                (__int64)v75,
                                2 * (int)v47 + 2,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v48 = 0;
    v49 = (*(_DWORD *)v64 >> 23) & 7;
    if ( v49 < 5 )
      v48 = dword_140043920[v49];
    v55 = v48;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    if ( *((_WORD *)v17 + 9) == 0xFFFF || (unsigned __int16)v17[4] == 0xFFFF )
    {
      if ( !v57 )
      {
        PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionX, 0, 0LL, 0, 0);
        PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionY, 0, 0LL, 0, 0);
        PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ, 0, 0LL, 0, 0);
      }
    }
    else
    {
      v55 = *((unsigned __int16 *)v17 + 9);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v7,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                                  7,
                                  (__int64)&v55,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_33;
      v55 = (unsigned __int16)v17[4];
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v7,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                                  7,
                                  (__int64)&v55,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_33;
      if ( !v57 )
        PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ, 0, 0LL, 0, 0);
    }
    v55 = (unsigned __int16)*((_DWORD *)v64 + 2);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v55 = *((unsigned __int16 *)v64 + 5);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v55 = (unsigned __int16)*((_DWORD *)v64 + 3);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v50 = (1813430637 * (unsigned __int64)(*((_WORD *)v64 + 7) & 0x1FF)) >> 32;
    v55 = (*((_WORD *)v64 + 7) & 0x1FF) - 360 * ((v50 + (((*((_WORD *)v64 + 7) & 0x1FFu) - v50) >> 1)) >> 8);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v55 = dword_140043900[(unsigned __int64)*(unsigned int *)v64 >> 31];
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v7,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
                                7,
                                (__int64)&v55,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_33;
    v16 = v64;
    if ( ((*(_DWORD *)v64 >> 5) & 0xF) == 0
      || ((*(_DWORD *)v64 >> 5) & 0xF) != 1
      && ((*(_DWORD *)v64 >> 5) & 0xF) != 2
      && ((*(_DWORD *)v64 >> 5) & 0xFu) - 3 > 1 )
    {
      if ( v57 )
        goto LABEL_252;
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin, 0, 0LL, 0, 0);
LABEL_251:
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax, 0, 0LL, 0, 0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v7,
        6,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(v3, (_DWORD)v7, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementPosition, 0, 0LL, 0, 0);
      goto LABEL_252;
    }
    v55 = 0;
    if ( (int)PnpSetObjectProperty(
                v3,
                (_DWORD)v7,
                6,
                0LL,
                (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
                7,
                (__int64)&v55,
                4,
                0) >= 0 )
    {
      v51 = *((unsigned __int16 *)v16 + 3);
      v52 = (unsigned __int16)v16[1];
      v53 = (*v16 & 0x1E0) == 0x20 ? v51 + v52 : v51 % 0x168 + v52 % 0x168;
      v73 = v53;
      if ( (int)PnpSetObjectProperty(
                  v3,
                  (_DWORD)v7,
                  6,
                  0LL,
                  (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
                  7,
                  (__int64)&v73,
                  4,
                  0) >= 0 )
      {
        v54 = *((unsigned __int16 *)v16 + 3);
        if ( (*v16 & 0x1E0) != 0x20 )
          v54 %= 0x168u;
        v74 = v54;
        if ( (int)PnpSetObjectProperty(
                    v3,
                    (_DWORD)v7,
                    6,
                    0LL,
                    (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
                    7,
                    (__int64)&v74,
                    4,
                    0) >= 0
          && ((int)PnpGetObjectProperty(
                     v3,
                     (__int64)v7,
                     6,
                     v8,
                     0LL,
                     (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                     &v65,
                     (__int64)&v55,
                     4u,
                     (__int64)&v60,
                     0) < 0
           || v65 != 7
           || v60 != 4
           || v55 > v73) )
        {
          PnpSetObjectProperty(
            v3,
            (_DWORD)v7,
            6,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
            7,
            (__int64)&v74,
            4,
            0);
        }
      }
    }
LABEL_252:
    ++v80;
    ++v82;
    v18 = v67;
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
  if ( v75 )
    ExFreePoolWithTag(v75, 0);
LABEL_40:
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v63 )
    ExFreePoolWithTag(v63, 0);
  if ( v64 )
    ExFreePoolWithTag(v64, 0);
  return (unsigned int)ParentDeviceContainerId;
}
