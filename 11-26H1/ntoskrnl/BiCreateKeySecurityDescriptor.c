/*
 * XREFs of BiCreateKeySecurityDescriptor @ 0x1409A72B0
 * Callers:
 *     BiCreateKey @ 0x1409A6848 (BiCreateKey.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

ACL *__fastcall BiCreateKeySecurityDescriptor(int a1)
{
  PSID SeLocalSystemSid; // r14
  PSID Src; // rsi
  ULONG v4; // ebx
  ULONG v5; // ebp
  ULONG v6; // r12d
  ACL *Pool2; // rax
  ACL *v8; // rdi
  ACL *v9; // rbx
  __int16 AclSize; // ax
  __int16 v11; // ax
  ULONG v12; // ebx
  char *v13; // rbx
  ULONG v14; // eax

  SeLocalSystemSid = SeExports->SeLocalSystemSid;
  Src = SeExports->SeAliasAdminsSid;
  v4 = RtlLengthSid(SeLocalSystemSid);
  v5 = v4 + RtlLengthSid(Src) + 24;
  v6 = v5 + RtlLengthSid(Src) + 40;
  Pool2 = (ACL *)ExAllocatePool2(0x102uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v9 = Pool2 + 5;
  if ( RtlCreateAcl(Pool2 + 5, v5, 2u) < 0 )
    goto LABEL_10;
  if ( (int)RtlpAddKnownAce((int)v9, 2, 0, a1, Src, 0) < 0 )
    goto LABEL_10;
  if ( (int)RtlpAddKnownAce((int)v9, 2, 0, 983103, SeLocalSystemSid, 0) < 0 )
    goto LABEL_10;
  *(_OWORD *)&v8->AclRevision = 0LL;
  *(_OWORD *)&v8[2].AclRevision = 0LL;
  v8[4] = 0LL;
  AclSize = v8->AclSize;
  v8->AclRevision = 1;
  if ( AclSize < 0 )
    goto LABEL_10;
  v11 = AclSize | 4;
  if ( v9 )
    v8[4] = (ACL)v9;
  v8->AclSize = v11 & 0xFFF7;
  v12 = RtlLengthSecurityDescriptor(v8);
  if ( RtlLengthSid(Src) + v12 < v6
    || (v13 = (char *)v8 + RtlLengthSecurityDescriptor(v8),
        v14 = RtlLengthSid(Src),
        memmove(v13, Src, v14),
        RtlSetOwnerSecurityDescriptor(v8, v13, 0) < 0) )
  {
LABEL_10:
    ExFreePoolWithTag(v8, 0x4B444342u);
    return 0LL;
  }
  return v8;
}
