/*
 * XREFs of ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x180016F50
 * Callers:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180016EE0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180017010 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18002D430 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall InputSiteManager::GetInputSiteFromIds(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 *i; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx

  v5 = a3[1];
  v6 = v5 + 16LL * *a3;
LABEL_2:
  if ( v5 == v6 )
  {
    *a2 = 0LL;
    return a2;
  }
  else
  {
    for ( i = *(__int64 **)(a1 + 56); ; ++i )
    {
      if ( i == *(__int64 **)(a1 + 64) )
      {
        v5 += 16LL;
        goto LABEL_2;
      }
      v8 = *i;
      v9 = *(_QWORD *)(*i + 16);
      v10 = *(_QWORD *)(*i + 24);
      if ( v9 != v10 )
      {
        while ( *(_DWORD *)v9 != *(_DWORD *)v5 )
        {
          v9 += 16LL;
          if ( v9 == v10 )
            goto LABEL_8;
        }
        if ( *(_QWORD *)(v9 + 8) == *(_QWORD *)(v5 + 8) )
          break;
      }
LABEL_8:
      ;
    }
    v11 = *i;
    *a2 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v11);
    return a2;
  }
}
