/*
 * XREFs of ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015E144
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x18015CA7C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800F0B74 (--1EndpointInfo@@QEAA@XZ.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800F3FB0 (-LogError@@YAXPEBGZZ.c)
 *     ??0StreamResourceConsumer@@QEAA@AEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180158DA0 (--0StreamResourceConsumer@@QEAA@AEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ??0EndpointInfo@@QEAA@PEBG00K@Z @ 0x18015C380 (--0EndpointInfo@@QEAA@PEBG00K@Z.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015C418 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z @ 0x18015CEA8 (-ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015DFE4 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 *     wcscmp_0 @ 0x1801626D4 (wcscmp_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelXMLParser::ParseStreamIDInfo(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3)
{
  __int64 v6; // r9
  int EndElement; // ebx
  unsigned int v8; // r15d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // edi
  wchar_t *v10; // rax
  struct ResourceConsumer *v11; // rax
  wchar_t *EndPtr; // [rsp+30h] [rbp-D0h] BYREF
  GUID pclsid; // [rsp+40h] [rbp-C0h] BYREF
  OLECHAR sz[64]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t String1[8]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t String[16]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v18; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v19[414]; // [rsp+112h] [rbp+12h] BYREF
  unsigned __int16 v20; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v21[414]; // [rsp+2B2h] [rbp+1B2h] BYREF
  unsigned __int16 v22; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v23[526]; // [rsp+452h] [rbp+352h] BYREF

  v20 = 0;
  memset_0(v21, 0, 0x190uLL);
  v18 = 0;
  memset_0(v19, 0, 0x190uLL);
  v22 = 0;
  memset_0(v23, 0, 0x208uLL);
  pclsid = GUID_00000000_0000_0000_0000_000000000000;
  EndElement = CConstraintModelXMLParser::ParseHardwareIDInfo(this, a2, &v20, v6, &v18);
  if ( EndElement >= 0 )
  {
    EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                   (CConstraintModelXMLParser *)this,
                   a2,
                   L"TopologyName",
                   &v22,
                   0x105u);
    if ( EndElement >= 0 )
    {
      EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                     (CConstraintModelXMLParser *)this,
                     a2,
                     L"PinId",
                     String,
                     0xBu);
      if ( EndElement >= 0 )
      {
        EndPtr = 0LL;
        v8 = wcstoul(String, &EndPtr, 10);
        if ( *EndPtr || EndPtr == String )
          EndElement = -2147024809;
        if ( EndElement >= 0 )
        {
          EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                         (CConstraintModelXMLParser *)this,
                         a2,
                         L"Mode",
                         sz,
                         0x28u);
          if ( EndElement >= 0 )
          {
            EndElement = CLSIDFromString(sz, &pclsid);
            if ( EndElement >= 0 )
            {
              EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                             (CConstraintModelXMLParser *)this,
                             a2,
                             L"ConnectorType",
                             String1,
                             9u);
              if ( EndElement >= 0 )
              {
                if ( !wcscmp_0(String1, L"Host") )
                {
                  v9 = eHostProcessConnector;
                }
                else if ( !wcscmp_0(String1, L"Offload") )
                {
                  v9 = eOffloadConnector;
                }
                else if ( !wcscmp_0(String1, L"Loopback") )
                {
                  v9 = eLoopbackConnector;
                }
                else
                {
                  if ( wcscmp_0(String1, L"LoopbackPostVolume") )
                  {
                    EndElement = -2147024809;
                    LogError((size_t *)L"Invalid connector type %s", String1);
                    return (unsigned int)EndElement;
                  }
                  v9 = eConnectorCount;
                }
                EndElement = CConstraintModelXMLParser::FindEndElement((CConstraintModelXMLParser *)this, a2, L"Stream");
                if ( EndElement >= 0 )
                {
                  EndpointInfo::EndpointInfo((EndpointInfo *)sz, &v20, &v18, &v22, v8);
                  v10 = (wchar_t *)operator new(0xA8uLL);
                  EndPtr = v10;
                  if ( v10 )
                  {
                    *(GUID *)String1 = pclsid;
                    v11 = StreamResourceConsumer::StreamResourceConsumer(
                            (StreamResourceConsumer *)v10,
                            (struct EndpointInfo *)sz,
                            (struct _GUID *)String1,
                            v9);
                  }
                  else
                  {
                    v11 = 0LL;
                  }
                  *a3 = v11;
                  if ( !v11 )
                    EndElement = -2147024882;
                  EndpointInfo::~EndpointInfo((EndpointInfo *)sz);
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)EndElement;
}
