/*
 * XREFs of ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x180026C78
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?FreeSid@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A264 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-FreeSid@@YAPEAX0@ZU-$integral_constan.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

void __fastcall EditAppContainerMask(PACL pAcl)
{
  DWORD i; // ebx
  PSID pSid1; // [rsp+60h] [rbp-20h] BYREF
  LPVOID pAce; // [rsp+68h] [rbp-18h] BYREF
  _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+70h] [rbp-10h] BYREF

  *(_WORD *)&pIdentifierAuthority.Value[4] = 3840;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  pSid1 = 0LL;
  if ( AllocateAndInitializeSid(&pIdentifierAuthority, 2u, 3u, 0x1000u, 0, 0, 0, 0, 0, 0, &pSid1) )
  {
    for ( i = 0; i < pAcl->AceCount; ++i )
    {
      pAce = 0LL;
      if ( !GetAce(pAcl, i, &pAce) )
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * FreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * FreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&pSid1);
        return;
      }
      if ( EqualSid(pSid1, (char *)pAce + 8) && !*(_BYTE *)pAce )
      {
        *((_BYTE *)pAce + 1) = 2;
        *((_DWORD *)pAce + 1) = 131099;
        break;
      }
    }
  }
  if ( pSid1 )
    FreeSid(pSid1);
}
