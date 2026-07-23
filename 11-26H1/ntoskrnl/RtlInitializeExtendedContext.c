/*
 * XREFs of RtlInitializeExtendedContext @ 0x1403D8DF0
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D5F50 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KyRaiseException @ 0x1403D6E5C (KyRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     PspSetContextState @ 0x140776D58 (PspSetContextState.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  ULONG64 v4; // r9
  bool v5; // cl
  int v6; // ecx

  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && ((ContextFlags & 0x200000) == 0 || (ContextFlags & 0x7DFFFF0) != 0)
    && (ContextFlags & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v4 = 0LL;
  v5 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v5 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( v5 )
  {
    v6 = 0;
  }
  else
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return -1073741637;
    v6 = 2;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 && !(_BYTE)KiKernelCetEnabled )
    return -1073741637;
  if ( v6 )
    v4 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
  return RtlInitializeExtendedContext2(Context, ContextFlags, ContextEx, v4);
}
