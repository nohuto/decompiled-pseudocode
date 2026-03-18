/*
 * XREFs of RtlInitializeExtendedContext @ 0x1403D5E20
 * Callers:
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D2F80 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KyRaiseException @ 0x1403D3E8C (KyRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x1403D5A70 (KiContinuePreviousModeUser.c)
 *     PspSetContextState @ 0x140773D58 (PspSetContextState.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r9
  bool v5; // cl
  int v6; // ecx

  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && ((a2 & 0x200000) == 0 || (a2 & 0x7DFFFF0) != 0)
    && (a2 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v4 = 0LL;
  v5 = 0;
  if ( (a2 & 0x400020) != 0x400020 )
    v5 = (a2 & 0x10040) != 65600 && (a2 & 0x100040) != 1048640;
  if ( v5 )
  {
    v6 = 0;
  }
  else
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v6 = 2;
  }
  if ( (a2 & 0x100080) == 0x100080 && !(_BYTE)KiKernelCetEnabled )
    return 3221225659LL;
  if ( v6 )
    v4 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
  return RtlInitializeExtendedContext2(a1, a2, a3, v4);
}
