/*
 * XREFs of ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180049A70
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180005ACC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18001DCB4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001E104 (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18002407C (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002848C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18002E660 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180049574 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18004963C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x1800497C0 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180049868 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
        char *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a2,
        enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *a3)
{
  wchar_t *v5; // rax
  __int64 v6; // rbx
  signed int v7; // edi
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  const void *Buffer; // rax
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  char *v17; // rcx
  int v18; // edi
  int v19; // ebx
  ATL::Checked *v20; // rax
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  const void *v24; // rax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 *v29[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  wchar_t *Str; // [rsp+68h] [rbp+38h] BYREF

  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (__int64 *)&Str,
    a1);
  if ( *((int *)Str - 4) < 0 || (v5 = wcsstr(Str, L"_")) == 0LL || (v6 = v5 - Str, (_DWORD)v6 == -1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A5,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
  }
  else
  {
    v7 = 0;
    if ( (int)v6 >= 0 )
      v7 = v5 - Str;
    if ( v7 < *((_DWORD *)Str - 4) )
    {
      Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(&Str);
      ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((__int64 *)v29, Str, v7, Manager);
    }
    else
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        v29,
        &Str);
    }
    if ( ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber((char *)v29[0]) )
    {
      *(_DWORD *)_o__errno(v10, v9) = 0;
      Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)v29);
      v13 = _o__wtoi(Buffer);
      if ( *(_DWORD *)_o__errno(v15, v14) )
      {
        v11 = 690LL;
      }
      else if ( v13 <= 5 )
      {
        v16 = 0;
        if ( (int)v6 + 1 >= 0 )
          v16 = v6 + 1;
        v17 = (char *)Str;
        v18 = *((_DWORD *)Str - 4);
        if ( 0x7FFFFFFF - v16 < 0 )
          ATL::AtlThrowImpl(-2147024809);
        v19 = *((_DWORD *)Str - 4);
        if ( v16 <= v18 )
          v19 = v16;
        if ( v19 > 0 )
        {
          v20 = (ATL::Checked *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)&Str);
          v21 = v18 - v19;
          ATL::Checked::memmove_s(v20, (void *)(2LL * (v21 + 1)), (char *)v20 + 2 * v19, (void *)(2LL * (v21 + 1)));
          ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v21);
          v17 = (char *)Str;
        }
        if ( ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(v17) )
        {
          *(_DWORD *)_o__errno(v23, v22) = 0;
          v24 = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)&Str);
          v25 = (unsigned int)_o__wtoi(v24);
          if ( *(_DWORD *)_o__errno(v27, v26) )
          {
            v11 = 708LL;
          }
          else
          {
            if ( (unsigned int)v25 <= eCapture )
            {
              *a2 = v25;
              *(_DWORD *)a3 = v13;
              ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v29);
              ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&Str);
              return 0LL;
            }
            v11 = 711LL;
          }
        }
        else
        {
          v11 = 702LL;
        }
      }
      else
      {
        v11 = 693LL;
      }
    }
    else
    {
      v11 = 683LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v29);
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&Str);
  return 2147942487LL;
}
