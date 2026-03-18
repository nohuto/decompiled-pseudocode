/*
 * XREFs of SepCaptureHandles @ 0x1404E6E88
 * Callers:
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureHandles(unsigned int a1, __int64 a2, __int64 *a3)
{
  __int64 Pool2; // rdi
  __int64 i; // rbx
  __int64 *v8; // rcx
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
    v8 = (__int64 *)(a2 + 8 * i);
    if ( KeGetCurrentThread()->PreviousMode )
      ULong64FromUser = RtlReadULong64FromUser(v8);
    else
      ULong64FromUser = *v8;
    *(_QWORD *)(Pool2 + 8 * i) = ULong64FromUser;
  }
  *a3 = Pool2;
  return 0LL;
}
