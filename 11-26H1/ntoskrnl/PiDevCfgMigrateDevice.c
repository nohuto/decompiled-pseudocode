/*
 * XREFs of PiDevCfgMigrateDevice @ 0x14098B138
 * Callers:
 *     PiDevCfgMigrateRootDevice @ 0x1407AA1AC (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AC990 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404FCFB8 (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _PnpCtxRegDeleteValue @ 0x14090B324 (_PnpCtxRegDeleteValue.c)
 *     PiDevCfgInitMigrationContext @ 0x14098B654 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgFreeMigrationContext @ 0x14098B880 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14098BEFC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x14098C258 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgLogDeviceMigrated @ 0x14098C31C (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14098D0A8 (PiDevCfgSetDeviceRegProp.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x1409DC040 (_CmIsRootEnumeratedDevice.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A70B50 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140A70F80 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A71014 (PiDevCfgFindDeviceMigrationNode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(int a1, __int64 a2, unsigned __int16 *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // esi
  int v9; // r13d
  int inited; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int DeviceMigrationNode; // ebx
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  const wchar_t **v20; // rdx
  int v22; // eax
  char *v23; // r8
  char IsRootEnumeratedDevice; // al
  int v25; // eax
  int v26; // eax
  unsigned int *v27; // rcx
  _WORD *i; // rsi
  int v29; // eax
  __int64 v30; // rax
  PVOID P; // [rsp+68h] [rbp-39h] BYREF
  int v32; // [rsp+70h] [rbp-31h] BYREF
  int v33; // [rsp+74h] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  __int64 v35; // [rsp+80h] [rbp-21h]
  __int128 v36; // [rsp+88h] [rbp-19h] BYREF
  __int128 v37; // [rsp+98h] [rbp-9h]
  __int128 v38; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+17h]

  v39 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v35 = 0LL;
  v8 = a1;
  v33 = 0;
  v9 = 0;
  v32 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, &v36);
  v13 = 0LL;
  DeviceMigrationNode = inited;
  if ( inited < 0 )
    goto LABEL_21;
  if ( !(_QWORD)v36 )
  {
    DeviceMigrationNode = 0;
    goto LABEL_21;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       *(_QWORD *)(a2 + 8),
                       1,
                       *(_QWORD *)(a2 + 16),
                       0LL,
                       (__int64)DEVPKEY_Device_MigrationRank,
                       (__int64)&v33,
                       0LL,
                       0,
                       (__int64)&v32,
                       0) == -1073741789
    && v33 == 9
    && v32 == 8 )
  {
    goto LABEL_31;
  }
  if ( *((_QWORD *)&v36 + 1) )
  {
    DeviceMigrationNode = PiDevCfgQueryDeviceMigrationNode(&v36, *(_QWORD *)(a2 + 8), &P);
    if ( DeviceMigrationNode >= 0 )
    {
      *((_QWORD *)P + 23) = 0LL;
    }
    else
    {
      P = 0LL;
      v22 = 0;
      if ( DeviceMigrationNode != -1073741772 )
        v22 = DeviceMigrationNode;
      DeviceMigrationNode = v22;
    }
  }
  if ( !P )
  {
    IsRootEnumeratedDevice = CmIsRootEnumeratedDevice(*(PCWSTR *)(a2 + 8));
    v13 = 0LL;
    if ( IsRootEnumeratedDevice )
      goto LABEL_31;
    if ( !*(_QWORD *)(a2 + 64) )
    {
LABEL_43:
      if ( P )
        goto LABEL_10;
      if ( !*((_QWORD *)&v37 + 1) )
        goto LABEL_32;
      DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(&v36, a2, *((_QWORD *)&v37 + 1), 69665LL, &P);
      if ( DeviceMigrationNode < 0 )
      {
        P = 0LL;
        v25 = 0;
        if ( DeviceMigrationNode != -1073741275 )
          v25 = DeviceMigrationNode;
        DeviceMigrationNode = v25;
      }
LABEL_31:
      if ( !P )
      {
LABEL_32:
        PiDevCfgClearDeviceMigrationNode(&v36, *(_QWORD *)(a2 + 8));
        goto LABEL_21;
      }
      goto LABEL_10;
    }
    v11 = v38;
    if ( !(_QWORD)v38 )
    {
      v26 = PnpCtxRegOpenKey(PiPnpRtlCtx, v36, (unsigned int)L"Locations", 0, 131097, (__int64)&v38);
      v13 = 0LL;
      if ( v26 == -1073741772 )
      {
        *(_QWORD *)&v38 = 0LL;
        goto LABEL_43;
      }
      if ( v26 < 0 )
      {
LABEL_68:
        DeviceMigrationNode = v26;
        goto LABEL_21;
      }
      v11 = v38;
      if ( !(_QWORD)v38 )
        goto LABEL_43;
    }
    for ( i = *(_WORD **)(a2 + 64); *i; i += v30 + 1 )
    {
      v26 = PnpCtxRegOpenKey(PiPnpRtlCtx, v11, (_DWORD)i, 0, 131097, (__int64)&Handle);
      if ( v26 == -1073741772 )
      {
        v13 = 0LL;
      }
      else
      {
        if ( v26 < 0 )
          goto LABEL_68;
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(&v36, a2, Handle, 70145LL, &P);
        ZwClose(Handle);
        v13 = 0LL;
        if ( DeviceMigrationNode >= 0 )
          goto LABEL_74;
        P = 0LL;
        v29 = 0;
        if ( DeviceMigrationNode != -1073741275 )
          v29 = DeviceMigrationNode;
        DeviceMigrationNode = v29;
      }
      v30 = -1LL;
      do
        ++v30;
      while ( i[v30] );
      v11 = v38;
    }
    if ( DeviceMigrationNode < 0 )
      goto LABEL_21;
LABEL_74:
    v8 = a1;
    goto LABEL_43;
  }
LABEL_10:
  v15 = *((_DWORD *)P + 4);
  if ( (v15 & 1) != 0 )
  {
    DeviceMigrationNode = -1073740007;
  }
  else if ( (v15 & 2) != 0 )
  {
    DeviceMigrationNode = -1073740719;
  }
  else
  {
    if ( (int)IopGetRegistryValue(*((HANDLE *)P + 5)) >= 0 )
    {
      if ( PnpValidateRegistryDword(v35) )
        v9 = *(unsigned int *)((char *)v27 + v27[2]);
      ExFreePoolWithTag(v27, 0);
    }
    v16 = *(_QWORD *)(a2 + 16);
    v17 = *(_QWORD *)(a2 + 8);
    v32 = 0;
    if ( (unsigned int)PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         v17,
                         1,
                         v16,
                         0LL,
                         (__int64)&DEVPKEY_Device_ClassGuid,
                         (__int64)&v33,
                         0LL,
                         0,
                         (__int64)&v32,
                         0) != -1073741789
      || v33 != 13
      || v32 != 16 )
    {
      if ( a3 )
        PiDevCfgSetDeviceRegProp(v18, a2, 9, 1, *((_QWORD *)a3 + 1), *a3 + 2);
      else
        PiPnpRtlSetObjectProperty(
          *(_QWORD *)&PiPnpRtlCtx,
          *(_QWORD *)(a2 + 8),
          1LL,
          *(_QWORD *)(a2 + 16),
          0LL,
          &DEVPKEY_Device_ClassGuid,
          13,
          (char *)P + 80,
          16,
          (*(_DWORD *)a2 & 1) << 17);
    }
    DeviceMigrationNode = PiDevCfgConfigureDeviceDriverConfiguration(
                            v8,
                            a2,
                            *((_QWORD *)P + 5),
                            -1,
                            0LL,
                            0LL,
                            (__int64)a5,
                            (__int64)a6);
    if ( DeviceMigrationNode >= 0 )
    {
      if ( a5 )
        *a5 |= v9;
      v23 = (char *)P;
      if ( *((_QWORD *)P + 23) )
      {
        PnpCtxRegDeleteValue(v19, *(void **)(a2 + 16), L"ParentIdPrefix");
        v23 = (char *)P;
      }
      PiPnpRtlSetObjectProperty(
        *(_QWORD *)&PiPnpRtlCtx,
        *(_QWORD *)(a2 + 8),
        1LL,
        *(_QWORD *)(a2 + 16),
        0LL,
        DEVPKEY_Device_MigrationRank,
        9,
        v23 + 184,
        8,
        (*(_DWORD *)a2 & 1) << 17);
    }
  }
  PiDevCfgLogDeviceMigrated(a2, P, (unsigned int)DeviceMigrationNode);
  v20 = (const wchar_t **)P;
  if ( (*((_DWORD *)P + 4) & 1) == 0 )
  {
    PiDevCfgClearDeviceMigrationNode(&v36, *((_QWORD *)P + 4));
    v20 = (const wchar_t **)P;
  }
  if ( !v20 || wcsicmp(*(const wchar_t **)(a2 + 8), v20[4]) )
    goto LABEL_32;
LABEL_21:
  if ( P )
    PiDevCfgFreeDeviceMigrationNode(P);
  PiDevCfgFreeMigrationContext(&v36, v11, v12, v13);
  return (unsigned int)DeviceMigrationNode;
}
