/*
 * XREFs of ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x18015C538
 * Callers:
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x18015C870 (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 *     ?ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@Z @ 0x18015CDA8 (-ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlArray@PEAVEnd.c)
 *     ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18015CFC0 (-ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18015D62C (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     ?LogError@@YAXPEBGZZ @ 0x1800F3FB0 (-LogError@@YAXPEBGZZ.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x18015C770 (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 *     ?IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z @ 0x18015C800 (-IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelXMLParser::FindStartOrEndElement(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        int a5,
        int *a6)
{
  CConstraintModelXMLParser *v10; // rcx
  int NodeType; // ebx
  int v12; // eax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, (enum XmlNodeType *)&v14);
  if ( NodeType >= 0 )
  {
    v12 = v14;
    NodeType = -2147024809;
    if ( v14 == 1 )
    {
      if ( CConstraintModelXMLParser::IsElement(v10, a2, a3)
        && !((unsigned int (__fastcall *)(struct IXmlReader *))a2->lpVtbl->IsEmptyElement)(a2) )
      {
        *a6 = 1;
LABEL_10:
        NodeType = 0;
        goto LABEL_13;
      }
      v12 = v14;
    }
    if ( v12 == 15 && CConstraintModelXMLParser::IsElement(v10, a2, a4) )
    {
      *a6 = 0;
      goto LABEL_10;
    }
    if ( !a5 )
      LogError((size_t *)L"Was expecting start element %s or end element for %s - not found", a3, a4);
  }
LABEL_13:
  *(_DWORD *)this = (unsigned int)NodeType >> 31;
  return (unsigned int)NodeType;
}
