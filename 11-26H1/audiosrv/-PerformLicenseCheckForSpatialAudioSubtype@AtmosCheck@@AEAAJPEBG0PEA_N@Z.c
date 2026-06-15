/*
 * XREFs of ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180037A44
 * Callers:
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180156DC8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x1800396D4 (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18003977C (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x1800397EC (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x1800398B8 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18007010C (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     _lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_ @ 0x1800ADDB8 (_lambda_f7a716bfe224096f553bb41568304cf0_--_lambda_f7a716bfe224096f553bb41568304cf0_.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x1800AE0A0 (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::scope_exit__lambda_f7a716bfe224096f553bb41568304cf0___ @ 0x18015462C (wil--scope_exit__lambda_f7a716bfe224096f553bb41568304cf0___.c)
 *     wil::details::lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___::_lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___ @ 0x180154B70 (wil--details--lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___--_lambda_call__lambda_f7a7.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  int v8; // eax
  __int64 v9; // rax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // esi
  __int64 v14; // r9
  __int64 v15; // rdx
  int updated; // eax
  int v18; // [rsp+20h] [rbp-48h]
  _BYTE v19[8]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v20[48]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v22; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0;
  v8 = AtmosCheck::BeginAppSvcCall(this);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x636,
      (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v8,
      v18);
  v9 = lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_(v19, this);
  wil::scope_exit__lambda_f7a716bfe224096f553bb41568304cf0___(v20, v9);
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v22);
  v10 = v22;
  if ( v22 )
  {
    AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v22);
    v12 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a3);
    v13 = v12;
    if ( v12 == -1 )
    {
      v11 = -2147024809;
      v14 = 2147942487LL;
      v15 = 1604LL;
    }
    else
    {
      AtmosCheck::PerformLicenseCheckHelper(this, a2, v12, v10, a4);
      if ( !*a4 || (updated = AtmosCheck::UpdateEndpointUnderLock(this, a2, v13, v10), v11 = updated, updated >= 0) )
      {
        operator delete(v10);
        v11 = 0;
        goto LABEL_12;
      }
      v14 = (unsigned int)updated;
      v15 = 1613LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v14);
    operator delete(v10);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63E,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_12:
  wil::details::lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___::_lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___(v20);
  return v11;
}
