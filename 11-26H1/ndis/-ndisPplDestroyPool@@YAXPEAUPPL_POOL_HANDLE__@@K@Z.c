/*
 * XREFs of ?ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z @ 0x140067450
 * Callers:
 *     NdisFreeNetBufferListPool @ 0x140067350 (NdisFreeNetBufferListPool.c)
 *     NdisFreeNetBufferPool @ 0x14008C140 (NdisFreeNetBufferPool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisPplDestroyPool(char *P)
{
  struct _LOOKASIDE_LIST_EX *v2; // rdi
  unsigned int v3; // edx
  _SLIST_HEADER *v4; // rbx
  __int64 v5; // rsi
  PSLIST_ENTRY i; // rcx

  if ( P )
  {
    v2 = (struct _LOOKASIDE_LIST_EX *)(P + 128);
    v3 = ndisMaxNumberOfProcessors + 1;
    if ( ndisMaxNumberOfProcessors <= 1 )
      v3 = ndisMaxNumberOfProcessors;
    if ( v3 )
    {
      v4 = (_SLIST_HEADER *)(P + 256);
      v5 = v3;
      do
      {
        if ( *((_BYTE *)&v4[5].HeaderX64 + 8) )
        {
          for ( i = ExpInterlockedPopEntrySList(v4); i; i = ExpInterlockedPopEntrySList(v4) )
            ((void (__fastcall *)(PSLIST_ENTRY, struct _LOOKASIDE_LIST_EX *))v4[-5].Region)(i, v2);
          ExDeleteLookasideListEx(v2);
        }
        v2 = (struct _LOOKASIDE_LIST_EX *)((char *)v2 + 256);
        v4 += 16;
        --v5;
      }
      while ( v5 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
