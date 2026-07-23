/*
 * XREFs of ExpAddCurrentThreadToThreadHistory @ 0x140445B10
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

char __fastcall ExpAddCurrentThreadToThreadHistory(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rax
  ULONG_PTR v6; // r15
  __int64 v7; // r14
  signed __int64 v8; // rsi
  bool v9; // cc
  signed __int64 BugCheckParameter4; // rsi
  BOOLEAN v11; // al
  signed __int64 v12; // rcx
  __int64 v13; // rax

  LOBYTE(v2) = *(_DWORD *)(a1 + 408) & 7;
  if ( (_BYTE)v2 != 4 )
  {
    v3 = 0LL;
    v2 = 0;
    CurrentThread = KeGetCurrentThread();
    while ( v2 < 4 )
    {
      if ( *(struct _KTHREAD **)(a1 + 8LL * v2 + 72) == CurrentThread )
        return v2;
      ++v2;
    }
    LOBYTE(v2) = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
    while ( (unsigned int)v3 < 4 )
    {
      if ( !*(_QWORD *)(a1 + 8 * v3 + 72) )
      {
        *(_QWORD *)(a1 + 8 * v3 + 72) = CurrentThread;
        return v2;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    v5 = *(_DWORD *)(a1 + 408) & 7;
    v6 = *(_QWORD *)(a1 + 8 * v5 + 72);
    v7 = (unsigned int)v5;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v6 - 48, -1, 0x746C6644u);
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v9 = v8 <= 1;
    BugCheckParameter4 = v8 - 1;
    if ( v9 )
    {
      if ( *(_QWORD *)(v6 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v6 - 48) >> 8)],
          v6,
          1uLL,
          *(_QWORD *)(v6 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v6, 2uLL, BugCheckParameter4);
      v11 = KeAreAllApcsDisabled();
      v12 = v6 - 48;
      if ( v11 )
      {
        ObpDeferObjectDeletion(v12);
      }
      else
      {
        v13 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v12);
        if ( v13 )
          ObpHandleRevocationBlockRemoveObject(v13);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v6 - 48);
        ObpRemoveObjectRoutine(v6 - 48, 0LL);
      }
    }
    *(_QWORD *)(a1 + 8 * v7 + 72) = CurrentThread;
    v2 = *(_DWORD *)(a1 + 408) & 0xFFFFFFF8;
    *(_DWORD *)(a1 + 408) = v2 | ((_BYTE)v7 + 1) & 3;
  }
  return v2;
}
