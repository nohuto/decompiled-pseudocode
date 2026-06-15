/*
 * XREFs of ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800240B0
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18001E600 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002E7BC (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18002ED8C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSecurityDesc::MakeAbsolute(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  struct _ACL *pSacl; // rbx
  void *v4; // rcx
  void *v5; // rsi
  void *pOwner; // r15
  void *pPrimaryGroup; // r14
  struct _ACL *v8; // rax
  struct _ACL *v9; // r12
  struct _ACL *v10; // rax
  void *v11; // rax
  void *v12; // rax
  int Error; // edi
  DWORD dwDaclSize; // [rsp+68h] [rbp+17h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+6Ch] [rbp+1Bh] BYREF
  DWORD dwRevision[2]; // [rsp+70h] [rbp+1Fh] BYREF
  WORD pControl; // [rsp+B8h] [rbp+67h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+C0h] [rbp+6Fh] BYREF
  DWORD dwOwnerSize; // [rsp+C8h] [rbp+77h] BYREF
  DWORD dwSaclSize; // [rsp+D0h] [rbp+7Fh] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    pSacl = 0LL;
    dwRevision[0] = 0;
    pControl = 0;
    if ( !GetSecurityDescriptorControl(v2, &pControl, dwRevision) )
      goto LABEL_3;
    if ( (pControl & 0x8000u) != 0 )
    {
      v4 = (void *)*((_QWORD *)this + 1);
      dwSaclSize = 0;
      dwDaclSize = 0;
      dwPrimaryGroupSize = 0;
      dwOwnerSize = 0;
      dwAbsoluteSecurityDescriptorSize = 0;
      MakeAbsoluteSD(
        v4,
        0LL,
        &dwAbsoluteSecurityDescriptorSize,
        0LL,
        &dwDaclSize,
        0LL,
        &dwSaclSize,
        0LL,
        &dwOwnerSize,
        0LL,
        &dwPrimaryGroupSize);
      if ( GetLastError() != 122 )
        ATL::AtlThrowLastWin32();
      v5 = malloc(dwAbsoluteSecurityDescriptorSize);
      if ( v5 )
      {
        if ( dwOwnerSize )
        {
          v11 = malloc(dwOwnerSize);
          pOwner = v11;
          if ( dwOwnerSize && !v11 )
            goto LABEL_3;
        }
        else
        {
          pOwner = 0LL;
        }
        if ( dwPrimaryGroupSize )
        {
          v12 = malloc(dwPrimaryGroupSize);
          pPrimaryGroup = v12;
          if ( dwPrimaryGroupSize && !v12 )
            goto LABEL_3;
        }
        else
        {
          pPrimaryGroup = 0LL;
        }
        if ( dwDaclSize )
        {
          v8 = (struct _ACL *)malloc(dwDaclSize);
          v9 = v8;
          if ( dwDaclSize && !v8 )
            goto LABEL_3;
        }
        else
        {
          v9 = 0LL;
        }
        if ( !dwSaclSize || (v10 = (struct _ACL *)malloc(dwSaclSize), pSacl = v10, !dwSaclSize) || v10 )
        {
          if ( !MakeAbsoluteSD(
                  *((PSECURITY_DESCRIPTOR *)this + 1),
                  v5,
                  &dwAbsoluteSecurityDescriptorSize,
                  v9,
                  &dwDaclSize,
                  pSacl,
                  &dwSaclSize,
                  pOwner,
                  &dwOwnerSize,
                  pPrimaryGroup,
                  &dwPrimaryGroupSize) )
          {
            Error = ATL::AtlHresultFromLastError();
            free(v5);
            free(pOwner);
            free(pPrimaryGroup);
            free(v9);
            free(pSacl);
            ATL::AtlThrowImpl(Error);
          }
          (*(void (__fastcall **)(ATL::CSecurityDesc *))(*(_QWORD *)this + 8LL))(this);
          *((_QWORD *)this + 1) = v5;
          return;
        }
      }
LABEL_3:
      ATL::AtlThrowImpl(-2147467259);
    }
  }
}
