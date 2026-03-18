/*
 * XREFs of ?lock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@AEAAXXZ @ 0x140087500
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400EAFD0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::lock(__int64 a1)
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
    do
    {
      v4 = *(tagDomLock **)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( *(_BYTE *)(v2 + 8) )
          tagDomLock::LockExclusive(v4);
        else
          ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v4);
      }
      ++v3;
      v2 += 16LL;
    }
    while ( !v3 );
    *v1 = 1;
  }
}
