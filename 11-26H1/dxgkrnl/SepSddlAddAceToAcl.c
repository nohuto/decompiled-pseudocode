/*
 * XREFs of SepSddlAddAceToAcl @ 0x14023629C
 * Callers:
 *     SepSddlGetAclForString @ 0x1403DF2B8 (SepSddlGetAclForString.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

NTSTATUS __fastcall SepSddlAddAceToAcl(
        const void **a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        ACCESS_MASK AccessMask,
        int a6,
        PSID Sid)
{
  struct _ACL *v7; // rdi
  size_t v10; // rsi
  ULONG v11; // r8d
  int v12; // r12d
  unsigned int v13; // ebp
  struct _ACL *PoolWithTag; // rax
  struct _ACL *v15; // rbx

  v7 = (struct _ACL *)*a1;
  v10 = (unsigned int)*a2;
  v11 = RtlLengthSid(Sid) + 8;
  v12 = v11 + v10;
  if ( v11 + (unsigned int)v10 > v7->AclSize )
  {
    v13 = a6 * v11 + v10;
    PoolWithTag = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x6C416553u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, v13);
    memmove(v15, *a1, v10);
    v15->AclSize = v13;
    ExFreePoolWithTag(v7, 0);
    *a1 = v15;
    v7 = v15;
  }
  *a2 = v12;
  return RtlAddAccessAllowedAce(v7, 2u, AccessMask, Sid);
}
