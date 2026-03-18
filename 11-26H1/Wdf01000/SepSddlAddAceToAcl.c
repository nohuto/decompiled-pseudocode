/*
 * XREFs of SepSddlAddAceToAcl @ 0x1400DA94C
 * Callers:
 *     SepSddlGetAclForString @ 0x1400DAB3C (SepSddlGetAclForString.c)
 * Callees:
 *     memset @ 0x1400ACFC0 (memset.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

NTSTATUS __fastcall SepSddlAddAceToAcl(
        _ACL **Acl,
        unsigned int *TrueAclSize,
        unsigned int AccessMask,
        unsigned int RemainingAces,
        ACCESS_MASK SidPtr,
        unsigned int Acl_0,
        void *TrueAclSize_0)
{
  _ACL *v7; // rdi
  size_t v10; // rsi
  ULONG v11; // r8d
  unsigned int v12; // r12d
  unsigned int v13; // ebp
  _ACL *PoolWithTag; // rax
  _ACL *v15; // rbx

  v7 = *Acl;
  v10 = *TrueAclSize;
  v11 = RtlLengthSid(TrueAclSize_0) + 8;
  v12 = v11 + v10;
  if ( v11 + (unsigned int)v10 > v7->AclSize )
  {
    v13 = Acl_0 * v11 + v10;
    PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x6C416553u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, v13);
    memmove(v15, *Acl, v10);
    v15->AclSize = v13;
    ExFreePoolWithTag(v7, 0);
    *Acl = v15;
    v7 = v15;
  }
  *TrueAclSize = v12;
  return RtlAddAccessAllowedAce(v7, 2u, SidPtr, TrueAclSize_0);
}
