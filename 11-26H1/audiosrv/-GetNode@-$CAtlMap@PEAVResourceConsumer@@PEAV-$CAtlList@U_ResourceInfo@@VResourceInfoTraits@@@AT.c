/*
 * XREFs of ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x180083508
 * Callers:
 *     ?SetAt@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAVResourceConsumer@@AEBQEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x18015B6B0 (-SetAt@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@.c)
 * Callees:
 *     ?CompareElements@ResourceConsumerTraits@@SA_NAEBQEAVResourceConsumer@@0@Z @ 0x1801597A4 (-CompareElements@ResourceConsumerTraits@@SA_NAEBQEAVResourceConsumer@@0@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNode(
        __int64 a1,
        struct ResourceConsumer *const *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v7; // eax
  __int64 v8; // rdi
  __int64 i; // rbx

  v7 = *((_DWORD *)*a2 + 2);
  if ( !v7 )
    v7 = 4 * *((_DWORD *)*a2 + 40);
  *a4 = v7;
  *a3 = v7 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v8 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == *a4
        && ResourceConsumerTraits::CompareElements((struct ResourceConsumer *const *)i, a2) )
      {
        *a5 = v8;
        return i;
      }
      v8 = i;
    }
  }
  return 0LL;
}
