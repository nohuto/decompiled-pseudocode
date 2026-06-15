/*
 * XREFs of ?ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z @ 0x18015E440
 * Callers:
 *     ?ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z @ 0x18015CEA8 (-ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015DFE4 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180047620 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800F3FB0 (-LogError@@YAXPEBGZZ.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x18015C770 (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseText(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        char *a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  int NodeType; // ebx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-14h] BYREF
  unsigned __int16 *v11; // [rsp+28h] [rbp-10h] BYREF

  v5 = a4;
  v11 = 0LL;
  v10 = 0;
  v9 = 0;
  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, (enum XmlNodeType *)&v9);
  if ( NodeType >= 0 )
  {
    if ( v9 == 3 )
    {
      NodeType = ((__int64 (__fastcall *)(struct IXmlReader *, unsigned __int16 **, unsigned int *))a2->lpVtbl->GetValue)(
                   a2,
                   &v11,
                   &v10);
      if ( NodeType >= 0 )
      {
        if ( v10 <= (unsigned int)v5 )
        {
          return (unsigned int)StringCchCopyW(a3, v5, (char *)v11);
        }
        else
        {
          NodeType = -2147024809;
          LogError((size_t *)L"Length of entry %d longer than expected length %d", v10, (unsigned int)v5);
        }
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)NodeType;
}
