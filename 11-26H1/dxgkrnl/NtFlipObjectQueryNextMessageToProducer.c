/*
 * XREFs of NtFlipObjectQueryNextMessageToProducer @ 0x14001B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectQueryNextMessageToProducer(void *a1, void *a2)
{
  CFlipPropertySetBase *v4; // rbx
  char v5; // r8
  int v6; // edi
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  int Src; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  CFlipPropertySetBase *v12; // [rsp+68h] [rbp+20h]

  if ( a1 && a2 )
  {
    Object = 0LL;
    v4 = 0LL;
    v12 = 0LL;
    Src = 0;
    KeEnterCriticalRegion();
    v6 = FlipManagerObject::ResolveHandle(a1, 2u, v5, (struct FlipManagerObject **)&Object);
    if ( v6 >= 0 )
    {
      v7 = Object;
      v6 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v6 >= 0 )
      {
        v6 = 0;
        v8 = (_QWORD *)(v7[32] + 8LL);
        if ( (_QWORD *)*v8 == v8 )
          v6 = -1073741823;
        if ( v6 >= 0 )
        {
          v4 = (CFlipPropertySetBase *)((*v8 - 48LL) & -(__int64)(*v8 != 0LL));
          v12 = v4;
          ++*((_DWORD *)v4 + 2);
        }
        CPushLock::ReleaseLock((CPushLock *)(v7 + 5));
      }
    }
    if ( v6 >= 0 )
    {
      Src = *((_DWORD *)v4 + 8);
      RtlCopyToUser(a2, &Src, 4uLL);
    }
    if ( v4 )
      CFlipPropertySetBase::Release(v4);
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
