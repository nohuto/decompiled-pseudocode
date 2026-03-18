/*
 * XREFs of NtFlipObjectQueryEndpointConnected @ 0x140022D80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectQueryEndpointConnected(HANDLE Handle, int a2, void *a3)
{
  __int64 *v6; // r14
  NTSTATUS v7; // esi
  __int64 *v8; // rbx
  __int64 *v9; // rdx
  __int64 v10; // rbx
  BOOL Src; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  if ( Handle && a3 )
  {
    KeEnterCriticalRegion();
    v6 = 0LL;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (__int64 *)Object;
      if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 4 )
      {
        v6 = v8;
      }
      else
      {
        ObfDereferenceObject(v8);
        v7 = -1073741788;
      }
    }
    if ( v7 >= 0 )
    {
      v7 = CPushLock::AcquireLockExclusive((CPushLock *)(v6 + 5));
      if ( v7 >= 0 )
      {
        v9 = v6 + 9;
        if ( !a2 )
          v9 = v6 + 10;
        v10 = *v9;
        CPushLock::ReleaseLock((CPushLock *)(v6 + 5));
        Src = v10 != 0;
        RtlCopyToUser(a3, &Src, 4uLL);
      }
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
      ObfDereferenceObject(v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
