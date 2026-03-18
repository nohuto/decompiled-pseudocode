/*
 * XREFs of NtFlipObjectConsumerAcquirePresent @ 0x1400196F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___ @ 0x14001C1E4 (CFlipPropertySetBase--WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectConsumerAcquirePresent(void *a1, size_t Size, int a3, void *a4, __int64 a5)
{
  size_t v7; // r14
  void *v9; // r13
  CFlipPropertySetBase *v10; // rdi
  char v11; // r8
  __int64 v12; // rdx
  signed int v13; // ebx
  _QWORD *v14; // rsi
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  PVOID Object; // [rsp+20h] [rbp-38h] BYREF
  CFlipPropertySetBase *v20; // [rsp+28h] [rbp-30h]

  v7 = (unsigned int)Size;
  if ( (!(_DWORD)Size || a4) && (!a3 || a5) )
  {
    Object = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v20 = 0LL;
    KeEnterCriticalRegion();
    v13 = FlipManagerObject::ResolveHandle(a1, 1u, v11, (struct FlipManagerObject **)&Object);
    if ( v13 >= 0 )
    {
      v14 = Object;
      v13 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v13 >= 0 )
      {
        v15 = 0;
        v16 = v14[39];
        v13 = v16 == 0 ? 0xC0000001 : 0;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 56);
          if ( v17 )
            v15 = *(_DWORD *)(v17 + 32);
          if ( *(_DWORD *)(v16 + 40) != (_DWORD)v7 || v15 != a3 )
            v13 = -1073741811;
        }
        if ( v13 >= 0 )
        {
          v9 = *(void **)(v16 + 48);
          v10 = *(CFlipPropertySetBase **)(v16 + 56);
          v20 = v10;
          if ( v10 )
            ++*((_DWORD *)v10 + 2);
        }
        CPushLock::ReleaseLock((CPushLock *)((char *)Object + 40));
      }
    }
    if ( v13 >= 0 )
    {
      if ( (_DWORD)v7 )
        RtlCopyToUser(a4, v9, v7);
      if ( a3 )
        CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___(v10, v12, a5);
    }
    if ( v10 )
      CFlipPropertySetBase::Release(v10);
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v13;
}
