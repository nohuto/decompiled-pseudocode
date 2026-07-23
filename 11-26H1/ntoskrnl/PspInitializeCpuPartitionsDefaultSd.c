/*
 * XREFs of PspInitializeCpuPartitionsDefaultSd @ 0x140CDEAB4
 * Callers:
 *     PspInitializeCpuPartitionsPhase0 @ 0x140CDED10 (PspInitializeCpuPartitionsPhase0.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140CDEDF0 (PspInitializeCpuPartitionsPhase1.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInitializeCpuPartitionsDefaultSd(_QWORD *a1, char a2)
{
  ULONG_PTR v3; // r13
  ULONG_PTR Pool2; // rsi
  ULONG v5; // eax
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbp
  NTSTATUS Acl; // ebx
  ULONG v9; // ebx
  size_t v10; // r12
  ACL *v11; // rax
  ACL *v12; // r14
  int v13; // edi
  ULONG_PTR v14; // rax
  void *v15; // rdi
  char *v16; // r15
  ACL *v17; // r13
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+70h] [rbp+18h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v3 = RtlLengthRequiredSid(1u);
  Pool2 = ExAllocatePool2(256LL, v3, 0x50707350u);
  v5 = RtlLengthRequiredSid(2u);
  v6 = ExAllocatePool2(256LL, v5, 0x50707350u);
  v7 = v6;
  if ( v6 && Pool2 )
  {
    Acl = RtlInitializeSid((PSID)Pool2, &IdentifierAuthority, 1u);
    if ( Acl >= 0 )
    {
      *(_DWORD *)(Pool2 + 8) = 18;
      Acl = RtlInitializeSid((PSID)v7, &IdentifierAuthority, 2u);
      if ( Acl >= 0 )
      {
        *(_DWORD *)(v7 + 8) = 32;
        *(_DWORD *)(v7 + 12) = 544;
        v9 = 4 * (*(unsigned __int8 *)(Pool2 + 1) + *(unsigned __int8 *)(v7 + 1)) + 40;
        v10 = v9;
        v11 = (ACL *)ExAllocatePool2(256LL, v9, 0x50707350u);
        v12 = v11;
        if ( v11 )
        {
          Acl = RtlCreateAcl(v11, v9, 2u);
          if ( Acl >= 0 )
          {
            v13 = a2 != 0 ? 8 : 0;
            Acl = RtlAddAccessAllowedAce(v12, 2u, v13 + 917511, (PSID)Pool2);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v12, 2u, v13 + 917511, (PSID)v7);
              if ( Acl >= 0 )
              {
                v14 = ExAllocatePool2(256LL, v10 + v3 + 40, 0x50707350u);
                v15 = (void *)v14;
                if ( v14 )
                {
                  v16 = (char *)(v14 + 40);
                  memmove((void *)(v14 + 40), (const void *)Pool2, v3);
                  v17 = (ACL *)&v16[v3];
                  memmove(v17, v12, v10);
                  Acl = RtlCreateSecurityDescriptor(v15, 1u);
                  if ( Acl < 0
                    || (Acl = RtlSetOwnerSecurityDescriptor(v15, v16, 0), Acl < 0)
                    || (Acl = RtlSetGroupSecurityDescriptor(v15, v16, 0), Acl < 0)
                    || (Acl = RtlSetDaclSecurityDescriptor(v15, 1u, v17, 0), Acl < 0) )
                  {
                    ExFreePoolWithTag(v15, 0);
                  }
                  else
                  {
                    Acl = 0;
                    *a1 = v15;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
          ExFreePoolWithTag(v12, 0);
        }
        else
        {
          Acl = -1073741670;
        }
      }
    }
  }
  else
  {
    Acl = -1073741670;
    if ( !v6 )
      goto LABEL_21;
  }
  ExFreePoolWithTag((PVOID)v7, 0);
LABEL_21:
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)Acl;
}
