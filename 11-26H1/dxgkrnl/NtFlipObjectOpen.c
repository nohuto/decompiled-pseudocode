/*
 * XREFs of NtFlipObjectOpen @ 0x14001A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x14001A1B8 (-OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectOpen(void *a1, int a2, void *a3, void *a4)
{
  NTSTATUS v6; // edi
  char *v7; // rsi
  HANDLE v9; // [rsp+40h] [rbp-38h] BYREF
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  HANDLE Src; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+10h]

  v12 = a2;
  if ( a1 && a3 && a4 )
  {
    Object = 0LL;
    Src = 0LL;
    v9 = 0LL;
    v6 = FlipManagerObject::ResolveHandle(a1, 0, (char)a3, (struct FlipManagerObject **)&Object);
    if ( v6 >= 0 )
    {
      v7 = (char *)Object;
      v6 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v6 >= 0 )
      {
        Src = (HANDLE)-1LL;
        v6 = ObOpenObjectByPointer(v7, 0x40u, 0LL, (v12 != 0) + 1, g_pDxgkCompositionObjectType, 0, &Src);
        if ( v6 >= 0 )
          v6 = CFlipManager::OpenEndpoint((CFlipManager *)(v7 + 32), v12 != 0, &v9);
        CPushLock::ReleaseLock((CPushLock *)(v7 + 40));
      }
    }
    if ( v6 >= 0 )
    {
      RtlCopyToUser(a3, &Src, 8uLL);
      RtlCopyToUser(a4, &v9, 8uLL);
      Src = 0LL;
      v9 = 0LL;
    }
    if ( Src )
      ObCloseHandle(Src, 1);
    if ( v9 )
      ObCloseHandle(v9, 1);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
