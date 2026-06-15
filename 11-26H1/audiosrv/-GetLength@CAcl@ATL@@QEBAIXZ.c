/*
 * XREFs of ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x180055524
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18005535C (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18005559C (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800B8D2C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

__int64 __fastcall ATL::CAcl::GetLength(ATL::CAcl *this)
{
  struct _ACL *PACL; // rax
  __int64 pAclInformation; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  PACL = (struct _ACL *)ATL::CAcl::GetPACL(this);
  pAclInformation = 0LL;
  v5 = 0;
  if ( *((_BYTE *)this + 16) )
    return 0LL;
  if ( !GetAclInformation(PACL, &pAclInformation, 0xCu, AclSizeInformation) )
    ATL::AtlThrowLastWin32();
  return HIDWORD(pAclInformation);
}
