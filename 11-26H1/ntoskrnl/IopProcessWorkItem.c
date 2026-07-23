/*
 * XREFs of IopProcessWorkItem @ 0x14037F300
 * Callers:
 *     <none>
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     EtwTraceThreadWorkItem @ 0x1403F0CB0 (EtwTraceThreadWorkItem.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  volatile signed __int64 *v1; // r14
  ULONG_PTR v2; // r15
  int v4; // ebp
  __int64 v5; // r8
  void *v6; // rdx
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  signed __int64 v9; // rax
  bool v10; // cc
  signed __int64 BugCheckParameter4; // rax
  signed __int64 v12; // rbx
  signed __int64 v13; // rbx
  struct _KTHREAD *result; // rax
  BOOLEAN v15; // al
  __int64 v16; // rcx
  __int64 v17; // rax
  BOOLEAN v18; // al
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(volatile signed __int64 **)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v21 = 0LL;
  if ( memcmp(&NullGuid, (const void *)(a1 + 68), 0x10uLL) )
  {
    v4 = 1;
    v21 = *(_OWORD *)(a1 + 68);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v21;
  }
  v6 = *(void **)(a1 + 56);
  if ( v6 )
  {
    PspUpdateContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), v6);
    v7 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v2, 1344LL);
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    guard_dispatch_icall_no_overrides(v1, v8, a1);
  }
  else if ( *(_WORD *)v1 == 3 )
  {
    guard_dispatch_icall_no_overrides(v1, v8, v5);
  }
  else
  {
    guard_dispatch_icall_no_overrides(0LL, v8, v5);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v2, 1345LL);
  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)(v1 - 6), -1, 0x746C6644u);
  v9 = _InterlockedExchangeAdd64(v1 - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v10 = v9 <= 1;
  BugCheckParameter4 = v9 - 1;
  if ( v10 )
  {
    if ( *((_QWORD *)v1 - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v1 - 48) >> 8)],
        (ULONG_PTR)v1,
        1uLL,
        *((_QWORD *)v1 - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v1, 2uLL, BugCheckParameter4);
    v15 = KeAreAllApcsDisabled();
    v16 = (__int64)(v1 - 6);
    if ( v15 )
    {
      ObpDeferObjectDeletion(v16);
    }
    else
    {
      v17 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v16);
      if ( v17 )
        ObpHandleRevocationBlockRemoveObject(v17);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v1 - 6);
      ObpRemoveObjectRoutine(v1 - 6, 0LL);
    }
  }
  if ( v4 )
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
  if ( v7 )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
    if ( ObpTraceFlags )
      ObpPushStackInfo(v7 - 48, -1, 0x746C6644u);
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v10 = v12 <= 1;
    v13 = v12 - 1;
    if ( v10 )
    {
      if ( *(_QWORD *)(v7 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v7 - 48) >> 8)],
          v7,
          1uLL,
          *(_QWORD *)(v7 - 40));
      if ( v13 < 0 )
        KeBugCheckEx(0x18u, 0LL, v7, 2uLL, v13);
      v18 = KeAreAllApcsDisabled();
      v19 = v7 - 48;
      if ( v18 )
      {
        ObpDeferObjectDeletion(v19);
      }
      else
      {
        v20 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v19);
        if ( v20 )
          ObpHandleRevocationBlockRemoveObject(v20);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v7 - 48);
        ObpRemoveObjectRoutine(v7 - 48, 0LL);
      }
    }
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, v2, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
