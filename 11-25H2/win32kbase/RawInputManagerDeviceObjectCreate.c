/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1400621F0
 * Callers:
 *     rimCreateDev @ 0x140061FCC (rimCreateDev.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1401D7108 (rimAddToObTrackList.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rdx
  bool v11; // al
  PVOID Object; // [rsp+68h] [rbp+18h] BYREF

  Object = 0LL;
  LOBYTE(a4) = 1;
  LOBYTE(a1) = 1;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 2400, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
    *((_DWORD *)Object + 1) = 2;
    v6 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v6 = v6;
    v7 = (char *)Object + 192;
    *((_QWORD *)Object + 25) = (char *)Object + 192;
    *v7 = v7;
    v8 = (char *)Object + 176;
    *((_QWORD *)Object + 23) = (char *)Object + 176;
    *v8 = v8;
    *((_QWORD *)Object + 4) = PsGetCurrentProcess();
    CurrentThread = KeGetCurrentThread();
    *((_QWORD *)Object + 5) = CurrentThread;
    v11 = isChildPartition((__int64)CurrentThread, v10);
    *((_DWORD *)Object + 16) = v11;
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
