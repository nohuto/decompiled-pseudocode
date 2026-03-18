/*
 * XREFs of PiAuCheckClientInteractive @ 0x1407A8248
 * Callers:
 *     PiCMQueryRemove @ 0x140B2D27C (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     PiAuCheckTokenMembership @ 0x1407A8310 (PiAuCheckTokenMembership.c)
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  void *Pool2; // rax
  void *v3; // rdi
  NTSTATUS v4; // ebx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

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
