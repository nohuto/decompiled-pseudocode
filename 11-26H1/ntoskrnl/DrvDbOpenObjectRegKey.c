/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x14091D580
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14089DFCC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbOpenDriverFileRegKey @ 0x14089E8F0 (DrvDbOpenDriverFileRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14089E93C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x14089F658 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x14091B5B8 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x14091BE60 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14091BEAC (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x14091C060 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14091C280 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x14091D528 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140ACF33C (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B234C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140B24C04 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140B52864 (DrvDbGetObjectDatabaseNodeName.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     wcschr @ 0x140537F60 (wcschr.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14089FA48 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x14091DE9C (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x14091E08C (DrvDbUnloadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x14091E1FC (_PnpCtxRegCreateTree.c)
 *     _RegRtlCreateTreeTransacted @ 0x14091E278 (_RegRtlCreateTreeTransacted.c)
 *     RtlDuplicateUnicodeString @ 0x14091E750 (RtlDuplicateUnicodeString.c)
 *     DrvDbFindDatabaseNode @ 0x14091ECB8 (DrvDbFindDatabaseNode.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegCreateKey @ 0x140AEABA0 (_PnpCtxRegCreateKey.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbOpenObjectRegKey(
        _QWORD *a1,
        __int64 *a2,
        unsigned int a3,
        wchar_t *a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8,
        _QWORD *a9)
{
  __int64 v11; // r15
  _QWORD *v12; // r13
  bool v13; // zf
  __int64 *v14; // rsi
  NTSTATUS DatabaseNode; // ebx
  wchar_t *v16; // r14
  __int64 *v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *RegistrarSecurityDescriptor; // r12
  int v20; // eax
  __int64 v21; // r13
  HANDLE *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  NTSTATUS v27; // eax
  HANDLE v28; // r12
  struct _KTHREAD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  HANDLE v32; // rdi
  struct _KTHREAD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  wchar_t *v39; // r13
  wchar_t *v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // eax
  int Key; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  wchar_t *Buffer; // rdi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  HANDLE Handle[2]; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING StringIn; // [rsp+68h] [rbp-21h] BYREF
  UNICODE_STRING StringOut; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v62; // [rsp+E0h] [rbp+57h] BYREF

  v11 = 0LL;
  v12 = a1;
  v13 = *a4 == 64;
  v14 = 0LL;
  Handle[0] = 0LL;
  DatabaseNode = 0;
  v62 = 0LL;
  *(_DWORD *)(&StringIn.MaximumLength + 1) = 0;
  StringOut = 0LL;
  if ( !v13 )
    goto LABEL_2;
  v39 = a4 + 1;
  v40 = wcschr(a4 + 1, 0x3Au);
  if ( !v40
    || (StringIn.Buffer = v39,
        StringIn.Length = 2 * (v40 - v39),
        StringIn.MaximumLength = StringIn.Length,
        v16 = v40 + 1,
        v40 == (wchar_t *)-2LL) )
  {
    v12 = a1;
LABEL_2:
    v16 = a4;
LABEL_3:
    v14 = (__int64 *)v12[6];
    goto LABEL_4;
  }
  if ( v16 == a4 )
  {
    v12 = a1;
    goto LABEL_3;
  }
  v12 = a1;
  DatabaseNode = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut);
  if ( DatabaseNode < 0 )
    goto LABEL_28;
  Buffer = StringOut.Buffer;
  DatabaseNode = DrvDbFindDatabaseNode(a1, StringOut.Buffer, &v62);
  if ( Buffer )
    ExFreePool(Buffer);
  v14 = v62;
  if ( DatabaseNode == -1073741772 )
  {
    DatabaseNode = -1073741766;
    goto LABEL_28;
  }
  if ( DatabaseNode < 0 )
    goto LABEL_28;
LABEL_4:
  if ( v14 || (v14 = a2) != 0LL )
  {
    v41 = DrvDbAcquireDatabaseNodeBaseKey(v12, v14, a3, Handle);
    DatabaseNode = v41;
    if ( v41 < 0 )
    {
      if ( v41 == -1073740697 )
        DatabaseNode = -1073741772;
      goto LABEL_28;
    }
    v42 = *v12;
    if ( a6 )
    {
      DatabaseNode = PnpCtxRegCreateTree(v42, Handle[0], v16, 0LL, a5, 0LL, a7, a8);
    }
    else
    {
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 224);
        if ( v43 )
          v11 = *(_QWORD *)(v43 + 8);
      }
      DatabaseNode = RegRtlOpenKeyTransacted(Handle[0], v16, 0LL, a5, a7, v11);
      if ( DatabaseNode >= 0 )
      {
        if ( a8 )
          *a8 = 2;
        goto LABEL_26;
      }
    }
LABEL_25:
    if ( DatabaseNode < 0 )
      goto LABEL_28;
    goto LABEL_26;
  }
  v17 = (__int64 *)v12[2];
  if ( v17 == v12 + 2 )
    goto LABEL_25;
  do
  {
    Handle[0] = 0LL;
    CurrentThread = KeGetCurrentThread();
    v14 = v17;
    DatabaseNode = 0;
    RegistrarSecurityDescriptor = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v17[19], 1u);
    v20 = *((_DWORD *)v17 + 16);
    if ( (v20 & 4) != 0 )
    {
      ExReleaseResourceLite((PERESOURCE)v17[19]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v44, v45);
LABEL_55:
      DatabaseNode = -1073741772;
      goto LABEL_23;
    }
    if ( (v20 & 2) != 0 )
    {
      v21 = (int)a3 + 13LL;
      v13 = v17[v21] == 0;
      v22 = (HANDLE *)&v17[v21];
      if ( !v13 )
        goto LABEL_10;
      DatabaseNode = DrvDbLoadDatabaseNode(a1, v17);
      if ( DatabaseNode >= 0 )
      {
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor();
            if ( !RegistrarSecurityDescriptor )
            {
              ExReleaseResourceLite((PERESOURCE)v17[19]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v53, v54);
              v12 = a1;
              DatabaseNode = -1073741595;
              goto LABEL_28;
            }
          }
          Key = PnpCtxRegCreateKey(
                  *a1,
                  v17[12],
                  qword_140001490[a3],
                  0,
                  0x2000000,
                  (__int64)RegistrarSecurityDescriptor,
                  (__int64)v22,
                  0LL);
        }
        else
        {
          Key = PnpCtxRegOpenKey(*a1, v17[12], 0, 0, 0x2000000, (__int64)v22);
        }
        DatabaseNode = Key;
        if ( Key >= 0 )
LABEL_10:
          Handle[0] = *v22;
      }
      v12 = a1;
    }
    else
    {
      DatabaseNode = DrvDbLoadDatabaseNode(v12, v17);
      if ( DatabaseNode >= 0 )
      {
        if ( !a3 )
        {
          if ( *v12 && (v48 = *(_QWORD *)(*v12 + 224LL)) != 0 )
            v49 = *(_QWORD *)(v48 + 8);
          else
            v49 = 0LL;
          DatabaseNode = RegRtlOpenKeyTransacted(v17[12], 0LL, 0LL, 0x2000000LL, Handle, v49);
          ExReleaseResourceLite((PERESOURCE)v17[19]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v50, v51);
          goto LABEL_14;
        }
        if ( a3 == 1 )
        {
          RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor();
          if ( !RegistrarSecurityDescriptor )
          {
            ExReleaseResourceLite((PERESOURCE)v17[19]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v55, v56);
            DatabaseNode = -1073741595;
            goto LABEL_28;
          }
        }
        if ( *v12 && (v37 = *(_QWORD *)(*v12 + 224LL)) != 0 )
          v38 = *(_QWORD *)(v37 + 8);
        else
          v38 = 0LL;
        DatabaseNode = RegRtlCreateTreeTransacted(
                         (HANDLE)v17[12],
                         (NTSTRSAFE_PCWSTR)qword_140001490[a3],
                         0,
                         0x2000000u,
                         (__int64)RegistrarSecurityDescriptor,
                         0,
                         Handle,
                         0LL,
                         v38);
      }
    }
    ExReleaseResourceLite((PERESOURCE)v17[19]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24);
    if ( RegistrarSecurityDescriptor )
      ExFreePoolWithTag(RegistrarSecurityDescriptor, 0);
LABEL_14:
    if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    {
      DatabaseNode = -1073740947;
      goto LABEL_28;
    }
    if ( DatabaseNode == -1073740697 )
      goto LABEL_55;
    if ( DatabaseNode < 0 )
      goto LABEL_28;
    if ( *v12 && (v25 = *(_QWORD *)(*v12 + 224LL)) != 0 )
      v26 = *(_QWORD *)(v25 + 8);
    else
      v26 = 0LL;
    v27 = RegRtlOpenKeyTransacted(Handle[0], v16, 0LL, a5, a7, v26);
    v28 = Handle[0];
    DatabaseNode = v27;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v17[19], 1u);
    if ( (v17[8] & 2) == 0 && ZwClose(v28) >= 0 )
      DrvDbUnloadDatabaseNode(v12, v17);
    ExReleaseResourceLite((PERESOURCE)v17[19]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31);
    Handle[0] = 0LL;
    if ( DatabaseNode != -1073741772 )
      goto LABEL_25;
LABEL_23:
    v17 = (__int64 *)*v17;
  }
  while ( v17 != v12 + 2 );
  if ( !a6 )
    goto LABEL_28;
  v14 = (__int64 *)v12[5];
  v46 = DrvDbAcquireDatabaseNodeBaseKey(v12, v14, a3, Handle);
  DatabaseNode = v46;
  if ( v46 < 0 )
  {
    if ( v46 == -1073740697 )
      DatabaseNode = -1073741662;
    goto LABEL_28;
  }
  DatabaseNode = PnpCtxRegCreateTree(*v12, Handle[0], v16, 0LL, a5, 0LL, a7, 0LL);
  if ( DatabaseNode < 0 )
    goto LABEL_28;
LABEL_26:
  if ( a9 )
    *a9 = v14;
LABEL_28:
  v32 = Handle[0];
  if ( Handle[0] )
  {
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v14[19], 1u);
    if ( (v14[8] & 2) == 0 && ZwClose(v32) >= 0 )
      DrvDbUnloadDatabaseNode(v12, v14);
    ExReleaseResourceLite((PERESOURCE)v14[19]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35);
  }
  return (unsigned int)DatabaseNode;
}
