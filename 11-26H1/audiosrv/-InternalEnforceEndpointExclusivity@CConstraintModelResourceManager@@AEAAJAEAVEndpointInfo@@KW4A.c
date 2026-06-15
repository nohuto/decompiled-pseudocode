/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800F16B0 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F4550 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800AAD18 (--1-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ??0EndpointInfo@@QEAA@AEBV0@@Z @ 0x1800F0654 (--0EndpointInfo@@QEAA@AEBV0@@Z.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800F0B74 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F0F9C (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800F31A0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800F5054 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18015B810 (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
        CConstraintModelResourceManager *a1,
        const struct EndpointInfo *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  int v7; // r13d
  struct EndpointInfo *v8; // r14
  unsigned int v9; // r12d
  _UNKNOWN **v10; // rcx
  int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdi
  unsigned int v21; // r15d
  CConstraintModelResourceManager *v22; // rsi
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v26; // [rsp+38h] [rbp-C8h]
  unsigned int v27; // [rsp+3Ch] [rbp-C4h]
  struct EndpointInfo *v28; // [rsp+40h] [rbp-C0h]
  CConstraintModelResourceManager *v29; // [rsp+48h] [rbp-B8h]
  _QWORD *v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+68h] [rbp-98h]
  _QWORD *v34; // [rsp+70h] [rbp-90h]
  const struct EndpointInfo *v35; // [rsp+78h] [rbp-88h]
  __int64 v36[16]; // [rsp+80h] [rbp-80h] BYREF

  v27 = a4;
  v26 = a3;
  v35 = a2;
  v29 = a1;
  EndpointInfo::EndpointInfo((EndpointInfo *)v36, a2);
  v7 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v8 = 0LL;
  v9 = -1;
  if ( a6 > 0x14 )
  {
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids,
        a6);
      v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    v11 = -2005139334;
    goto LABEL_34;
  }
  v12 = *((_QWORD *)a1 + 7);
  if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *>>::SetCount(
                           &v30,
                           *(_QWORD *)(v12 + 208)) )
    ATL::AtlThrowImpl(-2147024882);
  v13 = *(_QWORD *)(v12 + 208);
  v14 = v30;
  if ( v13 )
  {
    v15 = v30;
    v16 = *(_QWORD *)(v12 + 200) - (_QWORD)v30;
    do
    {
      *v15 = *(_QWORD *)((char *)v15 + v16);
      ++v15;
      --v13;
    }
    while ( v13 );
  }
  v11 = 0;
  v17 = v31;
  if ( !v31 )
    goto LABEL_33;
  v18 = 0LL;
  do
  {
    if ( v7 )
    {
LABEL_23:
      if ( v8 )
      {
        v21 = v26;
        if ( (v9 & 0xFFFFFFFE) >= (v26 & 0xFFFFFFFE) )
        {
          if ( !a5 )
          {
            v22 = v29;
            v11 = CConstraintModelResourceManager::RevokeEndpointResources(v29, v8);
            if ( v11 >= 0 )
            {
              if ( a6 )
                Sleep(0x32u);
              v11 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(v22, v35, v21, v27, 0, a6 + 1);
            }
          }
        }
        else
        {
          v11 = -2005139334;
        }
      }
      goto LABEL_33;
    }
    v19 = (_QWORD *)v14[v18];
    v34 = v19;
    v8 = 0LL;
    v28 = 0LL;
    v9 = -1;
    v20 = 0LL;
    if ( !v19[1] )
      goto LABEL_21;
    do
    {
      v8 = *(struct EndpointInfo **)(*v19 + 8 * v20);
      if ( EndpointInfo::operator==(v36, (__int64 *)v8) )
      {
        v7 = 1;
LABEL_18:
        v8 = v28;
        goto LABEL_19;
      }
      v24 = 0;
      v25 = -1;
      CConstraintModelResourceManager::GetEndpointStatus((struct _RTL_CRITICAL_SECTION *)v29, v8, &v24, &v25);
      if ( !v24 )
        goto LABEL_18;
      v28 = v8;
      v9 = v25;
LABEL_19:
      ++v20;
      v19 = v34;
    }
    while ( v20 < v34[1] );
    v14 = v30;
LABEL_21:
    ++v18;
  }
  while ( v18 < v17 );
  if ( v7 )
    goto LABEL_23;
LABEL_33:
  v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_34:
  if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x100) != 0 && *((_BYTE *)v10 + 25) >= 4u )
    WPP_SF_d((__int64)v10[2], 0x1Fu, (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, v11);
  ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>::~CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>((void **)&v30);
  EndpointInfo::~EndpointInfo((EndpointInfo *)v36);
  return (unsigned int)v11;
}
