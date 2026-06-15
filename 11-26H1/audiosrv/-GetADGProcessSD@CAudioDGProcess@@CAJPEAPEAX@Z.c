/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180072AF0
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18007272C (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180044870 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18005535C (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180072E70 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180072F58 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x1800730D8 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180085080 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x1800ABC5C (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??1?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800ABCA4 (--1-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x1800AC3B0 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x1800AD5E0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  const struct ATL::CSid *v2; // rax
  unsigned __int8 v3; // r9
  bool v4; // di
  __int64 result; // rax
  unsigned __int8 v6; // r9
  bool v7; // di
  char v8; // r8
  unsigned __int64 SecurityDescriptorLength; // rdi
  void *v10; // rax
  const char *v11; // r9
  void **v12; // [rsp+60h] [rbp-108h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-100h]
  void **v14; // [rsp+70h] [rbp-F8h] BYREF
  void *Block; // [rsp+78h] [rbp-F0h]
  char v16; // [rsp+80h] [rbp-E8h]
  int v17; // [rsp+84h] [rbp-E4h]
  __int128 v18; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+98h] [rbp-D0h]
  int v20; // [rsp+A0h] [rbp-C8h]
  ATL::CAtlException *v21; // [rsp+A8h] [rbp-C0h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v22; // [rsp+B0h] [rbp-B8h] BYREF
  _QWORD v23[11]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+118h] [rbp-50h] BYREF
  __int64 v25; // [rsp+120h] [rbp-48h] BYREF
  __int64 v26; // [rsp+128h] [rbp-40h] BYREF
  __int64 v27; // [rsp+130h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  try
  {
    v12 = &ATL::CSecurityDesc::`vftable';
    pSecurityDescriptor = 0LL;
    *(_DWORD *)v22.Value = 0;
    *(_WORD *)&v22.Value[4] = 1280;
    Block = 0LL;
    v16 = 0;
    v17 = 2;
    v14 = &ATL::CDacl::`vftable';
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0;
    v2 = (const struct ATL::CSid *)ATL::CSid::CSid(
                                     (ATL::CSid *)v23,
                                     &v22,
                                     6u,
                                     80LL,
                                     -1618417719,
                                     1911656217,
                                     -1669870755,
                                     -116925420,
                                     1366760775,
                                     0LL,
                                     0LL);
    v4 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)&v14, v2, 0x10000000u, v3);
    v23[0] = &ATL::CSid::`vftable';
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v27);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v26);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
    if ( v4 )
    {
      ATL::CSid::CSid((ATL::CSid *)v23, (const struct _SID_IDENTIFIER_AUTHORITY *)&ATL::Sids::SecurityNTAuthority, 1u);
      v7 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)&v14, (const struct ATL::CSid *)v23, 0x1000u, v6);
      ATL::CSid::~CSid((ATL::CSid *)v23);
      if ( v7 )
      {
        ATL::CSecurityDesc::SetDacl((PSECURITY_DESCRIPTOR *)&v12, (const struct ATL::CDacl *)&v14, v8);
        ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v12);
        ATL::CDacl::~CDacl((ATL::CDacl *)&v14);
        SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
        v10 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
        *a1 = v10;
        if ( v10 )
        {
          memcpy_0(v10, pSecurityDescriptor, SecurityDescriptorLength);
          v12 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v12);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
            (const char *)0x8007000ELL);
          v12 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v12);
          result = 2147942414LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
          (const char *)0x80004005LL);
        ATL::CDacl::~CDacl((ATL::CDacl *)&v14);
        v12 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v12);
        result = 2147500037LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)0x80004005LL);
      v14 = &ATL::CDacl::`vftable';
      ATL::CDacl::RemoveAllAces((ATL::CDacl *)&v14);
      ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>(&v18);
      v14 = &ATL::CAcl::`vftable';
      free(Block);
      v12 = &ATL::CSecurityDesc::`vftable';
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v12);
      result = 2147500037LL;
    }
  }
  catch ( ATL::CAtlException *v21 )
  {
    v11 = (const char *)*(unsigned int *)v21;
    *(_DWORD *)v22.Value = (_DWORD)v11;
    if ( (int)v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        v11);
    v12 = &ATL::CSecurityDesc::`vftable';
    ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v12);
    return *(unsigned int *)v22.Value;
  }
  return result;
}
