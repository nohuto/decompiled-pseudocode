/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1404BD800
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1405405C8 (KiLockExtendedServiceTable.c)
 *     RtlIsMachineFrameUnwind @ 0x1406229E0 (RtlIsMachineFrameUnwind.c)
 *     KiLockServiceTable @ 0x1407134A4 (KiLockServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x140AA96C8 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
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
