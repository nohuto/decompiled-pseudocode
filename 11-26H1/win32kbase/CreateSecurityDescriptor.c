/*
 * XREFs of CreateSecurityDescriptor @ 0x14012DC70
 * Callers:
 *     InitSecurity @ 0x1402F408C (InitSecurity.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct _ACL *__fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v3; // ebx
  struct _ACL *v8; // rax
  struct _ACL *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // ebx

  v3 = AceListLength + 8;
  if ( AceListLength + 8 < AceListLength )
    return 0LL;
  if ( AceListLength + 48 < AceListLength + 8 )
    return 0LL;
  v8 = (struct _ACL *)Win32AllocPoolWithQuotaZInitImpl((int)AceList, AceListLength + 48, 0x65737355u);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  RtlCreateSecurityDescriptor(v8, 1u);
  if ( RtlCreateAcl(v9 + 5, v3, 2u) < 0
    || RtlAddAce(v9 + 5, 2u, 0xFFFFFFFF, AceList, AceListLength) < 0
    || (v13 = RtlSetDaclSecurityDescriptor(v9, 1u, v9 + 5, DaclDefaulted),
        RtlSetSaclSecurityDescriptor(v9, 0, 0LL, 0),
        RtlSetOwnerSecurityDescriptor(v9, 0LL, 0),
        RtlSetGroupSecurityDescriptor(v9, 0LL, 0),
        v13 < 0) )
  {
    GreDeleteFastMutex((char *)v9, v10, v11, v12);
    return 0LL;
  }
  return v9;
}
