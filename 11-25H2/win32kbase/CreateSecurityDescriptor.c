/*
 * XREFs of CreateSecurityDescriptor @ 0x140049900
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1400492B0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1402E97F0 (InitSecurity.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct _ACL *__fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v3; // ebx
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  NTSTATUS v9; // ebx

  v3 = AceListLength + 8;
  if ( AceListLength + 8 >= AceListLength && AceListLength + 48 >= AceListLength + 8 )
  {
    v7 = (struct _ACL *)Win32AllocPoolWithQuotaZInitImpl((__int64)AceList, AceListLength + 48, 0x65737355u);
    v8 = v7;
    if ( v7 )
    {
      RtlCreateSecurityDescriptor(v7, 1u);
      if ( RtlCreateAcl(v8 + 5, v3, 2u) >= 0 && RtlAddAce(v8 + 5, 2u, 0xFFFFFFFF, AceList, AceListLength) >= 0 )
      {
        v9 = RtlSetDaclSecurityDescriptor(v8, 1u, v8 + 5, DaclDefaulted);
        RtlSetSaclSecurityDescriptor(v8, 0, 0LL, 0);
        RtlSetOwnerSecurityDescriptor(v8, 0LL, 0);
        RtlSetGroupSecurityDescriptor(v8, 0LL, 0);
        if ( v9 >= 0 )
          return v8;
      }
      GreDeleteFastMutex((char *)v8);
    }
  }
  return 0LL;
}
