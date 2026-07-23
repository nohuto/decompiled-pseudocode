/*
 * XREFs of SeAccessCheckFromState @ 0x1403B0740
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1408FC6F0 (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x140A4E864 (CmpCheckAdminAccess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SepTokenFromAccessInformation @ 0x1403B0890 (SepTokenFromAccessInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

BOOLEAN __stdcall SeAccessCheckFromState(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
        PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  _BYTE *v14; // rax
  _BYTE *v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h]
  _BYTE *v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  _BYTE v20[1184]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v21[1184]; // [rsp+530h] [rbp+430h] BYREF

  memset_0(v21, 0, sizeof(v21));
  memset_0(v20, 0, sizeof(v20));
  SepTokenFromAccessInformation(PrimaryTokenInformation, v21);
  if ( ClientTokenInformation )
  {
    SepTokenFromAccessInformation(ClientTokenInformation, v20);
    v14 = v20;
  }
  else
  {
    v14 = 0LL;
  }
  v16 = 0LL;
  v18 = v21;
  v17 = 0LL;
  v19 = 0LL;
  if ( v14 )
  {
    v16 = v14;
    LODWORD(v17) = *((_DWORD *)v14 + 49);
  }
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           0,
           (int *)&v16,
           1,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           GenericMapping,
           AccessMode,
           GrantedAccess,
           AccessStatus);
}
