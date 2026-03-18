/*
 * XREFs of ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x1401C4384
 * Callers:
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1401C431C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::lock(
        __int64 a1)
{
  _BYTE *v1; // rsi
  struct _ERESOURCE ***v2; // rbx
  int v3; // edi
  struct _ERESOURCE *v4; // rcx

  v1 = (_BYTE *)(a1 + 40);
  v2 = (struct _ERESOURCE ***)a1;
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v3 = 0;
    while ( 1 )
    {
      if ( *v2 )
      {
        v4 = **v2;
        if ( *((_BYTE *)v2 + 8) )
        {
          if ( ExIsResourceAcquiredExclusiveLite(v4) == 1 )
            goto LABEL_13;
          tagDomLock::LockExclusive((tagDomLock *)*v2);
        }
        else
        {
          if ( ExIsResourceAcquiredExclusiveLite(v4) == 1 || ExIsResourceAcquiredSharedLite(**v2) )
          {
LABEL_13:
            *v2 = 0LL;
            goto LABEL_10;
          }
          tagDomLock::LockShared((tagDomLock *)*v2);
        }
      }
LABEL_10:
      ++v3;
      v2 += 2;
      if ( v3 )
      {
        *v1 = 1;
        return;
      }
    }
  }
}
