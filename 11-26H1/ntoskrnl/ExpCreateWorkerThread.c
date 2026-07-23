/*
 * XREFs of ExpCreateWorkerThread @ 0x140A78ABC
 * Callers:
 *     ExpWorkQueueInitializeWithMinimumThreads @ 0x140846480 (ExpWorkQueueInitializeWithMinimumThreads.c)
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeBoostPriorityThread @ 0x14052EA80 (KeBoostPriorityThread.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExpNodeCreateSystemThread @ 0x140A78BB8 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpCreateWorkerThread(__int64 a1, int a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // edx
  signed __int32 v6; // ett
  int SystemThread; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h]

  Handle = 0LL;
  _m_prefetchw((const void *)(a1 + 712));
  v4 = *(_DWORD *)(a1 + 712);
  do
  {
    v5 = (v4 + 1) | 0x4000;
    v6 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v5, v4);
  }
  while ( v6 != v4 );
  SystemThread = ExpNodeCreateSystemThread(*(_QWORD *)(a1 + 696), v5, a2, *(_QWORD *)(**(_QWORD **)(a1 + 688) + 128LL));
  if ( SystemThread < 0 )
  {
    _m_prefetchw((const void *)(a1 + 712));
    v11 = *(_DWORD *)(a1 + 712);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), (v11 & 0x3FFF) - 1, v11);
    }
    while ( v12 != v11 );
  }
  else
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((struct _KTHREAD *)Object, 8, v8, v9);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
