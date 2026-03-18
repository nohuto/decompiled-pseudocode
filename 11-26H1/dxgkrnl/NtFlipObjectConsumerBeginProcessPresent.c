/*
 * XREFs of NtFlipObjectConsumerBeginProcessPresent @ 0x140025B30
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectConsumerBeginProcessPresent(void *a1, void *a2, void *a3)
{
  __int64 v6; // r8
  int v7; // ebx
  char *v8; // r14
  PVOID Object; // [rsp+20h] [rbp-28h] BYREF
  unsigned int Src; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    Object = 0LL;
    Src = 0;
    v12 = 0;
    KeEnterCriticalRegion();
    v7 = FlipManagerObject::ResolveHandle(a1, 1u, v6, (struct FlipManagerObject **)&Object);
    if ( v7 >= 0 )
    {
      v8 = (char *)Object;
      v7 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v7 >= 0 )
      {
        v7 = CFlipManager::ConsumerBeginProcessPresent((CFlipManager *)(v8 + 32), &Src, &v12);
        CPushLock::ReleaseLock((CPushLock *)(v8 + 40));
      }
    }
    if ( v7 >= 0 )
    {
      RtlCopyToUser(a2, &Src, 4uLL);
      RtlCopyToUser(a3, &v12, 4uLL);
    }
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
