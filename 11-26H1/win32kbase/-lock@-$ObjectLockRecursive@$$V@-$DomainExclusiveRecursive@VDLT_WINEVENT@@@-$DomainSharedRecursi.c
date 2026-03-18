/*
 * XREFs of ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x1400EAE4C
 * Callers:
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400EADEC (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1400EAEE0 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400EAFD0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::lock(
        __int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  PERESOURCE *v4; // rcx

  v1 = (_BYTE *)(a1 + 40);
  v2 = a1;
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(PERESOURCE **)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( !*(_BYTE *)(v2 + 8) )
        {
          if ( !tagDomLock::IsLockedExclusive((tagDomLock *)v4) && !tagDomLock::IsLockedShared(*(PERESOURCE **)v2) )
          {
            ExEnterCriticalRegionAndAcquireResourceShared(**(PERESOURCE **)v2);
            goto LABEL_7;
          }
LABEL_10:
          *(_QWORD *)v2 = 0LL;
          goto LABEL_7;
        }
        if ( tagDomLock::IsLockedExclusive((tagDomLock *)v4) )
          goto LABEL_10;
        tagDomLock::LockExclusive(*(tagDomLock **)v2);
      }
LABEL_7:
      ++v3;
      v2 += 16LL;
      if ( v3 )
      {
        *v1 = 1;
        return;
      }
    }
  }
}
