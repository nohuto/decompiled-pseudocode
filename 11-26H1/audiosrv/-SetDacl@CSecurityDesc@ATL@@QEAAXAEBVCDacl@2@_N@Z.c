/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18005535C
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180072AF0 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ?AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ @ 0x1800554A0 (-AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x180055524 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18005559C (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180055740 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800B8D04 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800B8D2C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800B8DD8 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(PSECURITY_DESCRIPTOR *this, const struct ATL::CDacl *a2, char a3)
{
  PSECURITY_DESCRIPTOR v5; // rcx
  size_t Length; // rbp
  ATL::Checked *v7; // rdi
  const struct _ACL *PACL; // rax
  BOOL v9; // edx
  int Error; // ebx
  unsigned __int64 v11; // [rsp+20h] [rbp-18h]
  WINBOOL bDaclPresent; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+50h] [rbp+18h] BYREF
  PACL pDacl; // [rsp+58h] [rbp+20h] BYREF

  LOBYTE(bDaclDefaulted) = a3;
  if ( this[1] )
    ATL::CSecurityDesc::MakeAbsolute((ATL::CSecurityDesc *)this);
  v5 = this[1];
  pDacl = 0LL;
  if ( v5 )
  {
    bDaclDefaulted = 0;
    bDaclPresent = 0;
    if ( !GetSecurityDescriptorDacl(v5, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    ATL::CSecurityDesc::AllocateAndInitializeSecurityDescriptor((ATL::CSecurityDesc *)this);
  }
  if ( *((_BYTE *)a2 + 16) || !(*(unsigned int (__fastcall **)(const struct ATL::CDacl *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v7 = 0LL;
  }
  else
  {
    Length = ATL::CAcl::GetLength(a2);
    v7 = (ATL::Checked *)malloc(Length);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    PACL = ATL::CAcl::GetPACL(a2);
    ATL::Checked::memcpy_s(v7, (void *)Length, (unsigned __int64)PACL, (const void *)Length, v11);
  }
  v9 = *((_BYTE *)a2 + 16) || v7;
  if ( !SetSecurityDescriptorDacl(this[1], v9, (PACL)v7, 0) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(v7);
    ATL::AtlThrowImpl(Error);
  }
  free(pDacl);
}
