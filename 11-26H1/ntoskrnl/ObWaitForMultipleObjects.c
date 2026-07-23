/*
 * XREFs of ObWaitForMultipleObjects @ 0x140A2C6D0
 * Callers:
 *     NtWaitForMultipleObjects32 @ 0x140A2C450 (NtWaitForMultipleObjects32.c)
 *     NtWaitForMultipleObjects @ 0x140A2C5A0 (NtWaitForMultipleObjects.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     ObpIsKernelHandle @ 0x14043CFB0 (ObpIsKernelHandle.c)
 *     KeSetKernelStackSwapEnable @ 0x1404783C0 (KeSetKernelStackSwapEnable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpReferenceObjectByHandle @ 0x14092A3F0 (ObpReferenceObjectByHandle.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     ObpHandlesToObjectAreRevoked @ 0x140A2CB80 (ObpHandlesToObjectAreRevoked.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG Count,
        __int64 a2,
        char a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  char v7; // bl
  __int64 v8; // r15
  struct _KWAIT_BLOCK *WaitBlockArray; // rdi
  __int64 v10; // rsi
  char v11; // r14
  struct _KTHREAD *CurrentThread; // r13
  struct _EX_RUNDOWN_REF *v13; // r12
  __int64 v14; // rbx
  bool IsKernelHandle; // al
  ULONG_PTR v16; // r8
  ULONG_PTR v17; // r9
  ULONG_PTR v18; // rcx
  ULONG_PTR v19; // rdx
  unsigned __int64 WaitObjectFlagMask; // rdx
  volatile signed __int64 *v21; // r10
  struct _OBJECT_TYPE *v22; // r9
  __int64 DefaultObject; // r8
  WAIT_TYPE v24; // ecx
  unsigned int v25; // ebx
  PVOID *v26; // r15
  __int64 v28; // rbx
  char *Pool2; // rax
  unsigned __int64 v30; // rax
  void *v31; // rsp
  unsigned int v32; // ecx
  __int64 i; // r8
  int v34; // r8d
  PVOID v35; // r8
  __int64 v36; // r10
  PVOID v37; // r9
  char v38; // [rsp+40h] [rbp+0h] BYREF
  char v39; // [rsp+41h] [rbp+1h]
  char v40; // [rsp+42h] [rbp+2h]
  char v41; // [rsp+43h] [rbp+3h]
  BOOLEAN Enable; // [rsp+44h] [rbp+4h]
  WAIT_TYPE WaitType; // [rsp+48h] [rbp+8h]
  volatile signed __int64 *v44; // [rsp+50h] [rbp+10h] BYREF
  char *v45; // [rsp+58h] [rbp+18h]
  unsigned int v46; // [rsp+60h] [rbp+20h]
  int v47; // [rsp+64h] [rbp+24h]
  __int64 v48; // [rsp+68h] [rbp+28h]
  unsigned __int64 v49; // [rsp+70h] [rbp+30h]
  PPAGED_LOOKASIDE_LIST Lookaside; // [rsp+78h] [rbp+38h]
  PLARGE_INTEGER Timeout; // [rsp+80h] [rbp+40h]
  struct _EX_RUNDOWN_REF *Process; // [rsp+88h] [rbp+48h]
  struct _KTHREAD *v53; // [rsp+90h] [rbp+50h]
  __int128 v54; // [rsp+98h] [rbp+58h] BYREF
  PVOID Object[64]; // [rsp+B0h] [rbp+70h] BYREF
  _QWORD v56[64]; // [rsp+2B0h] [rbp+270h] BYREF

  WaitType = a4;
  v7 = a3;
  v38 = a3;
  v48 = a2;
  v8 = Count;
  Timeout = a7;
  v54 = 0LL;
  memset_0(v56, 0, sizeof(v56));
  v44 = 0LL;
  memset_0(Object, 0, sizeof(Object));
  Enable = 0;
  v41 = 0;
  WaitBlockArray = 0LL;
  v45 = 0LL;
  Lookaside = 0LL;
  if ( (unsigned int)v8 > 3 )
  {
    if ( (unsigned int)v8 > 0xA )
    {
      Lookaside = (PPAGED_LOOKASIDE_LIST)((char *)&ObpWaitBlockLookaside
                                        + 128 * (unsigned __int64)(((int)v8 - 11) / 0xEu));
      Pool2 = (char *)ExAllocateFromNPagedLookasideList(Lookaside);
      v28 = v8;
    }
    else
    {
      v28 = v8;
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
    }
    v45 = Pool2;
    WaitBlockArray = (struct _KWAIT_BLOCK *)Pool2;
    if ( Pool2 )
    {
      v41 = 1;
    }
    else
    {
      Enable = KeSetKernelStackSwapEnable(0);
      v30 = 48 * v28 + 15;
      if ( v30 <= 48 * v28 )
        v30 = 0xFFFFFFFFFFFFFF0LL;
      v31 = alloca(v30 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (struct _KWAIT_BLOCK *)&v38;
      v45 = &v38;
    }
    v7 = v38;
  }
  v10 = 0LL;
  v11 = 0;
  v39 = 0;
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v13 = Process;
  v40 = 1;
  --CurrentThread->KernelApcDisable;
  if ( v13 == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v49 = v13[96].Count;
  }
  else
  {
    v49 = ObReferenceProcessHandleTable(v13);
    if ( v49 )
    {
      v11 = 1;
      v39 = 1;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(v34 + 1) )
      {
        if ( !ObpIsKernelHandle(*(_QWORD *)(v48 + 8 * i), v7) )
        {
          v25 = -1073741558;
          goto LABEL_25;
        }
      }
    }
  }
  v14 = 0LL;
  do
  {
    IsKernelHandle = ObpIsKernelHandle(*(_QWORD *)(v48 + 8 * v14), v38);
    v18 = v17;
    if ( IsKernelHandle )
      v18 = ObpKernelHandleTable;
    v19 = v16 ^ 0xFFFFFFFF80000000uLL;
    if ( !IsKernelHandle )
      v19 = v16;
    if ( !ObpReferenceObjectByHandle(v18, v19, (__int64 *)&v54, &v44) )
    {
LABEL_34:
      v25 = -1073741816;
      goto LABEL_25;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)v44, 1, 0x7457624Fu);
    v21 = v44 + 6;
    v56[v10] = v44 + 6;
    v10 = (unsigned int)(v10 + 1);
    v47 = v10;
    if ( v38 == 1 )
    {
      if ( (~(DWORD2(v54) & 0x1FFFFFF) & 0x100000) != 0 )
      {
        v25 = -1073741790;
        goto LABEL_25;
      }
      if ( (unsigned __int8)ObpHandlesToObjectAreRevoked() )
      {
        v25 = -1073700858;
        goto LABEL_25;
      }
    }
    WaitObjectFlagMask = (unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v44 + 24) ^ (unsigned __int64)BYTE1(v44);
    v22 = (struct _OBJECT_TYPE *)ObTypeIndexTable[WaitObjectFlagMask];
    if ( WaitType != WaitAny && v22 == IoCompletionObjectType )
      goto LABEL_34;
    if ( v22 == *(struct _OBJECT_TYPE **)&WheapConfigTableLock.WaitBlockFill11[64] )
    {
      v25 = -1073741788;
      goto LABEL_25;
    }
    DefaultObject = (__int64)v22->DefaultObject;
    if ( (DefaultObject & 1) == 0 )
    {
      if ( DefaultObject < 0 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (DefaultObject & 2) != 0 )
    {
      WaitObjectFlagMask = v22->TypeInfo.WaitObjectFlagMask;
      if ( ((unsigned int)WaitObjectFlagMask & *(_DWORD *)((_BYTE *)v21 + v22->TypeInfo.WaitObjectFlagOffset)) != (_DWORD)WaitObjectFlagMask )
      {
        DefaultObject -= 3LL;
LABEL_19:
        DefaultObject += (__int64)v21;
        goto LABEL_20;
      }
      DefaultObject = *(volatile signed __int64 *)((char *)v21 + v22->TypeInfo.WaitObjectPointerOffset);
    }
    else
    {
      DefaultObject = *(volatile signed __int64 *)((char *)v21 + DefaultObject - 1);
    }
LABEL_20:
    Object[v14] = (PVOID)DefaultObject;
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < (unsigned int)v8 );
  if ( v11 )
  {
    v11 = 0;
    v39 = 0;
    ExReleaseRundownProtection_0(v13 + 61);
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, WaitObjectFlagMask);
  v40 = 0;
  v38 = 0;
  v24 = WaitType;
  if ( WaitType )
    goto LABEL_24;
  v32 = 1;
LABEL_66:
  if ( v32 >= (unsigned int)v8 )
  {
    v24 = WaitType;
LABEL_24:
    v25 = KeWaitForMultipleObjects(v8, Object, v24, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
    v46 = v25;
    goto LABEL_25;
  }
  WaitObjectFlagMask = v32;
  v35 = Object[v32];
  while ( 1 )
  {
    v36 = (unsigned int)(WaitObjectFlagMask - 1);
    v37 = Object[v36];
    if ( v35 > v37 )
    {
LABEL_71:
      Object[(unsigned int)WaitObjectFlagMask] = v35;
      ++v32;
      goto LABEL_66;
    }
    if ( v35 == v37 )
      break;
    Object[(unsigned int)WaitObjectFlagMask] = v37;
    WaitObjectFlagMask = (unsigned int)v36;
    if ( !(_DWORD)v36 )
      goto LABEL_71;
  }
  v25 = -1073741776;
LABEL_25:
  if ( (_DWORD)v10 )
  {
    v26 = (PVOID *)&v56[(unsigned int)v10];
    do
    {
      ObfDereferenceObjectWithTag(*--v26, 0x7457624Fu);
      LODWORD(v10) = v10 - 1;
    }
    while ( (_DWORD)v10 );
  }
  if ( v40 )
  {
    if ( v11 )
      ExReleaseRundownProtection_0(v13 + 61);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, WaitObjectFlagMask);
  }
  if ( WaitBlockArray )
  {
    if ( v41 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, WaitBlockArray);
      else
        ExFreePoolWithTag(WaitBlockArray, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(Enable);
    }
  }
  return v25;
}
