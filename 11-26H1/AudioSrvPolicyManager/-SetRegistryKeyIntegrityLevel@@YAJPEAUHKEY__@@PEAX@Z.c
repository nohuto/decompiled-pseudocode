/*
 * XREFs of ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18001CFF8
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18001C4D4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18004A604 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SetRegistryKeyIntegrityLevel(HKEY hKey, PSID pSid)
{
  HKEY v3; // rdi
  int KeySecurity; // ebx
  struct _ACL *v5; // r15
  void *v6; // rax
  void *v7; // r12
  struct _ACL *v8; // r14
  int v9; // edi
  DWORD v10; // r13d
  struct _ACL *v11; // rax
  struct _ACL *v12; // rdi
  DWORD i; // esi
  bool v14; // sf
  signed int LastError; // eax
  DWORD cbSecurityDescriptor; // [rsp+30h] [rbp-49h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+34h] [rbp-45h] BYREF
  WINBOOL bSaclPresent; // [rsp+38h] [rbp-41h] BYREF
  PACL pSacl; // [rsp+40h] [rbp-39h] BYREF
  LPVOID pAce; // [rsp+48h] [rbp-31h] BYREF
  LPVOID pAceList; // [rsp+50h] [rbp-29h] BYREF
  HKEY v23; // [rsp+58h] [rbp-21h]
  _OWORD pSecurityDescriptor[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+80h] [rbp+7h]
  __int64 pAclInformation; // [rsp+88h] [rbp+Fh] BYREF
  int v27; // [rsp+90h] [rbp+17h]

  v23 = hKey;
  v3 = hKey;
  KeySecurity = -2147024809;
  if ( !pSid )
    return (unsigned int)KeySecurity;
  pSacl = 0LL;
  bSaclPresent = 0;
  bSaclDefaulted = 0;
  cbSecurityDescriptor = 0;
  v5 = 0LL;
  KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
  if ( KeySecurity != 122 )
  {
LABEL_26:
    v14 = KeySecurity < 0;
    if ( KeySecurity <= 0 )
      goto LABEL_27;
    goto LABEL_41;
  }
  v6 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    KeySecurity = RegGetKeySecurity(v3, 0x10u, v6, &cbSecurityDescriptor);
    if ( !KeySecurity )
    {
      if ( GetSecurityDescriptorSacl(v7, &bSaclPresent, &pSacl, &bSaclDefaulted) )
      {
        v8 = pSacl;
        KeySecurity = 8;
        pAceList = 0LL;
        v9 = 8;
        pAclInformation = 0LL;
        v27 = 0;
        if ( pSacl && GetAclInformation(pSacl, &pAclInformation, 0xCu, AclSizeInformation) )
          v9 = HIDWORD(pAclInformation);
        v10 = v9 + GetLengthSid(pSid) + 8;
        if ( v10 > 0xFFFF )
          v10 = 0xFFFF;
        v11 = (struct _ACL *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
        v12 = v11;
        if ( v11 )
        {
          if ( InitializeAcl(v11, v10, 2u)
            && AddAccessAllowedAceEx(v12, 2u, 3u, 1u, pSid)
            && (pAce = 0LL, GetAce(v12, 0, &pAce)) )
          {
            KeySecurity = 0;
            *(_BYTE *)pAce = 17;
            if ( v8 )
            {
              for ( i = 0; i < (unsigned int)pAclInformation; ++i )
              {
                if ( GetAce(v8, i, &pAceList)
                  && *(_BYTE *)pAceList != 17
                  && !AddAce(v12, 2u, 0xFFFFFFFF, pAceList, *((unsigned __int16 *)pAceList + 1)) )
                {
                  goto LABEL_38;
                }
              }
            }
          }
          else
          {
LABEL_38:
            KeySecurity = GetLastError();
          }
        }
        if ( KeySecurity )
          operator delete(v12);
        else
          v5 = v12;
        v3 = v23;
      }
      else
      {
        KeySecurity = GetLastError();
      }
    }
    operator delete(v7);
    goto LABEL_26;
  }
  LOWORD(KeySecurity) = 122;
LABEL_41:
  KeySecurity = (unsigned __int16)KeySecurity | 0x80070000;
  v14 = KeySecurity < 0;
LABEL_27:
  if ( !v14 )
  {
    v25 = 0LL;
    memset(pSecurityDescriptor, 0, sizeof(pSecurityDescriptor));
    if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
      || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, v5, 0)
      || RegSetKeySecurity(v3, 0x10u, pSecurityDescriptor) )
    {
      LastError = GetLastError();
      KeySecurity = LastError;
      if ( LastError > 0 )
        KeySecurity = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v5 )
      operator delete(v5);
  }
  return (unsigned int)KeySecurity;
}
