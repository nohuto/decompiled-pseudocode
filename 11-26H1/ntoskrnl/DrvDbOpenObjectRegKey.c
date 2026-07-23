/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x140977FE0
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1408A43CC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbOpenDriverFileRegKey @ 0x1408A4CF0 (DrvDbOpenDriverFileRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x1408A5A58 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140976018 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1409768C0 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14097690C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x140976AC0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x140977F88 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140ADFA38 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B258C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140B270A4 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140B55104 (DrvDbGetObjectDatabaseNodeName.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x1408A5E48 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409786A0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140978AEC (DrvDbUnloadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x140978C5C (_PnpCtxRegCreateTree.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     RtlDuplicateUnicodeString @ 0x1409791B0 (RtlDuplicateUnicodeString.c)
 *     DrvDbFindDatabaseNode @ 0x140979718 (DrvDbFindDatabaseNode.c)
 *     _PnpCtxRegCreateKey @ 0x140AED690 (_PnpCtxRegCreateKey.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbOpenObjectRegKey(
        __int64 *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8,
        _QWORD *a9)
{
  __int64 v11; // r15
  __int64 *v12; // r13
  bool v13; // zf
  __int64 *v14; // rsi
  int DatabaseNode; // ebx
  const WCHAR *v16; // r14
  __int64 *v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *RegistrarSecurityDescriptor; // r12
  int v20; // eax
  __int64 v21; // r13
  HANDLE *v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  HANDLE v26; // r12
  struct _KTHREAD *v27; // rax
  HANDLE v28; // rdi
  struct _KTHREAD *v29; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  wchar_t *v33; // r13
  wchar_t *v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  int Key; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  wchar_t *Buffer; // rdi
  HANDLE Handle[2]; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING StringIn; // [rsp+68h] [rbp-21h] BYREF
  UNICODE_STRING StringOut; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v48; // [rsp+E0h] [rbp+57h] BYREF

  v11 = 0LL;
  v12 = a1;
  v13 = *(_WORD *)a4 == 64;
  v14 = 0LL;
  Handle[0] = 0LL;
  DatabaseNode = 0;
  v48 = 0LL;
  *(_DWORD *)(&StringIn.MaximumLength + 1) = 0;
  StringOut = 0LL;
  if ( !v13 )
    goto LABEL_2;
  v33 = (wchar_t *)(a4 + 2);
  v34 = wcschr((const wchar_t *)(a4 + 2), 0x3Au);
  if ( !v34
    || (StringIn.Buffer = v33,
        StringIn.Length = 2 * (v34 - v33),
        StringIn.MaximumLength = StringIn.Length,
        v16 = v34 + 1,
        v34 == (wchar_t *)-2LL) )
  {
    v12 = a1;
LABEL_2:
    v16 = (const WCHAR *)a4;
LABEL_3:
    v14 = (__int64 *)v12[6];
    goto LABEL_4;
  }
  if ( v16 == (const WCHAR *)a4 )
  {
    v12 = a1;
    goto LABEL_3;
  }
  v12 = a1;
  DatabaseNode = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut);
  if ( DatabaseNode < 0 )
    goto LABEL_28;
  Buffer = StringOut.Buffer;
  DatabaseNode = DrvDbFindDatabaseNode(a1, StringOut.Buffer, &v48);
  if ( Buffer )
    ExFreePool(Buffer);
  v14 = v48;
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
    v35 = DrvDbAcquireDatabaseNodeBaseKey(v12, v14, a3, Handle);
    DatabaseNode = v35;
    if ( v35 < 0 )
    {
      if ( v35 == -1073740697 )
        DatabaseNode = -1073741772;
      goto LABEL_28;
    }
    v36 = *v12;
    if ( a6 )
    {
      DatabaseNode = PnpCtxRegCreateTree(v36, Handle[0], v16, 0LL, a5, 0LL, a7, a8);
    }
    else
    {
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 224);
        if ( v37 )
          v11 = *(_QWORD *)(v37 + 8);
      }
      DatabaseNode = RegRtlOpenKeyTransacted((char *)Handle[0], v16, 0, a5, a7, v11);
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v12 = a1;
              DatabaseNode = -1073741595;
              goto LABEL_28;
            }
          }
          Key = PnpCtxRegCreateKey(
                  *a1,
                  v17[12],
                  qword_1400019B0[a3],
                  0,
                  0x2000000,
                  (__int64)RegistrarSecurityDescriptor,
                  (__int64)v22,
                  0LL);
        }
        else
        {
          Key = PnpCtxRegOpenKey(*a1, v17[12], 0LL, 0, 0x2000000u, (__int64)v22);
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
          if ( *v12 && (v40 = *(_QWORD *)(*v12 + 224)) != 0 )
            v41 = *(_QWORD *)(v40 + 8);
          else
            v41 = 0LL;
          DatabaseNode = RegRtlOpenKeyTransacted((char *)v17[12], 0LL, 0, 0x2000000u, Handle, v41);
          ExReleaseResourceLite((PERESOURCE)v17[19]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_14;
        }
        if ( a3 == 1 )
        {
          RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor();
          if ( !RegistrarSecurityDescriptor )
          {
            ExReleaseResourceLite((PERESOURCE)v17[19]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            DatabaseNode = -1073741595;
            goto LABEL_28;
          }
        }
        if ( *v12 && (v31 = *(_QWORD *)(*v12 + 224)) != 0 )
          v32 = *(_QWORD *)(v31 + 8);
        else
          v32 = 0LL;
        DatabaseNode = RegRtlCreateTreeTransacted(
                         (HANDLE)v17[12],
                         (NTSTRSAFE_PCWSTR)qword_1400019B0[a3],
                         0,
                         0x2000000u,
                         (__int64)RegistrarSecurityDescriptor,
                         0,
                         Handle,
                         0LL,
                         v32);
      }
    }
    ExReleaseResourceLite((PERESOURCE)v17[19]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
    if ( *v12 && (v23 = *(_QWORD *)(*v12 + 224)) != 0 )
      v24 = *(_QWORD *)(v23 + 8);
    else
      v24 = 0LL;
    v25 = RegRtlOpenKeyTransacted((char *)Handle[0], v16, 0, a5, a7, v24);
    v26 = Handle[0];
    DatabaseNode = v25;
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v17[19], 1u);
    if ( (v17[8] & 2) == 0 && ZwClose(v26) >= 0 )
      DrvDbUnloadDatabaseNode(v12, v17);
    ExReleaseResourceLite((PERESOURCE)v17[19]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
  v38 = DrvDbAcquireDatabaseNodeBaseKey(v12, v14, a3, Handle);
  DatabaseNode = v38;
  if ( v38 < 0 )
  {
    if ( v38 == -1073740697 )
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
  v28 = Handle[0];
  if ( Handle[0] )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v14[19], 1u);
    if ( (v14[8] & 2) == 0 && ZwClose(v28) >= 0 )
      DrvDbUnloadDatabaseNode(v12, v14);
    ExReleaseResourceLite((PERESOURCE)v14[19]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)DatabaseNode;
}
