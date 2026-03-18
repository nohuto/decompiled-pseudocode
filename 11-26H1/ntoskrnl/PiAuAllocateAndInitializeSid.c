/*
 * XREFs of PiAuAllocateAndInitializeSid @ 0x1407A81C4
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140CC5994 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140CC5EB4 (PiAuCreateUserSids.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuAllocateAndInitializeSid(PVOID *a1, struct _SID_IDENTIFIER_AUTHORITY *a2, ULONG a3)
{
  UCHAR v4; // bl
  void *Pool2; // rax
  NTSTATUS v7; // ebx

  v4 = a3;
  RtlLengthRequiredSid(a3);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  *a1 = Pool2;
  if ( Pool2 )
  {
    v7 = RtlInitializeSid(Pool2, a2, v4);
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  else
  {
    v7 = -1073741670;
  }
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v7;
}
