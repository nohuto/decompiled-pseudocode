/*
 * XREFs of ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x1400C8AC0
 * Callers:
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400C8A58 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400C8A34 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1400C90A0 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::lock(__int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  tagDomLock *v4; // rcx

  v1 = (_BYTE *)(a1 + 40);
  v2 = a1;
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(tagDomLock **)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( *(_BYTE *)(v2 + 8) )
        {
          if ( !tagDomLock::IsLockedExclusive(v4) )
          {
            tagDomLock::LockExclusive(*(tagDomLock **)v2);
            goto LABEL_7;
          }
        }
        else if ( !tagDomLock::IsLockedExclusive(v4) && !tagDomLock::IsLockedShared(*(PERESOURCE **)v2) )
        {
          tagDomLock::LockShared(*(tagDomLock **)v2);
          goto LABEL_7;
        }
        *(_QWORD *)v2 = 0LL;
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
