/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x1800DBCA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD(
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PULONG AbsoluteSecurityDescriptorSize,
        PACL Dacl,
        PULONG DaclSize,
        PACL Sacl,
        PULONG SaclSize,
        PSID Owner,
        PULONG OwnerSize,
        PSID PrimaryGroup,
        PULONG PrimaryGroupSize)
{
  unsigned __int8 *v13; // rbx
  unsigned int v14; // r8d
  unsigned __int16 *v15; // rsi
  unsigned int v16; // edx
  unsigned __int8 *v17; // r14
  ULONG v18; // r9d
  unsigned __int16 *v19; // rdi
  unsigned int v20; // eax
  PULONG v21; // r10
  NTSTATUS result; // eax

  if ( *((__int16 *)SelfRelativeSecurityDescriptor + 1) >= 0 )
    return -1073741593;
  if ( !*((_DWORD *)SelfRelativeSecurityDescriptor + 1) )
  {
    v13 = 0LL;
    goto LABEL_38;
  }
  v13 = (unsigned __int8 *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 1);
  if ( !v13 )
  {
LABEL_38:
    v14 = 0;
    goto LABEL_5;
  }
  v14 = (4 * v13[1] + 11) & 0xFFFFFFFC;
LABEL_5:
  if ( (*((_BYTE *)SelfRelativeSecurityDescriptor + 2) & 4) != 0 && *((_DWORD *)SelfRelativeSecurityDescriptor + 4) )
  {
    v15 = (unsigned __int16 *)((char *)SelfRelativeSecurityDescriptor
                             + *((unsigned int *)SelfRelativeSecurityDescriptor + 4));
    if ( v15 )
    {
      v16 = (v15[1] + 3) & 0xFFFFFFFC;
      goto LABEL_9;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = 0;
LABEL_9:
  if ( !*((_DWORD *)SelfRelativeSecurityDescriptor + 2) )
  {
    v17 = 0LL;
    goto LABEL_36;
  }
  v17 = (unsigned __int8 *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 2);
  if ( !v17 )
  {
LABEL_36:
    v18 = 0;
    goto LABEL_12;
  }
  v18 = (4 * v17[1] + 11) & 0xFFFFFFFC;
LABEL_12:
  if ( (*((_BYTE *)SelfRelativeSecurityDescriptor + 2) & 0x10) != 0 && *((_DWORD *)SelfRelativeSecurityDescriptor + 3) )
  {
    v19 = (unsigned __int16 *)((char *)SelfRelativeSecurityDescriptor
                             + *((unsigned int *)SelfRelativeSecurityDescriptor + 3));
    if ( v19 )
    {
      v20 = (v19[1] + 3) & 0xFFFFFFFC;
      goto LABEL_15;
    }
  }
  else
  {
    v19 = 0LL;
  }
  v20 = 0;
LABEL_15:
  v21 = PrimaryGroupSize;
  if ( AbsoluteSecurityDescriptor
    && (v21 = PrimaryGroupSize, *AbsoluteSecurityDescriptorSize >= 0x28)
    && v14 <= *OwnerSize
    && v16 <= *DaclSize
    && v20 <= *SaclSize
    && v18 <= *PrimaryGroupSize )
  {
    memmove(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, 0x14uLL);
    *((_WORD *)AbsoluteSecurityDescriptor + 1) &= ~0x8000u;
    *((_QWORD *)AbsoluteSecurityDescriptor + 1) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 2) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 3) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 4) = 0LL;
    if ( v13 )
    {
      memmove(Owner, v13, 4LL * v13[1] + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 1) = Owner;
    }
    if ( v17 )
    {
      memmove(PrimaryGroup, v17, 4LL * v17[1] + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 2) = PrimaryGroup;
    }
    if ( v19 )
    {
      memmove(Sacl, v19, v19[1]);
      *((_QWORD *)AbsoluteSecurityDescriptor + 3) = Sacl;
    }
    if ( v15 )
    {
      memmove(Dacl, v15, v15[1]);
      *((_QWORD *)AbsoluteSecurityDescriptor + 4) = Dacl;
    }
    return 0;
  }
  else
  {
    *AbsoluteSecurityDescriptorSize = 40;
    *v21 = v18;
    *OwnerSize = v14;
    *SaclSize = v20;
    result = -1073741789;
    *DaclSize = v16;
  }
  return result;
}
