/*
 * XREFs of RawInputManagerObjectCreate @ 0x14005DD34
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     rimAddToObTrackList @ 0x140060364 (rimAddToObTrackList.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 */

__int64 __fastcall RawInputManagerObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  __int64 v5; // rcx
  NTSTATUS inserted; // ebx
  int CurrentWin32kSessionId; // eax
  PVOID v9; // rcx
  _QWORD *v10; // rax
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(a4) = 1;
  Object = 0LL;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 1120, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v5);
    v9 = Object;
    *(_DWORD *)Object = CurrentWin32kSessionId;
    *((_DWORD *)Object + 1) = 1;
    v10 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v10 = v10;
    CurrentProcess = PsGetCurrentProcess(v9);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    *((_DWORD *)Object + 16) = (unsigned __int8)isChildPartition();
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
