/*
 * XREFs of ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z @ 0x18015CBE0
 * Callers:
 *     ?ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@Z @ 0x18015CDA8 (-ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlArray@PEAVEnd.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??0EndpointInfo@@QEAA@PEBG00K@Z @ 0x18015C380 (--0EndpointInfo@@QEAA@PEBG00K@Z.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015C418 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z @ 0x18015CEA8 (-ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015DFE4 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelXMLParser::ParseExclusiveEndpoint(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        struct EndpointInfo **a3)
{
  unsigned int v6; // r9d
  int EndElement; // ebx
  unsigned int v8; // r14d
  wchar_t *v9; // rax
  struct EndpointInfo *v10; // rax
  unsigned int v12; // [rsp+28h] [rbp-D8h]
  wchar_t *EndPtr; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t String[12]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[414]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int16 v17; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v18[414]; // [rsp+1F2h] [rbp+F2h] BYREF
  unsigned __int16 v19; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v20[526]; // [rsp+392h] [rbp+292h] BYREF

  v17 = 0;
  memset_0(v18, 0, 0x190uLL);
  v15 = 0;
  memset_0(v16, 0, 0x190uLL);
  v19 = 0;
  memset_0(v20, 0, 0x208uLL);
  EndElement = CConstraintModelXMLParser::ParseHardwareIDInfo(this, a2, &v17, v6, &v15, v12);
  if ( EndElement >= 0 )
  {
    EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"TopologyName", &v19, 0x105u);
    if ( EndElement >= 0 )
    {
      EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"PinId", String, 0xBu);
      if ( EndElement >= 0 )
      {
        EndPtr = 0LL;
        v8 = wcstoul(String, &EndPtr, 10);
        if ( *EndPtr || EndPtr == String )
        {
          return (unsigned int)-2147024809;
        }
        else
        {
          EndElement = CConstraintModelXMLParser::FindEndElement(this, a2, L"Endpoint");
          if ( EndElement >= 0 )
          {
            v9 = (wchar_t *)operator new(0x80uLL);
            EndPtr = v9;
            if ( v9 )
              v10 = EndpointInfo::EndpointInfo((EndpointInfo *)v9, &v17, &v15, &v19, v8);
            else
              v10 = 0LL;
            *a3 = v10;
            if ( !v10 )
              return (unsigned int)-2147024882;
          }
        }
      }
    }
  }
  return (unsigned int)EndElement;
}
