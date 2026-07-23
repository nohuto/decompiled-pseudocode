/*
 * XREFs of PiDevCfgInitMigrationContext @ 0x140A45D74
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     PiDevCfgFreeMigrationContext @ 0x140A45FA0 (PiDevCfgFreeMigrationContext.c)
 */

__int64 __fastcall PiDevCfgInitMigrationContext(UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  void *v7; // rdx
  int CachedNodeBaseKey; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  void **v14; // rsi
  NTSTATUS v15; // eax
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v18; // [rsp+90h] [rbp+30h] BYREF

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  v18 = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = a1;
  *(_QWORD *)(a3 + 48) = a2;
  v5 = *(_QWORD *)&PiPnpRtlCtx;
  v16 = 0LL;
  v6 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 128LL);
  if ( !v6 )
  {
    v6 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
    *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 128LL) = v6;
  }
  CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(v5, v6, 4, &v18);
  if ( CachedNodeBaseKey < 0 )
    goto LABEL_8;
  LODWORD(v16) = 3145774;
  *((_QWORD *)&v16 + 1) = L"Control\\DeviceMigration";
  ObjectAttributes.RootDirectory = v18;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)a3 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey((PHANDLE)a3, 0x20019u, &ObjectAttributes);
  CachedNodeBaseKey = v11;
  if ( v11 == -1073741772 )
    return 0;
  if ( v11 < 0 )
    goto LABEL_8;
  LODWORD(v16) = 1048590;
  *((_QWORD *)&v16 + 1) = L"Devices";
  ObjectAttributes.RootDirectory = *(HANDLE *)a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwOpenKey((PHANDLE)(a3 + 8), 0x20019u, &ObjectAttributes);
  CachedNodeBaseKey = v12;
  if ( v12 == -1073741772 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else if ( v12 < 0 )
  {
LABEL_8:
    PiDevCfgFreeMigrationContext(a3, v7, v9, v10);
    return (unsigned int)CachedNodeBaseKey;
  }
  LODWORD(v16) = 1048590;
  *((_QWORD *)&v16 + 1) = L"Classes";
  v14 = (void **)(a3 + 16);
  ObjectAttributes.RootDirectory = *(HANDLE *)a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = ZwOpenKey((PHANDLE)(a3 + 16), 0x20019u, &ObjectAttributes);
  CachedNodeBaseKey = v15;
  if ( v15 == -1073741772 )
  {
    CachedNodeBaseKey = 0;
    *v14 = 0LL;
  }
  else if ( v15 < 0 )
  {
    goto LABEL_8;
  }
  v7 = *v14;
  if ( *v14 )
  {
    if ( a1 )
    {
      CachedNodeBaseKey = IopOpenRegistryKeyEx((HANDLE *)(a3 + 24), v7, a1, 0x20019u);
      if ( CachedNodeBaseKey == -1073741772 )
      {
        CachedNodeBaseKey = 0;
        *(_QWORD *)(a3 + 24) = 0LL;
        return (unsigned int)CachedNodeBaseKey;
      }
    }
    if ( CachedNodeBaseKey < 0 )
      goto LABEL_8;
  }
  return (unsigned int)CachedNodeBaseKey;
}
