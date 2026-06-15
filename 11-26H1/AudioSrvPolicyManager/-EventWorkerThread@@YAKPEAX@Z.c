/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x180023820
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EventWorkerThread(PVOID Parameter)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  unsigned __int64 v3; // rbx
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  v2 = v1;
  if ( v1 )
  {
    AudPolicyLogError("EventWorkerThread", 130, v1);
    return v2;
  }
  else
  {
    while ( 1 )
    {
      do
      {
        CompletionKey = 0LL;
        NumberOfBytesTransferred = 0;
        Overlapped = 0LL;
      }
      while ( !GetQueuedCompletionStatus(
                 g_WorkerEventPort,
                 &NumberOfBytesTransferred,
                 &CompletionKey,
                 &Overlapped,
                 0xFFFFFFFF) );
      if ( NumberOfBytesTransferred == -1 )
        break;
      v3 = CompletionKey;
      (**(void (__fastcall ***)(unsigned __int64))CompletionKey)(CompletionKey);
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
    }
    CoUninitialize();
    return 0LL;
  }
}
