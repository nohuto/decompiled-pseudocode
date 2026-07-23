/*
 * XREFs of PspInitializeSystemPartitionPhase0 @ 0x140CDF5A8
 * Callers:
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     PsCreatePartition @ 0x14080347C (PsCreatePartition.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PspInitializeSystemPartitionPhase0()
{
  int Acl; // ebx
  ULONG v1; // ebx
  ACL *Pool2; // rax
  ACL *v3; // rdi
  _QWORD v5[2]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+60h] [rbp+17h]
  int v8[4]; // [rsp+68h] [rbp+1Fh] BYREF
  __int128 v9; // [rsp+78h] [rbp+2Fh]
  _OWORD *v10; // [rsp+88h] [rbp+3Fh]
  __int64 v11; // [rsp+90h] [rbp+47h]

  v5[0] = 4194366LL;
  v10 = 0LL;
  LODWORD(v11) = 0;
  v7 = 0LL;
  v5[1] = L"\\KernelObjects\\MemoryPartition0";
  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v1 = 4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 28;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v1, 0x6C636144u);
    v3 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v1, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v3, 2u, 0x1F0003u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            *(_QWORD *)&v9 = v5;
            v8[0] = 48;
            v10 = SecurityDescriptor;
            *(_QWORD *)&v8[2] = 0LL;
            DWORD2(v9) = 512;
            v11 = 0LL;
            Acl = PsCreatePartition(0LL, 0LL, 2031619, (int)v8, 0, 1);
          }
        }
      }
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Acl;
}
