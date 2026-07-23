/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x1409786A0
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x1408A3FC4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140AFCFE0 (DrvDbGetObjectList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x1408A5E48 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     _PnpCtxRegCreateKey @ 0x140AED690 (_PnpCtxRegCreateKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 *a1, __int64 a2, int a3, HANDLE *a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  void *RegistrarSecurityDescriptor; // rsi
  int v11; // eax
  HANDLE *v12; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  int Key; // eax

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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( RegistrarSecurityDescriptor )
        ExFreePoolWithTag(RegistrarSecurityDescriptor, 0);
      goto LABEL_7;
    }
    if ( !(_DWORD)v4 )
    {
      Key = PnpCtxRegOpenKey(*a1, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, (__int64)v12);
      goto LABEL_23;
    }
    if ( (_DWORD)v4 != 1 || (RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor()) != 0LL )
    {
      Key = PnpCtxRegCreateKey(
              *a1,
              *(_QWORD *)(a2 + 96),
              qword_1400019B0[v4],
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 3221225701LL;
  }
  DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
  if ( DatabaseNode < 0 )
    goto LABEL_5;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 || (RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor()) != 0LL )
    {
      if ( *a1 && (v14 = *(_QWORD *)(*a1 + 224)) != 0 )
        v15 = *(_QWORD *)(v14 + 8);
      else
        v15 = 0LL;
      DatabaseNode = RegRtlCreateTreeTransacted(
                       *(HANDLE *)(a2 + 96),
                       (NTSTRSAFE_PCWSTR)qword_1400019B0[v4],
                       0,
                       0x2000000u,
                       (__int64)RegistrarSecurityDescriptor,
                       0,
                       a4,
                       0LL,
                       v15);
      goto LABEL_5;
    }
    goto LABEL_32;
  }
  DatabaseNode = PnpCtxRegOpenKey(*a1, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, (__int64)a4);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_7:
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return 3221226349LL;
  else
    return (unsigned int)DatabaseNode;
}
