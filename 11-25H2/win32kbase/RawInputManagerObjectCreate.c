/*
 * XREFs of RawInputManagerObjectCreate @ 0x14013785C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1401D7108 (rimAddToObTrackList.c)
 */

__int64 __fastcall RawInputManagerObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  int CurrentWin32kSessionId; // eax
  PVOID v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rdx
  bool v14; // al
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  LOBYTE(a4) = 1;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 1120, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    v8 = Object;
    *(_DWORD *)Object = CurrentWin32kSessionId;
    *((_DWORD *)Object + 1) = 1;
    v9 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v9 = v9;
    CurrentProcess = PsGetCurrentProcess(v8, v10);
    *((_QWORD *)Object + 4) = CurrentProcess;
    CurrentThread = KeGetCurrentThread();
    *((_QWORD *)Object + 5) = CurrentThread;
    v14 = isChildPartition((__int64)CurrentThread, v13);
    *((_DWORD *)Object + 16) = v14;
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
