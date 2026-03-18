/*
 * XREFs of ?lock@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x14000FEB0
 * Callers:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::lock(__int64 a1)
{
  tagObjLock **v2; // rbx
  int v3; // edi

  if ( !*(_BYTE *)(a1 + 32) )
  {
    v2 = (tagObjLock **)(a1 + 16);
    v3 = 0;
    do
    {
      if ( *v2 )
        tagObjLock::LockExclusive(*v2);
      ++v3;
      ++v2;
    }
    while ( !v3 );
    *(_BYTE *)(a1 + 32) = 1;
  }
}
