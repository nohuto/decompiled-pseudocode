/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18001E600
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E294 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18001E780 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18001E92C (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800240B0 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ @ 0x18002E108 (-AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002E7BC (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18002ED8C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(PSECURITY_DESCRIPTOR *this, const struct ATL::CDacl *a2, char a3)
{
  PSECURITY_DESCRIPTOR v5; // rcx
  size_t Length; // rbp
  struct _ACL *v7; // rdi
  const struct _ACL *PACL; // rax
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  BOOL v12; // edx
  int Error; // ebx
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
    goto LABEL_18;
  }
  Length = ATL::CAcl::GetLength(a2);
  v7 = (struct _ACL *)malloc(Length);
  if ( !v7 )
    ATL::AtlThrowImpl(-2147024882);
  PACL = ATL::CAcl::GetPACL(a2);
  if ( Length )
  {
    if ( !PACL )
    {
      memset_0(v7, 0, Length);
      v9 = 22;
      *(_DWORD *)_o__errno(v11, v10) = 22;
      invalid_parameter_noinfo();
      goto LABEL_16;
    }
    memcpy_0(v7, PACL, Length);
  }
  v9 = 0;
LABEL_16:
  ATL::AtlCrtErrorCheck(v9);
LABEL_18:
  v12 = *((_BYTE *)a2 + 16) || v7;
  if ( !SetSecurityDescriptorDacl(this[1], v12, v7, 0) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(v7);
    ATL::AtlThrowImpl(Error);
  }
  free(pDacl);
}
