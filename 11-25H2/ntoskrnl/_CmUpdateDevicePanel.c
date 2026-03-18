/*
 * XREFs of _CmUpdateDevicePanel @ 0x140A45108
 * Callers:
 *     PiUpdateDevicePanel @ 0x140833618 (PiUpdateDevicePanel.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _CmAddPanelDevice @ 0x14080C5CC (_CmAddPanelDevice.c)
 *     _CmCreateDevicePanel @ 0x14080C8C0 (_CmCreateDevicePanel.c)
 *     _CmRemovePanelDevice @ 0x14080DB0C (_CmRemovePanelDevice.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _CmIsRootDevice @ 0x140932574 (_CmIsRootDevice.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140A45C04 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetDevicePanelGroup @ 0x140A9CDE0 (_CmGetDevicePanelGroup.c)
 *     _CmBuildDevicePanelId @ 0x140AA6C40 (_CmBuildDevicePanelId.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB15A4 (_CmGetParentDeviceContainerId.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanel(__int64 a1, const WCHAR *a2, void *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r12
  wchar_t *v7; // r14
  HANDLE v8; // r13
  int DevicePanelPldProperty; // eax
  int v10; // ebx
  void *v11; // rax
  int v12; // eax
  const wchar_t *v13; // rbx
  __int64 v14; // rax
  _DWORD *v15; // rbx
  _DWORD *v16; // r12
  ULONG v17; // eax
  int v18; // eax
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  bool v24; // al
  __int64 v25; // rax
  int ParentDeviceContainerId; // eax
  int v27; // r8d
  int v28; // ecx
  __int64 Pool2; // rax
  ULONG i; // ebx
  void *v31; // rax
  int ObjectProperty; // eax
  unsigned int DevicePanelGroup; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  int v36; // eax
  ULONG v37; // edx
  PVOID v38; // rax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  PVOID v44; // r9
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // [rsp+60h] [rbp-A0h] BYREF
  char v55; // [rsp+64h] [rbp-9Ch]
  __int16 v56; // [rsp+65h] [rbp-9Bh] BYREF
  unsigned int v57; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v58[3]; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  PVOID v60; // [rsp+80h] [rbp-80h]
  int v61; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v62; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v63; // [rsp+90h] [rbp-70h]
  int v64; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v66; // [rsp+A0h] [rbp-60h]
  PVOID v67; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v69; // [rsp+B8h] [rbp-48h]
  __int64 v70; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v72; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v73; // [rsp+E0h] [rbp-20h] BYREF
  int v74; // [rsp+F0h] [rbp-10h]
  __int128 v75; // [rsp+F8h] [rbp-8h] BYREF
  int v76; // [rsp+108h] [rbp+8h]

  v3 = *(_QWORD **)&PiPnpRtlCtx;
  v4 = 0LL;
  v67 = 0LL;
  v62 = 0;
  v70 = 0LL;
  v64 = 0;
  v60 = 0LL;
  v61 = 1;
  v66 = 0;
  *(_QWORD *)&v58[1] = 0LL;
  v7 = 0LL;
  v72 = 0LL;
  v8 = 0LL;
  v65 = 0LL;
  P = 0LL;
  v69 = 0LL;
  v55 = 0;
  v73 = 0LL;
  v74 = 0;
  v75 = 0LL;
  v76 = 0;
  v71 = 0LL;
  v56 = 0;
  v54 = 0;
  v68 = 0LL;
  LOBYTE(v58[0]) = 0;
  v57 = 0;
  if ( CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             (_DWORD)v3,
                             (_DWORD)a2,
                             1,
                             (_DWORD)a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&v67,
                             (__int64)&v62,
                             (__int64)&v70,
                             (__int64)&v64);
  v10 = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
    goto LABEL_3;
  if ( DevicePanelPldProperty < 0 )
    goto LABEL_114;
  v4 = v70;
  if ( !v70 )
    goto LABEL_3;
  ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v72);
  v10 = ParentDeviceContainerId;
  if ( ParentDeviceContainerId < 0 )
  {
LABEL_114:
    v16 = v67;
    goto LABEL_36;
  }
  HIBYTE(v56) = 1;
  LODWORD(v65) = CmGetDevicePanelGroup(v4);
  v28 = v27;
  if ( ((*(_DWORD *)(v4 + 8) >> 3) & 7) != 7 )
    v28 = dword_140041420[(*(_DWORD *)(v4 + 8) >> 3) & 7];
  HIDWORD(v65) = v28;
  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741801;
    goto LABEL_114;
  }
  v10 = CmBuildDevicePanelId(&v72, (unsigned int)v65, HIDWORD(v65), Pool2);
  if ( v10 < 0 )
    goto LABEL_49;
  for ( i = 16; ; i = v57 )
  {
    v63 = i;
    v31 = (void *)ExAllocatePool2(0x100uLL);
    *(_QWORD *)&v58[1] = v31;
    if ( !v31 )
    {
      v10 = -1073741801;
      goto LABEL_49;
    }
    ObjectProperty = PnpGetObjectProperty(
                       v3,
                       a2,
                       1u,
                       a3,
                       0LL,
                       (__int64)DEVPKEY_Device_PhysicalDeviceLocationSpatial,
                       &v61,
                       v31,
                       i,
                       (__int64)&v57,
                       0);
    v10 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    if ( v57 <= v63 )
    {
      v10 = -1073741823;
      goto LABEL_49;
    }
    ExFreePoolWithTag(*(PVOID *)&v58[1], 0);
  }
  if ( ObjectProperty == -1073741275 )
    goto LABEL_128;
  if ( ObjectProperty < 0 )
    goto LABEL_49;
  if ( v61 != 4099 || v57 < 0x10 || (**(_BYTE **)&v58[1] & 0x1F) == 0 )
  {
LABEL_128:
    ExFreePoolWithTag(*(PVOID *)&v58[1], 0);
    *(_QWORD *)&v58[1] = 0LL;
  }
LABEL_3:
  v11 = (void *)ExAllocatePool2(0x100uLL);
  P = v11;
  if ( !v11 )
  {
    v10 = -1073741801;
    goto LABEL_139;
  }
  v12 = PnpGetObjectProperty(v3, a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelId, &v61, v11, 0x72u, (__int64)&v57, 0);
  v10 = v12;
  if ( v12 == -1073741275 )
    goto LABEL_5;
  if ( v12 < 0 )
  {
LABEL_139:
    v16 = v67;
    goto LABEL_31;
  }
  if ( v61 == 18 && v57 >= 2 )
  {
    v13 = (const wchar_t *)P;
  }
  else
  {
LABEL_5:
    ExFreePoolWithTag(P, 0);
    v13 = 0LL;
    P = 0LL;
  }
  if ( v7 )
  {
    v24 = !v13 || wcsicmp(v13, v7);
    if ( v13 )
    {
      v55 = v24;
      if ( v24 )
        goto LABEL_138;
    }
LABEL_77:
    v55 = v24;
    v25 = -1LL;
    do
      ++v25;
    while ( v7[v25] );
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)&DEVPKEY_Device_PanelId,
            18,
            (__int64)v7,
            2 * (int)v25 + 2,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)&DEVPKEY_Device_PanelGroup,
            7,
            (__int64)&v65,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)&DEVPKEY_Device_PanelSide,
            7,
            (__int64)&v65 + 4,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    if ( v4 )
    {
      if ( *(_QWORD *)&v58[1] )
      {
        v54 = (unsigned __int16)*(_DWORD *)(*(_QWORD *)&v58[1] + 4LL);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)&DEVPKEY_Device_PanelWidth,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
        v54 = *(unsigned __int16 *)(*(_QWORD *)&v58[1] + 6LL);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)&DEVPKEY_Device_PanelHeight,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
        v54 = (unsigned __int16)*(_DWORD *)(*(_QWORD *)&v58[1] + 8LL);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)&DEVPKEY_Device_PanelLength,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
      }
      else
      {
        v54 = (unsigned __int16)*(_DWORD *)(v4 + 4);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)&DEVPKEY_Device_PanelWidth,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
        v54 = *(unsigned __int16 *)(v4 + 6);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)&DEVPKEY_Device_PanelHeight,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
        if ( P )
          PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)&DEVPKEY_Device_PanelLength,
            0,
            0LL,
            0,
            0);
      }
    }
    else
    {
      v13 = (const wchar_t *)P;
      if ( P )
      {
LABEL_92:
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)&DEVPKEY_Device_PanelWidth,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)&DEVPKEY_Device_PanelHeight,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)&DEVPKEY_Device_PanelLength,
          0,
          0LL,
          0,
          0);
        if ( !v7 )
          goto LABEL_8;
      }
    }
    if ( !v4 || *(_WORD *)(v4 + 18) == 0xFFFF || (unsigned __int16)*(_DWORD *)(v4 + 16) == 0xFFFF )
    {
      v13 = (const wchar_t *)P;
      goto LABEL_8;
    }
    v14 = *(_QWORD *)&v58[1];
    goto LABEL_146;
  }
  if ( !v13 )
    goto LABEL_8;
  v55 = 1;
LABEL_138:
  v10 = CmRemovePanelDevice((__int64)v3, (__int64)v13, (__int64)a2);
  if ( v10 < 0 )
    goto LABEL_139;
  if ( v7 )
  {
    v24 = v55;
    goto LABEL_77;
  }
  v13 = (const wchar_t *)P;
  if ( P )
  {
    PnpSetObjectProperty((__int64)v3, (__int64)a2, 1, (__int64)a3, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)&DEVPKEY_Device_PanelGroup,
      0,
      0LL,
      0,
      0);
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)&DEVPKEY_Device_PanelSide,
      0,
      0LL,
      0,
      0);
    goto LABEL_92;
  }
LABEL_8:
  v14 = *(_QWORD *)&v58[1];
  if ( *(_QWORD *)&v58[1] )
  {
LABEL_146:
    if ( v14 )
    {
      v54 = *(unsigned __int16 *)(v14 + 10);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)&DEVPKEY_Device_PanelPositionX,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v54 = (unsigned __int16)*(_DWORD *)(*(_QWORD *)&v58[1] + 12LL);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)&DEVPKEY_Device_PanelPositionY,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v54 = *(unsigned __int16 *)(*(_QWORD *)&v58[1] + 14LL);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)&DEVPKEY_Device_PanelPositionZ,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v13 = (const wchar_t *)P;
    }
    else
    {
      v54 = *(unsigned __int16 *)(v4 + 18);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)&DEVPKEY_Device_PanelPositionX,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v54 = (unsigned __int16)*(_DWORD *)(v4 + 16);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)&DEVPKEY_Device_PanelPositionY,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v13 = (const wchar_t *)P;
      if ( P )
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)&DEVPKEY_Device_PanelPositionZ,
          0,
          0LL,
          0,
          0);
    }
    goto LABEL_52;
  }
  if ( v13 )
  {
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)&DEVPKEY_Device_PanelPositionX,
      0,
      0LL,
      0,
      0);
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)&DEVPKEY_Device_PanelPositionY,
      0,
      0LL,
      0,
      0);
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)&DEVPKEY_Device_PanelPositionZ,
      0,
      0LL,
      0,
      0);
LABEL_52:
    v14 = *(_QWORD *)&v58[1];
  }
  if ( v7 && v4 )
  {
    if ( v14 )
    {
      v54 = ((*(_DWORD *)v14 >> 5) & 0x1FFu) % 0x168;
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)&DEVPKEY_Device_PanelRotationX,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 >= 0 )
      {
        v54 = ((**(_DWORD **)&v58[1] >> 14) & 0x1FFu) % 0x168;
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)&DEVPKEY_Device_PanelRotationY,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 >= 0 )
        {
          v54 = (**(_DWORD **)&v58[1] >> 23) % 0x168u;
          v10 = PnpSetObjectProperty(
                  (__int64)v3,
                  (__int64)a2,
                  1,
                  (__int64)a3,
                  0LL,
                  (__int64)&DEVPKEY_Device_PanelRotationZ,
                  7,
                  (__int64)&v54,
                  4u,
                  0);
          if ( v10 >= 0 )
          {
            v13 = (const wchar_t *)P;
            goto LABEL_46;
          }
        }
      }
      goto LABEL_49;
    }
    v54 = 45 * ((*(_DWORD *)(v4 + 12) >> 19) & 0xFu) % 0x168;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)&DEVPKEY_Device_PanelRotationZ,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    v13 = (const wchar_t *)P;
    if ( P )
    {
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)&DEVPKEY_Device_PanelRotationX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)&DEVPKEY_Device_PanelRotationY,
        0,
        0LL,
        0,
        0);
    }
  }
  else
  {
    if ( v13 )
    {
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)&DEVPKEY_Device_PanelRotationX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)&DEVPKEY_Device_PanelRotationY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)&DEVPKEY_Device_PanelRotationZ,
        0,
        0LL,
        0,
        0);
    }
    if ( !v7 )
      goto LABEL_14;
  }
LABEL_46:
  if ( v4 && (*(_DWORD *)v4 & 0x80u) == 0 )
  {
    v54 = (unsigned __int8)BYTE1(*(_DWORD *)v4) | (((*(unsigned __int8 *)(v4 + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)v4)) << 8) | 0xFF000000;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)&DEVPKEY_Device_PanelColor,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    v13 = (const wchar_t *)P;
    goto LABEL_54;
  }
LABEL_14:
  if ( v13 )
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)&DEVPKEY_Device_PanelColor,
      0,
      0LL,
      0,
      0);
  if ( !v7 )
  {
LABEL_17:
    if ( v13 )
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)&DEVPKEY_Device_PanelShape,
        0,
        0LL,
        0,
        0);
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_164;
  }
LABEL_54:
  if ( !v4 )
    goto LABEL_17;
  v20 = 0;
  v21 = (*(_DWORD *)(v4 + 8) >> 10) & 0xF;
  if ( (unsigned int)v21 < 9 )
    v20 = dword_140041458[v21];
  v54 = v20;
  v10 = PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)&DEVPKEY_Device_PanelShape,
          7,
          (__int64)&v54,
          4u,
          0);
  if ( v10 < 0 )
    goto LABEL_49;
  v13 = (const wchar_t *)P;
LABEL_164:
  if ( v4 )
  {
    LOBYTE(v58[0]) = -((*(_BYTE *)(v4 + 8) & 1) != 0);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)&DEVPKEY_Device_PanelVisible,
            17,
            (__int64)v58,
            1u,
            0);
    if ( v10 >= 0 )
      goto LABEL_107;
LABEL_49:
    v16 = v67;
LABEL_50:
    ExFreePoolWithTag(v7, 0);
    goto LABEL_32;
  }
LABEL_20:
  if ( v13 )
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)&DEVPKEY_Device_PanelVisible,
      0,
      0LL,
      0,
      0);
  if ( !v7 )
    goto LABEL_23;
LABEL_107:
  if ( v55 )
  {
    v10 = CmAddPanelDevice((__int64)v3, (__int64)v7, (__int64)a2);
    if ( v10 < 0 )
      goto LABEL_49;
  }
LABEL_23:
  v15 = 0LL;
  v16 = v67;
  v74 = 2;
  v73 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
  v76 = 2;
  v17 = v62;
  v63 = v62;
  v75 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
  while ( 1 )
  {
    v67 = v15;
    v64 = 0;
    v62 = 0;
    while ( 1 )
    {
      v18 = PnpGetObjectProperty(v3, a2, 1u, a3, 0LL, (__int64)&v73, &v64, v16, v17, (__int64)&v62, 0);
      v10 = v18;
      if ( v18 != -1073741789 )
        break;
      v23 = v62;
      if ( v62 <= v63 )
        goto LABEL_112;
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        v23 = v62;
      }
      v63 = v23;
      v16 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !v16 )
      {
LABEL_113:
        v10 = -1073741801;
        goto LABEL_29;
      }
      v17 = v63;
    }
    if ( v18 < 0 )
      break;
    if ( v64 != 4099 || !v62 )
    {
LABEL_112:
      v10 = -1073741823;
      goto LABEL_29;
    }
    v22 = *v16 & 0x7F;
    if ( !v22 || v22 == 1 && v62 < 0x10 || v22 >= 2 && v62 < 0x14 || (v16[2] & 0x38u) >= 0x30 )
      goto LABEL_28;
    if ( !HIBYTE(v56) )
    {
      v10 = CmGetParentDeviceContainerId(v3, a2, &v72);
      if ( v10 < 0 )
        goto LABEL_29;
      HIBYTE(v56) = 1;
    }
    DevicePanelGroup = CmGetDevicePanelGroup(v16);
    LODWORD(v65) = DevicePanelGroup;
    v34 = 0LL;
    if ( ((v16[2] >> 3) & 7) != 7 )
      v34 = (unsigned int)dword_140041420[(v16[2] >> 3) & 7];
    HIDWORD(v65) = v34;
    if ( !v7 )
    {
      v7 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !v7 )
        goto LABEL_113;
      DevicePanelGroup = v65;
      v34 = HIDWORD(v65);
    }
    v10 = CmBuildDevicePanelId(&v72, DevicePanelGroup, v34, v7);
    if ( v10 < 0 )
      goto LABEL_29;
    v36 = CmCreateDevicePanel((__int64)v3, (int)v7, v35, (HANDLE *)&v71, &v56);
    v8 = (HANDLE)v71;
    v10 = v36;
    if ( v36 < 0 )
      goto LABEL_29;
    v54 = (unsigned __int16)v16[1];
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            v71,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_Width,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v54 = *((unsigned __int16 *)v16 + 3);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_Height,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    if ( (*v16 & 0x80u) != 0 )
    {
      if ( !(_BYTE)v56 )
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)&DEVPKEY_DevicePanel_Color,
          0,
          0LL,
          0,
          0);
    }
    else
    {
      v54 = (unsigned __int8)BYTE1(*v16) | (((*((unsigned __int8 *)v16 + 3) << 8) | (unsigned __int8)BYTE2(*v16)) << 8) | 0xFF000000;
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)v7,
              6,
              (__int64)v8,
              0LL,
              (__int64)&DEVPKEY_DevicePanel_Color,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_29;
    }
    v37 = v66;
    if ( !v60 )
      v37 = 16;
    v60 = v67;
    v66 = v37;
    v38 = v67;
    if ( !v67 )
    {
LABEL_187:
      v38 = (PVOID)ExAllocatePool2(0x100uLL);
      v60 = v38;
      if ( !v38 )
        goto LABEL_113;
      v37 = v66;
    }
    v39 = PnpGetObjectProperty(v3, a2, 1u, a3, 0LL, (__int64)&v75, &v61, v38, v37, (__int64)&v57, 0);
    v10 = v39;
    if ( v39 == -1073741789 )
    {
      if ( v57 <= v66 )
        goto LABEL_112;
      ExFreePoolWithTag(v60, 0);
      v66 = v57;
      goto LABEL_187;
    }
    if ( v39 == -1073741275 )
    {
      v15 = v60;
      *(_DWORD *)v60 &= 0xFFFFFFE0;
    }
    else
    {
      if ( v39 < 0 )
        goto LABEL_29;
      if ( v61 == 4099 && v57 >= 0x10 )
      {
        v15 = v60;
      }
      else
      {
        v15 = v60;
        *(_DWORD *)v60 &= 0xFFFFFFE0;
      }
    }
    if ( (*v15 & 0x1F) == 0 )
    {
      if ( (_BYTE)v56 )
        goto LABEL_249;
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointType,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointSourcePanelEdge,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointTargetPanelId,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointTargetPanelEdge,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointSourcePositionX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointSourcePositionY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointSourcePositionZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointTargetPositionX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointTargetPositionY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointTargetPositionZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointTargetRotationX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointTargetRotationY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointTargetRotationZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointMovementOrientation,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointMovementPositionMin,
        0,
        0LL,
        0,
        0);
      goto LABEL_248;
    }
    v40 = 0;
    v41 = (*v15 >> 5) & 0xF;
    if ( v41 < 5 )
      v40 = dword_140041408[v41];
    v54 = v40;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointType,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v42 = 0;
    v43 = (*(_DWORD *)v60 >> 9) & 7;
    if ( v43 < 5 )
      v42 = dword_140041440[v43];
    v54 = v42;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointSourcePanelEdge,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v44 = v69;
    if ( !v69 )
    {
      v69 = (PVOID)ExAllocatePool2(0x100uLL);
      v44 = v69;
      if ( !v69 )
        goto LABEL_113;
    }
    v45 = 0LL;
    if ( ((*(_DWORD *)v60 >> 20) & 7) != 7 )
      v45 = (unsigned int)dword_140041420[(*(_DWORD *)v60 >> 20) & 7];
    v54 = v45;
    v10 = CmBuildDevicePanelId(&v72, (unsigned __int8)(*(_DWORD *)v60 >> 12), v45, v44);
    if ( v10 < 0 )
      goto LABEL_29;
    v46 = -1LL;
    do
      ++v46;
    while ( *((_WORD *)v69 + v46) );
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointTargetPanelId,
            18,
            (__int64)v69,
            2 * (int)v46 + 2,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v47 = 0;
    v48 = (*(_DWORD *)v60 >> 23) & 7;
    if ( v48 < 5 )
      v47 = dword_140041440[v48];
    v54 = v47;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointTargetPanelEdge,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    if ( *((_WORD *)v16 + 9) == 0xFFFF || (unsigned __int16)v16[4] == 0xFFFF )
    {
      if ( !(_BYTE)v56 )
      {
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)&DEVPKEY_DevicePanel_JointSourcePositionX,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)&DEVPKEY_DevicePanel_JointSourcePositionY,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)&DEVPKEY_DevicePanel_JointSourcePositionZ,
          0,
          0LL,
          0,
          0);
      }
    }
    else
    {
      v54 = *((unsigned __int16 *)v16 + 9);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)v7,
              6,
              (__int64)v8,
              0LL,
              (__int64)&DEVPKEY_DevicePanel_JointSourcePositionX,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_29;
      v54 = (unsigned __int16)v16[4];
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)v7,
              6,
              (__int64)v8,
              0LL,
              (__int64)&DEVPKEY_DevicePanel_JointSourcePositionY,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_29;
      if ( !(_BYTE)v56 )
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)&DEVPKEY_DevicePanel_JointSourcePositionZ,
          0,
          0LL,
          0,
          0);
    }
    v54 = (unsigned __int16)*((_DWORD *)v60 + 2);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointTargetPositionX,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v54 = *((unsigned __int16 *)v60 + 5);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointTargetPositionY,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v54 = (unsigned __int16)*((_DWORD *)v60 + 3);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointTargetPositionZ,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v49 = (1813430637 * (unsigned __int64)(*((_WORD *)v60 + 7) & 0x1FF)) >> 32;
    v54 = (*((_WORD *)v60 + 7) & 0x1FF) - 360 * ((v49 + (((*((_WORD *)v60 + 7) & 0x1FFu) - v49) >> 1)) >> 8);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointTargetRotationZ,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v54 = dword_140041480[(unsigned __int64)*(unsigned int *)v60 >> 31];
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointMovementOrientation,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v15 = v60;
    if ( ((*(_DWORD *)v60 >> 5) & 0xF) == 0
      || ((*(_DWORD *)v60 >> 5) & 0xF) != 1
      && ((*(_DWORD *)v60 >> 5) & 0xF) != 2
      && ((*(_DWORD *)v60 >> 5) & 0xFu) - 3 > 1 )
    {
      if ( (_BYTE)v56 )
        goto LABEL_249;
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointMovementPositionMin,
        0,
        0LL,
        0,
        0);
LABEL_248:
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointMovementPositionMax,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointMovementPositionStart,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)&DEVPKEY_DevicePanel_JointMovementPosition,
        0,
        0LL,
        0,
        0);
      goto LABEL_249;
    }
    v54 = 0;
    if ( (int)PnpSetObjectProperty(
                (__int64)v3,
                (__int64)v7,
                6,
                (__int64)v8,
                0LL,
                (__int64)&DEVPKEY_DevicePanel_JointMovementPositionMin,
                7,
                (__int64)&v54,
                4u,
                0) >= 0 )
    {
      v50 = *((unsigned __int16 *)v15 + 3);
      v51 = (unsigned __int16)v15[1];
      v52 = (*v15 & 0x1E0) == 0x20 ? v50 + v51 : v50 % 0x168 + v51 % 0x168;
      LODWORD(v68) = v52;
      if ( (int)PnpSetObjectProperty(
                  (__int64)v3,
                  (__int64)v7,
                  6,
                  (__int64)v8,
                  0LL,
                  (__int64)&DEVPKEY_DevicePanel_JointMovementPositionMax,
                  7,
                  (__int64)&v68,
                  4u,
                  0) >= 0 )
      {
        v53 = *((unsigned __int16 *)v15 + 3);
        if ( (*v15 & 0x1E0) != 0x20 )
          v53 %= 0x168u;
        HIDWORD(v68) = v53;
        if ( (int)PnpSetObjectProperty(
                    (__int64)v3,
                    (__int64)v7,
                    6,
                    (__int64)v8,
                    0LL,
                    (__int64)&DEVPKEY_DevicePanel_JointMovementPositionStart,
                    7,
                    (__int64)&v68 + 4,
                    4u,
                    0) >= 0
          && ((int)PnpGetObjectProperty(
                     v3,
                     v7,
                     6u,
                     v8,
                     0LL,
                     (__int64)&DEVPKEY_DevicePanel_JointMovementPosition,
                     &v61,
                     &v54,
                     4u,
                     (__int64)&v57,
                     0) < 0
           || v61 != 7
           || v57 != 4
           || v54 > (unsigned int)v68) )
        {
          PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)&DEVPKEY_DevicePanel_JointMovementPosition,
            7,
            (__int64)&v68 + 4,
            4u,
            0);
        }
      }
    }
LABEL_249:
    ++v74;
    ++v76;
    v17 = v63;
  }
  if ( v18 == -1073741275 )
LABEL_28:
    v10 = 0;
LABEL_29:
  if ( v8 )
    ZwClose(v8);
LABEL_31:
  if ( v7 )
    goto LABEL_50;
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v69 )
    ExFreePoolWithTag(v69, 0);
LABEL_36:
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( *(_QWORD *)&v58[1] )
    ExFreePoolWithTag(*(PVOID *)&v58[1], 0);
  if ( v60 )
    ExFreePoolWithTag(v60, 0);
  return (unsigned int)v10;
}
