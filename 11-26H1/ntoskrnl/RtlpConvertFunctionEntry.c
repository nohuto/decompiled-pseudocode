/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1404B6FE0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140542A48 (KiLockExtendedServiceTable.c)
 *     RtlIsMachineFrameUnwind @ 0x140625A30 (RtlIsMachineFrameUnwind.c)
 *     KiLockServiceTable @ 0x140718194 (KiLockServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x140AA5AD0 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

unsigned __int64 __fastcall RtlpConvertFunctionEntry(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned int ULongFromUser; // eax

  v3 = a1;
  if ( !a1 )
    return 0LL;
  if ( a2 >= 0x7FFFFFFF0000LL )
    ULongFromUser = *(_DWORD *)(a1 + 8);
  else
    ULongFromUser = RtlReadULongFromUser(a1 + 8);
  if ( (ULongFromUser & 1) != 0 )
  {
    v3 = a2 + ULongFromUser - 1LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      ProbeForRead((volatile void *)(a2 + ULongFromUser - 1LL), 1uLL, 4u);
  }
  return v3;
}
