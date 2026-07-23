/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x1800C58D0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C4F18 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD2(PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor, PULONG BufferSize)
{
  char *v4; // rbp
  __int64 v5; // rcx
  char *v6; // rdi
  __int64 v7; // r8
  char *v8; // r14
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rdx
  char *v12; // rax
  char *v13; // rcx
  char *v14; // rax
  char *v15; // rcx
  ULONG v16; // eax

  if ( !SelfRelativeSecurityDescriptor )
    return -1073741585;
  if ( !BufferSize )
    return -1073741584;
  if ( *BufferSize < 0x14 )
    return -1073741811;
  if ( *((__int16 *)SelfRelativeSecurityDescriptor + 1) >= 0 )
    return -1073741593;
  if ( !*((_DWORD *)SelfRelativeSecurityDescriptor + 1) )
  {
    v4 = 0LL;
    goto LABEL_37;
  }
  v4 = (char *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 1);
  if ( !v4 )
  {
LABEL_37:
    v5 = 0LL;
    goto LABEL_8;
  }
  v5 = (4LL * (unsigned __int8)v4[1] + 11) & 0xFFFFFFFCLL;
LABEL_8:
  if ( (*((_BYTE *)SelfRelativeSecurityDescriptor + 2) & 4) != 0 && *((_DWORD *)SelfRelativeSecurityDescriptor + 4) )
  {
    v6 = (char *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 4);
    if ( v6 )
    {
      v7 = (*((unsigned __int16 *)v6 + 1) + 3LL) & 0xFFFFFFFCLL;
      goto LABEL_12;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = 0LL;
LABEL_12:
  if ( !*((_DWORD *)SelfRelativeSecurityDescriptor + 2) )
  {
    v8 = 0LL;
    goto LABEL_34;
  }
  v8 = (char *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 2);
  if ( !v8 )
  {
LABEL_34:
    v9 = 0LL;
    goto LABEL_15;
  }
  v9 = (4LL * (unsigned __int8)v8[1] + 11) & 0xFFFFFFFCLL;
LABEL_15:
  if ( (*((_BYTE *)SelfRelativeSecurityDescriptor + 2) & 0x10) != 0 && *((_DWORD *)SelfRelativeSecurityDescriptor + 3) )
  {
    v10 = (char *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 3);
    if ( v10 )
    {
      v11 = (*((unsigned __int16 *)v10 + 1) + 3LL) & 0xFFFFFFFCLL;
      goto LABEL_20;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0LL;
LABEL_20:
  v12 = &v8[v9];
  v13 = &v4[v5];
  if ( v4 <= v8 )
    v13 = v12;
  v14 = &v6[v7];
  if ( v13 > v6 )
    v14 = v13;
  v15 = &v10[v11];
  if ( v14 > v10 )
    v15 = v14;
  v16 = 40;
  if ( v15 )
    v16 = (((_DWORD)v15 - (_DWORD)SelfRelativeSecurityDescriptor - 13) & 0xFFFFFFF8) + 40;
  if ( v16 > *BufferSize )
  {
    *BufferSize = v16;
    return -1073741789;
  }
  else
  {
    if ( v15 )
      memmove((char *)SelfRelativeSecurityDescriptor + 40, (char *)SelfRelativeSecurityDescriptor + 20, v16 - 40LL);
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) &= ~0x8000u;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 1) = (unsigned __int64)(v4 + 20) & -(__int64)(v4 != 0LL);
    *((_QWORD *)SelfRelativeSecurityDescriptor + 2) = (unsigned __int64)(v8 + 20) & -(__int64)(v8 != 0LL);
    *((_QWORD *)SelfRelativeSecurityDescriptor + 3) = (unsigned __int64)(v10 + 20) & -(__int64)(v10 != 0LL);
    *((_QWORD *)SelfRelativeSecurityDescriptor + 4) = (unsigned __int64)(v6 + 20) & -(__int64)(v6 != 0LL);
    return 0;
  }
}
