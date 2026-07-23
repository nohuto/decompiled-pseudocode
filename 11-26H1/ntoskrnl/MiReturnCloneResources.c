/*
 * XREFs of MiReturnCloneResources @ 0x140A07D98
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiLockAndInsertPageInFreeList @ 0x1402925F8 (MiLockAndInsertPageInFreeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiInsertClone @ 0x1404F0180 (MiInsertClone.c)
 *     MiLockProcessParentPage @ 0x140507ED4 (MiLockProcessParentPage.c)
 *     MiFreeCloneDescriptorAndHeader @ 0x140535524 (MiFreeCloneDescriptorAndHeader.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiFreeForkMaps @ 0x140A07F00 (MiFreeForkMaps.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 *     MiDeleteInsertedCloneVads @ 0x140B42284 (MiDeleteInsertedCloneVads.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall MiReturnCloneResources(_QWORD *a1, int a2)
{
  _KPROCESS *v2; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r10
  __int64 v14; // r9
  _OWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (_KPROCESS *)a1[1];
  v5 = a1[32];
  memset(v16, 0, sizeof(v16));
  if ( v5 )
    MiReturnFullProcessCommitment(v2, v5);
  v6 = a1[35];
  v7 = a1[36];
  if ( v7 > v6 )
    PsReturnProcessNonPagedPoolQuota((ULONG_PTR)v2, v7 - v6);
  v8 = a1[42];
  if ( v8 != -1 )
    MiLockAndInsertPageInFreeList(48 * v8 - 0x220000000000LL);
  v9 = (_QWORD *)a1[37];
  if ( v9 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      ExFreePoolWithTag(v9, 0);
      v9 = v10;
    }
    while ( v10 );
  }
  v11 = (_QWORD *)a1[3];
  if ( v11 )
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( !v11[5] )
      goto LABEL_15;
    v14 = 0LL;
    do
    {
      v14 += 32LL;
      ++v13;
      v12 += *(_QWORD *)(v14 + v11[3] - 8);
    }
    while ( v13 < v11[5] );
    if ( v12 )
    {
      v11[6] = v12;
      MiInsertClone((__int64)v2, v11, 0);
    }
    else
    {
LABEL_15:
      MiFreeCloneDescriptorAndHeader((ULONG_PTR)v2, v11);
    }
  }
  KiStackAttachProcess(v2, 0, (__int64)v16);
  MiLockProcessParentPage(v2, 0);
  MiFreeForkMaps(a1 + 6);
  if ( a2 < 0 )
    MiDeleteInsertedCloneVads(v2);
  return KiUnstackDetachProcess((__int64)v16, 0);
}
