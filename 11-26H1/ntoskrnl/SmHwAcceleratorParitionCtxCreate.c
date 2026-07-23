/*
 * XREFs of SmHwAcceleratorParitionCtxCreate @ 0x14082179C
 * Callers:
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x140821320 (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExAcquireRundownProtectionEx @ 0x140376EB0 (ExAcquireRundownProtectionEx.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     InterlockedPushListSList @ 0x140735910 (InterlockedPushListSList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SmHwInitializeAccelDescriptor @ 0x140821C90 (SmHwInitializeAccelDescriptor.c)
 */

__int64 __fastcall SmHwAcceleratorParitionCtxCreate(_QWORD *a1, __int64 a2, int a3)
{
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 v4; // rbp
  BOOLEAN v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // edi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // r15
  unsigned int v15; // r8d
  unsigned __int64 v16; // r12
  char *v17; // rax
  char *v18; // rbx
  _SLIST_ENTRY *v19; // r12
  unsigned __int64 v20; // r14
  _SLIST_ENTRY *v21; // r14
  _SLIST_ENTRY *v22; // r15
  _SLIST_ENTRY *v23; // rdi
  unsigned __int64 v24; // r12
  unsigned __int64 v26; // [rsp+20h] [rbp-58h]
  _SLIST_ENTRY *v27; // [rsp+20h] [rbp-58h]
  _SLIST_ENTRY *v28; // [rsp+28h] [rbp-50h]
  ULONG Count; // [rsp+30h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v30; // [rsp+38h] [rbp-40h]
  __int64 v32; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp+20h]

  v3 = (struct _EX_RUNDOWN_REF *)(a2 + 32);
  v4 = a3;
  v32 = 0LL;
  v30 = (struct _EX_RUNDOWN_REF *)(a2 + 32);
  v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 32));
  v9 = v6;
  if ( !v6 )
  {
    v10 = -1073741431;
    goto LABEL_14;
  }
  if ( (_DWORD)v4 )
  {
    v8 = v4;
  }
  else
  {
    LOBYTE(v7) = 1;
    v11 = AccelShareAddressSpaceWithResource(*(_QWORD *)(a2 + 16), v7, &v32);
    v8 = 0LL;
    v10 = v11;
    if ( v11 < 0 )
      goto LABEL_14;
  }
  v12 = *(unsigned int *)(a2 + 64);
  v13 = *(unsigned int *)(a2 + 4 * v8 + 56);
  v14 = ((int)v12 + *(_DWORD *)(a2 + 4 * v8 + 48) - 1) / (unsigned int)v12;
  v15 = *(_DWORD *)(a2 + 44) | 0x80000000;
  Count = v14;
  v16 = (v14 * v12 * v13 + 95) & 0xFFFFFFFFFFFFFFF0uLL;
  v33 = ((unsigned int)(*(_DWORD *)(a2 + 40) * *(_DWORD *)(a2 + 64)) + 47LL) & 0xFFFFFFFFFFFFFFF0uLL;
  v26 = v33 * (unsigned int)v14;
  v17 = (char *)SmAllocEx(v16 + v26, 0x63416D73u, v15);
  v18 = v17;
  if ( v17 )
  {
    memset_0(v17, 0, 0x50uLL);
    v19 = (_SLIST_ENTRY *)&v18[v16];
    v20 = v33;
    *((_DWORD *)v18 + 14) = v14;
    v21 = (_SLIST_ENTRY *)((char *)v19 + v20);
    *((_QWORD *)v18 + 4) = a2;
    v22 = (_SLIST_ENTRY *)(v18 + 80);
    *((_DWORD *)v18 + 15) = v4;
    v23 = v19;
    *((_QWORD *)v18 + 5) = v32;
    *((_QWORD *)v18 + 6) = 0LL;
    v28 = v19;
    v27 = (_SLIST_ENTRY *)((char *)v19 + v26);
    if ( v21 < v27 )
    {
      v24 = v33;
      do
      {
        v23->Next = v21;
        *((_QWORD *)&v23->Next + 1) = v18;
        v23[1].Next = v22;
        SmHwInitializeAccelDescriptor(v23, a2, (unsigned int)v4);
        v23 = v21;
        v21 = (_SLIST_ENTRY *)((char *)v21 + v24);
        v22 = (_SLIST_ENTRY *)((char *)v22 + (unsigned int)(*(_DWORD *)(a2 + 4 * v4 + 56) * *(_DWORD *)(a2 + 64)));
      }
      while ( v21 < v27 );
      v19 = v28;
    }
    v23->Next = 0LL;
    *((_QWORD *)&v23->Next + 1) = v18;
    v23[1].Next = v22;
    SmHwInitializeAccelDescriptor(v23, a2, (unsigned int)v4);
    InterlockedPushListSList((PSLIST_HEADER)v18 + 1, v19, v23, Count);
    ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)v18 + 6, Count);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v18 + 4) + 68LL));
    v9 = 0;
    v3 = v30;
    v32 = 0LL;
    *a1 = v18;
    v10 = 0;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_14:
  if ( v32 )
    AccelStopSharingAddressSpaceWithResource(v32, v7, v8);
  if ( v9 )
    ExReleaseRundownProtection_0(v3);
  return v10;
}
