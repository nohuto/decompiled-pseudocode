/*
 * XREFs of SepCaptureTokenSecurityOperations @ 0x1404CC824
 * Callers:
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140AF2C7C (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureTokenSecurityOperations(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  unsigned int v7; // edi
  __int64 Pool2; // rax
  __int64 v10; // r14

  v7 = 0;
  if ( !a3 )
  {
    *a4 = a1;
    return 0LL;
  }
  if ( (unsigned int)RtlReadULongFromUser(a1) == 1 )
  {
    a2 = 1;
  }
  else
  {
    if ( !a2 )
      return 3221225485LL;
    if ( !is_mul_ok(4uLL, a2) )
      return 3221225621LL;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    while ( v7 < a2 )
    {
      *(_DWORD *)(v10 + 4LL * v7) = RtlReadULongFromUser(a1 + 4LL * v7);
      ++v7;
    }
    *a4 = v10;
    return 0LL;
  }
  return 3221225495LL;
}
