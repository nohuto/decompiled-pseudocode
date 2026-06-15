/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDolbySpeakers@@UEBAJPEBG@Z @ 0x180147EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180039B24 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechI.c)
 */

__int64 __fastcall CSpatialAudioDolbySpeakers::GetTechnologyLicenseResult(CSpatialAudioDolbySpeakers *this, char *a2)
{
  unsigned int v2; // ebx
  AtmosCheck *v4; // rcx
  int LicenseForSpatialSubtypeAndEndpoint; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = -2147418113;
  if ( !byte_1801D52FA )
    return 0LL;
  v4 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    LOWORD(v6) = 1;
    v7 = -2147023728;
    v8 = -1879048208;
    v9 = 0LL;
    v10 = 0;
    LicenseForSpatialSubtypeAndEndpoint = AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(
                                            v4,
                                            a2,
                                            3,
                                            (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)&v6);
    v2 = LicenseForSpatialSubtypeAndEndpoint;
    if ( LicenseForSpatialSubtypeAndEndpoint >= 0 )
      return v7;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x323,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)LicenseForSpatialSubtypeAndEndpoint);
  }
  return v2;
}
