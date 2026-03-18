/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x14089DBC4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140AFB0D0 (DrvDbGetObjectList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14089FA48 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbLoadDatabaseNode @ 0x14091DE9C (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x14091E278 (_RegRtlCreateTreeTransacted.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x140AEABA0 (_PnpCtxRegCreateKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 a1, __int64 a2, int a3, HANDLE *a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  void *RegistrarSecurityDescriptor; // rsi
  int v11; // eax
  HANDLE *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int Key; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8

  v4 = a3;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  DatabaseNode = 0;
  RegistrarSecurityDescriptor = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  v11 = *(_DWORD *)(a2 + 64);
  if ( (v11 & 4) != 0 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19);
    return 3221226599LL;
  }
  if ( (v11 & 2) != 0 )
  {
    v12 = (HANDLE *)(a2 + 104 + 8 * v4);
    if ( *v12 )
    {
LABEL_4:
      *a4 = *v12;
      goto LABEL_5;
    }
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode < 0 )
    {
LABEL_5:
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14);
      if ( RegistrarSecurityDescriptor )
        ExFreePoolWithTag(RegistrarSecurityDescriptor, 0);
      goto LABEL_7;
    }
    if ( !(_DWORD)v4 )
    {
      Key = PnpCtxRegOpenKey(*(_QWORD *)a1, *(_QWORD *)(a2 + 96), 0, 0, 0x2000000, (__int64)v12);
      goto LABEL_23;
    }
    if ( (_DWORD)v4 != 1 || (RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor()) != 0LL )
    {
      Key = PnpCtxRegCreateKey(
              *(_QWORD *)a1,
              *(_QWORD *)(a2 + 96),
              qword_140001490[v4],
              0,
              0x2000000,
              (__int64)RegistrarSecurityDescriptor,
              a2 + 104 + 8 * v4,
              0LL);
LABEL_23:
      DatabaseNode = Key;
      if ( Key >= 0 )
        goto LABEL_4;
      goto LABEL_5;
    }
LABEL_32:
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24);
    return 3221225701LL;
  }
  DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
  if ( DatabaseNode < 0 )
    goto LABEL_5;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 || (RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor()) != 0LL )
    {
      if ( *(_QWORD *)a1 && (v16 = *(_QWORD *)(*(_QWORD *)a1 + 224LL)) != 0 )
        v17 = *(_QWORD *)(v16 + 8);
      else
        v17 = 0LL;
      DatabaseNode = RegRtlCreateTreeTransacted(
                       *(HANDLE *)(a2 + 96),
                       (NTSTRSAFE_PCWSTR)qword_140001490[v4],
                       0,
                       0x2000000u,
                       (__int64)RegistrarSecurityDescriptor,
                       0,
                       a4,
                       0LL,
                       v17);
      goto LABEL_5;
    }
    goto LABEL_32;
  }
  DatabaseNode = PnpCtxRegOpenKey(*(_QWORD *)a1, *(_QWORD *)(a2 + 96), 0, 0, 0x2000000, (__int64)a4);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22);
LABEL_7:
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return 3221226349LL;
  else
    return (unsigned int)DatabaseNode;
}
