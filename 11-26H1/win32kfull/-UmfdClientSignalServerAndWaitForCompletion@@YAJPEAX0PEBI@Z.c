/*
 * XREFs of ?UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1401ADEE8
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1400FD478 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1401D1440 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdClientSignalServerAndWaitForCompletion(_QWORD *a1, __int64 *a2, const unsigned int *a3)
{
  __int64 v3; // rsi
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  if ( !*a2 )
    return 3221225485LL;
  if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                       **(_QWORD **)(*a1 + 8LL),
                       **(_QWORD **)(*(_QWORD *)(v3 + 40) + 8LL),
                       0LL,
                       0LL,
                       a3) == 258
    && a3 )
  {
    return 258LL;
  }
  v7 = *(_DWORD *)(v3 + 8) == 3;
  v8 = a1[1];
  v9 = *(_QWORD *)(v3 + 40);
  v11 = v3;
  if ( v7 )
  {
    EngFreeMem((PVOID)v3);
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v8) > 8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v8);
      CEventPool::CEventPoolEntry::Destroy((_QWORD *)v9);
    }
    else
    {
      KeResetEvent(**(PRKEVENT **)(v9 + 8));
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v8 + 16), (PSLIST_ENTRY)v9);
    }
    result = 0LL;
  }
  else
  {
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v11);
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v8) > 8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v8);
      CEventPool::CEventPoolEntry::Destroy((_QWORD *)v9);
    }
    else
    {
      KeResetEvent(**(PRKEVENT **)(v9 + 8));
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v8 + 16), (PSLIST_ENTRY)v9);
    }
    result = 3221225473LL;
  }
  *a2 = 0LL;
  return result;
}
