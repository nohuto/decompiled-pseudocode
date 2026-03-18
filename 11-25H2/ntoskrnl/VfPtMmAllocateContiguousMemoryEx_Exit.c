/*
 * XREFs of VfPtMmAllocateContiguousMemoryEx_Exit @ 0x140B7C240
 * Callers:
 *     <none>
 * Callees:
 *     VfPtMiscPoolNotification @ 0x1403F7FF8 (VfPtMiscPoolNotification.c)
 *     VfIsKernelVerificationOn @ 0x1404F8A90 (VfIsKernelVerificationOn.c)
 */

char __fastcall VfPtMmAllocateContiguousMemoryEx_Exit(__int64 a1)
{
  __int64 *v2; // rax

  LOBYTE(v2) = VfIsKernelVerificationOn();
  if ( !(_BYTE)v2 )
  {
    v2 = *(__int64 **)(a1 + 8);
    if ( *v2 )
      LOBYTE(v2) = VfPtMiscPoolNotification(*v2, **(_QWORD **)(a1 + 64), 0x546E6F43u, 0);
  }
  return (char)v2;
}
