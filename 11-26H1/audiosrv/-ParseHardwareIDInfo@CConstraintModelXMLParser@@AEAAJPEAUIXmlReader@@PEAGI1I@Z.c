/*
 * XREFs of ?ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z @ 0x18015CEA8
 * Callers:
 *     ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z @ 0x18015CBE0 (-ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015E144 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ?LogError@@YAXPEBGZZ @ 0x1800F3FB0 (-LogError@@YAXPEBGZZ.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015C418 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x18015C770 (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 *     ?IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z @ 0x18015C800 (-IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z @ 0x18015E440 (-ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseHardwareIDInfo(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  int NodeType; // ebx
  CConstraintModelXMLParser *v9; // rcx
  CConstraintModelXMLParser *v10; // rcx
  const unsigned __int16 *v11; // r8
  wchar_t *v12; // rcx
  int v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0;
  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, (enum XmlNodeType *)&v14);
  if ( NodeType < 0 )
    goto LABEL_14;
  if ( v14 != 1 || ((unsigned int (__fastcall *)(struct IXmlReader *))a2->lpVtbl->IsEmptyElement)(a2) )
  {
    v12 = (wchar_t *)L"Unexpected node type or empty element";
    goto LABEL_13;
  }
  if ( CConstraintModelXMLParser::IsElement(v9, a2, (char *)L"HWID") )
  {
    NodeType = CConstraintModelXMLParser::ParseText((CConstraintModelXMLParser *)this, a2, a3, 0xC9u);
    if ( NodeType >= 0 )
    {
      v11 = L"HWID";
LABEL_10:
      NodeType = CConstraintModelXMLParser::FindEndElement((CConstraintModelXMLParser *)this, a2, v11);
      goto LABEL_14;
    }
    goto LABEL_14;
  }
  if ( !CConstraintModelXMLParser::IsElement(v10, a2, (char *)L"COMPATID") )
  {
    v12 = L"Unexpected element, expected either hardware id or compat id";
LABEL_13:
    NodeType = -2147024809;
    LogError((size_t *)v12);
    goto LABEL_14;
  }
  NodeType = CConstraintModelXMLParser::ParseText((CConstraintModelXMLParser *)this, a2, a5, 0xC9u);
  if ( NodeType >= 0 )
  {
    v11 = L"COMPATID";
    goto LABEL_10;
  }
LABEL_14:
  *this = (unsigned int)NodeType >> 31;
  return (unsigned int)NodeType;
}
