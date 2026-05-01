/*
 * XREFs of ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054DB84
 * Callers:
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054DAEC (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@_KP6AH_K@Z$1?CryptDestroyHash@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18054D9D8 (--1-$unique_storage@U-$resource_policy@_KP6AH_K@Z$1-CryptDestroyHash@@YAH0@ZU-$integral_constant.c)
 *     ??1?$unique_storage@U?$resource_policy@_KP6AX_K@_E$1?CryptReleaseContextNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18054D9FC (--1-$unique_storage@U-$resource_policy@_KP6AX_K@_E$1-CryptReleaseContextNoParam@details@wil@@YAX.c)
 *     ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x18054DA24 (-Base32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAEK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HashAndBase32Encode(__int64 a1, const BYTE *a2)
{
  const char *v4; // r9
  const char *v5; // r9
  __int64 v6; // r8
  const char *v7; // r9
  unsigned int v8; // r8d
  const char *v9; // r9
  HCRYPTHASH phHash; // [rsp+30h] [rbp-40h] BYREF
  HCRYPTPROV phProv; // [rsp+38h] [rbp-38h] BYREF
  DWORD pdwDataLen; // [rsp+40h] [rbp-30h] BYREF
  BYTE pbData[32]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  phProv = 0LL;
  if ( !CryptAcquireContextW(&phProv, 0LL, L"Microsoft Enhanced RSA and AES Cryptographic Provider", 0x18u, 0xF0000000) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v4);
  phHash = 0LL;
  if ( !CryptCreateHash(phProv, 0x800Cu, 0LL, 0, &phHash) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x5F,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v5);
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)&a2[2 * v6] );
  if ( !CryptHashData(phHash, a2, 2 * v6, 0) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x62,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v7);
  pdwDataLen = 32;
  if ( !CryptGetHashParam(phHash, 2u, pbData, &pdwDataLen, 0) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x66,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v9);
  Base32Encode(a1, pbData, v8);
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,int (*)(unsigned __int64),&int CryptDestroyHash(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64,int (*)(unsigned __int64),&int CryptDestroyHash(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>(&phHash);
  __1__unique_storage_U__resource_policy__KP6AX_K__E_1_CryptReleaseContextNoParam_details_wil__YAX0_ZU__integral_constant__K_0A__wistd___K_K_0A___T_details_wil___details_wil__QEAA_XZ(&phProv);
  return a1;
}
