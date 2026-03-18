/*
 * XREFs of RtlGetExtendedContextLength @ 0x1403D6A40
 * Callers:
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D2F80 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KyRaiseException @ 0x1403D3E8C (KyRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x1403D5A70 (KiContinuePreviousModeUser.c)
 *     PspSetContextState @ 0x140773D58 (PspSetContextState.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     PspGetSetContextInternal @ 0x140A31AF0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(unsigned int a1, __int64 a2)
{
  __int64 v3; // r10
  bool v4; // cl
  int v5; // ecx

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && ((a1 & 0x200000) == 0 || (a1 & 0x7DFFFF0) != 0)
    && (a1 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v3 = 0LL;
  v4 = 0;
  if ( (a1 & 0x400020) != 0x400020 )
    v4 = (a1 & 0x10040) != 65600 && (a1 & 0x100040) != 1048640;
  if ( v4 )
  {
    v5 = 0;
  }
  else
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v5 = 2;
  }
  if ( (a1 & 0x100080) == 0x100080 && !(_BYTE)KiKernelCetEnabled )
    return 3221225659LL;
  if ( v5 )
    v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
  return RtlGetExtendedContextLength2(a1, a2, v3);
}
