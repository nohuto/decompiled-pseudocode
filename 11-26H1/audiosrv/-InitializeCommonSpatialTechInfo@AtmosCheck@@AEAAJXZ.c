/*
 * XREFs of ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x18005328C
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180155E5C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

__int64 __fastcall AtmosCheck::InitializeCommonSpatialTechInfo(LPOLESTR *this)
{
  int v2; // esi
  GUID *v3; // rbp
  GUID *v4; // r14
  HRESULT v5; // eax
  unsigned int v6; // ebx
  GUID v7; // xmm0
  unsigned int v9; // ecx
  char *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 96) )
  {
    v2 = 0;
    v3 = &AtmosCheck::s_spatialSubtypes;
    v4 = (GUID *)((char *)this + 276);
    while ( (unsigned __int64)v2 < 7 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &this[7 * v2 + 37],
        0LL);
      v5 = StringFromCLSID(&AtmosCheck::s_spatialSubtypes + v2, &this[7 * v2 + 37]);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBA3,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
      v7 = *v3;
      ++v2;
      ++v3;
      *v4 = v7;
      v4 = (GUID *)((char *)v4 + 56);
    }
  }
  v9 = 0;
  v10 = (char *)this + 273;
  do
  {
    ++v9;
    *(_WORD *)(v10 - 1) = 0;
    v10 += 56;
  }
  while ( v9 < 7 );
  return 0LL;
}
