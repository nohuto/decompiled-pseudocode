/*
 * XREFs of ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x18015B548
 * Callers:
 *     ?IsSubjectToConstraintResourceManagement@CConstraintModelResourceManager@@UEAA_NPEAUIMMDevice@@@Z @ 0x1800F3FA0 (-IsSubjectToConstraintResourceManagement@CConstraintModelResourceManager@@UEAA_NPEAUIMMDevice@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800F0B74 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F0F9C (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180159B78 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ?GetNext@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x18015A150 (-GetNext@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18015A28C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CConstraintModel::ResourceConstraintsApply(CConstraintModel *this, struct IMMDevice *a2)
{
  char *v3; // rdi
  __int64 StartPosition; // rax
  unsigned __int64 i; // rdi
  _QWORD *v6; // r14
  unsigned __int64 j; // rsi
  __int64 v9; // [rsp+20h] [rbp-69h] BYREF
  __int128 v10; // [rsp+30h] [rbp-59h] BYREF
  __m128i si128; // [rsp+40h] [rbp-49h]
  __int128 v12; // [rsp+50h] [rbp-39h]
  __m128i v13; // [rsp+60h] [rbp-29h]
  __int128 v14; // [rsp+70h] [rbp-19h]
  __m128i v15; // [rsp+80h] [rbp-9h]
  int v16; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  __int128 v18; // [rsp+A0h] [rbp+17h]

  v3 = (char *)this + 128;
  if ( *((_QWORD *)this + 17) || *((_QWORD *)this + 26) )
  {
    v10 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v10) = 0;
    v12 = 0LL;
    v13 = si128;
    LOWORD(v12) = 0;
    v14 = 0LL;
    v15 = si128;
    LOWORD(v14) = 0;
    v16 = 0;
    v17 = 0LL;
    v18 = 0LL;
    if ( (int)CConstraintModel::GetEndpointInformationFromId(this, a2, (struct EndpointInfo *)&v10) >= 0 )
    {
      if ( *((_QWORD *)this + 17) )
      {
        StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition((__int64)v3);
        v9 = StartPosition;
        while ( StartPosition )
        {
          if ( !*(_DWORD *)(*(_QWORD *)StartPosition + 8LL)
            && EndpointInfo::operator==((__int64 *)(*(_QWORD *)StartPosition + 16LL), (__int64 *)&v10) )
          {
LABEL_18:
            EndpointInfo::~EndpointInfo((EndpointInfo *)&v10);
            return 1;
          }
          ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNext(
            (__int64)v3,
            &v9);
          StartPosition = v9;
        }
      }
      if ( *((_QWORD *)this + 26) )
      {
        for ( i = 0LL; i < *((_QWORD *)this + 26); ++i )
        {
          v6 = *(_QWORD **)(*((_QWORD *)this + 25) + 8 * i);
          for ( j = 0LL; j < v6[1]; ++j )
          {
            if ( EndpointInfo::operator==((__int64 *)&v10, *(__int64 **)(*v6 + 8 * j)) )
              goto LABEL_18;
          }
        }
      }
    }
    EndpointInfo::~EndpointInfo((EndpointInfo *)&v10);
  }
  return 0;
}
