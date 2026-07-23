/*
 * XREFs of SeCaptureHandles @ 0x14063F7E4
 * Callers:
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureHandles(unsigned int a1, __int64 a2, __int64 *a3)
{
  __int64 Pool2; // rdi
  __int64 i; // rbx
  __int64 *v9; // rcx
  __int64 ULong64FromUser; // rax

  *a3 = 0LL;
  if ( a1 > 0xA )
    return 3221225711LL;
  if ( !a1 )
    return 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
  {
    v9 = (__int64 *)(a2 + 8 * i);
    if ( KeGetCurrentThread()->PreviousMode )
      ULong64FromUser = RtlReadULong64FromUser(v9);
    else
      ULong64FromUser = *v9;
    *(_QWORD *)(Pool2 + 8 * i) = ULong64FromUser;
  }
  *a3 = Pool2;
  return 0LL;
}
