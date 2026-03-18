/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x14019DDFC
 * Callers:
 *     rimObsAddInputObserver @ 0x1401F296C (rimObsAddInputObserver.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     rimAddToObTrackList @ 0x1401D7108 (rimAddToObTrackList.c)
 *     rimObsReadMaxQueueSize @ 0x1401F4740 (rimObsReadMaxQueueSize.c)
 */

__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  int CurrentWin32kSessionId; // eax
  PVOID v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 CurrentProcess; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  PVOID Object; // [rsp+68h] [rbp+18h] BYREF

  Object = 0LL;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 192, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    v7 = Object;
    *(_DWORD *)Object = CurrentWin32kSessionId;
    *((_DWORD *)Object + 1) = 3;
    v8 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v8 = v8;
    CurrentProcess = PsGetCurrentProcess(v7, v9);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    v11 = (char *)Object + 128;
    *((_QWORD *)Object + 17) = (char *)Object + 128;
    *v11 = v11;
    v12 = (char *)Object + 144;
    *((_QWORD *)Object + 19) = (char *)Object + 144;
    *v12 = v12;
    *((_DWORD *)Object + 40) = 0;
    *((_DWORD *)Object + 41) = 0;
    *((_DWORD *)Object + 42) = rimObsReadMaxQueueSize();
    v13 = Object;
    *((_QWORD *)Object + 22) = 0LL;
    v13[23] = 0LL;
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
