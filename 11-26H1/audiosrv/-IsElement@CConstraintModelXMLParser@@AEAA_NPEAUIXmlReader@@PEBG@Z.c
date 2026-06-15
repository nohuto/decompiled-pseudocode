/*
 * XREFs of ?IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z @ 0x18015C800
 * Callers:
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015C418 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015C49C (-FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x18015C538 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z @ 0x18015CEA8 (-ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z.c)
 *     ?ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015DF30 (-ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CConstraintModelXMLParser::IsElement(CConstraintModelXMLParser *this, struct IXmlReader *a2, char *a3)
{
  struct IXmlReaderVtbl *lpVtbl; // rax
  char v5; // bl
  CConstraintModelXMLParser *v6; // rax
  char *v7; // rdi
  int v8; // ecx
  int v9; // edx
  CConstraintModelXMLParser *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = this;
  lpVtbl = a2->lpVtbl;
  v5 = 0;
  v11 = 0LL;
  if ( !((unsigned int (__fastcall *)(struct IXmlReader *, CConstraintModelXMLParser **, _QWORD))lpVtbl->GetLocalName)(
          a2,
          &v11,
          0LL) )
  {
    v6 = v11;
    v7 = (char *)(a3 - (char *)v11);
    do
    {
      v8 = *(unsigned __int16 *)&v7[(_QWORD)v6];
      v9 = *(unsigned __int16 *)v6 - v8;
      if ( v9 )
        break;
      v6 = (CConstraintModelXMLParser *)((char *)v6 + 2);
    }
    while ( v8 );
    return v9 == 0;
  }
  return v5;
}
