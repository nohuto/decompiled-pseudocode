/*
 * XREFs of NtFlipObjectQueryBufferAvailableEvent @ 0x140059E20
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x140059F64 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtFlipObjectQueryBufferAvailableEvent(void *a1, void *a2, __int64 a3)
{
  unsigned __int64 v5; // r15
  __int64 v6; // r8
  int v7; // ebx
  struct FlipManagerObject *v8; // rdi
  HANDLE Handle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-38h]
  struct FlipManagerObject *v13; // [rsp+88h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    v13 = 0LL;
    Handle = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    RtlCopyFromUser(&v11, a2, 8uLL);
    v5 = v11;
    v12 = v11;
    KeEnterCriticalRegion();
    v7 = FlipManagerObject::ResolveHandle(a1, 2u, v6, &v13);
    v8 = v13;
    if ( v7 >= 0 )
    {
      v7 = FlipManagerObject::QueryBufferAvailableEvent(v13, v5, &Handle);
      if ( v7 >= 0 )
      {
        RtlWriteULong64ToUser(a3, Handle);
        Handle = 0LL;
      }
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
