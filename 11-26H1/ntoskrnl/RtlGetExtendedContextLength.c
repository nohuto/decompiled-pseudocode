/*
 * XREFs of RtlGetExtendedContextLength @ 0x1403D9A10
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D5F50 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KyRaiseException @ 0x1403D6E5C (KyRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     PspSetContextState @ 0x140776D58 (PspSetContextState.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  ULONG64 v3; // r10
  bool v4; // cl
  int v5; // ecx

  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && ((ContextFlags & 0x200000) == 0 || (ContextFlags & 0x7DFFFF0) != 0)
    && (ContextFlags & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v3 = 0LL;
  v4 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v4 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( v4 )
  {
    v5 = 0;
  }
  else
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return -1073741637;
    v5 = 2;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 && !(_BYTE)KiKernelCetEnabled )
    return -1073741637;
  if ( v5 )
    v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
  return RtlGetExtendedContextLength2(ContextFlags, ContextLength, v3);
}
