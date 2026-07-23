/*
 * XREFs of PiAuCheckClientInteractive @ 0x1407AADF8
 * Callers:
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     PiAuCheckTokenMembership @ 0x1407AAEC0 (PiAuCheckTokenMembership.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  void *Pool2; // rax
  void *v3; // rdi
  NTSTATUS v4; // ebx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( v4 >= 0 )
    {
      *RtlSubAuthoritySid(v3, 0) = 4;
      if ( RtlValidSid(v3) )
      {
        v4 = PiAuCheckTokenMembership(v3);
        if ( v4 >= 0 )
          *a1 = 0;
      }
      else
      {
        v4 = -1073741595;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
