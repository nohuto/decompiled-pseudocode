/*
 * XREFs of SmpRoundDownToPowerOf2 @ 0x14000BD0C
 * Callers:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x14000BB8C (SmpMakeSystemManagedPagingFileDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpRoundDownToPowerOf2(unsigned __int64 a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x40; ++i )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return 1LL << i;
}
