/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x1407AF25C
 * Callers:
 *     PiConfigureDevice @ 0x1407A7A70 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDevCfgAppendMultiSz @ 0x1407AB6AC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14094DB08 (PiDevCfgSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140A47AD0 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgFreeDriverNode @ 0x140AE6B84 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AE836C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AEA1C8 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSetObjectProperty @ 0x140B0F6C0 (PiDevCfgSetObjectProperty.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  wchar_t *v2; // r12
  wchar_t *v3; // r13
  int v4; // r15d
  int inited; // ebx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 *v9; // rdi
  int DriverConfiguration; // eax
  char v11; // r9
  UNICODE_STRING *v12; // rcx
  __int64 v13; // rdi
  int Buffer; // ecx
  unsigned int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v30; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v31; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v32; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING *p_DestinationString; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D4h] [rbp-2Ch]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING v39; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v40; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v41; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v42; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v43; // [rsp+120h] [rbp+20h] BYREF
  __int128 v44; // [rsp+130h] [rbp+30h]
  __int128 v45; // [rsp+140h] [rbp+40h]
  UNICODE_STRING *v46; // [rsp+150h] [rbp+50h]
  _BYTE v47[16]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v48; // [rsp+170h] [rbp+70h]
  int v49; // [rsp+208h] [rbp+108h] BYREF
  int v50; // [rsp+210h] [rbp+110h] BYREF
  int v51; // [rsp+218h] [rbp+118h] BYREF

  memset_0(v47, 0, 0x58uLL);
  v51 = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = 0LL;
  v27 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v32.Length = 0LL;
  v4 = 0;
  v32.Buffer = 0LL;
  *(_QWORD *)&v39.Length = 0LL;
  v39.Buffer = 0LL;
  *(_QWORD *)&v40.Length = 0LL;
  v40.Buffer = 0LL;
  *(_QWORD *)&v41.Length = 0LL;
  v41.Buffer = 0LL;
  *(_QWORD *)&v42.Length = 0LL;
  v42.Buffer = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  v43.Buffer = 0LL;
  *(_QWORD *)&v30.Length = 0LL;
  v30.Buffer = 0LL;
  *(_QWORD *)&v31.Length = 0LL;
  v31.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v49 = 0;
  v50 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_68;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    inited = -1073741808;
    goto LABEL_68;
  }
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v47);
  if ( inited < 0 )
    goto LABEL_66;
  v7 = v48;
  v8 = *(_QWORD *)(a1 + 48);
  v33 = DEVPKEY_Device_PendingConfigurationIds;
  p_DestinationString = &DestinationString;
  v34 = 8210LL;
  v36 = 0;
  v38 = 0LL;
  v37 = 6;
  inited = PiDevCfgQueryObjectProperties(1, v8, 1, v48, (__int64)&v33, 1);
  if ( inited < 0 )
    goto LABEL_66;
  if ( (int)v38 < 0 )
    RtlInitUnicodeString(&DestinationString, 0LL);
  inited = PiDevCfgFindDeviceDriver(v47, DestinationString.Buffer, &v27);
  if ( inited < 0 )
    goto LABEL_66;
  v9 = *(__int64 **)(v27 + 208);
  if ( v9 == (__int64 *)(v27 + 208) )
    goto LABEL_50;
  do
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(v9);
    inited = DriverConfiguration;
    if ( DriverConfiguration == -1073740653 )
    {
      v11 = 1;
      v12 = &v32;
    }
    else
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_66;
      if ( v9[37] )
      {
        *((_DWORD *)v9 + 46) &= ~1u;
        goto LABEL_29;
      }
      if ( v9[39] )
      {
        inited = PiDevCfgAppendMultiSz(&v39, 0LL, (const void **)v9 + 38, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      if ( v9[41] )
      {
        inited = PiDevCfgAppendMultiSz(&v40, 0LL, (const void **)v9 + 40, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      if ( v9[43] )
      {
        inited = PiDevCfgAppendMultiSz(&v41, 0LL, (const void **)v9 + 42, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      if ( v9[45] )
      {
        inited = PiDevCfgAppendMultiSz(&v42, 0LL, (const void **)v9 + 44, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      if ( v9[47] )
      {
        inited = PiDevCfgAppendMultiSz(&v43, 0LL, (const void **)v9 + 46, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      v4 |= *((_DWORD *)v9 + 104);
      inited = PiDevCfgAppendMultiSz(&v30, (const void **)v9 + 5, 0LL, 0);
      if ( inited < 0 )
        goto LABEL_66;
      v11 = 0;
      v12 = &v31;
    }
    inited = PiDevCfgAppendMultiSz(v12, (const void **)v9 + 53, 0LL, v11);
    if ( inited < 0 )
      goto LABEL_66;
LABEL_29:
    v9 = (__int64 *)*v9;
  }
  while ( v9 != (__int64 *)(v27 + 208) );
  v13 = 0LL;
  if ( inited < 0 )
    goto LABEL_66;
  Buffer = (int)v32.Buffer;
  if ( v32.Buffer )
  {
    inited = PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, *(_QWORD *)(a1 + 48), 1, v7);
    if ( inited >= 0 )
      inited = -1073740653;
    goto LABEL_66;
  }
  v15 = 0;
  *(_QWORD *)&v44 = &v39;
  *((_QWORD *)&v44 + 1) = &v40;
  *(_QWORD *)&v45 = &v41;
  *((_QWORD *)&v45 + 1) = &v42;
  v46 = &v43;
  do
  {
    v16 = *(_QWORD *)((char *)&v44 + v13);
    if ( *(_QWORD *)(v16 + 8) )
    {
      v17 = *(_QWORD *)(a1 + 48);
      v33 = *(__int64 **)((char *)&off_140FD6698 + v13);
      p_DestinationString = &UnicodeString;
      v34 = 8210LL;
      v36 = 0;
      v38 = 0LL;
      v37 = 6;
      inited = PiDevCfgQueryObjectProperties(Buffer, v17, 1, v7, (__int64)&v33, 1);
      if ( inited < 0 )
        goto LABEL_66;
      if ( (int)v38 < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)v16, 0);
      if ( inited < 0 )
        goto LABEL_66;
      inited = PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, *(_QWORD *)(a1 + 48), 1, v7);
      if ( inited < 0 )
        goto LABEL_66;
      RtlFreeAnsiString(&UnicodeString);
    }
    ++v15;
    v13 += 8LL;
  }
  while ( v15 < 5 );
  v18 = v27;
  v19 = (__int64 *)(v27 + 208);
  v20 = *(__int64 **)(v27 + 208);
  while ( v20 != v19 )
  {
    if ( (v20[23] & 1) != 0 )
    {
      inited = PiDevCfgConfigureDeviceDriver(a1, (unsigned int)v47, (_DWORD)v20, (unsigned int)&v49, 0LL);
      if ( inited < 0 )
        goto LABEL_66;
      v4 |= v49;
      v18 = v27;
    }
    v20 = (__int64 *)*v20;
    v19 = (__int64 *)(v18 + 208);
  }
  v2 = v30.Buffer;
  v3 = v31.Buffer;
LABEL_50:
  if ( DestinationString.Buffer )
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, *(_QWORD *)(a1 + 48), 1, v7);
  v21 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    inited = PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, v21, 1, v7);
    if ( inited < 0 )
      goto LABEL_66;
  }
  else
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, v21, 1, v7);
  }
  v22 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    inited = PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, v22, 1, v7);
    if ( inited < 0 )
      goto LABEL_66;
  }
  else
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, v22, 1, v7);
  }
  if ( v4 )
  {
    v23 = *(_QWORD *)(a1 + 48);
    v50 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v23, v7, 11, (__int64)&v51, (__int64)&v49, (__int64)&v50, 0) < 0
      || v51 != 4
      || (v25 = v49, v50 != 4) )
    {
      v25 = 0;
    }
    v49 = v4 | v25;
    PiDevCfgSetDeviceRegProp(v24, (unsigned int)v47, 11, 4, (__int64)&v49, 4);
  }
LABEL_66:
  if ( v27 )
    PiDevCfgFreeDriverNode(v27);
LABEL_68:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v39);
  RtlFreeAnsiString(&v40);
  RtlFreeAnsiString(&v41);
  RtlFreeAnsiString(&v42);
  RtlFreeAnsiString(&v43);
  RtlFreeAnsiString(&v30);
  RtlFreeAnsiString(&v31);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v32);
  PiDevCfgFreeDeviceContext(v47);
  return (unsigned int)inited;
}
